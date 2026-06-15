/*
 * XREFs of ?_Skip@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@QEAAPEBGPEBG0PEAV_Node_base@2@@Z @ 0x18014DB58
 * Callers:
 *     ??$_Regex_search2@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@GV?$regex_traits@G@2@PEBG@std@@YA_NPEBG0PEAV?$match_results@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@@0@AEBV?$basic_regex@GV?$regex_traits@G@std@@@0@W4match_flag_type@regex_constants@0@0@Z @ 0x180149698 (--$_Regex_search2@PEBGV-$allocator@V-$sub_match@PEBG@std@@@std@@GV-$regex_traits@G@2@PEBG@std@@Y.c)
 *     ?_Skip@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@QEAAPEBGPEBG0PEAV_Node_base@2@@Z @ 0x18014DB58 (-_Skip@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@QEAAPEBGPEBG0PEAV_Node_base@2@@Z.c)
 * Callees:
 *     __std_find_trivial_2 @ 0x1800B1B50 (__std_find_trivial_2.c)
 *     ??$_Compare@PEBGPEBGV?$regex_traits@G@std@@@std@@YAPEBGPEBG000AEBV?$regex_traits@G@0@W4syntax_option_type@regex_constants@0@@Z @ 0x180133054 (--$_Compare@PEBGPEBGV-$regex_traits@G@std@@@std@@YAPEBGPEBG000AEBV-$regex_traits@G@0@W4syntax_op.c)
 *     ??$_Lookup_coll@PEBGG@std@@YAPEBGPEBG0PEBU?$_Sequence@G@0@@Z @ 0x180133994 (--$_Lookup_coll@PEBGG@std@@YAPEBGPEBG0PEBU-$_Sequence@G@0@@Z.c)
 *     ??$_Lookup_equiv@GV?$regex_traits@G@std@@@std@@YA_NGPEBU?$_Sequence@G@0@AEBV?$regex_traits@G@0@@Z @ 0x180133A0C (--$_Lookup_equiv@GV-$regex_traits@G@std@@@std@@YA_NGPEBU-$_Sequence@G@0@AEBV-$regex_traits@G@0@@.c)
 *     ??$_Lookup_range@G@std@@YA_NIPEBU?$_Buf@G@0@@Z @ 0x180133BA0 (--$_Lookup_range@G@std@@YA_NIPEBU-$_Buf@G@0@@Z.c)
 *     ?isctype@?$_Regex_traits@G@std@@QEBA_NGF@Z @ 0x18014016C (-isctype@-$_Regex_traits@G@std@@QEBA_NGF@Z.c)
 *     ?_Skip@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@QEAAPEBGPEBG0PEAV_Node_base@2@@Z @ 0x18014DB58 (-_Skip@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@QEAAPEBGPEBG0PEAV_Node_base@2@@Z.c)
 */

