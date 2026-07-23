/*
 * XREFs of RtlNotifyFeatureUsage @ 0x140358C60
 * Callers:
 *     <none>
 * Callees:
 *     CmFcManagerNotifyFeatureUsage @ 0x140358C78 (CmFcManagerNotifyFeatureUsage.c)
 */

NTSTATUS __cdecl RtlNotifyFeatureUsage(PRTL_FEATURE_USAGE_REPORT FeatureUsageReport)
{
  return CmFcManagerNotifyFeatureUsage(FeatureUsageReport, FeatureUsageReport);
}
