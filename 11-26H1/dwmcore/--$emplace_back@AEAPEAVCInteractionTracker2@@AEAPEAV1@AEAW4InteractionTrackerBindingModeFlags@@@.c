/*
 * XREFs of ??$emplace_back@AEAPEAVCInteractionTracker2@@AEAPEAV1@AEAW4InteractionTrackerBindingModeFlags@@@?$vector@UBinding@CInteractionTrackerBindingManager@@V?$allocator@UBinding@CInteractionTrackerBindingManager@@@std@@@std@@QEAAAEAUBinding@CInteractionTrackerBindingManager@@AEAPEAVCInteractionTracker2@@0AEAW4InteractionTrackerBindingModeFlags@@@Z @ 0x18027814C
 * Callers:
 *     ?ProcessSetTrackerBindingMode@CInteractionTrackerBindingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKERBINDINGMANAGER_SETTRACKERBINDINGMODE@@@Z @ 0x18014B7D0 (-ProcessSetTrackerBindingMode@CInteractionTrackerBindingManager@@QEAAJPEAVCResourceTable@@PEBUta.c)
 *     ?UpdateBindings@CInteractionTrackerBindingManager@@AEAAXXZ @ 0x1802792AC (-UpdateBindings@CInteractionTrackerBindingManager@@AEAAXXZ.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEAPEAVCInteractionTracker2@@AEAPEAV1@AEAW4InteractionTrackerBindingModeFlags@@@?$vector@UBinding@CInteractionTrackerBindingManager@@V?$allocator@UBinding@CInteractionTrackerBindingManager@@@std@@@std@@AEAAPEAUBinding@CInteractionTrackerBindingManager@@QEAU23@AEAPEAVCInteractionTracker2@@1AEAW4InteractionTrackerBindingModeFlags@@@Z @ 0x180277B50 (--$_Emplace_reallocate@AEAPEAVCInteractionTracker2@@AEAPEAV1@AEAW4InteractionTrackerBindingModeF.c)
 *     ??0Binding@CInteractionTrackerBindingManager@@QEAA@PEAVCInteractionTracker2@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1802783DC (--0Binding@CInteractionTrackerBindingManager@@QEAA@PEAVCInteractionTracker2@@0W4InteractionTrack.c)
 */

char *__fastcall std::vector<CInteractionTrackerBindingManager::Binding>::emplace_back<CInteractionTracker2 * &,CInteractionTracker2 * &,enum InteractionTrackerBindingModeFlags &>(
        __int64 *a1,
        _QWORD *a2,
        __int64 *a3,
        unsigned int *a4)
{
  __int64 v4; // rax
  __int64 v6; // rdx

  v4 = a1[1];
  if ( v4 == a1[2] )
    return std::vector<CInteractionTrackerBindingManager::Binding>::_Emplace_reallocate<CInteractionTracker2 * &,CInteractionTracker2 * &,enum InteractionTrackerBindingModeFlags &>(
             a1,
             v4,
             a2,
             a3,
             a4);
  CInteractionTrackerBindingManager::Binding::Binding(a1[1], *a2, *a3, *a4);
  v6 = a1[1];
  a1[1] = v6 + 24;
  return (char *)v6;
}
