/*
 * XREFs of ?GetPixelFormatInfo@CSysmemTexture@@UEBA?AUPixelFormatInfo@@XZ @ 0x1802B7DC0
 * Callers:
 *     ?GetPixelFormatInfo@CSysmemTexture@@WHA@EBA?AUPixelFormatInfo@@XZ @ 0x1802B9380 (-GetPixelFormatInfo@CSysmemTexture@@WHA@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CSysmemTexture::GetPixelFormatInfo(_DWORD *a1, _DWORD *a2)
{
  *a2 = a1[8];
  a2[1] = a1[16];
  a2[2] = a1[17];
  return a2;
}
