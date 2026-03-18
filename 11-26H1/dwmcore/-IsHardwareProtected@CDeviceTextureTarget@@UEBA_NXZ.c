/*
 * XREFs of ?IsHardwareProtected@CDeviceTextureTarget@@UEBA_NXZ @ 0x1801786C0
 * Callers:
 *     ?IsHardwareProtected@CDeviceTextureTarget@@WBAA@EBA_NXZ @ 0x1802A9FC0 (-IsHardwareProtected@CDeviceTextureTarget@@WBAA@EBA_NXZ.c)
 *     ?IsHardwareProtected@CDeviceTextureTarget@@WEI@EBA_NXZ @ 0x1802A9FE0 (-IsHardwareProtected@CDeviceTextureTarget@@WEI@EBA_NXZ.c)
 *     ?IsHardwareProtected@CDeviceTextureTarget@@WFI@EBA_NXZ @ 0x1802A9FF0 (-IsHardwareProtected@CDeviceTextureTarget@@WFI@EBA_NXZ.c)
 *     ?IsHardwareProtected@CDeviceTextureTarget@@WPA@EBA_NXZ @ 0x1802AA000 (-IsHardwareProtected@CDeviceTextureTarget@@WPA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDeviceTextureTarget::IsHardwareProtected(CDeviceTextureTarget *this)
{
  return *((_BYTE *)this + 288) || (*((_DWORD *)this + 46) & 0x80000) != 0;
}
