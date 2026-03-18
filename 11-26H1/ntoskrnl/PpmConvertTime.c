/*
 * XREFs of PpmConvertTime @ 0x1403E63D0
 * Callers:
 *     PpmHvSnapPerformanceAccumulation @ 0x140252790 (PpmHvSnapPerformanceAccumulation.c)
 *     PpmParkApplyPolicy @ 0x1402592F0 (PpmParkApplyPolicy.c)
 *     PpmConvertTimeFrom @ 0x1403E63A8 (PpmConvertTimeFrom.c)
 *     PoNotifySystemTimeSet @ 0x14043919C (PoNotifySystemTimeSet.c)
 *     PopCalculateWakeTimeAdjustment @ 0x1407CF700 (PopCalculateWakeTimeAdjustment.c)
 *     PopDiagTraceHiberStats @ 0x140AF5348 (PopDiagTraceHiberStats.c)
 *     PopPotsLogHibernatePerformance @ 0x140AF5820 (PopPotsLogHibernatePerformance.c)
 *     PopSstDiagInitializeResumeTimer @ 0x140C03050 (PopSstDiagInitializeResumeTimer.c)
 *     PopDiagComputeEarlyHiberStats @ 0x140C0A60C (PopDiagComputeEarlyHiberStats.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PpmConvertTime(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  if ( !a1 || !a2 || a2 == a3 )
    return a1;
  if ( is_mul_ok(a1, a3) )
    return a1 * (unsigned __int128)a3 / a2;
  return a3 * (a1 / a2) + a3 * (a1 % a2) / a2;
}
