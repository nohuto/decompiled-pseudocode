/*
 * XREFs of BgpGxCopyBitmapToRectangle @ 0x140C5A290
 * Callers:
 *     BgpGxParseBitmap @ 0x140C554E8 (BgpGxParseBitmap.c)
 * Callees:
 *     BgpGxMarkClean @ 0x14053180C (BgpGxMarkClean.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

void __fastcall BgpGxCopyBitmapToRectangle(__int64 a1, __int64 a2)
{
  unsigned int v3; // r10d
  int v4; // edx
  char *v5; // rbx
  char *v6; // rbp
  unsigned int v7; // esi
  size_t v8; // r14
  __int64 v9; // r15

  v3 = *(_DWORD *)(a1 + 4) * (*(_DWORD *)(a1 + 8) >> 3);
  v5 = (char *)(*(_QWORD *)(a1 + 24) + v3 * (*(_DWORD *)a1 - 1));
  v6 = (char *)(a2 + 40);
  v7 = 0;
  if ( *(_DWORD *)a1 )
  {
    v8 = v3;
    v4 = (*(_BYTE *)(a1 + 4) * (unsigned __int8)(*(_DWORD *)(a1 + 8) >> 3)) & 3;
    v9 = (v4 != 0 ? 4 - v4 : 0) + v3;
    do
    {
      memmove(v5, v6, v8);
      v5 -= v8;
      v6 += v9;
      ++v7;
    }
    while ( v7 < *(_DWORD *)a1 );
  }
  BgpGxMarkClean(a1);
}
