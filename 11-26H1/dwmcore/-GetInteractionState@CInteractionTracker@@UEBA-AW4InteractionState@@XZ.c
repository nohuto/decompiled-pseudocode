/*
 * XREFs of ?GetInteractionState@CInteractionTracker@@UEBA?AW4InteractionState@@XZ @ 0x18013B610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionTracker::GetInteractionState(__int64 a1)
{
  return InteractionSourceManager::GetActiveManipulationInteractionState((InteractionSourceManager *)(a1 + 296));
}
