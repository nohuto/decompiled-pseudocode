/*
 * XREFs of ?TryGetActiveChainingHelper@CInteractionTracker@@UEBAPEAVCChainingHelper@@XZ @ 0x18013AF80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CChainingHelper *__fastcall CInteractionTracker::TryGetActiveChainingHelper(CInteractionTracker *this)
{
  return InteractionSourceManager::TryGetActiveChainingHelper((CInteractionTracker *)((char *)this + 296));
}
