/*
 * XREFs of ?AnimationUpdated@CInteractionTracker2@@UEAAXXZ @ 0x180271B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteractionTracker2::AnimationUpdated(CInteractionTracker2 *this)
{
  CInteractionTrackerBindingManager *v2; // rcx

  v2 = (CInteractionTrackerBindingManager *)*((_QWORD *)this + 131);
  if ( !v2 )
    v2 = *(CInteractionTrackerBindingManager **)(*((_QWORD *)this + 7) + 104LL);
  CInteractionTrackerBindingManager::TryCleanTrackers(v2);
}
