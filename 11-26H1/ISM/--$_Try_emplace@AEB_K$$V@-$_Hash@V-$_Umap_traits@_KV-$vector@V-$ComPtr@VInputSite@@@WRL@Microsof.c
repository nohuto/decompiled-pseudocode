/*
 * XREFs of ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x18002CA74
 * Callers:
 *     ?GetInputSiteListToRoot@InputSiteHierarchyManager@@UEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@_K@Z @ 0x18002B030 (-GetInputSiteListToRoot@InputSiteHierarchyManager@@UEAA-AV-$vector@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 * Callees:
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@IEBA_K_K@Z @ 0x18001C320 (-_Desired_grow_bucket_count@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Button@@U-$h.c)
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x1800546A0 (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_KV-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$al.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x18007E860 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@_KV-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$all.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??R?$_Conditionally_enabled_hash@_K$00@std@@SA_KAEB_K@Z @ 0x1800A5514 (--R-$_Conditionally_enabled_hash@_K$00@std@@SA_KAEB_K@Z.c)
 *     ??$?0V?$tuple@$$QEAPEAX@std@@V?$tuple@$$V@1@$0A@$$Z$S@?$pair@QEAXV?$vector@IV?$allocator@I@std@@@std@@@std@@AEAA@AEAV?$tuple@$$QEAPEAX@1@AEAV?$tuple@$$V@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$S@1@@Z @ 0x1800F03B0 (--$-0V-$tuple@$$QEAPEAX@std@@V-$tuple@$$V@1@$0A@$$Z$S@-$pair@QEAXV-$vector@IV-$allocator@I@std@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,std::vector<Microsoft::WRL::ComPtr<InputSite>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::vector<Microsoft::WRL::ComPtr<InputSite>>>>,0>>::_Try_emplace<unsigned __int64 const &,>(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3)
{
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // rax
  _QWORD *v11; // rbx
  __int64 v12; // rdx
  float v13; // xmm0_4
  __int64 v14; // rcx
  float v15; // xmm1_4
  _QWORD *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD v23[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int8 *v24; // [rsp+70h] [rbp+8h] BYREF

  v6 = std::_Conditionally_enabled_hash<unsigned __int64,1>::operator()(a3);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_QWORD *)(v7 + 16 * (*(_QWORD *)(a1 + 48) & v6) + 8);
  v9 = *(_QWORD *)(a1 + 8);
  if ( v8 == v9 )
  {
LABEL_6:
    if ( *(_QWORD *)(a1 + 16) == 0x555555555555555LL )
      std::_Xlength_error("unordered_map/set too long");
    v23[0] = a1 + 8;
    v11 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(48LL);
    v23[1] = v11;
    v24 = a3;
    ____0V__tuple___QEAPEAX_std__V__tuple___V_1__0A___Z_S___pair_QEAXV__vector_IV__allocator_I_std___std___std__AEAA_AEAV__tuple___QEAPEAX_1_AEAV__tuple___V_1_U__integer_sequence__K_0A__1_U__integer_sequence__K_S_1__Z(
      v11 + 2,
      &v24);
    v12 = *(_QWORD *)(a1 + 16) + 1LL;
    if ( v12 < 0 )
      v13 = (float)(v12 & 1 | (unsigned int)((unsigned __int64)v12 >> 1))
          + (float)(v12 & 1 | (unsigned int)((unsigned __int64)v12 >> 1));
    else
      v13 = (float)(int)v12;
    v14 = *(_QWORD *)(a1 + 56);
    if ( v14 < 0 )
    {
      v21 = *(_QWORD *)(a1 + 56) & 1LL | ((unsigned __int64)v14 >> 1);
      v15 = (float)(int)v21 + (float)(int)v21;
    }
    else
    {
      v15 = (float)(int)v14;
    }
    if ( (float)(v13 / v15) > *(float *)a1 )
    {
      v22 = std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::_Desired_grow_bucket_count(
              a1,
              v12);
      std::_Hash<std::_Umap_traits<unsigned __int64,std::vector<Microsoft::WRL::ComPtr<InputSite>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::vector<Microsoft::WRL::ComPtr<InputSite>>>>,0>>::_Forced_rehash(
        a1,
        v22);
      v9 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,std::vector<Microsoft::WRL::ComPtr<InputSite>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::vector<Microsoft::WRL::ComPtr<InputSite>>>>,0>>::_Find_last<unsigned __int64>(
                        a1,
                        v23,
                        v11 + 2,
                        v6);
    }
    v16 = *(_QWORD **)(v9 + 8);
    ++*(_QWORD *)(a1 + 16);
    *v11 = v9;
    v11[1] = v16;
    *v16 = v11;
    *(_QWORD *)(v9 + 8) = v11;
    v17 = 2 * (v6 & *(_QWORD *)(a1 + 48));
    v18 = *(_QWORD *)(a1 + 24);
    v19 = *(_QWORD *)(v18 + 16 * (v6 & *(_QWORD *)(a1 + 48)));
    if ( v19 == *(_QWORD *)(a1 + 8) )
    {
      *(_QWORD *)(v18 + 16 * (v6 & *(_QWORD *)(a1 + 48))) = v11;
    }
    else
    {
      if ( v19 == v9 )
      {
        *(_QWORD *)(v18 + 16 * (v6 & *(_QWORD *)(a1 + 48))) = v11;
        goto LABEL_20;
      }
      if ( *(_QWORD **)(v18 + 16 * (v6 & *(_QWORD *)(a1 + 48)) + 8) != v16 )
      {
LABEL_20:
        *(_QWORD *)a2 = v11;
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
    }
    *(_QWORD *)(v18 + 8 * v17 + 8) = v11;
    goto LABEL_20;
  }
  v10 = *(_QWORD *)(v7 + 16 * (*(_QWORD *)(a1 + 48) & v6));
  while ( *(_QWORD *)a3 != *(_QWORD *)(v8 + 16) )
  {
    if ( v8 == v10 )
    {
      v9 = v8;
      goto LABEL_6;
    }
    v8 = *(_QWORD *)(v8 + 8);
  }
  *(_QWORD *)a2 = v8;
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
