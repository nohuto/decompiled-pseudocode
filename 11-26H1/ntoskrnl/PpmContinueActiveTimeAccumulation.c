/*
 * XREFs of PpmContinueActiveTimeAccumulation @ 0x1402F7C90
 * Callers:
 *     PopGetIdleTimesCallback @ 0x14021A720 (PopGetIdleTimesCallback.c)
 *     PpmContinueTimeAccumulation @ 0x140253F88 (PpmContinueTimeAccumulation.c)
 *     PpmInstallFeedbackCounters @ 0x140605540 (PpmInstallFeedbackCounters.c)
 * Callees:
 *     PpmUpdatePerformanceFeedback @ 0x1402F7CD0 (PpmUpdatePerformanceFeedback.c)
 *     PpmUpdateTimeAccumulation @ 0x1402F8238 (PpmUpdateTimeAccumulation.c)
 */

__int64 __fastcall PpmContinueActiveTimeAccumulation(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx

  LOBYTE(a3) = 1;
  v3 = a1;
  PpmUpdateTimeAccumulation(a1, a2, a3);
  return PpmUpdatePerformanceFeedback(v3, 0, 0, 0, 0LL);
}
