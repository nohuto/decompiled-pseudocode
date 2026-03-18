/*
 * XREFs of ?SetAlphaMode@CDeviceTextureTarget@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x18021FC00
 * Callers:
 *     ?SetAlphaMode@CDeviceTextureTarget@@WLI@EAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1802AA250 (-SetAlphaMode@CDeviceTextureTarget@@WLI@EAAXW4DXGI_ALPHA_MODE@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CDeviceTextureTarget::SetAlphaMode(CDeviceTextureTarget *this, enum DXGI_ALPHA_MODE a2)
{
  CD2DBitmap::SetAlphaMode(this, a2);
}
