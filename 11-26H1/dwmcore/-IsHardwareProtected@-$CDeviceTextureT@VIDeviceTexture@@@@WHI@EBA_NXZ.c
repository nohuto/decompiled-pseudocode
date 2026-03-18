/*
 * XREFs of ?IsHardwareProtected@?$CDeviceTextureT@VIDeviceTexture@@@@WHI@EBA_NXZ @ 0x1802B8240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDeviceTextureT<IDeviceTexture>::IsHardwareProtected(__int64 a1)
{
  return CD2DBitmap::IsHardwareProtected((CD2DBitmap *)(a1 - 120));
}
