/*
 * XREFs of ?Release@CCrossAdapterTexture@@WHI@EAAKXZ @ 0x1802A4BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCrossAdapterTexture::Release(__int64 a1)
{
  return CD3DSurface::Release((CD3DSurface *)(a1 - 120));
}
