/*
 * XREFs of ?Release@CDeviceTextureTarget@@WPI@EAAKXZ @ 0x1802AA1F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDeviceTextureTarget::Release(__int64 a1)
{
  return CD3DSurface::Release((CD3DSurface *)(a1 - 248));
}
