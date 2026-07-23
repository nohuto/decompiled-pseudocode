/*
 * XREFs of FopFreeFontData @ 0x140C57BE8
 * Callers:
 *     BgpFoDestroy @ 0x140C57B24 (BgpFoDestroy.c)
 *     FopInitializeFonts @ 0x140D19EB8 (FopInitializeFonts.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140357BA8 (BgpFwFreeMemory.c)
 *     FopFreeMappingTable @ 0x140C57C94 (FopFreeMappingTable.c)
 */

void __fastcall FopFreeFontData(_QWORD *a1)
{
  _QWORD *v1; // r14
  _QWORD *v3; // rdi
  __int64 v4; // rbp
  __int64 *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rcx

  v1 = a1 + 13;
  v3 = (_QWORD *)a1[13];
  while ( v3 != v1 )
  {
    v4 = (__int64)v3;
    v3 = (_QWORD *)*v3;
    v5 = *(__int64 **)(v4 + 80);
    if ( v5 )
    {
      if ( *v5 )
        BgpFwFreeMemory(*v5);
      v6 = v5[2];
      if ( v6 )
        BgpFwFreeMemory(v6);
      BgpFwFreeMemory((__int64)v5);
    }
    BgpFwFreeMemory(v4);
  }
  v7 = a1[4];
  if ( v7 )
    BgpFwFreeMemory(v7);
  if ( a1[3] )
    FopFreeMappingTable();
  BgpFwFreeMemory((__int64)a1);
}
