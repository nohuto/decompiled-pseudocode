/*
 * XREFs of ?SetColorSpace@CDeviceTextureTarget@@WLI@EAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802AA270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDeviceTextureTarget::SetColorSpace(__int64 a1, enum DXGI_COLOR_SPACE_TYPE a2)
{
  CD2DBitmap::SetColorSpace((CD2DBitmap *)(a1 - 184), a2);
}
