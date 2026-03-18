/*
 * XREFs of Feature_UIAccessToCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x1401A723C
 * Callers:
 *     InitClientInfo @ 0x140162A98 (InitClientInfo.c)
 * Callees:
 *     Feature_UIAccessToCapabilities__private_IsEnabledFallback @ 0x1401A7274 (Feature_UIAccessToCapabilities__private_IsEnabledFallback.c)
 */

__int64 Feature_UIAccessToCapabilities__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_UIAccessToCapabilities__private_featureState & 0x10) != 0 )
    return Feature_UIAccessToCapabilities__private_featureState & 1;
  else
    return Feature_UIAccessToCapabilities__private_IsEnabledFallback(
             (unsigned int)Feature_UIAccessToCapabilities__private_featureState,
             3LL);
}
