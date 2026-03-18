/*
 * XREFs of ?ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z @ 0x180205714
 * Callers:
 *     ?ProcessApplyPositionImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_APPLYPOSITIONIMPULSE@@@Z @ 0x180205698 (-ProcessApplyPositionImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERAC.c)
 * Callees:
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x18013E0F4 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?ApplyImpulse@CScrollAnimation@@QEAAXM@Z @ 0x1802899B0 (-ApplyImpulse@CScrollAnimation@@QEAAXM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CInteractionTracker::ApplyPositionImpulse(CInteractionTracker *this, const struct D2DVector3 *a2)
{
  int v2; // r8d
  char v3; // si

  v2 = *((_DWORD *)this + 22);
  v3 = 0;
  if ( !v2 || (unsigned int)(v2 - 2) <= 1 )
  {
    v3 = 1;
    CInteractionTracker::TransitionToInertia(this, 2);
    if ( (*(unsigned __int8 (__fastcall **)(CInteractionTracker *))(*(_QWORD *)this + 272LL))(this) )
    {
      CScrollAnimation::ApplyImpulse(*((CScrollAnimation **)this + 53), *(float *)a2);
      CScrollAnimation::ApplyImpulse(*((CScrollAnimation **)this + 54), *((float *)a2 + 1));
    }
  }
  return v3;
}
