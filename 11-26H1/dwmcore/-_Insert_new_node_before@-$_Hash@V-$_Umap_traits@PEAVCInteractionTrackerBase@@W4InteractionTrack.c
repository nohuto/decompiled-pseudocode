/*
 * XREFs of ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTrackerBase@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@PEAX@2@_KQEAU32@1@Z @ 0x180136360
 * Callers:
 *     ??$emplace@AEAPEAVCInteractionTrackerBase@@AEAW4InteractionTrackerBindingModeFlags@@@?$_Hash@V?$_Umap_traits@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTrackerBase@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@_N@1@AEAPEAVCInteractionTrackerBase@@AEAW4InteractionTrackerBindingModeFlags@@@Z @ 0x1801360F8 (--$emplace@AEAPEAVCInteractionTrackerBase@@AEAW4InteractionTrackerBindingModeFlags@@@-$_Hash@V-$.c)
 *     ??$emplace@AEAPEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@?$_Hash@V?$_Umap_traits@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTrackerBase@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@_N@1@AEAPEAVCInteractionTrackerBase@@$$QEAW4InteractionTrackerBindingModeFlags@@@Z @ 0x1801361EC (--$emplace@AEAPEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@-$_Hash@V-$_Um.c)
 *     ??$emplace@AEBU?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@?$_Hash@V?$_Umap_traits@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTrackerBase@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@1@@Z @ 0x18027804C (--$emplace@AEBU-$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<CInteractionTrackerBase *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTrackerBase *,std::hash<CInteractionTrackerBase *>,std::equal_to<CInteractionTrackerBase *>>,std::allocator<std::pair<CInteractionTrackerBase * const,enum InteractionTrackerBindingModeFlags>>,0>>::_Insert_new_node_before(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v4; // r10
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r11

  v4 = *(_QWORD **)(a3 + 8);
  ++a1[2];
  *a4 = a3;
  a4[1] = v4;
  *v4 = a4;
  *(_QWORD *)(a3 + 8) = a4;
  v5 = a2 & a1[6];
  v6 = a1[3];
  v7 = 2 * v5;
  v8 = *(_QWORD *)(v6 + 8 * v7);
  if ( v8 == a1[1] )
  {
    *(_QWORD *)(v6 + 8 * v7) = a4;
  }
  else
  {
    if ( v8 == a3 )
    {
      *(_QWORD *)(v6 + 8 * v7) = a4;
      return a4;
    }
    if ( *(_QWORD **)(v6 + 8 * v7 + 8) != v4 )
      return a4;
  }
  *(_QWORD *)(v6 + 8 * v7 + 8) = a4;
  return a4;
}
