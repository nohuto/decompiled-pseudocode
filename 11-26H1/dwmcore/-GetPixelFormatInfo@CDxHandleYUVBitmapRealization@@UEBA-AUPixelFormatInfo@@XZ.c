/*
 * XREFs of ?GetPixelFormatInfo@CDxHandleYUVBitmapRealization@@UEBA?AUPixelFormatInfo@@XZ @ 0x18019EEF0
 * Callers:
 *     ?GetPixelFormatInfo@CDxHandleYUVBitmapRealization@@WBAA@EBA?AUPixelFormatInfo@@XZ @ 0x1802AF3B0 (-GetPixelFormatInfo@CDxHandleYUVBitmapRealization@@WBAA@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CDxHandleYUVBitmapRealization::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rax
  int v3; // eax

  v2 = *(_QWORD *)(a1 + 296);
  if ( v2 )
    *a2 = *(_DWORD *)(v2 + 144);
  else
    *a2 = 0;
  v3 = 3;
  if ( *(_DWORD *)(a1 + 24) )
    v3 = *(_DWORD *)(a1 + 24);
  a2[1] = v3;
  a2[2] = *(_DWORD *)(a1 + 72);
  return a2;
}
