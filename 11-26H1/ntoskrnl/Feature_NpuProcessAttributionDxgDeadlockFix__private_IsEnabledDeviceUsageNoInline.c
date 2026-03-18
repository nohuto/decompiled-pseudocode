/*
 * XREFs of Feature_NpuProcessAttributionDxgDeadlockFix__private_IsEnabledDeviceUsageNoInline @ 0x1404ACBEC
 * Callers:
 *     PopEtProcessEnumSnapshotCallback @ 0x1407DC800 (PopEtProcessEnumSnapshotCallback.c)
 * Callees:
 *     Feature_NpuProcessAttributionDxgDeadlockFix__private_IsEnabledFallback @ 0x140532E78 (Feature_NpuProcessAttributionDxgDeadlockFix__private_IsEnabledFallback.c)
 */

__int64 Feature_NpuProcessAttributionDxgDeadlockFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_NpuProcessAttributionDxgDeadlockFix__private_featureState & 0x10) != 0 )
    return Feature_NpuProcessAttributionDxgDeadlockFix__private_featureState & 1;
  else
    return Feature_NpuProcessAttributionDxgDeadlockFix__private_IsEnabledFallback(
             (unsigned int)Feature_NpuProcessAttributionDxgDeadlockFix__private_featureState,
             3LL);
}
