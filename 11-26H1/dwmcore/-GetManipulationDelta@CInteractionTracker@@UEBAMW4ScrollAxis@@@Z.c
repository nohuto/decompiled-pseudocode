/*
 * XREFs of ?GetManipulationDelta@CInteractionTracker@@UEBAMW4ScrollAxis@@@Z @ 0x1801E3C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__m128 __fastcall CInteractionTracker::GetManipulationDelta(__int64 a1)
{
  return InteractionSourceManager::GetActiveManipulationDelta((InteractionSourceManager *)(a1 + 296));
}
