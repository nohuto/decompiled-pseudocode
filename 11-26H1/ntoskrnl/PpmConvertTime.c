/*
 * XREFs of PpmConvertTime @ 0x1402F32B0
 * Callers:
 *     PpmHvSnapPerformanceAccumulation @ 0x1402540F0 (PpmHvSnapPerformanceAccumulation.c)
 *     PpmParkApplyPolicy @ 0x14025AAD0 (PpmParkApplyPolicy.c)
 *     PpmConvertTimeFrom @ 0x1402F3288 (PpmConvertTimeFrom.c)
 *     PoNotifySystemTimeSet @ 0x140427DFC (PoNotifySystemTimeSet.c)
 *     PopCalculateWakeTimeAdjustment @ 0x1407D27A0 (PopCalculateWakeTimeAdjustment.c)
 *     PopDiagTraceHiberStats @ 0x140AF79E8 (PopDiagTraceHiberStats.c)
 *     PopPotsLogHibernatePerformance @ 0x140AF7EC0 (PopPotsLogHibernatePerformance.c)
 *     PopSstDiagInitializeResumeTimer @ 0x140C09260 (PopSstDiagInitializeResumeTimer.c)
 *     PopDiagComputeEarlyHiberStats @ 0x140C1081C (PopDiagComputeEarlyHiberStats.c)
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
