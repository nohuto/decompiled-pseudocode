/*
 * XREFs of KiSchedulerApcTerminate @ 0x14094B0F0
 * Callers:
 *     <none>
 * Callees:
 *     KiIsProcessTerminationRequested @ 0x1404AFD64 (KiIsProcessTerminationRequested.c)
 *     PsTerminateProcess @ 0x14094A334 (PsTerminateProcess.c)
 *     PspExitThread @ 0x14094B14C (PspExitThread.c)
 */

void __noreturn KiSchedulerApcTerminate()
{
  _DWORD v0[6]; // [rsp+20h] [rbp-18h] BYREF

  v0[0] = 0;
  if ( KiIsProcessTerminationRequested((__int64)KeGetCurrentThread(), v0) )
    PsTerminateProcess(KeGetCurrentThread()->ApcState.Process);
  PspExitThread(KeGetCurrentThread()[1].Timer.DueTime.LowPart);
  __debugbreak();
}
