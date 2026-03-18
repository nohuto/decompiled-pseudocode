/*
 * XREFs of ?_Change_array@?$vector@UBinding@CInteractionTrackerBindingManager@@V?$allocator@UBinding@CInteractionTrackerBindingManager@@@std@@@std@@AEAAXQEAUBinding@CInteractionTrackerBindingManager@@_K1@Z @ 0x1802794E4
 * Callers:
 *     ??$_Emplace_reallocate@AEAPEAVCInteractionTracker2@@AEAPEAV1@AEAW4InteractionTrackerBindingModeFlags@@@?$vector@UBinding@CInteractionTrackerBindingManager@@V?$allocator@UBinding@CInteractionTrackerBindingManager@@@std@@@std@@AEAAPEAUBinding@CInteractionTrackerBindingManager@@QEAU23@AEAPEAVCInteractionTracker2@@1AEAW4InteractionTrackerBindingModeFlags@@@Z @ 0x180277B50 (--$_Emplace_reallocate@AEAPEAVCInteractionTracker2@@AEAPEAV1@AEAW4InteractionTrackerBindingModeF.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UBinding@CInteractionTrackerBindingManager@@@std@@@std@@YAXPEAUBinding@CInteractionTrackerBindingManager@@QEAU12@AEAV?$allocator@UBinding@CInteractionTrackerBindingManager@@@0@@Z @ 0x180277B18 (--$_Destroy_range@V-$allocator@UBinding@CInteractionTrackerBindingManager@@@std@@@std@@YAXPEAUBi.c)
 */

__int64 __fastcall std::vector<CInteractionTrackerBindingManager::Binding>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  CInteractionTrackerBindingManager::Binding *v6; // rcx
  __int64 result; // rax

  v6 = *(CInteractionTrackerBindingManager::Binding **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<CInteractionTrackerBindingManager::Binding>>(
      v6,
      *(CInteractionTrackerBindingManager::Binding **)(a1 + 8));
    std::_Deallocate<16>(*(void **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 24 * a3;
  result = 3 * a4;
  *(_QWORD *)(a1 + 16) = a2 + 24 * a4;
  return result;
}
