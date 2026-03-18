/*
 * XREFs of ?GetManipulationVelocity@CInteractionTracker@@UEBAMW4ScrollAxis@@@Z @ 0x1801E3C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__m128 __fastcall CInteractionTracker::GetManipulationVelocity(__int64 a1)
{
  return InteractionSourceManager::GetActiveManipulationVelocity((InteractionSourceManager *)(a1 + 296));
}
