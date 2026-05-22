/*
 * XREFs of ??$emplace@AEAIUContactData@PointerInputMediator@@@?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@std@@@std@@@std@@_N@1@AEAI$$QEAUContactData@PointerInputMediator@@@Z @ 0x180010794
 * Callers:
 *     ?Initialize@PointerFrame@PointerInputMediator@@QEAAXPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x180010598 (-Initialize@PointerFrame@PointerInputMediator@@QEAAXPEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 * Callees:
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x18004AF44 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Mi.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1800789A8 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarch.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEAAX_K@Z @ 0x180089D7C (-_Forced_rehash@-$_Hash@V-$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Win.c)
 *     ??R?$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageType@@@Z @ 0x18008A0A8 (--R-$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageT.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,PointerInputMediator::ContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,PointerInputMediator::ContactData>>,0>>::emplace<unsigned int &,PointerInputMediator::ContactData>(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3,
        __int64 a4)
{
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  float v15; // xmm0_4
  __int64 v16; // rcx
  float v17; // xmm1_4
  __int64 *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD v25[7]; // [rsp+20h] [rbp-38h] BYREF

  v8 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()(a3);
  v9 = *(_QWORD *)(a1 + 24);
  v10 = *(_QWORD *)(v9 + 16 * (*(_QWORD *)(a1 + 48) & v8) + 8);
  v11 = *(_QWORD *)(a1 + 8);
  if ( v10 == v11 )
  {
LABEL_6:
    if ( *(_QWORD *)(a1 + 16) == 0x492492492492492LL )
      std::_Xlength_error("unordered_map/set too long");
    v25[0] = a1 + 8;
    v13 = std::_Allocate<16,std::_Default_allocate_traits>(56LL);
    v25[1] = v13;
    *(_DWORD *)(v13 + 16) = *(_DWORD *)a3;
    *(_BYTE *)(v13 + 24) = *(_BYTE *)a4;
    *(_BYTE *)(v13 + 25) = *(_BYTE *)(a4 + 1);
    *(_QWORD *)(v13 + 32) = *(_QWORD *)(a4 + 8);
    *(_QWORD *)(v13 + 40) = *(_QWORD *)(a4 + 16);
    *(_QWORD *)(a4 + 16) = 0LL;
    *(_BYTE *)(v13 + 48) = *(_BYTE *)(a4 + 24);
    *(_BYTE *)(v13 + 49) = *(_BYTE *)(a4 + 25);
    v14 = *(_QWORD *)(a1 + 16) + 1LL;
    if ( v14 < 0 )
      v15 = (float)(v14 & 1 | (unsigned int)((unsigned __int64)v14 >> 1))
          + (float)(v14 & 1 | (unsigned int)((unsigned __int64)v14 >> 1));
    else
      v15 = (float)(int)v14;
    v16 = *(_QWORD *)(a1 + 56);
    if ( v16 < 0 )
    {
      v23 = *(_QWORD *)(a1 + 56) & 1LL | ((unsigned __int64)v16 >> 1);
      v17 = (float)(int)v23 + (float)(int)v23;
    }
    else
    {
      v17 = (float)(int)v16;
    }
    if ( (float)(v15 / v17) > *(float *)a1 )
    {
      v24 = std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Desired_grow_bucket_count(a1);
      std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>>,0>>::_Forced_rehash(
        a1,
        v24);
      v11 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>(
                         a1,
                         v25,
                         v13 + 16,
                         v8);
    }
    v18 = *(__int64 **)(v11 + 8);
    ++*(_QWORD *)(a1 + 16);
    *(_QWORD *)v13 = v11;
    *(_QWORD *)(v13 + 8) = v18;
    *v18 = v13;
    *(_QWORD *)(v11 + 8) = v13;
    v19 = 2 * (v8 & *(_QWORD *)(a1 + 48));
    v20 = *(_QWORD *)(a1 + 24);
    v21 = *(_QWORD *)(v20 + 16 * (v8 & *(_QWORD *)(a1 + 48)));
    if ( v21 == *(_QWORD *)(a1 + 8) )
    {
      *(_QWORD *)(v20 + 16 * (v8 & *(_QWORD *)(a1 + 48))) = v13;
    }
    else
    {
      if ( v21 == v11 )
      {
        *(_QWORD *)(v20 + 16 * (v8 & *(_QWORD *)(a1 + 48))) = v13;
        goto LABEL_16;
      }
      if ( *(__int64 **)(v20 + 16 * (v8 & *(_QWORD *)(a1 + 48)) + 8) != v18 )
      {
LABEL_16:
        *(_QWORD *)a2 = v13;
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
    }
    *(_QWORD *)(v20 + 8 * v19 + 8) = v13;
    goto LABEL_16;
  }
  v12 = *(_QWORD *)(v9 + 16 * (*(_QWORD *)(a1 + 48) & v8));
  while ( *(_DWORD *)a3 != *(_DWORD *)(v10 + 16) )
  {
    if ( v10 == v12 )
    {
      v11 = v10;
      goto LABEL_6;
    }
    v10 = *(_QWORD *)(v10 + 8);
  }
  *(_QWORD *)a2 = v10;
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
