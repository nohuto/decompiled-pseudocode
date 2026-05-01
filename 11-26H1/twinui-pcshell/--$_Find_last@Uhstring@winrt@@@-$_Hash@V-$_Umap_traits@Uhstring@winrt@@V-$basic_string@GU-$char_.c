/*
 * XREFs of ??$_Find_last@Uhstring@winrt@@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@@1@AEBUhstring@winrt@@_K@Z @ 0x1801C99DC
 * Callers:
 *     ??$emplace@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x18002CC20 (--$emplace@U-$pair@$$CBUhstring@winrt@@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@.c)
 *     ??$_Try_emplace@AEBUhstring@winrt@@$$V@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@_N@1@AEBUhstring@winrt@@@Z @ 0x18002CE0C (--$_Try_emplace@AEBUhstring@winrt@@$$V@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$basic_string@G.c)
 *     ??$_Erase@Uhstring@winrt@@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@4@$0A@@std@@@std@@AEAA_KAEBUhstring@winrt@@@Z @ 0x1802A3A74 (--$_Erase@Uhstring@winrt@@@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$basic_string@GU-$char_trai.c)
 * Callees:
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x1800303B8 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<winrt::hstring,std::wstring,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::wstring>>,0>>::_Find_last<winrt::hstring>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 a4)
{
  _QWORD *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rax
  _QWORD *v10; // rdi
  _QWORD *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r9
  const wchar_t *v14; // r8
  __int64 v15; // rax
  const wchar_t *v16; // rcx
  size_t v17; // rdx

  v5 = (_QWORD *)a1[1];
  v6 = a4 & a1[6];
  v7 = a1[3];
  v8 = 2 * v6;
  v10 = *(_QWORD **)(v7 + 8 * v8 + 8);
  if ( v10 == v5 )
  {
    *a2 = v5;
  }
  else
  {
    v11 = *(_QWORD **)(v7 + 8 * v8);
    while ( 1 )
    {
      v12 = v10[2];
      if ( v12 )
      {
        v13 = *(unsigned int *)(v12 + 4);
        v14 = *(const wchar_t **)(v12 + 16);
      }
      else
      {
        v13 = 0LL;
        v14 = &pvData;
      }
      v15 = *a3;
      if ( *a3 )
      {
        v16 = *(const wchar_t **)(v15 + 16);
        v17 = *(unsigned int *)(v15 + 4);
      }
      else
      {
        v16 = &pvData;
        v17 = 0LL;
      }
      if ( std::_Traits_equal<std::char_traits<unsigned short>>(v16, v17, v14, v13) )
      {
        *a2 = *v10;
        a2[1] = v10;
        return a2;
      }
      if ( v10 == v11 )
        break;
      v10 = (_QWORD *)v10[1];
    }
    *a2 = v10;
  }
  a2[1] = 0LL;
  return a2;
}
