/*
 * XREFs of PpmConvertTimeTo @ 0x140429470
 * Callers:
 *     PopGetIdleTimesCallback @ 0x140428440 (PopGetIdleTimesCallback.c)
 *     PpmTranslatePlatformIdleAccounting @ 0x14042924C (PpmTranslatePlatformIdleAccounting.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x140429390 (PpmSnapDripsAccountingSnapshot.c)
 *     PopDiagTraceCsResiliencyExit @ 0x140429C68 (PopDiagTraceCsResiliencyExit.c)
 *     PopCalculateCsSummary @ 0x14042A4C8 (PopCalculateCsSummary.c)
 *     PopCalculateIdleInformation @ 0x140434E0C (PopCalculateIdleInformation.c)
 *     PpmTranslateIdleAccounting @ 0x1404D8FC0 (PpmTranslateIdleAccounting.c)
 *     PpmTraceExitLatency @ 0x14060360C (PpmTraceExitLatency.c)
 *     PpmIdleGetPackageIdleIntervalStats @ 0x140B03E2C (PpmIdleGetPackageIdleIntervalStats.c)
 *     PopIdleWakeNotifyModernStandbyExitWorker @ 0x140B284E0 (PopIdleWakeNotifyModernStandbyExitWorker.c)
 *     PopIdleWakeSourceAccountingBucketsToDiagnosticBuckets @ 0x140B28750 (PopIdleWakeSourceAccountingBucketsToDiagnosticBuckets.c)
 *     PopIdleWakeConvertIntervalBucketsTo @ 0x140B2890C (PopIdleWakeConvertIntervalBucketsTo.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x140B668A8 (PopDripsWatchdogUpdateMetrics.c)
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
