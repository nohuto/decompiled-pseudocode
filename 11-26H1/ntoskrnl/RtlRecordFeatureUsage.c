/*
 * XREFs of RtlRecordFeatureUsage @ 0x1404CE340
 * Callers:
 *     wil_details_RecordCachedUsage @ 0x1404FA400 (wil_details_RecordCachedUsage.c)
 *     wil_details_RecordFeatureUsageReporting @ 0x1406E6930 (wil_details_RecordFeatureUsageReporting.c)
 * Callees:
 *     CmFcManagerRecordFeatureUsage @ 0x140310364 (CmFcManagerRecordFeatureUsage.c)
 */

void __fastcall RtlRecordFeatureUsage(__int64 a1, __int64 a2)
{
  if ( a2 )
    CmFcManagerRecordFeatureUsage(a1, a1, a2);
}
