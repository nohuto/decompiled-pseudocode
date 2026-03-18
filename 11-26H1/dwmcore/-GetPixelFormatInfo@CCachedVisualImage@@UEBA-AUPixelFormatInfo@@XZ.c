/*
 * XREFs of ?GetPixelFormatInfo@CCachedVisualImage@@UEBA?AUPixelFormatInfo@@XZ @ 0x1801846A0
 * Callers:
 *     ?GetPixelFormatInfo@CCachedVisualImage@@W7EBA?AUPixelFormatInfo@@XZ @ 0x180262330 (-GetPixelFormatInfo@CCachedVisualImage@@W7EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CCachedVisualImage::GetPixelFormatInfo(_DWORD *a1, _DWORD *a2)
{
  int v2; // r9d
  int v3; // eax
  int v4; // r8d
  bool v5; // zf

  v2 = a1[16];
  *a2 = a1[14];
  v3 = 1;
  if ( v2 == 2 )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    if ( v2 == 3 )
      v4 = 25;
  }
  v5 = a1[15] == 0;
  a2[2] = v4;
  if ( v5 )
    v3 = 3;
  a2[1] = v3;
  return a2;
}
