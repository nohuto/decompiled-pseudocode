/*
 * XREFs of ?GetInteractionState@CInteractionTracker2@@UEBA?AW4InteractionState@@XZ @ 0x1802736D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionTracker2::GetInteractionState(__int64 a1)
{
  return InteractionSourceManager::GetActiveManipulationInteractionState((InteractionSourceManager *)(a1 + 528));
}
