/*
 * XREFs of ?IsHardwareProtected@CD2DBitmap@@UEBA_NXZ @ 0x180182C00
 * Callers:
 *     ?IsHardwareProtected@CD2DBitmap@@WEI@EBA_NXZ @ 0x1802A99F0 (-IsHardwareProtected@CD2DBitmap@@WEI@EBA_NXZ.c)
 *     ?IsHardwareProtected@CD2DBitmap@@WFI@EBA_NXZ @ 0x1802A9A00 (-IsHardwareProtected@CD2DBitmap@@WFI@EBA_NXZ.c)
 *     ?IsHardwareProtected@?$CDeviceTextureT@VIDeviceTexture@@@@WHI@EBA_NXZ @ 0x1802B8240 (-IsHardwareProtected@-$CDeviceTextureT@VIDeviceTexture@@@@WHI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CD2DBitmap::IsHardwareProtected(CD2DBitmap *this)
{
  return (*((_DWORD *)this + 46) & 0x80000) != 0;
}
