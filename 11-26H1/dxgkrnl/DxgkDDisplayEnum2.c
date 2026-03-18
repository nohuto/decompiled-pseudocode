/*
 * XREFs of DxgkDDisplayEnum2 @ 0x1401CFB10
 * Callers:
 *     <none>
 * Callees:
 *     Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline @ 0x14005D4C4 (Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DxgkDDisplayEnumInternal@@YAJPEAU_D3DKMT_DDISPLAY_ENUM2@@D@Z @ 0x1401CDF60 (-DxgkDDisplayEnumInternal@@YAJPEAU_D3DKMT_DDISPLAY_ENUM2@@D@Z.c)
 */

__int64 __fastcall DxgkDDisplayEnum2(struct _D3DKMT_DDISPLAY_ENUM2 *a1)
{
  if ( (unsigned int)Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline() )
    return DxgkDDisplayEnumInternal(a1);
  else
    return 3221225474LL;
}
