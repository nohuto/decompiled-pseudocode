/*
 * XREFs of ??$_Eqrange@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@IEBA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@std@@PEAU12@@1@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@@Z @ 0x180022E00
 * Callers:
 *     ??$count@V?$basic_string_view@GU?$char_traits@G@std@@@std@@U?$less@X@2@$0A@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@QEBA_KAEBV?$basic_string_view@GU?$char_traits@G@std@@@1@@Z @ 0x1800979E4 (--$count@V-$basic_string_view@GU-$char_traits@G@std@@@std@@U-$less@X@2@$0A@@-$_Tree@V-$_Tmap_tra.c)
 * Callees:
 *     ??$?RAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@?$less@X@std@@QEBA_NAEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180022EDC (--$-RAEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@AEBV-$basic_string@GU-$char_traits@G@s.c)
 *     ??$?RAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@@?$less@X@std@@QEBA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@@Z @ 0x180022F20 (--$-RAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBV-$basic_string_view@GU.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<std::wstring,std::variant<unsigned long,bool,float>,std::less<void>,std::allocator<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>,0>>::_Eqrange<std::basic_string_view<unsigned short>>(
        __int64 *a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 v3; // rbp
  __int64 v7; // rdi
  __int64 i; // rbx
  __int64 j; // rbx
  __int64 *result; // rax

  v3 = *a1;
  v7 = *a1;
  for ( i = *(_QWORD *)(*a1 + 8); !*(_BYTE *)(i + 25); i = *(_QWORD *)i )
  {
    if ( (unsigned __int8)std::less<void>::operator()<std::wstring const &,std::basic_string_view<unsigned short> const &>(
                            a1,
                            i + 32,
                            a3) )
    {
      i += 16LL;
    }
    else
    {
      if ( *(_BYTE *)(v7 + 25)
        && (unsigned __int8)std::less<void>::operator()<std::basic_string_view<unsigned short> const &,std::wstring const &>(
                              a1,
                              a3,
                              i + 32) )
      {
        v7 = i;
      }
      v3 = i;
    }
  }
  if ( *(_BYTE *)(v7 + 25) )
    j = *a1 + 8;
  else
    j = v7;
LABEL_5:
  for ( j = *(_QWORD *)j; !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 16) )
  {
    if ( (unsigned __int8)std::less<void>::operator()<std::basic_string_view<unsigned short> const &,std::wstring const &>(
                            a1,
                            a3,
                            j + 32) )
    {
      v7 = j;
      goto LABEL_5;
    }
  }
  result = a2;
  *a2 = v3;
  a2[1] = v7;
  return result;
}
