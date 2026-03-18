/*
 * XREFs of ?ShouldChainForAxis@CInteractionTracker@@UEBA_NW4ScrollAxis@@_N@Z @ 0x180138D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionTracker::ShouldChainForAxis(__int64 a1)
{
  return InteractionSourceManager::ShouldChainForAxis(a1 + 296);
}
