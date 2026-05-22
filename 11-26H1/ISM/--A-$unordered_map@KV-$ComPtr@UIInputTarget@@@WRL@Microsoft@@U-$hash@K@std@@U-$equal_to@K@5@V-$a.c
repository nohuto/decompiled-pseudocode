/*
 * XREFs of ??A?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@QEAAAEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@$$QEAK@Z @ 0x18001B898
 * Callers:
 *     ?ProcessContextualProcessorDecision@ContextualProcessorBuffer@@AEAAXPEAUInputInfo@@AEAUContextualProcessorResponse@@AEAUContextualProcessorMetadata@1@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@6@@Z @ 0x180019FAC (-ProcessContextualProcessorDecision@ContextualProcessorBuffer@@AEAAXPEAUInputInfo@@AEAUContextua.c)
 * Callees:
 *     ?_Check_rehash_required_1@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA_NXZ @ 0x18001B830 (-_Check_rehash_required_1@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_.c)
 *     ?_Check_max_size@?$_Hash@V?$_Umap_traits@KUPointerState@InputInfoValidator@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@4@$0A@@std@@@std@@IEBAXXZ @ 0x18001C3C8 (-_Check_max_size@-$_Hash@V-$_Umap_traits@KUPointerState@InputInfoValidator@@V-$_Uhash_compare@KU.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAAXXZ @ 0x180089EFC (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uhash_compa.c)
 *     ??R?$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageType@@@Z @ 0x18008A0A8 (--R-$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageT.c)
 *     ??$?0V?$tuple@AEBK@std@@V?$tuple@$$V@1@$0A@$$Z$S@?$pair@$$CBKPEAUDeviceInfo@@@std@@AEAA@AEAV?$tuple@AEBK@1@AEAV?$tuple@$$V@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$S@1@@Z @ 0x1800B175C (--$-0V-$tuple@AEBK@std@@V-$tuple@$$V@1@$0A@$$Z$S@-$pair@$$CBKPEAUDeviceInfo@@@std@@AEAA@AEAV-$tu.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::operator[](
        _QWORD *a1,
        unsigned __int8 *a2)
{
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int8 *v17; // [rsp+70h] [rbp+8h] BYREF

  v4 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()(a2);
  v5 = a1[3];
  v6 = *(_QWORD *)(v5 + 16 * (a1[6] & v4) + 8);
  v7 = a1[1];
  if ( v6 != v7 )
  {
    v8 = *(_QWORD *)(v5 + 16 * (a1[6] & v4));
    while ( *(_DWORD *)a2 != *(_DWORD *)(v6 + 16) )
    {
      if ( v6 == v8 )
      {
        v10 = a1 + 1;
        v7 = v6;
        goto LABEL_9;
      }
      v6 = *(_QWORD *)(v6 + 8);
    }
    return v6 + 24;
  }
  v10 = a1 + 1;
LABEL_9:
  std::_Hash<std::_Umap_traits<unsigned long,InputInfoValidator::PointerState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputInfoValidator::PointerState>>,0>>::_Check_max_size(a1);
  v6 = std::_Allocate<16,std::_Default_allocate_traits>(32LL);
  v17 = a2;
  ____0V__tuple_AEBK_std__V__tuple___V_1__0A___Z_S___pair___CBKPEAUDeviceInfo___std__AEAA_AEAV__tuple_AEBK_1_AEAV__tuple___V_1_U__integer_sequence__K_0A__1_U__integer_sequence__K_S_1__Z(
    v6 + 16,
    &v17);
  if ( std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Check_rehash_required_1((__int64)a1) )
  {
    std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Rehash_for_1(a1);
    v11 = a1[3];
    v12 = *(_QWORD *)(v11 + 16 * (v4 & a1[6]) + 8);
    v7 = *v10;
    if ( v12 != *v10 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(v6 + 16) == *(_DWORD *)(v12 + 16) )
        {
          v7 = *(_QWORD *)v12;
          goto LABEL_13;
        }
        if ( v12 == *(_QWORD *)(v11 + 16 * (v4 & a1[6])) )
          break;
        v12 = *(_QWORD *)(v12 + 8);
      }
      v7 = v12;
    }
LABEL_13:
    v10 = a1 + 1;
  }
  v13 = *(__int64 **)(v7 + 8);
  ++a1[2];
  *(_QWORD *)v6 = v7;
  *(_QWORD *)(v6 + 8) = v13;
  *v13 = v6;
  *(_QWORD *)(v7 + 8) = v6;
  v14 = 2 * (v4 & a1[6]);
  v15 = a1[3];
  v16 = *(_QWORD *)(v15 + 16 * (v4 & a1[6]));
  if ( v16 == *v10 )
  {
    *(_QWORD *)(v15 + 16 * (v4 & a1[6])) = v6;
    goto LABEL_21;
  }
  if ( v16 == v7 )
  {
    *(_QWORD *)(v15 + 16 * (v4 & a1[6])) = v6;
    return v6 + 24;
  }
  if ( *(__int64 **)(v15 + 16 * (v4 & a1[6]) + 8) == v13 )
LABEL_21:
    *(_QWORD *)(v15 + 8 * v14 + 8) = v6;
  return v6 + 24;
}
