/*
 * XREFs of ZwResumeThread @ 0x140723E30
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x1402C303C (ExpWorkerFactoryCreateThread.c)
 *     DifZwResumeThreadWrapper @ 0x1406B8270 (DifZwResumeThreadWrapper.c)
 *     DbgkUserReportWorkRoutine @ 0x14078AC30 (DbgkUserReportWorkRoutine.c)
 *     StartFirstUserProcess @ 0x140D08548 (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwResumeThread(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
