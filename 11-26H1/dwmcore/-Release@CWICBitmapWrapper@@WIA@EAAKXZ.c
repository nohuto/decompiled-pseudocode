/*
 * XREFs of ?Release@CWICBitmapWrapper@@WIA@EAAKXZ @ 0x1802250B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWICBitmapWrapper::Release(__int64 a1)
{
  return CMappedTexture::Release((CMappedTexture *)(a1 - 128));
}
