/*
 * XREFs of wil_details_RecordFeatureUsageReporting @ 0x1400862D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall wil_details_RecordFeatureUsageReporting(
        unsigned int featureId,
        wil_details_ServiceReportingKind kind,
        __int64 usageCount,
        wil_details_FeatureReportingCache *reporting,
        wil_details_RecordUsageResult *result)
{
  wil_details_RecordUsageResult *v5; // rbx

  v5 = result;
  if ( result->queueBackground
    && !_InterlockedExchange(&g_wil_details_featureUsageCached, 1)
    && g_wil_details_featureUsageProvider )
  {
    RtlArmFeatureUsageProviderFlushNotification(g_wil_details_featureUsageProvider, 1LL, usageCount, reporting);
  }
  if ( v5->countImmediate )
  {
    WORD2(result) = v5->kindImmediate;
    HIWORD(result) = v5->countImmediate;
    LODWORD(result) = featureId;
    RtlRecordFeatureUsage(&result, 1LL, usageCount, reporting);
  }
}
