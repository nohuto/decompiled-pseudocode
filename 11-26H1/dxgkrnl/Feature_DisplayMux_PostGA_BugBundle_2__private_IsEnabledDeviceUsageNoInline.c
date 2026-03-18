/*
 * XREFs of Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline @ 0x140076F6C
 * Callers:
 *     ?UpdateMuxPosition@DISPLAY_MUX_PAIRING@@QEAAXXZ @ 0x140090010 (-UpdateMuxPosition@DISPLAY_MUX_PAIRING@@QEAAXXZ.c)
 *     DpiMdmProcessAdapterBrightness @ 0x140090678 (DpiMdmProcessAdapterBrightness.c)
 *     DpiMdmProcessStartAdapter @ 0x140090C00 (DpiMdmProcessStartAdapter.c)
 *     ?DxgkLogDisplayMuxDiagPacketToDisplayRingbuffer@@YAJXZ @ 0x1401CE7BC (-DxgkLogDisplayMuxDiagPacketToDisplayRingbuffer@@YAJXZ.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x140245390 (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 *     DpiFdoStartAdapter @ 0x140245F9C (DpiFdoStartAdapter.c)
 *     ?DpiBrightness3Set@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_SET_IN@@@Z @ 0x14024DA20 (-DpiBrightness3Set@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_SET_IN@@@Z.c)
 *     DpiFdoSetAdapterPowerState @ 0x14042D4FC (DpiFdoSetAdapterPowerState.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140439834 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkEscape @ 0x14043CE60 (DxgkEscape.c)
 * Callees:
 *     Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledFallback @ 0x140076FA8 (Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledFallback.c)
 */

__int64 Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DisplayMux_PostGA_BugBundle_2__private_featureState & 0x10) != 0 )
    return Feature_DisplayMux_PostGA_BugBundle_2__private_featureState & 1;
  else
    return Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledFallback(
             (unsigned int)Feature_DisplayMux_PostGA_BugBundle_2__private_featureState,
             3LL);
}
