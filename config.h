/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if for loop scoping is broken */
#define CXX_HAS_BUGGY_FOR_LOOPS /**/

/* Define if C++ is missing bool type */
/* #undef CXX_HAS_NO_BOOL */

/* Define if has std::isnan */
/* #undef CXX_HAS_STD_ISNAN */

/* Define to 1 if you have the `clock_gettime' function. */
#define HAVE_CLOCK_GETTIME 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `getopt' function. */
#define HAVE_GETOPT 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <io.h> header file. */
/* #undef HAVE_IO_H */

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `nanosleep' function. */
#define HAVE_NANOSLEEP 1

/* Define if you have POSIX threads libraries and header files. */
/* #undef HAVE_PTHREAD */

/* Define to 1 if you have the <Python.h> header file. */
#define HAVE_PYTHON_H 1

/* Define to 1 if you have the `rand' function. */
#define HAVE_RAND 1

/* Define to 1 if you have the `random' function. */
#define HAVE_RANDOM 1

/* Define to 1 if you have the `sigaction' function. */
#define HAVE_SIGACTION 1

/* Define to 1 if you have the `sleep' function. */
#define HAVE_SLEEP 1

/* Define to 1 if you have the `srand' function. */
#define HAVE_SRAND 1

/* Define to 1 if you have the `srandom' function. */
#define HAVE_SRANDOM 1

/* Define to 1 if the system has the type `ssize_t'. */
#define HAVE_SSIZE_T 1

/* Define to 1 if you have win32 Sleep */
/* #undef HAVE_SSLEEP */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if the system has the type `struct timespec'. */
#define HAVE_STRUCT_TIMESPEC 1

/* Define to 1 if the system has the type `struct timezone'. */
#define HAVE_STRUCT_TIMEZONE 1

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/mman.h> header file. */
#define HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have <sys/wait.h> that is POSIX.1 compatible. */
#define HAVE_SYS_WAIT_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `usleep' function. */
#define HAVE_USLEEP 1

/* Define to 1 if you have the <winbase.h> header file. */
/* #undef HAVE_WINBASE_H */

/* Define to 1 if you have the <windows.h> header file. */
/* #undef HAVE_WINDOWS_H */

/* Define to 1 if you have the <winioctl.h> header file. */
/* #undef HAVE_WINIOCTL_H */

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Define if mkdir accepts only one arg */
/* #undef MKDIR_TAKES_ONE_ARG */

/* Define to disable asserts (don't doit!) */
/* #undef NDEBUG */

/* Define to 1 to enable NT thread */
/* #undef OMNITHREAD_NT */

/* Define to 1 to enable pthread */
#define OMNITHREAD_POSIX 1

/* Name of package */
#define PACKAGE "gr-ucla"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME ""

/* Define to the full name and version of this package. */
#define PACKAGE_STRING ""

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME ""

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION ""

/* Define to the necessary symbol if this constant uses a non-standard name on
   your system. */
/* #undef PTHREAD_CREATE_JOINABLE */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Version number of package */
#define VERSION "0.0svn"

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

// Workaround for compilers with buggy for-loop scoping
// That's quite a few compilers actually including recent versions of
// Dec Alpha cxx, HP-UX CC and SGI CC.
// The trivial "if" statement provides the correct scoping to the 
// for loop

#ifdef CXX_HAS_BUGGY_FOR_LOOPS
/* #undef for */
#define for if(1) for
#endif


// If the C++ compiler we use doesn't have bool, then
// the following is a near-perfect work-around. 
// You must make sure your code does not depend on "int" and "bool"
// being two different types, in overloading for instance.

#ifdef CXX_HAS_NO_BOOL
#define bool int
#define true 1
#define false 0
#endif



/* Define missing prototypes, implemented in replacement lib */
#ifdef  __cplusplus
extern "C" {
#endif

#ifndef HAVE_GETOPT
int getopt (int argc, char * const argv[], const char * optstring);
extern char * optarg;
extern int optind, opterr, optopt;
#endif

#ifndef HAVE_USLEEP
int usleep(unsigned long usec);	/* SUSv2 */
#endif

#ifndef HAVE_NANOSLEEP
#ifndef HAVE_STRUCT_TIMESPEC
#if HAVE_SYS_TYPES_H
# include <sys/types.h>	/* need time_t */
#endif
struct timespec {
	time_t	tv_sec;
	long	tv_nsec;
};
#endif
static inline int nanosleep(const struct timespec *req, struct timespec *rem) { return usleep(req->tv_sec*1000000+req->tv_nsec/1000); }
#endif

#if defined(HAVE_SSLEEP) && !defined(HAVE_SLEEP)
#ifdef HAVE_WINBASE_H
#include <windows.h>
#include <winbase.h>
#endif
/* TODO: what about SleepEx? */
static inline unsigned int sleep (unsigned int nb_sec) { Sleep(nb_sec*1000); return 0; }
#endif

#ifndef HAVE_GETTIMEOFDAY
#ifdef HAVE_SYS_TIME_H
#include <sys/time.h>
#endif
#ifndef HAVE_STRUCT_TIMEZONE
struct timezone {
        int  tz_minuteswest;
	int  tz_dsttime;
};
#endif
int gettimeofday(struct timeval *tv, struct timezone *tz);
#endif

#if !defined(HAVE_RANDOM) && defined(HAVE_RAND)
#include <stdlib.h>
static inline long int random (void) { return rand(); }
#endif

#if !defined(HAVE_SRANDOM) && defined(HAVE_SRAND)
static inline void srandom (unsigned int seed) { srand(seed); }
#endif

#ifndef HAVE_SSIZE_T
typedef size_t ssize_t;
#endif

#ifdef  __cplusplus
}
#endif

