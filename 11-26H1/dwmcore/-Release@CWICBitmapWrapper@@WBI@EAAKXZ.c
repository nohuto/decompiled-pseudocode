/*
 * XREFs of ?Release@CWICBitmapWrapper@@WBI@EAAKXZ @ 0x180224BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWICBitmapWrapper::Release(__int64 a1)
{
  return CMappedTexture::Release((CMappedTexture *)(a1 - 24));
}
