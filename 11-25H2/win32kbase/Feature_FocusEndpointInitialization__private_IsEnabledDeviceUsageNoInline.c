/*
 * XREFs of Feature_FocusEndpointInitialization__private_IsEnabledDeviceUsageNoInline @ 0x140216058
 * Callers:
 *     InitializeContext @ 0x1402162C0 (InitializeContext.c)
 * Callees:
 *     Feature_FocusEndpointInitialization__private_IsEnabledFallback @ 0x140216090 (Feature_FocusEndpointInitialization__private_IsEnabledFallback.c)
 */

__int64 Feature_FocusEndpointInitialization__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FocusEndpointInitialization__private_featureState & 0x10) != 0 )
    return Feature_FocusEndpointInitialization__private_featureState & 1;
  else
    return Feature_FocusEndpointInitialization__private_IsEnabledFallback(
             (unsigned int)Feature_FocusEndpointInitialization__private_featureState,
             3LL);
}
