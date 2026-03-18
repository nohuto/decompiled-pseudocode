/*
 * XREFs of ?HasActiveManipulation@CInteractionTracker@@UEBA_NXZ @ 0x180270CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CInteractionTracker::HasActiveManipulation(CInteractionTracker *this)
{
  return InteractionSourceManager::HasActiveManipulation((CInteractionTracker *)((char *)this + 296));
}
