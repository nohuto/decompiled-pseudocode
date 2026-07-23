/*
 * XREFs of Feature_KernelPnP_CheckDeviceInstancePath__private_IsEnabledDeviceUsageNoInline @ 0x1405DCEFC
 * Callers:
 *     PiUEventNotifyUserMode @ 0x140A1AAC0 (PiUEventNotifyUserMode.c)
 * Callees:
 *     Feature_KernelPnP_CheckDeviceInstancePath__private_IsEnabledFallback @ 0x1405DCF38 (Feature_KernelPnP_CheckDeviceInstancePath__private_IsEnabledFallback.c)
 */

__int64 Feature_KernelPnP_CheckDeviceInstancePath__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_KernelPnP_CheckDeviceInstancePath__private_featureState & 0x10) != 0 )
    return Feature_KernelPnP_CheckDeviceInstancePath__private_featureState & 1;
  else
    return Feature_KernelPnP_CheckDeviceInstancePath__private_IsEnabledFallback(
             (unsigned int)Feature_KernelPnP_CheckDeviceInstancePath__private_featureState,
             3LL);
}
