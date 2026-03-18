/*
 * XREFs of ?Release@CBitmapLock@@WBA@EAAKXZ @ 0x180224B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapLock::Release(__int64 a1)
{
  return CMappedTexture::Release((CMappedTexture *)(a1 - 16));
}
