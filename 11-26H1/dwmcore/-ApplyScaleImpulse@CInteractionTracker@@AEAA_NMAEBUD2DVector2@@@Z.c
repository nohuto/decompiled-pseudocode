/*
 * XREFs of ?ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector2@@@Z @ 0x18020582C
 * Callers:
 *     ?ProcessApplyScaleImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_APPLYSCALEIMPULSE@@@Z @ 0x1802057A0 (-ProcessApplyScaleImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIO.c)
 * Callees:
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x18013E0F4 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?ApplyImpulse@CScrollAnimation@@QEAAXM@Z @ 0x1802899B0 (-ApplyImpulse@CScrollAnimation@@QEAAXM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CInteractionTracker::ApplyScaleImpulse(
        CInteractionTracker *this,
        float a2,
        const struct D2DVector2 *a3)
{
  int v3; // r9d
  char v4; // di

  v3 = *((_DWORD *)this + 22);
  v4 = 0;
  if ( !v3 || (unsigned int)(v3 - 2) <= 1 )
  {
    v4 = 1;
    CInteractionTracker::TransitionToInertia(this, 2);
    if ( (*(unsigned __int8 (__fastcall **)(CInteractionTracker *))(*(_QWORD *)this + 272LL))(this) )
    {
      CScrollAnimation::ApplyImpulse(*((CScrollAnimation **)this + 52), a2);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 53) + 256LL))(*((_QWORD *)this + 53));
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 54) + 256LL))(*((_QWORD *)this + 54));
      *(_QWORD *)((char *)this + 588) = *(_QWORD *)a3;
    }
  }
  return v4;
}
