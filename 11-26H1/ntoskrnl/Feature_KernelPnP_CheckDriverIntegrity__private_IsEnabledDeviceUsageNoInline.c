/*
 * XREFs of Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline @ 0x1405DD9A8
 * Callers:
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1407AB950 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1407AEB68 (PiDevCfgSplitDriverConfigurationId.c)
 *     PiDevCfgFindDeviceDriver @ 0x140AE6D34 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140AE8544 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryDriverNode @ 0x140B72708 (PiDevCfgQueryDriverNode.c)
 *     PpDevCfgInit @ 0x140CCC50C (PpDevCfgInit.c)
 * Callees:
 *     Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledFallback @ 0x1405DD9E4 (Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledFallback.c)
 */

__int64 Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_KernelPnP_CheckDriverIntegrity__private_featureState & 0x10) != 0 )
    return Feature_KernelPnP_CheckDriverIntegrity__private_featureState & 1;
  else
    return Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledFallback(
             (unsigned int)Feature_KernelPnP_CheckDriverIntegrity__private_featureState,
             3LL);
}
