/*
 * XREFs of ?NotifyActiveManipulationUpdated@CInteractionTracker2@@UEAAXPEAVCManipulation@@@Z @ 0x180274430
 * Callers:
 *     <none>
 * Callees:
 *     ?TransitionToInContact@CInteractionTracker2@@AEAAXXZ @ 0x180277604 (-TransitionToInContact@CInteractionTracker2@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker2@@AEAA_NW4InertiaReason@1@@Z @ 0x180277668 (-TransitionToInertia@CInteractionTracker2@@AEAA_NW4InertiaReason@1@@Z.c)
 */

void __fastcall CInteractionTracker2::NotifyActiveManipulationUpdated(
        CInteractionTracker2 *this,
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
    CInteractionTracker2::ProcessMousewheelManipulation(this);
    return;
  }
  if ( (unsigned int)(v3 - 2) > 2 )
    goto LABEL_10;
  if ( *((_DWORD *)this + 22) != 1 )
  {
    CInteractionTracker2::TransitionToInContact(this);
    return;
  }
  if ( v3 != 2 && v3 != 3 && v3 != 4 )
  {
LABEL_10:
    if ( *((_DWORD *)this + 22) != 2 )
    {
      if ( !*((_DWORD *)this + 22) )
        CInteractionTracker2::TransitionToInContact(this);
LABEL_14:
      CInteractionTracker2::TransitionToInertia(this, 0LL);
    }
  }
}
