/*
 * XREFs of ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x18013B170
 * Callers:
 *     ?GetActiveManipulationVelocity@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z @ 0x180139210 (-GetActiveManipulationVelocity@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetActiveManipulationDelta@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z @ 0x18013A0F0 (-GetActiveManipulationDelta@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@PEAM@Z @ 0x18013A2CC (-CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@PEAM@Z.c)
 *     ?ShouldChainForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@_N@Z @ 0x18013AD24 (-ShouldChainForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@_N@Z.c)
 *     ?GetActiveManipulationInteractionState@InteractionSourceManager@@QEBA?AW4InteractionState@@XZ @ 0x18013ADA0 (-GetActiveManipulationInteractionState@InteractionSourceManager@@QEBA-AW4InteractionState@@XZ.c)
 *     ?IsPositionRoundingSuggestedForActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x18013ADCC (-IsPositionRoundingSuggestedForActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?TelemetrySetPosition@InteractionSourceManager@@QEAAX_K@Z @ 0x18013AE78 (-TelemetrySetPosition@InteractionSourceManager@@QEAAX_K@Z.c)
 *     ?NotifyBatchProcessingComplete@CInteractionTracker@@UEAAXXZ @ 0x18013B070 (-NotifyBatchProcessingComplete@CInteractionTracker@@UEAAXXZ.c)
 *     ?UpdateActiveManipulationsIfNecessary@InteractionSourceManager@@QEAAXXZ @ 0x18013B100 (-UpdateActiveManipulationsIfNecessary@InteractionSourceManager@@QEAAXXZ.c)
 *     ?IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z @ 0x18013C94C (-IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z.c)
 *     ?OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ @ 0x1801E0474 (-OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ.c)
 *     ?UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Boundary@@@Z @ 0x1801E1948 (-UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Bound.c)
 *     ?GetActiveManipulationCenterpoint@InteractionSourceManager@@QEBA?AUD2DVector3@@XZ @ 0x1801E211C (-GetActiveManipulationCenterpoint@InteractionSourceManager@@QEBA-AUD2DVector3@@XZ.c)
 *     ?GetSourceCenterpointModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x18021E554 (-GetSourceCenterpointModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditiona.c)
 *     ?OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x18028E1E0 (-OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 *     ?ShouldChainAllForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z @ 0x18028E4AC (-ShouldChainAllForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z.c)
 * Callees:
 *     <none>
 */

struct CManipulation *__fastcall InteractionSourceManager::TryGetActiveManipulation(InteractionSourceManager *this)
{
  struct CManipulation *result; // rax

  result = 0LL;
  if ( *((_QWORD *)this + 13) )
    return *(struct CManipulation **)(*(_QWORD *)(*((_QWORD *)this + 10)
                                                + 8 * ((*((_QWORD *)this + 11) - 1LL) & (*((_QWORD *)this + 12) >> 1)))
                                    + 8 * (*((_QWORD *)this + 12) & 1LL));
  return result;
}
