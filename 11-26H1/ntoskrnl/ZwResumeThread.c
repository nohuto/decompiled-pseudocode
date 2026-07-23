/*
 * XREFs of ZwResumeThread @ 0x140728A00
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x14030DCFC (ExpWorkerFactoryCreateThread.c)
 *     DifZwResumeThreadWrapper @ 0x1406BBE50 (DifZwResumeThreadWrapper.c)
 *     DbgkUserReportWorkRoutine @ 0x14078D760 (DbgkUserReportWorkRoutine.c)
 *     StartFirstUserProcess @ 0x140D0E818 (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwResumeThread(HANDLE ThreadHandle, PULONG PreviousSuspendCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
