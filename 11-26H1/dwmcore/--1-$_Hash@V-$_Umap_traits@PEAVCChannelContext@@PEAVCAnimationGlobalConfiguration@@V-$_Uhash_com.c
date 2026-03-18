/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@V?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x18019E814
 * Callers:
 *     ?AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBase@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x180137394 (-AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBase@.c)
 *     ?TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@@Z @ 0x18019E628 (-TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInterac.c)
 *     ??1CExpressionManager@@EEAA@XZ @ 0x180261B0C (--1CExpressionManager@@EEAA@XZ.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@QEAVCInteractionTrackerBase@@V?$unordered_map@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@4@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAVCInteractionTrackerBase@@V?$unordered_map@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@4@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAVCInteractionTrackerBase@@V?$unordered_map@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@4@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180277DE0 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@QEAVCInteractionTrackerBase@@V-$unordered_map@PE.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@QEAVCInteractionTrackerBase@@V?$unordered_map@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@4@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18027843C (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@QEAVCInteractionTrackerBase@@V-$u.c)
 *     ?RemoveTrackerBindings@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@@Z @ 0x180278934 (-RemoveTrackerBindings@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18019E870 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEAVCChannelContext@@PEAVCAnimationGlobalCo.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<CChannelContext *,CAnimationGlobalConfiguration *,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,CAnimationGlobalConfiguration *>>,0>>::~_Hash<std::_Umap_traits<CChannelContext *,CAnimationGlobalConfiguration *,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,CAnimationGlobalConfiguration *>>,0>>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 24);
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (*(_QWORD *)(a1 + 40) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  std::_List_node<std::pair<CChannelContext * const,CAnimationGlobalConfiguration *>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<CChannelContext * const,CAnimationGlobalConfiguration *>,void *>>>(
    v2,
    *(_QWORD *)(a1 + 8));
  std::_Deallocate<16>(*(void **)(a1 + 8), 0x20uLL);
}
