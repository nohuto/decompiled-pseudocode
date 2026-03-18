/*
 * XREFs of ?Release@CWICBitmapWrapper@@WCA@EAAKXZ @ 0x180224BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWICBitmapWrapper::Release(__int64 a1)
{
  return CMappedTexture::Release((CMappedTexture *)(a1 - 32));
}
