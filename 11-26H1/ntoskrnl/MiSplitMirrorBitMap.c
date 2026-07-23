/*
 * XREFs of MiSplitMirrorBitMap @ 0x14086EAC0
 * Callers:
 *     MiActOnMirrorHugeRangeBitmap @ 0x1406F41A0 (MiActOnMirrorHugeRangeBitmap.c)
 *     MiUpdateMirrorBitmaps @ 0x140B68B5C (MiUpdateMirrorBitmaps.c)
 *     MiActOnMirrorBitmap @ 0x140C12CF8 (MiActOnMirrorBitmap.c)
 * Callees:
 *     MiSplitBitmapPages @ 0x1402A4578 (MiSplitBitmapPages.c)
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
