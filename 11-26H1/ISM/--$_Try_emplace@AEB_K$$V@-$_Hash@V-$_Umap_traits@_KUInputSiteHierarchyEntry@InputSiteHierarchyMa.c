/*
 * XREFs of ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x18002C898
 * Callers:
 *     ?UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x18002BBE0 (-UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ.c)
 * Callees:
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_K_K@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x18005E7EC (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x18006854C (-_Forced_rehash@-$_Hash@V-$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V-.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1800789A8 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarch.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??R?$_Conditionally_enabled_hash@_K$00@std@@SA_KAEB_K@Z @ 0x1800A5514 (--R-$_Conditionally_enabled_hash@_K$00@std@@SA_KAEB_K@Z.c)
 *     ??$?0V?$tuple@AEB_K@std@@V?$tuple@$$V@1@$0A@$$Z$S@?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@AEAA@AEAV?$tuple@AEB_K@1@AEAV?$tuple@$$V@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$S@1@@Z @ 0x180132810 (--$-0V-$tuple@AEB_K@std@@V-$tuple@$$V@1@$0A@$$Z$S@-$pair@$$CB_KUInputSiteHierarchyEntry@InputSit.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Try_emplace<unsigned __int64 const &,>(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3)
{
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // rax
  _QWORD *v12; // rbx
  __int64 v13; // rdx
  float v14; // xmm0_4
  __int64 v15; // rcx
  float v16; // xmm1_4
  _QWORD *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD v23[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int8 *v24; // [rsp+70h] [rbp+8h] BYREF

  v6 = std::_Conditionally_enabled_hash<unsigned __int64,1>::operator()(a3);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_QWORD *)(v7 + 16 * (*(_QWORD *)(a1 + 48) & v6) + 8);
  v9 = *(_QWORD *)(a1 + 8);
  if ( v8 != v9 )
  {
    v10 = *(_QWORD *)(v7 + 16 * (*(_QWORD *)(a1 + 48) & v6));
    while ( 1 )
    {
      if ( *(_QWORD *)a3 == *(_QWORD *)(v8 + 16) )
      {
        *(_QWORD *)a2 = v8;
        *(_BYTE *)(a2 + 8) = 0;
        return a2;
      }
      if ( v8 == v10 )
        break;
      v8 = *(_QWORD *)(v8 + 8);
    }
    v9 = v8;
  }
  if ( *(_QWORD *)(a1 + 16) == 0x3FFFFFFFFFFFFFFLL )
    std::_Xlength_error("unordered_map/set too long");
  v23[0] = a1 + 8;
  v12 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(64LL);
  v23[1] = v12;
  v24 = a3;
  ____0V__tuple_AEB_K_std__V__tuple___V_1__0A___Z_S___pair___CB_KUInputSiteHierarchyEntry_InputSiteHierarchyManager___std__AEAA_AEAV__tuple_AEB_K_1_AEAV__tuple___V_1_U__integer_sequence__K_0A__1_U__integer_sequence__K_S_1__Z(
    v12 + 2,
    &v24);
  v13 = *(_QWORD *)(a1 + 16) + 1LL;
  if ( v13 < 0 )
    v14 = (float)(v13 & 1 | (unsigned int)((unsigned __int64)v13 >> 1))
        + (float)(v13 & 1 | (unsigned int)((unsigned __int64)v13 >> 1));
  else
    v14 = (float)(int)v13;
  v15 = *(_QWORD *)(a1 + 56);
  if ( v15 < 0 )
  {
    v21 = *(_QWORD *)(a1 + 56) & 1LL | ((unsigned __int64)v15 >> 1);
    v16 = (float)(int)v21 + (float)(int)v21;
  }
  else
  {
    v16 = (float)(int)v15;
  }
  if ( (float)(v14 / v16) > *(float *)a1 )
  {
    v22 = std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Desired_grow_bucket_count(a1);
    std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Forced_rehash(
      a1,
      v22);
    v9 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::_Find_last<unsigned __int64>(
                      a1,
                      v23,
                      v12 + 2,
                      v6);
  }
  v17 = *(_QWORD **)(v9 + 8);
  ++*(_QWORD *)(a1 + 16);
  *v12 = v9;
  v12[1] = v17;
  *v17 = v12;
  *(_QWORD *)(v9 + 8) = v12;
  v18 = 2 * (v6 & *(_QWORD *)(a1 + 48));
  v19 = *(_QWORD *)(a1 + 24);
  v20 = *(_QWORD *)(v19 + 16 * (v6 & *(_QWORD *)(a1 + 48)));
  if ( v20 == *(_QWORD *)(a1 + 8) )
  {
    *(_QWORD *)(v19 + 16 * (v6 & *(_QWORD *)(a1 + 48))) = v12;
LABEL_18:
    *(_QWORD *)(v19 + 8 * v18 + 8) = v12;
    goto LABEL_20;
  }
  if ( v20 == v9 )
  {
    *(_QWORD *)(v19 + 16 * (v6 & *(_QWORD *)(a1 + 48))) = v12;
    goto LABEL_20;
  }
  if ( *(_QWORD **)(v19 + 16 * (v6 & *(_QWORD *)(a1 + 48)) + 8) == v17 )
    goto LABEL_18;
LABEL_20:
  *(_QWORD *)a2 = v12;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
