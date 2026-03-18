/*
 * XREFs of ?PerformExpressionCompletePreProcessing@CInteractionTracker@@UEAAXXZ @ 0x18019E5C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteractionTracker::PerformExpressionCompletePreProcessing(CInteractionTrackerBindingManager **this)
{
  if ( this[75] && *((_DWORD *)this + 22) == 2 && *((char *)this + 596) < 0 )
    CInteractionTrackerBindingManager::TryUpdateBoundTrackerInertiaCallbackValues(
      this[75],
      (struct CInteractionTrackerBase *)this);
}
