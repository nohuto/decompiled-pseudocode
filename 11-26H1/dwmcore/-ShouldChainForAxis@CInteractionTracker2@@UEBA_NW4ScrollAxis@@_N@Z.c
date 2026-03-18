/*
 * XREFs of ?ShouldChainForAxis@CInteractionTracker2@@UEBA_NW4ScrollAxis@@_N@Z @ 0x1802772D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CInteractionTracker2::ShouldChainForAxis(__int64 a1, unsigned int a2, char a3)
{
  return InteractionSourceManager::ShouldChainForAxis((InteractionSourceManager *)(a1 + 528), a2, a3);
}
