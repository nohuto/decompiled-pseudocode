/*
 * XREFs of VfBugCheckNoStackUsage @ 0x140642FF0
 * Callers:
 *     IovCallDriver @ 0x1404F36FC (IovCallDriver.c)
 *     VfAfterCallDriver @ 0x140C2C09C (VfAfterCallDriver.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __noreturn VfBugCheckNoStackUsage()
{
  KeBugCheckEx(VfBugcheckTmpData, BugCheckParameter1, qword_140FEFED8, xmmword_140FEFEE0, *(&xmmword_140FEFEE0 + 1));
}
