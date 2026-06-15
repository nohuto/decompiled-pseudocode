/*
 * XREFs of ??$_Format_sed@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@PEBGV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@YA?AV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEBV?$match_results@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@@0@V10@PEBG2W4match_flag_type@regex_constants@0@@Z @ 0x180149230
 * Callers:
 *     ??$_Regex_replace1@V?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEBGV?$regex_traits@G@2@GU?$char_traits@G@2@V?$allocator@G@2@@std@@YA?AV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@V10@PEBG1AEBV?$basic_regex@GV?$regex_traits@G@std@@@0@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@W4match_flag_type@regex_constants@0@@Z @ 0x180149498 (--$_Regex_replace1@V-$back_insert_iterator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 * Callees:
 *     ?push_back@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXG@Z @ 0x1801401C8 (-push_back@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXG@Z.c)
 *     ??$_Copy_unchecked@PEBGPEBGV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YA?AV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@PEBG0V10@@Z @ 0x180148D7C (--$_Copy_unchecked@PEBGPEBGV-$back_insert_iterator@V-$basic_string@GU-$char_traits@G@std@@V-$all.c)
 */

void ***__fastcall std::_Format_sed<unsigned short const *,std::allocator<std::sub_match<unsigned short const *>>,unsigned short const *,std::back_insert_iterator<std::wstring>>(
        void ***a1,
        __int64 a2,
        void **a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5)
{
  unsigned __int16 *v5; // rdi
  __int64 v9; // rdx
  unsigned __int16 *v10; // rax
  __int128 *v11; // r8
  __int128 v12; // xmm1
  unsigned __int16 *v13; // r8
  void ***v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v16; // r9
  char v18; // [rsp+70h] [rbp+8h] BYREF
  char v19; // [rsp+80h] [rbp+18h] BYREF

  v5 = a4;
  while ( v5 != a5 )
  {
    v9 = *v5;
    v10 = ++v5;
    if ( (_WORD)v9 == 38 )
    {
      v11 = *(__int128 **)(a2 + 16);
      if ( (*(_QWORD *)(a2 + 24) - (_QWORD)v11) / 24LL )
      {
        v12 = *v11;
        v13 = (unsigned __int16 *)*((_QWORD *)v11 + 1);
        v14 = (void ***)&v18;
LABEL_11:
        a3 = *std::_Copy_unchecked<unsigned short const *,unsigned short const *,std::back_insert_iterator<std::wstring>>(
                v14,
                (unsigned __int16 *)v12,
                v13,
                a3);
      }
    }
    else
    {
      if ( (_WORD)v9 != 92 )
        goto LABEL_13;
      if ( v10 != a5 )
      {
        v9 = *v10;
        if ( (unsigned __int16)v9 < 0x30u || (unsigned int)v9 > 0x39 )
        {
          ++v5;
LABEL_13:
          std::wstring::push_back(a3, v9);
          continue;
        }
        v15 = *(_QWORD *)(a2 + 16);
        v5 = v10 + 1;
        v16 = (unsigned int)(v9 - 48);
        if ( v16 < (*(_QWORD *)(a2 + 24) - v15) / 24 )
        {
          v12 = *(_OWORD *)(v15 + 24 * v16);
          v13 = *(unsigned __int16 **)(v15 + 24 * v16 + 8);
          v14 = (void ***)&v19;
          goto LABEL_11;
        }
      }
    }
  }
  *a1 = a3;
  return a1;
}
