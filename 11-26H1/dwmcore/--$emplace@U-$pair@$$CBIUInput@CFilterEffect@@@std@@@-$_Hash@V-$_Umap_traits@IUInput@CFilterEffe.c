/*
 * XREFs of ??$emplace@U?$pair@$$CBIUInput@CFilterEffect@@@std@@@?$_Hash@V?$_Umap_traits@IUInput@CFilterEffect@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUInput@CFilterEffect@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUInput@CFilterEffect@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBIUInput@CFilterEffect@@@1@@Z @ 0x180266C9C
 * Callers:
 *     ?OnUpdateIdChanged@CFilterEffect@@QEAAXXZ @ 0x180267614 (-OnUpdateIdChanged@CFilterEffect@@QEAAXXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1801350B0 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkin.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18014DFF4 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_List_node@U-$pair@$$CBIVCDDisplayFlipAwayFence@@@std@.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@PEAVCInteractionTrackerBase@@V?$unordered_map@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@4@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@V?$_Uhash_compare@PEAVCInteractionTrackerBase@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@3@@3@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@V?$unordered_map@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@4@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@@3@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@QEAVCInteractionTrackerBase@@V?$unordered_map@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@4@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@PEAX@2@_KQEAU32@1@Z @ 0x1801D1FB4 (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@PEAVCInteractionTrackerBase@@V-$unordered_map@P.c)
 *     ??$_Find_last@I@?$_Hash@V?$_Umap_traits@IVCFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCFlipAwayFence@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBIVCFlipAwayFence@@@std@@PEAX@std@@@1@AEBI_K@Z @ 0x1801DBCF0 (--$_Find_last@I@-$_Hash@V-$_Umap_traits@IVCFlipAwayFence@@V-$_Uhash_compare@IU-$hash@I@std@@U-$e.c)
 *     ??R?$_Conditionally_enabled_hash@I$00@std@@SA_KAEBI@Z @ 0x180266F00 (--R-$_Conditionally_enabled_hash@I$00@std@@SA_KAEBI@Z.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@IUInput@CFilterEffect@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUInput@CFilterEffect@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x180267AB4 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@IUInput@CFilterEffect@@V-$_Uhash_compare@IU-$hash@I@std@.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,CFilterEffect::Input,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CFilterEffect::Input>>,0>>::emplace<std::pair<unsigned int const,CFilterEffect::Input>>(
        float *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rbp
  _OWORD *v7; // r15
  __int64 v8; // rdx
  float v9; // xmm0_4
  __int64 v10; // rcx
  float v11; // xmm1_4
  __int64 v12; // rax
  __int64 v13; // rax
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v16[5]; // [rsp+30h] [rbp-28h] BYREF

  v6 = std::_Conditionally_enabled_hash<unsigned int,1>::operator()((unsigned __int8 *)a3);
  std::_Hash<std::_Umap_traits<unsigned int,CFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CFlipAwayFence>>,0>>::_Find_last<unsigned int>(
    a1,
    &v15,
    (_DWORD *)a3,
    v6);
  if ( *((_QWORD *)&v15 + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v15 + 1);
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( *((_QWORD *)a1 + 2) == 0x492492492492492LL )
      std::_Xlength_error("unordered_map/set too long");
    v16[0] = a1 + 2;
    v7 = std::_Allocate<16,std::_Default_allocate_traits>(0x38uLL, 0LL);
    v7[1] = *(_OWORD *)a3;
    v7[2] = *(_OWORD *)(a3 + 16);
    *((_QWORD *)v7 + 6) = *(_QWORD *)(a3 + 32);
    v8 = *((_QWORD *)a1 + 2) + 1LL;
    if ( v8 < 0 )
      v9 = (float)(v8 & 1 | (unsigned int)((unsigned __int64)v8 >> 1))
         + (float)(v8 & 1 | (unsigned int)((unsigned __int64)v8 >> 1));
    else
      v9 = (float)(int)v8;
    v10 = *((_QWORD *)a1 + 7);
    if ( v10 < 0 )
    {
      v12 = *((_QWORD *)a1 + 7) & 1LL | (*((_QWORD *)a1 + 7) >> 1);
      v11 = (float)(int)v12 + (float)(int)v12;
    }
    else
    {
      v11 = (float)(int)v10;
    }
    if ( (float)(v9 / v11) > *a1 )
    {
      v13 = std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Desired_grow_bucket_count(
              (__int64)a1,
              v8);
      std::_Hash<std::_Umap_traits<unsigned int,CFilterEffect::Input,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CFilterEffect::Input>>,0>>::_Forced_rehash(
        a1,
        v13);
      v15 = *(_OWORD *)std::_Hash<std::_Umap_traits<unsigned int,CFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CFlipAwayFence>>,0>>::_Find_last<unsigned int>(
                         a1,
                         &v15,
                         (_DWORD *)v7 + 4,
                         v6);
    }
    v16[1] = 0LL;
    *(_QWORD *)a2 = std::_Hash<std::_Umap_traits<CInteractionTrackerBase *,std::unordered_map<CInteractionTrackerBase *,enum InteractionTrackerBindingModeFlags>,std::_Uhash_compare<CInteractionTrackerBase *,std::hash<CInteractionTrackerBase *>,std::equal_to<CInteractionTrackerBase *>>,std::allocator<std::pair<CInteractionTrackerBase * const,std::unordered_map<CInteractionTrackerBase *,enum InteractionTrackerBindingModeFlags>>>,0>>::_Insert_new_node_before(
                      a1,
                      v6,
                      v15,
                      v7);
    *(_BYTE *)(a2 + 8) = 1;
    std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned int const,CDDisplayFlipAwayFence>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned int const,CDDisplayFlipAwayFence>,void *>>>((__int64)v16);
  }
  return a2;
}
