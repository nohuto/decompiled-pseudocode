/*
 * XREFs of ??$_Assign_counted_range@PEAU?$pair@G_N@std@@@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAXPEAU?$pair@G_N@1@_K@Z @ 0x18018179C
 * Callers:
 *     ?Initialize@ViewMenuChordedKeyHandler@@IEAAJP6AJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z0AEBV23@@Z @ 0x1801820AC (-Initialize@ViewMenuChordedKeyHandler@@IEAAJP6AJPEAXAEAV-$vector@U-$pair@G_N@std@@V-$allocator@U.c)
 * Callees:
 *     ??$_Copy_memmove_n@PEAU?$pair@G_N@std@@PEAU12@@std@@YAPEAU?$pair@G_N@0@PEAU10@_K0@Z @ 0x18018186C (--$_Copy_memmove_n@PEAU-$pair@G_N@std@@PEAU12@@std@@YAPEAU-$pair@G_N@0@PEAU10@_K0@Z.c)
 *     ?_Clear_and_reserve_geometric@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAX_K@Z @ 0x1801824DC (-_Clear_and_reserve_geometric@-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@G_N@std@@@2@@std@@A.c)
 */

char __fastcall std::vector<std::pair<unsigned short,bool>>::_Assign_counted_range<std::pair<unsigned short,bool> *>(
        __int64 *a1,
        _BYTE *a2,
        unsigned __int64 a3)
{
  __int64 v3; // r9
  unsigned __int64 v4; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  __int64 v10; // rcx

  v3 = *a1;
  v4 = a3;
  v7 = (a1[2] - *a1) >> 2;
  if ( a3 > v7 )
  {
    std::vector<std::pair<unsigned short,bool>>::_Clear_and_reserve_geometric(a1, a3);
    v8 = *a1;
LABEL_10:
    LOBYTE(v7) = std::_Copy_memmove_n<std::pair<unsigned short,bool> *,std::pair<unsigned short,bool> *>(a2);
    v10 = v8 + 4 * v4;
    goto LABEL_6;
  }
  v8 = a1[1];
  v9 = (v8 - v3) >> 2;
  if ( a3 > v9 )
  {
    while ( v3 != v8 )
    {
      *(_WORD *)v3 = *(_WORD *)a2;
      *(_BYTE *)(v3 + 2) = a2[2];
      v3 += 4LL;
      v8 = a1[1];
      a2 += 4;
    }
    v4 = a3 - v9;
    goto LABEL_10;
  }
  v10 = v3 + 4 * a3;
  if ( a3 )
  {
    do
    {
      LOWORD(v7) = *(_WORD *)a2;
      a2 += 4;
      *(_WORD *)v3 = v7;
      v3 += 4LL;
      LOBYTE(v7) = *(a2 - 2);
      *(_BYTE *)(v3 - 2) = v7;
      --v4;
    }
    while ( v4 );
  }
LABEL_6:
  a1[1] = v10;
  return v7;
}
