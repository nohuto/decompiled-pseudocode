/*
 * XREFs of ??$emplace@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1800AC204
 * Callers:
 *     ?BuildRegistryKeyMap@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800ABE00 (-BuildRegistryKeyMap@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$optional@U?$pair@Uhstring@winrt@@U12@@std@@@std@@PEAUHKEY__@@PEBG@Z @ 0x1800AC660 (-GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Check_rehash_required_1@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@4@$0A@@std@@@std@@IEBA_NXZ @ 0x180098FC4 (-_Check_rehash_required_1@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$basic_string@GU-$char_trait.c)
 *     ?_Check_max_size@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@4@$0A@@std@@@std@@IEBAXXZ @ 0x1800AD2A4 (-_Check_max_size@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$basic_string@GU-$char_traits@G@std@@.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800AD2D8 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ??$_Find_last@Uhstring@winrt@@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@U12@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@1@AEBUhstring@winrt@@_K@Z @ 0x1801B3334 (--$_Find_last@Uhstring@winrt@@@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@U12@V-$_Uhash_compare@Uhs.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x1805F2C48 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$basic_string@GU-$char_traits@G@std@@V-.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<winrt::hstring,std::wstring,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::wstring>>,0>>::emplace<std::pair<winrt::hstring const,std::wstring>>(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v6; // r9
  __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int64 i; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  _QWORD *v12; // rbp
  _QWORD *v13; // rdi
  __int64 v14; // rax
  const WCHAR *v15; // rdx
  __int64 v16; // r11
  const WCHAR *v17; // r10
  __int64 v18; // r8
  signed __int64 v19; // r10
  char *v21; // rdi
  _QWORD *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rbx
  _QWORD *v25; // rdx
  _QWORD v26[7]; // [rsp+20h] [rbp-38h] BYREF

  v6 = *a3;
  v7 = 0xCBF29CE484222325uLL;
  if ( *a3 )
  {
    v8 = 2LL * *(unsigned int *)(v6 + 4);
    for ( i = 0LL; i < v8; ++i )
      v7 = 0x100000001B3LL * (*(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + i) ^ (unsigned __int64)v7);
  }
  v10 = a1[3];
  v11 = *(_QWORD **)(v10 + 16 * (v7 & a1[6]) + 8);
  v12 = (_QWORD *)a1[1];
  if ( v11 == v12 )
    goto LABEL_21;
  v13 = *(_QWORD **)(v10 + 16 * (v7 & a1[6]));
  while ( 1 )
  {
    v14 = v11[2];
    if ( v14 )
    {
      v15 = *(const WCHAR **)(v14 + 16);
      v16 = *(unsigned int *)(v14 + 4);
    }
    else
    {
      v15 = &LocaleName;
      v16 = 0LL;
    }
    if ( v6 )
    {
      v17 = *(const WCHAR **)(v6 + 16);
      v18 = *(unsigned int *)(v6 + 4);
    }
    else
    {
      v17 = &LocaleName;
      v18 = 0LL;
    }
    if ( v18 == v16 )
      break;
LABEL_30:
    if ( v11 == v13 )
    {
      v12 = v11;
      v11 = 0LL;
      goto LABEL_16;
    }
    v11 = (_QWORD *)v11[1];
  }
  v19 = (char *)v17 - (char *)v15;
  while ( v18 )
  {
    if ( *(const WCHAR *)((char *)v15 + v19) != *v15 )
      goto LABEL_30;
    --v18;
    ++v15;
  }
  v12 = (_QWORD *)*v11;
LABEL_16:
  if ( !v11 )
  {
LABEL_21:
    std::_Hash<std::_Umap_traits<winrt::hstring,std::wstring,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::wstring>>,0>>::_Check_max_size(a1);
    v26[0] = a1 + 1;
    v21 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
    v26[1] = v21;
    winrt::hstring::hstring((winrt::hstring *)(v21 + 16), (const struct winrt::hstring *)a3);
    *(_OWORD *)(v21 + 24) = 0LL;
    *((_QWORD *)v21 + 5) = 0LL;
    *((_QWORD *)v21 + 6) = 0LL;
    *(_OWORD *)(v21 + 24) = *(_OWORD *)(a3 + 1);
    *(_OWORD *)(v21 + 40) = *(_OWORD *)(a3 + 3);
    a3[3] = 0LL;
    a3[4] = 7LL;
    *((_WORD *)a3 + 4) = 0;
    if ( std::_Hash<std::_Umap_traits<winrt::hstring,std::wstring,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::wstring>>,0>>::_Check_rehash_required_1((__int64)a1) )
    {
      std::_Hash<std::_Umap_traits<winrt::hstring,std::wstring,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::wstring>>,0>>::_Rehash_for_1(a1);
      v12 = *(_QWORD **)std::_Hash<std::_Umap_traits<winrt::hstring,winrt::hstring,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,winrt::hstring>>,0>>::_Find_last<winrt::hstring>(
                          a1,
                          v26,
                          v21 + 16,
                          v7);
    }
    v22 = (_QWORD *)v12[1];
    ++a1[2];
    *(_QWORD *)v21 = v12;
    *((_QWORD *)v21 + 1) = v22;
    *v22 = v21;
    v12[1] = v21;
    v23 = a1[3];
    v24 = 2 * (a1[6] & v7);
    v25 = *(_QWORD **)(v23 + 8 * v24);
    if ( v25 == (_QWORD *)a1[1] )
    {
      *(_QWORD *)(v23 + 8 * v24) = v21;
    }
    else
    {
      if ( v25 == v12 )
      {
        *(_QWORD *)(v23 + 8 * v24) = v21;
        goto LABEL_19;
      }
      if ( *(_QWORD **)(v23 + 8 * v24 + 8) != v22 )
      {
LABEL_19:
        *(_QWORD *)a2 = v21;
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
    }
    *(_QWORD *)(v23 + 8 * v24 + 8) = v21;
    goto LABEL_19;
  }
  *(_QWORD *)a2 = v11;
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
