/*
 * XREFs of wil_details_RecordFeatureUsageCallback @ 0x1403D47C8
 * Callers:
 *     wil_details_RecordCachedUsage @ 0x140215058 (wil_details_RecordCachedUsage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_RecordFeatureUsageCallback(__int64 a1, __int64 a2)
{
  return RtlRecordFeatureUsage(a1, a2);
}
