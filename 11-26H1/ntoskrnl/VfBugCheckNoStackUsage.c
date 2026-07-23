/*
 * XREFs of VfBugCheckNoStackUsage @ 0x140646BD0
 * Callers:
 *     IovCallDriver @ 0x1404ECCDC (IovCallDriver.c)
 *     VfAfterCallDriver @ 0x140C320AC (VfAfterCallDriver.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __noreturn VfBugCheckNoStackUsage()
{
  KeBugCheckEx(VfBugcheckTmpData, BugCheckParameter1, qword_140FF0ED8, xmmword_140FF0EE0, *(&xmmword_140FF0EE0 + 1));
}
