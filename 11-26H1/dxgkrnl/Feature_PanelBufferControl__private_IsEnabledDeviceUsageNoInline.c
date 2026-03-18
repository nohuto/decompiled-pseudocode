/*
 * XREFs of Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline @ 0x14005D4C4
 * Callers:
 *     DpiPanelBufferingGetCaps @ 0x14009204C (DpiPanelBufferingGetCaps.c)
 *     DpiPanelBufferingSetAutomaticPolicy @ 0x1400921EC (DpiPanelBufferingSetAutomaticPolicy.c)
 *     DpiPanelBufferingSetOverrideState @ 0x1400923DC (DpiPanelBufferingSetOverrideState.c)
 *     DxgkDDisplayEnum2 @ 0x1401CFB10 (DxgkDDisplayEnum2.c)
 *     DxgkDispMgrTargetOperation @ 0x1401D1110 (DxgkDispMgrTargetOperation.c)
 *     DpiFdoStartAdapter @ 0x140245F9C (DpiFdoStartAdapter.c)
 *     ConfigureFeatureDefaults @ 0x140288E80 (ConfigureFeatureDefaults.c)
 *     DxgkDDisplayEnumInternalLegacy @ 0x1403C1FD0 (DxgkDDisplayEnumInternalLegacy.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1403F22B4 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 * Callees:
 *     Feature_PanelBufferControl__private_IsEnabledFallback @ 0x140067A00 (Feature_PanelBufferControl__private_IsEnabledFallback.c)
 */

__int64 Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_PanelBufferControl__private_featureState & 0x10) != 0 )
    return Feature_PanelBufferControl__private_featureState & 1;
  else
    return Feature_PanelBufferControl__private_IsEnabledFallback(
             (unsigned int)Feature_PanelBufferControl__private_featureState,
             3LL);
}