unsigned __int16 *__fastcall std::_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>::_Skip(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        __int64 a4)
{
  __int64 v4; // rdi
  unsigned __int16 *v5; // rsi
  unsigned __int16 *v6; // rbx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // rax
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  unsigned __int16 v21; // bp
  unsigned int *v22; // r8
  __int64 v23; // rdx
  __int64 v24; // r8
  bool v25; // zf
  __int64 v26; // rax
  unsigned __int16 v27; // r8
  char v28; // cl
  unsigned int *v29; // rdx
  unsigned __int16 *v30; // rbp
  unsigned __int16 *v31; // r14
  unsigned __int16 *v32; // rax

  v4 = a4;
  v5 = a3;
  v6 = a2;
  if ( !a4 )
    v4 = *(_QWORD *)(a1 + 176);
  if ( a2 == a3 )
    return v6;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !v4 )
        return v6;
      v8 = *(_DWORD *)(v4 + 8);
      if ( v8 > 11 )
        break;
      if ( v8 == 11 )
        return v6;
      if ( v8 <= 5 )
      {
        if ( v8 != 5 && v8 )
        {
          v9 = v8 - 1;
          if ( !v9 )
            goto LABEL_11;
          v20 = v9 - 1;
          if ( v20 )
          {
            if ( v20 == 1 )
            {
              do
              {
                if ( *v6 == 10 )
                  break;
                ++v6;
              }
              while ( v6 != a3 );
            }
          }
          else if ( *(a2 - 1) != 10 )
          {
            do
            {
              if ( *v6 == 10 )
                break;
              ++v6;
            }
            while ( v6 != a3 );
            if ( v6 != a3 )
              ++v6;
          }
        }
        return v6;
      }
      v10 = v8 - 6;
      if ( !v10 )
      {
        do
        {
          v30 = v6 + 1;
          v31 = v6;
          v32 = std::_Compare<unsigned short const *,unsigned short const *,std::regex_traits<unsigned short>>(
                  v6,
                  v6 + 1,
                  *(unsigned __int16 **)(v4 + 40),
                  (unsigned __int16 *)(*(_QWORD *)(v4 + 40) + 2LL),
                  *(_QWORD *)(a1 + 208),
                  *(_DWORD *)(a1 + 184));
          if ( v32 != v6 )
            break;
          ++v6;
        }
        while ( v30 != v5 );
        if ( v32 != v31 )
          return v31;
        return v30;
      }
      v11 = v10 - 1;
      if ( !v11 )
      {
        while ( 1 )
        {
          v21 = *v6;
          if ( (*(_DWORD *)(a1 + 184) & 0x100) != 0 )
            v21 = std::ctype<unsigned short>::tolower(*(_QWORD *)(*(_QWORD *)(a1 + 208) + 8LL), v21);
          v22 = *(unsigned int **)(v4 + 32);
          if ( v22
            && std::_Lookup_coll<unsigned short const *,unsigned short>((__int16 *)v6, (__int16 *)v6 + 1, v22) != (__int16 *)v6
            || (v23 = *(_QWORD *)(v4 + 56)) != 0 && std::_Lookup_range<unsigned short>(v21, v23) )
          {
LABEL_53:
            v28 = 1;
            goto LABEL_58;
          }
          if ( v21 >= 0x100u )
          {
            v26 = *(_QWORD *)(v4 + 48);
            if ( v26
              && _std_find_trivial_2(
                   *(const __m128i **)(v26 + 8),
                   (const __m128i *)(*(_QWORD *)(v26 + 8) + 2LL * *(unsigned int *)(v26 + 4)),
                   v21) != (const __m128i *)(*(_QWORD *)(*(_QWORD *)(v4 + 48) + 8LL)
                                           + 2LL * *(unsigned int *)(*(_QWORD *)(v4 + 48) + 4LL)) )
            {
              goto LABEL_53;
            }
            v27 = *(_WORD *)(v4 + 64);
            if ( v27 )
            {
              if ( std::_Regex_traits<unsigned short>::isctype(*(_QWORD *)(a1 + 208), v21, v27) )
                goto LABEL_53;
            }
            v29 = *(unsigned int **)(v4 + 72);
            if ( v29 )
            {
              v25 = std::_Lookup_equiv<unsigned short,std::regex_traits<unsigned short>>(
                      v21,
                      v29,
                      *(_QWORD *)(a1 + 208)) == 0;
LABEL_56:
              v28 = 1;
              if ( !v25 )
                goto LABEL_58;
            }
          }
          else
          {
            v24 = *(_QWORD *)(v4 + 40);
            if ( v24 )
            {
              v25 = ((unsigned __int8)(1 << (v21 & 7)) & *(_BYTE *)(((unsigned __int64)v21 >> 3) + v24)) == 0;
              goto LABEL_56;
            }
          }
          v28 = 0;
LABEL_58:
          if ( v28 == (*(_BYTE *)(v4 + 12) & 1) && ++v6 != v5 )
            continue;
          return v6;
        }
      }
      if ( (unsigned int)(v11 - 1) >= 2 )
        return v6;
LABEL_11:
      v4 = *(_QWORD *)(v4 + 16);
    }
    if ( v8 <= 17 )
      break;
    v17 = v8 - 18;
    if ( !v17 )
      return v6;
    v18 = v17 - 1;
    if ( !v18 )
      return v6;
    v19 = v18 - 1;
    if ( !v19 )
      goto LABEL_11;
    if ( v19 != 1 )
      return v6;
LABEL_29:
    v4 = 0LL;
  }
  if ( v8 == 17 )
    return v6;
  v13 = v8 - 12;
  if ( !v13 )
    goto LABEL_29;
  v14 = v13 - 1;
  if ( !v14 )
    goto LABEL_11;
  v15 = v14 - 1;
  if ( !v15 )
    goto LABEL_11;
  if ( v15 != 2 )
    return v6;
  do
  {
    if ( !v4 )
      break;
    v16 = std::_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>::_Skip(
            a1,
            v6,
            v5,
            *(_QWORD *)(v4 + 16));
    v4 = *(_QWORD *)(v4 + 40);
    v5 = (unsigned __int16 *)v16;
  }
  while ( v6 != (unsigned __int16 *)v16 );
  return v5;
}
