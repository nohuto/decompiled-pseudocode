/*
 * XREFs of ?RegisterIndirectTargetsForBoundTrackers@CInteractionTracker@@UEAAXPEAVCBaseExpression@@@Z @ 0x1801DDAC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteractionTracker::RegisterIndirectTargetsForBoundTrackers(
        CInteractionTrackerBindingManager **this,
        struct CBaseExpression *a2)
{
  if ( this[75] )
    CInteractionTrackerBindingManager::RegisterIndirectTargetsForBoundTrackers(
      this[75],
      (struct CInteractionTrackerBase *)this,
      a2);
}
