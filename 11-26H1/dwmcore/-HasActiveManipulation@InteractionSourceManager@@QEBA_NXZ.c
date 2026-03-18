/*
 * XREFs of ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x18013AF34
 * Callers:
 *     ?GetActiveManipulationVelocity@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z @ 0x180139210 (-GetActiveManipulationVelocity@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetActiveManipulationDelta@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z @ 0x18013A0F0 (-GetActiveManipulationDelta@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@PEAM@Z @ 0x18013A2CC (-CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@PEAM@Z.c)
 *     ?OnInteractionTrackerTransitionToCustomAnimation@InteractionSourceManager@@QEAAXXZ @ 0x18013AD00 (-OnInteractionTrackerTransitionToCustomAnimation@InteractionSourceManager@@QEAAXXZ.c)
 *     ?GetActiveManipulationInteractionState@InteractionSourceManager@@QEBA?AW4InteractionState@@XZ @ 0x18013ADA0 (-GetActiveManipulationInteractionState@InteractionSourceManager@@QEBA-AW4InteractionState@@XZ.c)
 *     ?IsPositionRoundingSuggestedForActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x18013ADCC (-IsPositionRoundingSuggestedForActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?TelemetrySetPosition@InteractionSourceManager@@QEAAX_K@Z @ 0x18013AE78 (-TelemetrySetPosition@InteractionSourceManager@@QEAAX_K@Z.c)
 *     ?OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x18013B374 (-OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 *     ?IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z @ 0x18013C94C (-IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x18013E0F4 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?GetActiveManipulationCenterpoint@InteractionSourceManager@@QEBA?AUD2DVector3@@XZ @ 0x1801E211C (-GetActiveManipulationCenterpoint@InteractionSourceManager@@QEBA-AUD2DVector3@@XZ.c)
 *     ?GetSourceCenterpointModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x18021E554 (-GetSourceCenterpointModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditiona.c)
 *     ?CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@W4ScrollState@@W4ScrollAxis@@PEAM@Z @ 0x18027054C (-CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@W4ScrollState@.c)
 *     ?HasActiveManipulation@CInteractionTracker@@UEBA_NXZ @ 0x180270CC0 (-HasActiveManipulation@CInteractionTracker@@UEBA_NXZ.c)
 *     ?CalculateCenterPointForAxis@CInteractionTracker2@@AEAAJPEAVCExpressionValueStack@@W4ScrollState@@W4ScrollAxis@@PEAM@Z @ 0x180271EA8 (-CalculateCenterPointForAxis@CInteractionTracker2@@AEAAJPEAVCExpressionValueStack@@W4ScrollState.c)
 *     ?HasActiveManipulation@CInteractionTracker2@@UEBA_NXZ @ 0x180273E30 (-HasActiveManipulation@CInteractionTracker2@@UEBA_NXZ.c)
 *     ?TransitionToInertia@CInteractionTracker2@@AEAA_NW4InertiaReason@1@@Z @ 0x180277668 (-TransitionToInertia@CInteractionTracker2@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?ShouldChainAllForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z @ 0x18028E4AC (-ShouldChainAllForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall InteractionSourceManager::HasActiveManipulation(InteractionSourceManager *this)
{
  char v1; // r9

  if ( !*((_QWORD *)this + 13) )
    return 0;
  v1 = 1;
  if ( !*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10)
                              + 8 * ((*((_QWORD *)this + 11) - 1LL) & (*((_QWORD *)this + 12) >> 1)))
                  + 8 * (*((_QWORD *)this + 12) & 1LL)) )
    return 0;
  return v1;
}
