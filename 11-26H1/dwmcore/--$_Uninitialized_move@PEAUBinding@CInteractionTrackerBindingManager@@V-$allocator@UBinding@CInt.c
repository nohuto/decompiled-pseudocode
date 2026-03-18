/*
 * XREFs of ??$_Uninitialized_move@PEAUBinding@CInteractionTrackerBindingManager@@V?$allocator@UBinding@CInteractionTrackerBindingManager@@@std@@@std@@YAPEAUBinding@CInteractionTrackerBindingManager@@QEAU12@0PEAU12@AEAV?$allocator@UBinding@CInteractionTrackerBindingManager@@@0@@Z @ 0x180277E0C
 * Callers:
 *     ??$_Emplace_reallocate@AEAPEAVCInteractionTracker2@@AEAPEAV1@AEAW4InteractionTrackerBindingModeFlags@@@?$vector@UBinding@CInteractionTrackerBindingManager@@V?$allocator@UBinding@CInteractionTrackerBindingManager@@@std@@@std@@AEAAPEAUBinding@CInteractionTrackerBindingManager@@QEAU23@AEAPEAVCInteractionTracker2@@1AEAW4InteractionTrackerBindingModeFlags@@@Z @ 0x180277B50 (--$_Emplace_reallocate@AEAPEAVCInteractionTracker2@@AEAPEAV1@AEAW4InteractionTrackerBindingModeF.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UBinding@CInteractionTrackerBindingManager@@@std@@@std@@YAXPEAUBinding@CInteractionTrackerBindingManager@@QEAU12@AEAV?$allocator@UBinding@CInteractionTrackerBindingManager@@@0@@Z @ 0x180277B18 (--$_Destroy_range@V-$allocator@UBinding@CInteractionTrackerBindingManager@@@std@@@std@@YAXPEAUBi.c)
 *     ??0?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1802782E0 (--0-$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 */

CInteractionTrackerBindingManager::Binding *__fastcall std::_Uninitialized_move<CInteractionTrackerBindingManager::Binding *>(
        __int64 a1,
        __int64 a2,
        CInteractionTrackerBindingManager::Binding *a3)
{
  _DWORD *v4; // r8
  __int64 v5; // r9
  __int64 v6; // r8
  _DWORD *v7; // r8
  __int64 v8; // r9
  _DWORD *v9; // r10

  if ( a1 != a2 )
  {
    v4 = (_DWORD *)(a1 + 16);
    do
    {
      Microsoft::WRL::ComPtr<CInteractionTracker2>::ComPtr<CInteractionTracker2>(a3, v4 - 4);
      Microsoft::WRL::ComPtr<CInteractionTracker2>::ComPtr<CInteractionTracker2>(v6 + v5 - 8, v6 - 8);
      a3 = (CInteractionTrackerBindingManager::Binding *)((char *)a3 + 24);
      *(_DWORD *)((char *)v7 + v8) = *v7;
      v4 = v7 + 6;
    }
    while ( v4 - 4 != v9 );
  }
  std::_Destroy_range<std::allocator<CInteractionTrackerBindingManager::Binding>>(a3, a3);
  return a3;
}
