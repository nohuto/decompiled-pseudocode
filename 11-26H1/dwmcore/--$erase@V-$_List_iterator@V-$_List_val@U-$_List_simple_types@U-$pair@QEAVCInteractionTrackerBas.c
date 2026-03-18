/*
 * XREFs of ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTrackerBase@@V?$unordered_map@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@4@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@PEAVCInteractionTrackerBase@@V?$unordered_map@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@4@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@V?$_Uhash_compare@PEAVCInteractionTrackerBase@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@3@@3@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@V?$unordered_map@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@4@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTrackerBase@@V?$unordered_map@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@4@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@@std@@@std@@@1@V21@@Z @ 0x1802781A4
 * Callers:
 *     ?AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBase@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x180137394 (-AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBase@.c)
 *     ?RemoveTrackerBindings@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@@Z @ 0x180278934 (-RemoveTrackerBindings@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@@Z.c)
 * Callees:
 *     ??R?$_Conditionally_enabled_hash@PEAVCBaseExpression@@$00@std@@SA_KAEBQEAVCBaseExpression@@@Z @ 0x180211A54 (--R-$_Conditionally_enabled_hash@PEAVCBaseExpression@@$00@std@@SA_KAEBQEAVCBaseExpression@@@Z.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@QEAVCInteractionTrackerBase@@V?$unordered_map@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@4@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAVCInteractionTrackerBase@@V?$unordered_map@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@4@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAVCInteractionTrackerBase@@V?$unordered_map@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@4@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180277DE0 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@QEAVCInteractionTrackerBase@@V-$unordered_map@PE.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<CInteractionTrackerBase *,std::unordered_map<CInteractionTrackerBase *,enum InteractionTrackerBindingModeFlags>,std::_Uhash_compare<CInteractionTrackerBase *,std::hash<CInteractionTrackerBase *>,std::equal_to<CInteractionTrackerBase *>>,std::allocator<std::pair<CInteractionTrackerBase * const,std::unordered_map<CInteractionTrackerBase *,enum InteractionTrackerBindingModeFlags>>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<CInteractionTrackerBase * const,std::unordered_map<CInteractionTrackerBase *,enum InteractionTrackerBindingModeFlags>>>>>,0>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // r11
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rbx

  v5 = std::_Conditionally_enabled_hash<CBaseExpression *,1>::operator()((unsigned __int8 *)(a3 + 16));
  v8 = a1[3];
  v9 = 2 * (a1[6] & v5);
  if ( *(_QWORD **)(v8 + 16 * (a1[6] & v5) + 8) == v7 )
  {
    if ( *(_QWORD **)(v8 + 16 * (a1[6] & v5)) == v7 )
    {
      v10 = a1[1];
      *(_QWORD *)(v8 + 8 * v9) = v10;
    }
    else
    {
      v10 = v7[1];
    }
    *(_QWORD *)(v8 + 8 * v9 + 8) = v10;
  }
  else if ( *(_QWORD **)(v8 + 16 * (a1[6] & v5)) == v7 )
  {
    *(_QWORD *)(v8 + 16 * (a1[6] & v5)) = *v7;
  }
  v11 = *v7;
  --a1[2];
  *(_QWORD *)v7[1] = v11;
  *(_QWORD *)(v11 + 8) = v7[1];
  std::_List_node<std::pair<CInteractionTrackerBase * const,std::unordered_map<CInteractionTrackerBase *,enum InteractionTrackerBindingModeFlags>>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<CInteractionTrackerBase * const,std::unordered_map<CInteractionTrackerBase *,enum InteractionTrackerBindingModeFlags>>,void *>>>(
    v6,
    v7);
  *a2 = v11;
  return a2;
}
