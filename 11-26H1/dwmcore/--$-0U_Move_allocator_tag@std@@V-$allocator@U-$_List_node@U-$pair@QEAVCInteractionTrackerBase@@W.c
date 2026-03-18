/*
 * XREFs of ??$?0U_Move_allocator_tag@std@@V?$allocator@U?$_List_node@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@PEAX@std@@@1@$0A@@?$list@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@2@@std@@AEAA@U_Move_allocator_tag@1@AEAV?$allocator@U?$_List_node@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@PEAX@std@@@1@@Z @ 0x18020C1C8
 * Callers:
 *     ??0?$_Hash@V?$_Umap_traits@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTrackerBase@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@PEAVCInteractionTrackerBase@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@3@@1@AEBV?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@1@@Z @ 0x18020C164 (--0-$_Hash@V-$_Umap_traits@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@V-.c)
 *     ??0?$_Hash@V?$_Umap_traits@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTrackerBase@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@IEAA@$$QEAV01@@Z @ 0x180278304 (--0-$_Hash@V-$_Umap_traits@PEAVCInteractionTrackerBase@@W4InteractionTrackerBinding_ea_180278304.c)
 *     ?RemoveTrackerBindings@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@@Z @ 0x180278934 (-RemoveTrackerBindings@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@@Z.c)
 * Callees:
 *     ?_Alloc_sentinel_and_proxy@?$list@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@2@@std@@AEAAXXZ @ 0x1801E3580 (-_Alloc_sentinel_and_proxy@-$list@U-$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindi.c)
 */

_QWORD *__fastcall std::list<std::pair<CInteractionTrackerBase * const,enum InteractionTrackerBindingModeFlags>>::list<std::pair<CInteractionTrackerBase * const,enum InteractionTrackerBindingModeFlags>>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  std::list<std::pair<CInteractionTrackerBase * const,enum InteractionTrackerBindingModeFlags>>::_Alloc_sentinel_and_proxy(
    a1,
    a2);
  return a1;
}
