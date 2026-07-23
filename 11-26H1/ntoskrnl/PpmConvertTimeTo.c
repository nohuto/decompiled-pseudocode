/*
 * XREFs of PpmConvertTimeTo @ 0x1404239FC
 * Callers:
 *     PopGetIdleTimesCallback @ 0x14021A720 (PopGetIdleTimesCallback.c)
 *     PopCalculateCsSummary @ 0x140422F4C (PopCalculateCsSummary.c)
 *     PopDiagTraceCsResiliencyExit @ 0x1404235B0 (PopDiagTraceCsResiliencyExit.c)
 *     PpmTranslatePlatformIdleAccounting @ 0x1404237D8 (PpmTranslatePlatformIdleAccounting.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x14042391C (PpmSnapDripsAccountingSnapshot.c)
 *     PopCalculateIdleInformation @ 0x140423CE4 (PopCalculateIdleInformation.c)
 *     PpmTranslateIdleAccounting @ 0x1404D26A0 (PpmTranslateIdleAccounting.c)
 *     PpmTraceExitLatency @ 0x1406060BC (PpmTraceExitLatency.c)
 *     PpmIdleGetPackageIdleIntervalStats @ 0x140B05A3C (PpmIdleGetPackageIdleIntervalStats.c)
 *     PopIdleWakeNotifyModernStandbyExitWorker @ 0x140B2A9B0 (PopIdleWakeNotifyModernStandbyExitWorker.c)
 *     PopIdleWakeSourceAccountingBucketsToDiagnosticBuckets @ 0x140B2AC20 (PopIdleWakeSourceAccountingBucketsToDiagnosticBuckets.c)
 *     PopIdleWakeConvertIntervalBucketsTo @ 0x140B2ADDC (PopIdleWakeConvertIntervalBucketsTo.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x140B69834 (PopDripsWatchdogUpdateMetrics.c)
 * Callees:
 *     <none>
 */

ULONGLONG __fastcall PpmConvertTimeTo(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r9
  unsigned __int128 v4; // rax

  v3 = a1;
  if ( a1 && PopQpcFrequency && PopQpcFrequency != a2 )
  {
    v4 = a1 * (unsigned __int128)a2;
    if ( is_mul_ok(a1, a2) )
      return v4 / PopQpcFrequency;
    else
      return a2 * (a1 / PopQpcFrequency) + a2 * (a1 % PopQpcFrequency) / PopQpcFrequency;
  }
  return v3;
}
