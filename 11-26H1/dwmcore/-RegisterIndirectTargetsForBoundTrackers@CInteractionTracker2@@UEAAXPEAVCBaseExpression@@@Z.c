/*
 * XREFs of ?RegisterIndirectTargetsForBoundTrackers@CInteractionTracker2@@UEAAXPEAVCBaseExpression@@@Z @ 0x1801D9990
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@PEAVCBaseExpression@@@Z @ 0x1801D99BC (-RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractio.c)
 */

void __fastcall CInteractionTracker2::RegisterIndirectTargetsForBoundTrackers(
        CInteractionTrackerBindingManager **this,
        struct CBaseExpression *a2)
{
  if ( this[131] )
    CInteractionTrackerBindingManager::RegisterIndirectTargetsForBoundTrackers(
      this[131],
      (struct CInteractionTrackerBase *)this,
      a2);
}
