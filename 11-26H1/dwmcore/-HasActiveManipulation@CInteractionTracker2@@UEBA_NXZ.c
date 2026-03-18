/*
 * XREFs of ?HasActiveManipulation@CInteractionTracker2@@UEBA_NXZ @ 0x180273E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CInteractionTracker2::HasActiveManipulation(CInteractionTracker2 *this)
{
  return InteractionSourceManager::HasActiveManipulation((CInteractionTracker2 *)((char *)this + 528));
}
