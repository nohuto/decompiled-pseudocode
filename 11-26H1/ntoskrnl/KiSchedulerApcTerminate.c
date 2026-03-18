/*
 * XREFs of KiSchedulerApcTerminate @ 0x1409576C0
 * Callers:
 *     <none>
 * Callees:
 *     KiIsProcessTerminationRequested @ 0x1404B6914 (KiIsProcessTerminationRequested.c)
 *     PsTerminateProcess @ 0x14095690C (PsTerminateProcess.c)
 *     PspExitThread @ 0x14095771C (PspExitThread.c)
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
