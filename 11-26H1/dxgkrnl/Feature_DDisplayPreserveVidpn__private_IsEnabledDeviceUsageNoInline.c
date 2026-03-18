/*
 * XREFs of Feature_DDisplayPreserveVidpn__private_IsEnabledDeviceUsageNoInline @ 0x140075B08
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402D2DA8 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1404348A4 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     Feature_DDisplayPreserveVidpn__private_IsEnabledFallback @ 0x140075B44 (Feature_DDisplayPreserveVidpn__private_IsEnabledFallback.c)
 */

__int64 Feature_DDisplayPreserveVidpn__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DDisplayPreserveVidpn__private_featureState & 0x10) != 0 )
    return Feature_DDisplayPreserveVidpn__private_featureState & 1;
  else
    return Feature_DDisplayPreserveVidpn__private_IsEnabledFallback(
             (unsigned int)Feature_DDisplayPreserveVidpn__private_featureState,
             3LL);
}
