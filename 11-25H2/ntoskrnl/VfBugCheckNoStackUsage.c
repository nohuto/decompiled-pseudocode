/*
 * XREFs of VfBugCheckNoStackUsage @ 0x140605FC8
 * Callers:
 *     IovpCallDriverWithStackBuffer @ 0x140B72950 (IovpCallDriverWithStackBuffer.c)
 *     VfAfterCallDriver @ 0x140B7DAB4 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x140B7DC88 (VfBeforeCallDriver.c)
 *     IovCallDriver @ 0x140B97D60 (IovCallDriver.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __noreturn VfBugCheckNoStackUsage()
{
  KeBugCheckEx(VfBugcheckTmpData, BugCheckParameter1, qword_140FFCA40, xmmword_140FFCA48, *(&xmmword_140FFCA48 + 1));
}
