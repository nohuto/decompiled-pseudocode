/*
 * XREFs of ?_Do_class@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x18013EEEC
 * Callers:
 *     ?_Match_pat@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x18013F81C (-_Match_pat@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z.c)
 * Callees:
 *     __std_find_trivial_2 @ 0x1800B1B50 (__std_find_trivial_2.c)
 *     ??$_Lookup_coll@PEBGG@std@@YAPEBGPEBG0PEBU?$_Sequence@G@0@@Z @ 0x180133994 (--$_Lookup_coll@PEBGG@std@@YAPEBGPEBG0PEBU-$_Sequence@G@0@@Z.c)
 *     ??$_Lookup_equiv@GV?$regex_traits@G@std@@@std@@YA_NGPEBU?$_Sequence@G@0@AEBV?$regex_traits@G@0@@Z @ 0x180133A0C (--$_Lookup_equiv@GV-$regex_traits@G@std@@@std@@YA_NGPEBU-$_Sequence@G@0@AEBV-$regex_traits@G@0@@.c)
 *     ??$_Lookup_range@G@std@@YA_NIPEBU?$_Buf@G@0@@Z @ 0x180133BA0 (--$_Lookup_range@G@std@@YA_NIPEBU-$_Buf@G@0@@Z.c)
 *     ?isctype@?$_Regex_traits@G@std@@QEBA_NGF@Z @ 0x18014016C (-isctype@-$_Regex_traits@G@std@@QEBA_NGF@Z.c)
 */

char __fastcall std::_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>::_Do_class(
        __int16 **a1,
        __int64 a2)
{
  unsigned __int16 v4; // si
  __int16 *v5; // rbp
  char v6; // bl
  unsigned int *v7; // r8
  __int64 v8; // r15
  __int16 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  bool v12; // zf
  __int64 v13; // rax
  unsigned int *v14; // rdx

  v4 = **a1;
  if ( ((_DWORD)a1[23] & 0x100) != 0 )
    v4 = std::ctype<unsigned short>::tolower(*((_QWORD *)a1[26] + 1), v4);
  v5 = *a1;
  v6 = 0;
  v7 = *(unsigned int **)(a2 + 32);
  v8 = (__int64)(*a1 + 1);
  if ( !v7 || (v9 = std::_Lookup_coll<unsigned short const *,unsigned short>(*a1, a1[20], v7), v9 == v5) )
  {
    v10 = *(_QWORD *)(a2 + 56);
    if ( !v10 || !std::_Lookup_range<unsigned short>(v4, v10) )
    {
      if ( v4 >= 0x100u )
      {
        v13 = *(_QWORD *)(a2 + 48);
        if ( v13
          && _std_find_trivial_2(
               *(const __m128i **)(v13 + 8),
               (const __m128i *)(*(_QWORD *)(v13 + 8) + 2LL * *(unsigned int *)(v13 + 4)),
               v4) != (const __m128i *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) + 8LL)
                                      + 2LL * *(unsigned int *)(*(_QWORD *)(a2 + 48) + 4LL))
          || *(_WORD *)(a2 + 64) && (unsigned __int8)std::_Regex_traits<unsigned short>::isctype(a1[26], v4) )
        {
          goto LABEL_18;
        }
        v14 = *(unsigned int **)(a2 + 72);
        if ( !v14 )
          goto LABEL_19;
        v12 = std::_Lookup_equiv<unsigned short,std::regex_traits<unsigned short>>(v4, v14, (__int64)a1[26]) == 0;
      }
      else
      {
        v11 = *(_QWORD *)(a2 + 40);
        if ( !v11 )
          goto LABEL_19;
        v12 = ((unsigned __int8)(1 << (v4 & 7)) & *(_BYTE *)(((unsigned __int64)v4 >> 3) + v11)) == 0;
      }
      if ( v12 )
        goto LABEL_19;
    }
  }
  else
  {
    v8 = (__int64)v9;
  }
LABEL_18:
  v6 = 1;
LABEL_19:
  if ( v6 == (*(_BYTE *)(a2 + 12) & 1) )
    return 0;
  *a1 = (__int16 *)v8;
  return 1;
}
