/*
 * XREFs of ??$emplace@U?$pair@IUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@?$_Hash@V?$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@IUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@1@@Z @ 0x180049B4C
 * Callers:
 *     ?OnAppViewAdded@ViewHierarchyWithWindowManager@@AEAAJUAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UAppViewChangedEventArgs@34567@@Z @ 0x180049AA0 (-OnAppViewAdded@ViewHierarchyWithWindowManager@@AEAAJUAppViewWatcher@WindowManagement@Applicatio.c)
 * Callees:
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@PEAX@2@_KQEAU32@1@Z @ 0x18002AA44 (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Int.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEBA_K_K@Z @ 0x18004AEA0 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEAAX_K@Z @ 0x180089D7C (-_Forced_rehash@-$_Hash@V-$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Win.c)
 *     ??R?$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageType@@@Z @ 0x18008A0A8 (--R-$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageT.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>>,0>>::emplace<std::pair<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 *v9; // r12
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rdx
  float v16; // xmm0_4
  __int64 v17; // rcx
  float v18; // xmm1_4
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax

  v6 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()((unsigned __int8 *)a3);
  v7 = a1[3];
  v8 = *(_QWORD *)(v7 + 16 * (a1[6] & v6) + 8);
  v9 = a1 + 1;
  v10 = a1[1];
  if ( v8 != v10 )
  {
    v11 = *(_QWORD *)(v7 + 16 * (a1[6] & v6));
    while ( 1 )
    {
      if ( *(_DWORD *)a3 == *(_DWORD *)(v8 + 16) )
      {
        *(_QWORD *)a2 = v8;
        *(_BYTE *)(a2 + 8) = 0;
        return a2;
      }
      if ( v8 == v11 )
        break;
      v8 = *(_QWORD *)(v8 + 8);
    }
    v10 = v8;
  }
  if ( a1[2] == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("unordered_map/set too long");
  v13 = std::_Allocate<16,std::_Default_allocate_traits>(32LL);
  *(_DWORD *)(v13 + 16) = *(_DWORD *)a3;
  v14 = *(_QWORD *)(a3 + 8);
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_QWORD *)(v13 + 24) = v14;
  v15 = a1[2] + 1LL;
  if ( v15 < 0 )
    v16 = (float)(v15 & 1 | (unsigned int)((unsigned __int64)v15 >> 1))
        + (float)(v15 & 1 | (unsigned int)((unsigned __int64)v15 >> 1));
  else
    v16 = (float)(int)v15;
  v17 = a1[7];
  if ( v17 < 0 )
  {
    v23 = a1[7] & 1LL | ((unsigned __int64)v17 >> 1);
    v18 = (float)(int)v23 + (float)(int)v23;
  }
  else
  {
    v18 = (float)(int)v17;
  }
  if ( (float)(v16 / v18) > *(float *)a1 )
  {
    v19 = std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>>,0>>::_Desired_grow_bucket_count(a1);
    std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>>,0>>::_Forced_rehash(
      a1,
      v19);
    v20 = a1[3];
    v21 = *(_QWORD *)(v20 + 16 * (v6 & a1[6]) + 8);
    v10 = *v9;
    if ( v21 != *v9 )
    {
      v22 = *(_QWORD *)(v20 + 16 * (v6 & a1[6]));
      while ( 1 )
      {
        if ( *(_DWORD *)(v13 + 16) == *(_DWORD *)(v21 + 16) )
        {
          v10 = *(_QWORD *)v21;
          goto LABEL_14;
        }
        if ( v21 == v22 )
          break;
        v21 = *(_QWORD *)(v21 + 8);
      }
      v10 = v21;
    }
  }
LABEL_14:
  *(_QWORD *)a2 = std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>>,0>>::_Insert_new_node_before(
                    a1,
                    v6,
                    v10,
                    (_QWORD *)v13);
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
