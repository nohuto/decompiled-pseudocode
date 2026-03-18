/*
 * XREFs of RtlRecordFeatureUsage @ 0x1404D4AD0
 * Callers:
 *     wil_details_RecordCachedUsage @ 0x140500C10 (wil_details_RecordCachedUsage.c)
 *     wil_details_RecordFeatureUsageReporting @ 0x1406E2650 (wil_details_RecordFeatureUsageReporting.c)
 * Callees:
 *     CmFcManagerRecordFeatureUsage @ 0x1402C56C8 (CmFcManagerRecordFeatureUsage.c)
 */

void __fastcall RtlRecordFeatureUsage(__int64 a1, __int64 a2)
{
  if ( a2 )
    CmFcManagerRecordFeatureUsage(a1, a1, a2);
}
