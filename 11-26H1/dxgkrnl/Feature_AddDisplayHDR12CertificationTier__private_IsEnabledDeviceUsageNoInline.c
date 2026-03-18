/*
 * XREFs of Feature_AddDisplayHDR12CertificationTier__private_IsEnabledDeviceUsageNoInline @ 0x140076EBC
 * Callers:
 *     ?MonitorGetDisplayHdrSupportLevel@@YAJPEAUHDXGMONITOR__@@PEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS@@PEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS2@@@Z @ 0x14026EE98 (-MonitorGetDisplayHdrSupportLevel@@YAJPEAUHDXGMONITOR__@@PEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS@.c)
 *     ?CopyInstance@MonitorColorState@DxgMonitor@@QEBA?AV?$unique_ptr@VMonitorColorState@DxgMonitor@@U?$default_delete@VMonitorColorState@DxgMonitor@@@wistd@@@wistd@@AEAVIMonitorComponentParent@2@AEAVIMonitorRegistry@2@@Z @ 0x14027BE98 (-CopyInstance@MonitorColorState@DxgMonitor@@QEBA-AV-$unique_ptr@VMonitorColorState@DxgMonitor@@U.c)
 *     ?OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14027CF1C (-OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@.c)
 *     ?_ReadDisplayHdrSupportFromPnpRegistry@MonitorColorState@DxgMonitor@@AEAAJAEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS@@AEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS2@@AEA_N@Z @ 0x14027D970 (-_ReadDisplayHdrSupportFromPnpRegistry@MonitorColorState@DxgMonitor@@AEAAJAEAW4_DISPLAYCONFIG_HD.c)
 *     DxgkGetMonitorInternalInfo @ 0x140437F40 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     Feature_AddDisplayHDR12CertificationTier__private_IsEnabledFallback @ 0x140076EF8 (Feature_AddDisplayHDR12CertificationTier__private_IsEnabledFallback.c)
 */

__int64 Feature_AddDisplayHDR12CertificationTier__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_AddDisplayHDR12CertificationTier__private_featureState & 0x10) != 0 )
    return Feature_AddDisplayHDR12CertificationTier__private_featureState & 1;
  else
    return Feature_AddDisplayHDR12CertificationTier__private_IsEnabledFallback(
             (unsigned int)Feature_AddDisplayHDR12CertificationTier__private_featureState,
             3LL);
}
