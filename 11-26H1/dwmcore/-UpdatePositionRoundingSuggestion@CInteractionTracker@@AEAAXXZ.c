/*
 * XREFs of ?UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ @ 0x18013967C
 * Callers:
 *     ?SetPositionInternal@CInteractionTracker@@EEAAXAEBUD2DVector3@@W4TrackerUpdateType@CInteractionTrackerBase@@@Z @ 0x180139520 (-SetPositionInternal@CInteractionTracker@@EEAAXAEBUD2DVector3@@W4TrackerUpdateType@CInteractionT.c)
 *     ?SetState@CInteractionTracker@@EEAAXW4ScrollState@@W4TrackerUpdateType@CInteractionTrackerBase@@@Z @ 0x1801C4CE0 (-SetState@CInteractionTracker@@EEAAXW4ScrollState@@W4TrackerUpdateType@CInteractionTrackerBase@@.c)
 *     ??0CInteractionTracker@@QEAA@PEAVCComposition@@@Z @ 0x18020CEE8 (--0CInteractionTracker@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ?BigHammerInvalidateConsumingAnimations@CInteractionTracker@@IEAAXW4Enum@InteractionTrackerProperty@@@Z @ 0x1801398A0 (-BigHammerInvalidateConsumingAnimations@CInteractionTracker@@IEAAXW4Enum@InteractionTrackerPrope.c)
 *     ?IsPositionRoundingSuggestedForActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x18013ADCC (-IsPositionRoundingSuggestedForActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 */

void __fastcall CInteractionTracker::UpdatePositionRoundingSuggestion(CInteractionTracker *this)
{
  int v1; // edx
  bool IsPositionRoundingSuggestedForActiveManipulation; // r8
  CInteractionTracker *v3; // r10

  v1 = *((_DWORD *)this + 22);
  IsPositionRoundingSuggestedForActiveManipulation = 0;
  v3 = this;
  if ( v1 )
  {
    if ( v1 == 1 )
      IsPositionRoundingSuggestedForActiveManipulation = InteractionSourceManager::IsPositionRoundingSuggestedForActiveManipulation((CInteractionTracker *)((char *)this + 296));
  }
  else
  {
    IsPositionRoundingSuggestedForActiveManipulation = 1;
  }
  if ( (*((_BYTE *)v3 + 596) & 1) != IsPositionRoundingSuggestedForActiveManipulation )
  {
    *((_BYTE *)v3 + 596) = IsPositionRoundingSuggestedForActiveManipulation | *((_BYTE *)v3 + 596) & 0xFE;
    CInteractionTracker::BigHammerInvalidateConsumingAnimations(v3, 60LL);
  }
}
