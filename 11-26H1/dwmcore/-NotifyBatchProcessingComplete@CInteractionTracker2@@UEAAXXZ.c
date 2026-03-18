/*
 * XREFs of ?NotifyBatchProcessingComplete@CInteractionTracker2@@UEAAXXZ @ 0x18013B050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteractionTracker2::NotifyBatchProcessingComplete(CInteractionTracker2 *this)
{
  InteractionSourceManager::UpdateActiveManipulationsIfNecessary((CInteractionTracker2 *)((char *)this + 528));
}
