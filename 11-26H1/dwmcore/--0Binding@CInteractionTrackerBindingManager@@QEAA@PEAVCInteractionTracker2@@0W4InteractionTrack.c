/*
 * XREFs of ??0Binding@CInteractionTrackerBindingManager@@QEAA@PEAVCInteractionTracker2@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1802783DC
 * Callers:
 *     ??$_Emplace_reallocate@AEAPEAVCInteractionTracker2@@AEAPEAV1@AEAW4InteractionTrackerBindingModeFlags@@@?$vector@UBinding@CInteractionTrackerBindingManager@@V?$allocator@UBinding@CInteractionTrackerBindingManager@@@std@@@std@@AEAAPEAUBinding@CInteractionTrackerBindingManager@@QEAU23@AEAPEAVCInteractionTracker2@@1AEAW4InteractionTrackerBindingModeFlags@@@Z @ 0x180277B50 (--$_Emplace_reallocate@AEAPEAVCInteractionTracker2@@AEAPEAV1@AEAW4InteractionTrackerBindingModeF.c)
 *     ??$emplace_back@AEAPEAVCInteractionTracker2@@AEAPEAV1@AEAW4InteractionTrackerBindingModeFlags@@@?$vector@UBinding@CInteractionTrackerBindingManager@@V?$allocator@UBinding@CInteractionTrackerBindingManager@@@std@@@std@@QEAAAEAUBinding@CInteractionTrackerBindingManager@@AEAPEAVCInteractionTracker2@@0AEAW4InteractionTrackerBindingModeFlags@@@Z @ 0x18027814C (--$emplace_back@AEAPEAVCInteractionTracker2@@AEAPEAV1@AEAW4InteractionTrackerBindingModeFlags@@@.c)
 * Callees:
 *     ??4?$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCBaseExpression@@@Z @ 0x1800E53B0 (--4-$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCBaseExpression@@@Z.c)
 */

__int64 __fastcall CInteractionTrackerBindingManager::Binding::Binding(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  Microsoft::WRL::ComPtr<CBaseExpression>::operator=((__int64 *)a1, a2);
  Microsoft::WRL::ComPtr<CBaseExpression>::operator=((__int64 *)(a1 + 8), a3);
  result = a1;
  *(_DWORD *)(a1 + 16) = a4;
  return result;
}
