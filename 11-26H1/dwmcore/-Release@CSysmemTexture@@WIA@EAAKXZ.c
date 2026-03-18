/*
 * XREFs of ?Release@CSysmemTexture@@WIA@EAAKXZ @ 0x1802B8750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSysmemTexture::Release(__int64 a1)
{
  return CD3DSurface::Release((CD3DSurface *)(a1 - 128));
}
