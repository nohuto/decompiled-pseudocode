/*
 * XREFs of ?GetManipulationVelocity@CInteractionTracker2@@UEBAMW4ScrollAxis@@@Z @ 0x180273710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__m128 __fastcall CInteractionTracker2::GetManipulationVelocity(__int64 a1)
{
  return InteractionSourceManager::GetActiveManipulationVelocity((InteractionSourceManager *)(a1 + 528));
}
