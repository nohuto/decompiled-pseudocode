/*
 * XREFs of MiSplitMirrorBitMap @ 0x1408686E0
 * Callers:
 *     MiActOnMirrorHugeRangeBitmap @ 0x1406EF500 (MiActOnMirrorHugeRangeBitmap.c)
 *     MiUpdateMirrorBitmaps @ 0x140B65ABC (MiUpdateMirrorBitmaps.c)
 *     MiActOnMirrorBitmap @ 0x140C0CAE8 (MiActOnMirrorBitmap.c)
 * Callees:
 *     MiSplitBitmapPages @ 0x1402A5028 (MiSplitBitmapPages.c)
 */

__int64 __fastcall MiSplitMirrorBitMap(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  __int64 result; // rax

  v3 = a2 + a3;
  result = MiSplitBitmapPages(8LL);
  if ( (_DWORD)result )
  {
    if ( v3 > *a1 )
      *a1 = v3;
    return 1LL;
  }
  return result;
}
