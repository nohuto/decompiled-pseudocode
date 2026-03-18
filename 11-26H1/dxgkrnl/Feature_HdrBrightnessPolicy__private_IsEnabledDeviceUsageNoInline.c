/*
 * XREFs of Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1400674F4
 * Callers:
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_KK@Z @ 0x140402F6C (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_KK@Z.c)
 *     ?OnInitialized@MonitorColorState@DxgMonitor@@QEAAXXZ @ 0x14041476C (-OnInitialized@MonitorColorState@DxgMonitor@@QEAAXXZ.c)
 *     ?SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJK@Z @ 0x140416FA0 (-SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJK@Z.c)
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140435B30 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 *     DpiPdoDispatchInternalIoctl @ 0x140442E60 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     Feature_HdrBrightnessPolicy__private_IsEnabledFallback @ 0x140067894 (Feature_HdrBrightnessPolicy__private_IsEnabledFallback.c)
 */

__int64 Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_HdrBrightnessPolicy__private_featureState & 0x10) != 0 )
    return Feature_HdrBrightnessPolicy__private_featureState & 1;
  else
    return Feature_HdrBrightnessPolicy__private_IsEnabledFallback(
             (unsigned int)Feature_HdrBrightnessPolicy__private_featureState,
             3LL);
}
