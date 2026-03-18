/*
 * XREFs of TdrTimedOperationBugcheckOnTimeout @ 0x14007ADB8
 * Callers:
 *     TdrTimedOperationDelay @ 0x14004EFC0 (TdrTimedOperationDelay.c)
 *     TdrTimedOperationWaitForSingleObject @ 0x1401DA500 (TdrTimedOperationWaitForSingleObject.c)
 * Callees:
 *     <none>
 */

void __noreturn TdrTimedOperationBugcheckOnTimeout()
{
  KeBugCheckEx(0xEAu, (ULONG_PTR)KeGetCurrentThread(), 0LL, 0LL, 0LL);
}
