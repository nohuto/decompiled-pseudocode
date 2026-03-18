/*
 * XREFs of ?OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ @ 0x1801E0474
 * Callers:
 *     ?SetState@CInteractionTracker@@EEAAXW4ScrollState@@W4TrackerUpdateType@CInteractionTrackerBase@@@Z @ 0x1801C4CE0 (-SetState@CInteractionTracker@@EEAAXW4ScrollState@@W4TrackerUpdateType@CInteractionTrackerBase@@.c)
 *     ?SetState@CInteractionTracker2@@EEAAXW4ScrollState@@W4TrackerUpdateType@CInteractionTrackerBase@@@Z @ 0x180277000 (-SetState@CInteractionTracker2@@EEAAXW4ScrollState@@W4TrackerUpdateType@CInteractionTrackerBase@.c)
 * Callees:
 *     ?GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ @ 0x18013AF0C (-GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x18013B170 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 *     ?ReportInertiaStart@CInteraction@@QEAAJW4InputType@@MM@Z @ 0x1801CE990 (-ReportInertiaStart@CInteraction@@QEAAJW4InputType@@MM@Z.c)
 */

void __fastcall InteractionSourceManager::OnInteractionTrackerTransitionToInertia(InteractionSourceManager *this)
{
  struct CManipulation *ActiveManipulation; // rax
  __int64 v3; // r9
  char *v4; // rax

  if ( InteractionSourceManager::GetActiveInteraction(this) )
  {
    ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation(this);
    if ( ActiveManipulation )
    {
      v4 = (char *)ActiveManipulation + 400;
      if ( COERCE_FLOAT(*(_OWORD *)v4) != 0.0 || COERCE_FLOAT(HIDWORD(*(_QWORD *)v4)) != 0.0 )
        CInteraction::ReportInertiaStart(v3, HIDWORD(*((_QWORD *)v4 + 4)));
    }
  }
}
