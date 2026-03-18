/*
 * XREFs of ?Release@CDeviceTextureTarget@@WBAI@EAAKXZ @ 0x1802AA1B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDeviceTextureTarget::Release(__int64 a1)
{
  return CD3DSurface::Release((CD3DSurface *)(a1 - 264));
}
