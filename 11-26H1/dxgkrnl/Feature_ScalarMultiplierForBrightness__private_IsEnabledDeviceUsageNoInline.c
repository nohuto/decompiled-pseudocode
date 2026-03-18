/*
 * XREFs of Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline @ 0x140076FC4
 * Callers:
 *     ?GetGetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1400663BC (-GetGetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     DpiPdoDispatchIoctl @ 0x1402560E0 (DpiPdoDispatchIoctl.c)
 *     ?OnInitialized@MonitorGammaState@DxgMonitor@@QEAAXXZ @ 0x14027AD68 (-OnInitialized@MonitorGammaState@DxgMonitor@@QEAAXXZ.c)
 *     ?OnIoctl@MonitorGammaState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z @ 0x14027ADFC (-OnIoctl@MonitorGammaState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     ?_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z @ 0x14027AF14 (-_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z.c)
 *     ?_DispatchIoctrls@DXGMONITOR@@QEBAJKKPEAXK0PEA_KK@Z @ 0x1403EA898 (-_DispatchIoctrls@DXGMONITOR@@QEBAJKKPEAXK0PEA_KK@Z.c)
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140435B30 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     Feature_ScalarMultiplierForBrightness__private_IsEnabledFallback @ 0x140077000 (Feature_ScalarMultiplierForBrightness__private_IsEnabledFallback.c)
 */

__int64 Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ScalarMultiplierForBrightness__private_featureState & 0x10) != 0 )
    return Feature_ScalarMultiplierForBrightness__private_featureState & 1;
  else
    return Feature_ScalarMultiplierForBrightness__private_IsEnabledFallback(
             (unsigned int)Feature_ScalarMultiplierForBrightness__private_featureState,
             3LL);
}
