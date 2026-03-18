/*
 * XREFs of ?_Check_max_size@?$_Hash@V?$_Umap_traits@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTrackerBase@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@IEBAXXZ @ 0x18013644C
 * Callers:
 *     ??$emplace@AEAPEAVCInteractionTrackerBase@@AEAW4InteractionTrackerBindingModeFlags@@@?$_Hash@V?$_Umap_traits@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTrackerBase@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@_N@1@AEAPEAVCInteractionTrackerBase@@AEAW4InteractionTrackerBindingModeFlags@@@Z @ 0x1801360F8 (--$emplace@AEAPEAVCInteractionTrackerBase@@AEAW4InteractionTrackerBindingModeFlags@@@-$_Hash@V-$.c)
 *     ??$emplace@AEAPEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@?$_Hash@V?$_Umap_traits@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTrackerBase@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@_N@1@AEAPEAVCInteractionTrackerBase@@$$QEAW4InteractionTrackerBindingModeFlags@@@Z @ 0x1801361EC (--$emplace@AEAPEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@-$_Hash@V-$_Um.c)
 *     ??$emplace@AEBU?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@?$_Hash@V?$_Umap_traits@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTrackerBase@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@1@@Z @ 0x18027804C (--$emplace@AEBU-$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<CInteractionTrackerBase *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTrackerBase *,std::hash<CInteractionTrackerBase *>,std::equal_to<CInteractionTrackerBase *>>,std::allocator<std::pair<CInteractionTrackerBase * const,enum InteractionTrackerBindingModeFlags>>,0>>::_Check_max_size(
        __int64 a1)
{
  __int64 result; // rax

  result = 0x7FFFFFFFFFFFFFFLL;
  if ( *(_QWORD *)(a1 + 16) == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("unordered_map/set too long");
  return result;
}
