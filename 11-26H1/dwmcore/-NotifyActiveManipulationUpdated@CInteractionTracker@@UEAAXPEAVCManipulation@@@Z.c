/*
 * XREFs of ?NotifyActiveManipulationUpdated@CInteractionTracker@@UEAAXPEAVCManipulation@@@Z @ 0x180270E50
 * Callers:
 *     <none>
 * Callees:
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x18013CF10 (-TransitionToInContact@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x18013E0F4 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 */

void __fastcall CInteractionTracker::NotifyActiveManipulationUpdated(
        CInteractionTracker *this,
        struct CManipulation *a2)
{
  int v3; // ecx

  if ( !a2 )
  {
    if ( *((_DWORD *)this + 22) == 2 )
      return;
    goto LABEL_14;
  }
  v3 = *((_DWORD *)a2 + 107);
  if ( *((_DWORD *)a2 + 109) == 6 )
  {
    CInteractionTracker::ProcessMousewheelManipulation(this);
    return;
  }
  if ( (unsigned int)(v3 - 2) > 2 )
    goto LABEL_10;
  if ( *((_DWORD *)this + 22) != 1 )
  {
    CInteractionTracker::TransitionToInContact(this);
    return;
  }
  if ( v3 != 2 && v3 != 3 && v3 != 4 )
  {
LABEL_10:
    if ( *((_DWORD *)this + 22) != 2 )
    {
      if ( !*((_DWORD *)this + 22) )
        CInteractionTracker::TransitionToInContact(this);
LABEL_14:
      CInteractionTracker::TransitionToInertia(this, 0);
    }
  }
}
