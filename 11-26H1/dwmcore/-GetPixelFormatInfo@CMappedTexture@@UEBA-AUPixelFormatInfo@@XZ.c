/*
 * XREFs of ?GetPixelFormatInfo@CMappedTexture@@UEBA?AUPixelFormatInfo@@XZ @ 0x1802B8B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMappedTexture::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 32);
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(a2 + 8) = v2;
  return a2;
}
