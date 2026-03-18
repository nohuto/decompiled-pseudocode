/*
 * XREFs of ?GetSize@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA?AUD2D_SIZE_U@@XZ @ 0x1802A9F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct D2D_SIZE_U __fastcall IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize(__int64 a1, _DWORD *a2)
{
  return CD2DBitmap::GetSize((CD2DBitmap *)(a1 - 184), a2);
}
