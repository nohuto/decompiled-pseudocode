/*
 * XREFs of ?GetManipulationDelta@CInteractionTracker2@@UEBAMW4ScrollAxis@@@Z @ 0x1802736F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__m128 __fastcall CInteractionTracker2::GetManipulationDelta(__int64 a1)
{
  return InteractionSourceManager::GetActiveManipulationDelta((InteractionSourceManager *)(a1 + 528));
}
