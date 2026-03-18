/*
 * XREFs of ?Release@CCompressedSourceBitmap@@WHI@EAAKXZ @ 0x180224BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompressedSourceBitmap::Release(__int64 a1)
{
  return CMappedTexture::Release((CMappedTexture *)(a1 - 120));
}
