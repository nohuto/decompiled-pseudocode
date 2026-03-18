/*
 * XREFs of ?TryGetActiveChainingHelper@CInteractionTracker2@@UEBAPEAVCChainingHelper@@XZ @ 0x18021E230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CChainingHelper *__fastcall CInteractionTracker2::TryGetActiveChainingHelper(CInteractionTracker2 *this)
{
  return InteractionSourceManager::TryGetActiveChainingHelper((CInteractionTracker2 *)((char *)this + 528));
}
