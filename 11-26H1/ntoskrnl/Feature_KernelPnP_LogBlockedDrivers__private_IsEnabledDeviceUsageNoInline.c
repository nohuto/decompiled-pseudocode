/*
 * XREFs of Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline @ 0x1405DDA04
 * Callers:
 *     PiDevCfgQueryIncludedDriverNode @ 0x1407AD478 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgFreeDriverNode @ 0x140AE6B84 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgFindDeviceDriver @ 0x140AE6D34 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgFreeDeviceContext @ 0x140AE836C (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgInitDeviceContext @ 0x140AE83CC (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140AE8544 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryDriverNode @ 0x140B72708 (PiDevCfgQueryDriverNode.c)
 * Callees:
 *     Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledFallback @ 0x1405DDA40 (Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledFallback.c)
 */

__int64 Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_KernelPnP_LogBlockedDrivers__private_featureState & 0x10) != 0 )
    return Feature_KernelPnP_LogBlockedDrivers__private_featureState & 1;
  else
    return Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledFallback(
             (unsigned int)Feature_KernelPnP_LogBlockedDrivers__private_featureState,
             3LL);
}
