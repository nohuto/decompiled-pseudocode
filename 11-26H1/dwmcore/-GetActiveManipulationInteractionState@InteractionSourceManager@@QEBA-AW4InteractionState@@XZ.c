/*
 * XREFs of ?GetActiveManipulationInteractionState@InteractionSourceManager@@QEBA?AW4InteractionState@@XZ @ 0x18013ADA0
 * Callers:
 *     ?GetInteractionState@CInteractionTracker@@UEBA?AW4InteractionState@@XZ @ 0x18013B610 (-GetInteractionState@CInteractionTracker@@UEBA-AW4InteractionState@@XZ.c)
 *     ?GetInteractionState@CInteractionTracker2@@UEBA?AW4InteractionState@@XZ @ 0x1802736D0 (-GetInteractionState@CInteractionTracker2@@UEBA-AW4InteractionState@@XZ.c)
 * Callees:
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x18013AF34 (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x18013B170 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 */

__int64 __fastcall InteractionSourceManager::GetActiveManipulationInteractionState(InteractionSourceManager *a1)
{
  InteractionSourceManager *v1; // rcx
  unsigned int v2; // r10d

  if ( InteractionSourceManager::HasActiveManipulation(a1) )
    return *((unsigned int *)InteractionSourceManager::TryGetActiveManipulation(v1) + 107);
  return v2;
}
