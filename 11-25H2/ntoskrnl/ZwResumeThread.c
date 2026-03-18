/*
 * XREFs of ZwResumeThread @ 0x14069BB80
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x140206060 (ExpWorkerFactoryCreateThread.c)
 *     DbgkUserReportWorkRoutine @ 0x1406FB730 (DbgkUserReportWorkRoutine.c)
 *     StartFirstUserProcess @ 0x140C4F72C (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwResumeThread(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
