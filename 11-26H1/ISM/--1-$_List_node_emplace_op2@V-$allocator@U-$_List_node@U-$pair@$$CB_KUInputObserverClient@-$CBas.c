/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18013BF24
 * Callers:
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x18013BD0C (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KUInputObserverClient@-$CBaseInputObserverServ.c)
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_CBaseInputObserverServer_11_::InputObserverClient_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__CBaseInputObserverServer_11_::InputObserverClient____0___::_Try_emplace_unsigned___int64_const_&__::_1_::dtor$0 @ 0x1801DB1AF (_std--_Hash_std--_Umap_traits_unsigned___int64_CBaseInputObserverServer_11_--InputObserverClient.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,CBaseInputObserverServer<11>::InputObserverClient>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,CBaseInputObserverServer<11>::InputObserverClient>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 24);
    if ( v3 )
    {
      *(_QWORD *)(v2 + 24) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  return std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Windows::UI::Internal::Input::GestureAnimationData>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Windows::UI::Internal::Input::GestureAnimationData>,void *>>>(a1);
}
