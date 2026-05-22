/*
 * XREFs of ??$try_emplace@$$V@?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x180030EA0
 * Callers:
 *     ?DoConvergedHitTestCallback@Win32kInterop@@AEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x180030450 (-DoConvergedHitTestCallback@Win32kInterop@@AEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResul.c)
 * Callees:
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@IEBA_K_K@Z @ 0x18001C320 (-_Desired_grow_bucket_count@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Button@@U-$h.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x18004AF44 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Mi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$?0V?$tuple@$$QEAW4TestCommandMessageType@@@std@@V?$tuple@$$V@1@$0A@$$Z$S@?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@AEAA@AEAV?$tuple@$$QEAW4TestCommandMessageType@@@1@AEAV?$tuple@$$V@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$S@1@@Z @ 0x180088148 (--$-0V-$tuple@$$QEAW4TestCommandMessageType@@@std@@V-$tuple@$$V@1@$0A@$$Z$S@-$pair@$$CBW4TestCom.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEAAX_K@Z @ 0x180089D7C (-_Forced_rehash@-$_Hash@V-$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Win.c)
 *     ??R?$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageType@@@Z @ 0x18008A0A8 (--R-$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageT.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::unordered_map<unsigned long,Win32kInterop::TargetingInfo>::try_emplace<>(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3)
{
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rdx
  float v12; // xmm0_4
  __int64 v13; // rcx
  float v14; // xmm1_4
  __int64 *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  char v19; // al
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD v23[7]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int8 *v24; // [rsp+70h] [rbp+8h] BYREF

  v6 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()(a3);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_QWORD *)(v7 + 16 * (*(_QWORD *)(a1 + 48) & v6) + 8);
  v9 = *(_QWORD *)(a1 + 8);
  if ( v8 == v9 )
  {
LABEL_6:
    if ( *(_QWORD *)(a1 + 16) == 0x666666666666666LL )
      std::_Xlength_error("unordered_map/set too long");
    v23[0] = a1 + 8;
    v8 = std::_Allocate<16,std::_Default_allocate_traits>(40LL);
    v23[1] = v8;
    v24 = a3;
    ____0V__tuple___QEAW4TestCommandMessageType___std__V__tuple___V_1__0A___Z_S___pair___CBW4TestCommandMessageType__U__pair_PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader___Z_std___std__AEAA_AEAV__tuple___QEAW4TestCommandMessageType___1_AEAV__tuple___V_1_U__integer_sequence__K_0A__1_U__integer_sequence__K_S_1__Z(
      v8 + 16,
      &v24);
    v11 = *(_QWORD *)(a1 + 16) + 1LL;
    if ( v11 < 0 )
      v12 = (float)(v11 & 1 | (unsigned int)((unsigned __int64)v11 >> 1))
          + (float)(v11 & 1 | (unsigned int)((unsigned __int64)v11 >> 1));
    else
      v12 = (float)(int)v11;
    v13 = *(_QWORD *)(a1 + 56);
    if ( v13 < 0 )
    {
      v21 = *(_QWORD *)(a1 + 56) & 1LL | ((unsigned __int64)v13 >> 1);
      v14 = (float)(int)v21 + (float)(int)v21;
    }
    else
    {
      v14 = (float)(int)v13;
    }
    if ( (float)(v12 / v14) > *(float *)a1 )
    {
      v22 = std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::_Desired_grow_bucket_count(
              a1,
              v11);
      std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>>,0>>::_Forced_rehash(
        a1,
        v22);
      v9 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>(
                        a1,
                        v23,
                        v8 + 16,
                        v6);
    }
    v15 = *(__int64 **)(v9 + 8);
    ++*(_QWORD *)(a1 + 16);
    *(_QWORD *)v8 = v9;
    *(_QWORD *)(v8 + 8) = v15;
    *v15 = v8;
    *(_QWORD *)(v9 + 8) = v8;
    v16 = 2 * (v6 & *(_QWORD *)(a1 + 48));
    v17 = *(_QWORD *)(a1 + 24);
    v18 = *(_QWORD *)(v17 + 16 * (v6 & *(_QWORD *)(a1 + 48)));
    if ( v18 == *(_QWORD *)(a1 + 8) )
    {
      *(_QWORD *)(v17 + 16 * (v6 & *(_QWORD *)(a1 + 48))) = v8;
    }
    else
    {
      if ( v18 == v9 )
      {
        *(_QWORD *)(v17 + 16 * (v6 & *(_QWORD *)(a1 + 48))) = v8;
        goto LABEL_17;
      }
      if ( *(__int64 **)(v17 + 16 * (v6 & *(_QWORD *)(a1 + 48)) + 8) != v15 )
      {
LABEL_17:
        v19 = 1;
        goto LABEL_18;
      }
    }
    *(_QWORD *)(v17 + 8 * v16 + 8) = v8;
    goto LABEL_17;
  }
  v10 = *(_QWORD *)(v7 + 16 * (*(_QWORD *)(a1 + 48) & v6));
  while ( *(_DWORD *)a3 != *(_DWORD *)(v8 + 16) )
  {
    if ( v8 == v10 )
    {
      v9 = v8;
      goto LABEL_6;
    }
    v8 = *(_QWORD *)(v8 + 8);
  }
  v19 = 0;
LABEL_18:
  *(_QWORD *)a2 = v8;
  *(_BYTE *)(a2 + 8) = v19;
  return a2;
}
