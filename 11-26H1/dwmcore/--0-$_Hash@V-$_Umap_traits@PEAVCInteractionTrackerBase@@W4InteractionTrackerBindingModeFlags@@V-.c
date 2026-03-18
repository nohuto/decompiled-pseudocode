/*
 * XREFs of ??0?$_Hash@V?$_Umap_traits@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTrackerBase@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@PEAVCInteractionTrackerBase@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@3@@1@AEBV?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@1@@Z @ 0x18020C164
 * Callers:
 *     ?TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@@Z @ 0x18019E628 (-TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInterac.c)
 *     ??0?$unordered_map@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@4@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@QEAA@XZ @ 0x18020C138 (--0-$unordered_map@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@U-$hash@PE.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIUnknown@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIUnknown@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800E8884 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_s.c)
 *     ??$?0U_Move_allocator_tag@std@@V?$allocator@U?$_List_node@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@PEAX@std@@@1@$0A@@?$list@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@2@@std@@AEAA@U_Move_allocator_tag@1@AEAV?$allocator@U?$_List_node@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@PEAX@std@@@1@@Z @ 0x18020C1C8 (--$-0U_Move_allocator_tag@std@@V-$allocator@U-$_List_node@U-$pair@QEAVCInteractionTrackerBase@@W.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<CInteractionTrackerBase *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTrackerBase *,std::hash<CInteractionTrackerBase *>,std::equal_to<CInteractionTrackerBase *>>,std::allocator<std::pair<CInteractionTrackerBase * const,enum InteractionTrackerBindingModeFlags>>,0>>::_Hash<std::_Umap_traits<CInteractionTrackerBase *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTrackerBase *,std::hash<CInteractionTrackerBase *>,std::equal_to<CInteractionTrackerBase *>>,std::allocator<std::pair<CInteractionTrackerBase * const,enum InteractionTrackerBindingModeFlags>>,0>>(
        __int64 a1,
        _DWORD *a2)
{
  *(_DWORD *)a1 = *a2;
  std::list<std::pair<CInteractionTrackerBase * const,enum InteractionTrackerBindingModeFlags>>::list<std::pair<CInteractionTrackerBase * const,enum InteractionTrackerBindingModeFlags>>(a1 + 8);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 7LL;
  *(_QWORD *)(a1 + 56) = 8LL;
  *(_DWORD *)a1 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<IUnknown *>>,std::_Iterator_base0>>>::_Assign_grow(
    a1 + 24,
    0x10uLL,
    *(_QWORD *)(a1 + 8));
  return a1;
}
