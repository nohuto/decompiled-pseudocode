/*
 * XREFs of ?_Alloc_sentinel_and_proxy@?$list@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@2@@std@@AEAAXXZ @ 0x1801E3580
 * Callers:
 *     ??$?0U_Move_allocator_tag@std@@V?$allocator@U?$_List_node@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@PEAX@std@@@1@$0A@@?$list@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@2@@std@@AEAA@U_Move_allocator_tag@1@AEAV?$allocator@U?$_List_node@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@PEAX@std@@@1@@Z @ 0x18020C1C8 (--$-0U_Move_allocator_tag@std@@V-$allocator@U-$_List_node@U-$pair@QEAVCInteractionTrackerBase@@W.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::list<std::pair<CInteractionTrackerBase * const,enum InteractionTrackerBindingModeFlags>>::_Alloc_sentinel_and_proxy(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *result; // rax

  result = std::_Allocate<16,std::_Default_allocate_traits>(0x20uLL, a2);
  *result = result;
  result[1] = result;
  *a1 = result;
  return result;
}
