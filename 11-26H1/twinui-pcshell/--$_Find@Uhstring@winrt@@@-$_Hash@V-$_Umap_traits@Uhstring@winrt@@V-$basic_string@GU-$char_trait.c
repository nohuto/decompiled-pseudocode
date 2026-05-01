/*
 * XREFs of ??$_Find@Uhstring@winrt@@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@4@$0A@@std@@@std@@AEBAPEAU?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@1@AEBUhstring@winrt@@_K@Z @ 0x1801B377C
 * Callers:
 *     ?find@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@@2@AEBUhstring@winrt@@@Z @ 0x180617B40 (-find@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$basic_string@GU-$char_traits@G@std@@V-$allocato.c)
 * Callees:
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x1800303B8 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<winrt::hstring,std::wstring,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::wstring>>,0>>::_Find<winrt::hstring>(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r9
  const wchar_t *v12; // r8
  __int64 v13; // rax
  const wchar_t *v14; // rcx
  size_t v15; // rdx
  __int64 result; // rax

  v3 = a1[6];
  v5 = a1[3];
  v6 = 2 * (a3 & v3);
  v8 = *(_QWORD *)(v5 + 8 * v6 + 8);
  if ( v8 == a1[1] )
  {
LABEL_13:
    v8 = 0LL;
  }
  else
  {
    v9 = *(_QWORD *)(v5 + 8 * v6);
    while ( 1 )
    {
      v10 = *(_QWORD *)(v8 + 16);
      if ( v10 )
      {
        v11 = *(unsigned int *)(v10 + 4);
        v12 = *(const wchar_t **)(v10 + 16);
      }
      else
      {
        v11 = 0LL;
        v12 = &pvData;
      }
      v13 = *a2;
      if ( *a2 )
      {
        v14 = *(const wchar_t **)(v13 + 16);
        v15 = *(unsigned int *)(v13 + 4);
      }
      else
      {
        v14 = &pvData;
        v15 = 0LL;
      }
      if ( std::_Traits_equal<std::char_traits<unsigned short>>(v14, v15, v12, v11) )
        break;
      if ( v8 == v9 )
        goto LABEL_13;
      v8 = *(_QWORD *)(v8 + 8);
    }
  }
  result = v8;
  if ( !v8 )
    return a1[1];
  return result;
}
