/*
 * XREFs of ?DetachFromChannel@CInteractionTracker@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18018AE40
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveTrackerBindings@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@@Z @ 0x180278934 (-RemoveTrackerBindings@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@@Z.c)
 */

void __fastcall CInteractionTracker::DetachFromChannel(CInteractionTracker *this, struct CChannelContext *a2, bool a3)
{
  CInteractionTrackerBindingManager *v5; // rcx

  v5 = (CInteractionTrackerBindingManager *)*((_QWORD *)this + 75);
  if ( v5 )
    CInteractionTrackerBindingManager::RemoveTrackerBindings(v5, this);
  CNotificationResource::DetachFromChannel(this, a2, a3);
}
