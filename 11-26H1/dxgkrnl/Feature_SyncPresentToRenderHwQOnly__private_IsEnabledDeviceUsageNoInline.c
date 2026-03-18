/*
 * XREFs of Feature_SyncPresentToRenderHwQOnly__private_IsEnabledDeviceUsageNoInline @ 0x14009D938
 * Callers:
 *     CheckFeatureOSSupport @ 0x140288B70 (CheckFeatureOSSupport.c)
 * Callees:
 *     Feature_SyncPresentToRenderHwQOnly__private_IsEnabledFallback @ 0x14009D974 (Feature_SyncPresentToRenderHwQOnly__private_IsEnabledFallback.c)
 */

__int64 Feature_SyncPresentToRenderHwQOnly__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SyncPresentToRenderHwQOnly__private_featureState & 0x10) != 0 )
    return Feature_SyncPresentToRenderHwQOnly__private_featureState & 1;
  else
    return Feature_SyncPresentToRenderHwQOnly__private_IsEnabledFallback(
             (unsigned int)Feature_SyncPresentToRenderHwQOnly__private_featureState,
             3LL);
}
