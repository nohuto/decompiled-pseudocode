/*
 * XREFs of PpmContinueActiveTimeAccumulation @ 0x1403ECDB0
 * Callers:
 *     PpmContinueTimeAccumulation @ 0x140252628 (PpmContinueTimeAccumulation.c)
 *     PopGetIdleTimesCallback @ 0x140428440 (PopGetIdleTimesCallback.c)
 *     PpmInstallFeedbackCounters @ 0x140602A90 (PpmInstallFeedbackCounters.c)
 * Callees:
 *     PpmUpdatePerformanceFeedback @ 0x1403ECDF0 (PpmUpdatePerformanceFeedback.c)
 *     PpmUpdateTimeAccumulation @ 0x1403ED358 (PpmUpdateTimeAccumulation.c)
 */

__int64 __fastcall PpmContinueActiveTimeAccumulation(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx

  LOBYTE(a3) = 1;
  v3 = a1;
  PpmUpdateTimeAccumulation(a1, a2, a3);
  return PpmUpdatePerformanceFeedback(v3, 0, 0, 0, 0LL);
}
