/*
 * XREFs of ?UpdatePositionRoundingSuggestion@CInteractionTracker2@@AEAAXXZ @ 0x18021B0C0
 * Callers:
 *     ??0CInteractionTracker2@@QEAA@PEAVCComposition@@PEAVCChannelContext@@@Z @ 0x18010823C (--0CInteractionTracker2@@QEAA@PEAVCComposition@@PEAVCChannelContext@@@Z.c)
 *     ?SetPositionInternal@CInteractionTracker2@@EEAAXAEBUD2DVector3@@W4TrackerUpdateType@CInteractionTrackerBase@@@Z @ 0x1802766B0 (-SetPositionInternal@CInteractionTracker2@@EEAAXAEBUD2DVector3@@W4TrackerUpdateType@CInteraction.c)
 *     ?SetState@CInteractionTracker2@@EEAAXW4ScrollState@@W4TrackerUpdateType@CInteractionTrackerBase@@@Z @ 0x180277000 (-SetState@CInteractionTracker2@@EEAAXW4ScrollState@@W4TrackerUpdateType@CInteractionTrackerBase@.c)
 * Callees:
 *     ?BigHammerInvalidateConsumingAnimations@CInteractionTracker2@@IEAAXW4Enum@InteractionTracker2Property@@@Z @ 0x1801396E4 (-BigHammerInvalidateConsumingAnimations@CInteractionTracker2@@IEAAXW4Enum@InteractionTracker2Pro.c)
 *     ?IsPositionRoundingSuggestedForActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x18013ADCC (-IsPositionRoundingSuggestedForActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 */

void __fastcall CInteractionTracker2::UpdatePositionRoundingSuggestion(CInteractionTracker2 *this)
{
  int v1; // edx
  char IsPositionRoundingSuggestedForActiveManipulation; // r8
  CInteractionTracker2 *v3; // r10

  v1 = *((_DWORD *)this + 22);
  IsPositionRoundingSuggestedForActiveManipulation = 0;
  v3 = this;
  if ( v1 )
  {
    if ( v1 == 1 )
      IsPositionRoundingSuggestedForActiveManipulation = InteractionSourceManager::IsPositionRoundingSuggestedForActiveManipulation((CInteractionTracker2 *)((char *)this + 528));
  }
  else
  {
    IsPositionRoundingSuggestedForActiveManipulation = 1;
  }
  if ( ((*((_BYTE *)v3 + 828) & 2) != 0) != IsPositionRoundingSuggestedForActiveManipulation )
  {
    *((_BYTE *)v3 + 828) = (2 * IsPositionRoundingSuggestedForActiveManipulation) | *((_BYTE *)v3 + 828) & 0xFD;
    CInteractionTracker2::BigHammerInvalidateConsumingAnimations((__int64)v3, 63LL);
  }
}
