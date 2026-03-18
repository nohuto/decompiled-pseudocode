/*
 * XREFs of ?PerformExpressionCompletePreProcessing@CInteractionTracker2@@UEAAXXZ @ 0x18019E5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@@Z @ 0x18019E628 (-TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInterac.c)
 */

void __fastcall CInteractionTracker2::PerformExpressionCompletePreProcessing(CInteractionTrackerBindingManager **this)
{
  if ( this[131] && *((_DWORD *)this + 22) == 2 && (*((_BYTE *)this + 829) & 1) != 0 )
    CInteractionTrackerBindingManager::TryUpdateBoundTrackerInertiaCallbackValues(
      this[131],
      (struct CInteractionTrackerBase *)this);
}
