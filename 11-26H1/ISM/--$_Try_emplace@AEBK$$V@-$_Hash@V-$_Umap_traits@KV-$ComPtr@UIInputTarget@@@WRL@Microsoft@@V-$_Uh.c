/*
 * XREFs of ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18005433C
 * Callers:
 *     ?ProcessContextualProcessorDecision@ContextualProcessorBuffer@@AEAAXPEAUInputInfo@@AEAUContextualProcessorResponse@@AEAUContextualProcessorMetadata@1@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@6@@Z @ 0x180019FAC (-ProcessContextualProcessorDecision@ContextualProcessorBuffer@@AEAAXPEAUInputInfo@@AEAUContextua.c)
 *     ?DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@1AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@4@@Z @ 0x18001BA14 (-DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$Com.c)
 *     ?MakeContextualProcessingDecision@DragNDropProcessor@@AEAAXAEBV?$ComPtr@VManualDragAreaClientProxy@@@WRL@Microsoft@@KPEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18014F888 (-MakeContextualProcessingDecision@DragNDropProcessor@@AEAAXAEBV-$ComPtr@VManualDragAreaClientPro.c)
 *     ?OnInput@InputForwardProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801ABF10 (-OnInput@InputForwardProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRes.c)
 * Callees:
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x18004AF44 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Mi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAAXXZ @ 0x180089EFC (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uhash_compa.c)
 *     ??R?$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageType@@@Z @ 0x18008A0A8 (--R-$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageT.c)
 *     ??$?0V?$tuple@AEBK@std@@V?$tuple@$$V@1@$0A@$$Z$S@?$pair@$$CBKPEAUDeviceInfo@@@std@@AEAA@AEAV?$tuple@AEBK@1@AEAV?$tuple@$$V@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$S@1@@Z @ 0x1800B175C (--$-0V-$tuple@AEBK@std@@V-$tuple@$$V@1@$0A@$$Z$S@-$pair@$$CBKPEAUDeviceInfo@@@std@@AEAA@AEAV-$tu.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Try_emplace<unsigned long const &,>(
        float *a1,
        __int64 a2,
        unsigned __int8 *a3)
{
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  float v14; // xmm0_4
  __int64 v15; // rcx
  float v16; // xmm1_4
  __int64 *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  _QWORD v22[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int8 *v23; // [rsp+70h] [rbp+8h] BYREF

  v6 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()(a3);
  v7 = *((_QWORD *)a1 + 3);
  v8 = *(_QWORD *)(v7 + 16 * (*((_QWORD *)a1 + 6) & v6) + 8);
  v9 = *((_QWORD *)a1 + 1);
  if ( v8 == v9 )
  {
LABEL_6:
    if ( *((_QWORD *)a1 + 2) == 0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error("unordered_map/set too long");
    v22[0] = a1 + 2;
    v12 = std::_Allocate<16,std::_Default_allocate_traits>(32LL);
    v22[1] = v12;
    v23 = a3;
    ____0V__tuple_AEBK_std__V__tuple___V_1__0A___Z_S___pair___CBKPEAUDeviceInfo___std__AEAA_AEAV__tuple_AEBK_1_AEAV__tuple___V_1_U__integer_sequence__K_0A__1_U__integer_sequence__K_S_1__Z(
      v12 + 16,
      &v23);
    v13 = *((_QWORD *)a1 + 2) + 1LL;
    if ( v13 < 0 )
      v14 = (float)(v13 & 1 | (unsigned int)((unsigned __int64)v13 >> 1))
          + (float)(v13 & 1 | (unsigned int)((unsigned __int64)v13 >> 1));
    else
      v14 = (float)(int)v13;
    v15 = *((_QWORD *)a1 + 7);
    if ( v15 < 0 )
    {
      v21 = *((_QWORD *)a1 + 7) & 1LL | ((unsigned __int64)v15 >> 1);
      v16 = (float)(int)v21 + (float)(int)v21;
    }
    else
    {
      v16 = (float)(int)v15;
    }
    if ( (float)(v14 / v16) > *a1 )
    {
      std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Rehash_for_1(a1);
      v9 = *std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>(
              a1,
              v22,
              (_DWORD *)(v12 + 16),
              v6);
    }
    v17 = *(__int64 **)(v9 + 8);
    ++*((_QWORD *)a1 + 2);
    *(_QWORD *)v12 = v9;
    *(_QWORD *)(v12 + 8) = v17;
    *v17 = v12;
    *(_QWORD *)(v9 + 8) = v12;
    v18 = 2 * (v6 & *((_QWORD *)a1 + 6));
    v19 = *((_QWORD *)a1 + 3);
    v20 = *(_QWORD *)(v19 + 16 * (v6 & *((_QWORD *)a1 + 6)));
    if ( v20 == *((_QWORD *)a1 + 1) )
    {
      *(_QWORD *)(v19 + 16 * (v6 & *((_QWORD *)a1 + 6))) = v12;
    }
    else
    {
      if ( v20 == v9 )
      {
        *(_QWORD *)(v19 + 16 * (v6 & *((_QWORD *)a1 + 6))) = v12;
        goto LABEL_10;
      }
      if ( *(__int64 **)(v19 + 16 * (v6 & *((_QWORD *)a1 + 6)) + 8) != v17 )
      {
LABEL_10:
        *(_QWORD *)a2 = v12;
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
    }
    *(_QWORD *)(v19 + 8 * v18 + 8) = v12;
    goto LABEL_10;
  }
  v10 = *(_QWORD *)(v7 + 16 * (*((_QWORD *)a1 + 6) & v6));
  while ( *(_DWORD *)a3 != *(_DWORD *)(v8 + 16) )
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
