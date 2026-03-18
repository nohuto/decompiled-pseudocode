/*
 * XREFs of ??1_Reallocation_guard@?$vector@UBinding@CInteractionTrackerBindingManager@@V?$allocator@UBinding@CInteractionTrackerBindingManager@@@std@@@std@@QEAA@XZ @ 0x18027853C
 * Callers:
 *     ??$_Emplace_reallocate@AEAPEAVCInteractionTracker2@@AEAPEAV1@AEAW4InteractionTrackerBindingModeFlags@@@?$vector@UBinding@CInteractionTrackerBindingManager@@V?$allocator@UBinding@CInteractionTrackerBindingManager@@@std@@@std@@AEAAPEAUBinding@CInteractionTrackerBindingManager@@QEAU23@AEAPEAVCInteractionTracker2@@1AEAW4InteractionTrackerBindingModeFlags@@@Z @ 0x180277B50 (--$_Emplace_reallocate@AEAPEAVCInteractionTracker2@@AEAPEAV1@AEAW4InteractionTrackerBindingModeF.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UBinding@CInteractionTrackerBindingManager@@@std@@@std@@YAXPEAUBinding@CInteractionTrackerBindingManager@@QEAU12@AEAV?$allocator@UBinding@CInteractionTrackerBindingManager@@@0@@Z @ 0x180277B18 (--$_Destroy_range@V-$allocator@UBinding@CInteractionTrackerBindingManager@@@std@@@std@@YAXPEAUBi.c)
 */

void __fastcall std::vector<CInteractionTrackerBindingManager::Binding>::_Reallocation_guard::~_Reallocation_guard(
        __int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
  {
    std::_Destroy_range<std::allocator<CInteractionTrackerBindingManager::Binding>>(
      *(CInteractionTrackerBindingManager::Binding **)(a1 + 24),
      *(CInteractionTrackerBindingManager::Binding **)(a1 + 32));
    std::_Deallocate<16>(*(void **)(a1 + 8), 24LL * *(_QWORD *)(a1 + 16));
  }
}
