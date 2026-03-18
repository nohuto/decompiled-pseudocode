/*
 * XREFs of Feature_ExternalBrightness__private_IsEnabledDeviceUsageNoInline @ 0x1400673B8
 * Callers:
 *     ?_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z @ 0x140276B58 (-_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z.c)
 *     ?OnInitialized@MonitorColorState@DxgMonitor@@QEAAXXZ @ 0x14041476C (-OnInitialized@MonitorColorState@DxgMonitor@@QEAAXXZ.c)
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140435B30 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     Feature_ExternalBrightness__private_IsEnabledFallback @ 0x140067804 (Feature_ExternalBrightness__private_IsEnabledFallback.c)
 */

__int64 Feature_ExternalBrightness__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ExternalBrightness__private_featureState & 0x10) != 0 )
    return Feature_ExternalBrightness__private_featureState & 1;
  else
    return Feature_ExternalBrightness__private_IsEnabledFallback(
             (unsigned int)Feature_ExternalBrightness__private_featureState,
             3LL);
}
