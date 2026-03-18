/*
 * XREFs of ?ApplyScaleImpulse@CInteractionTracker2@@AEAA_NMAEBUD2DVector2@@@Z @ 0x180271D3C
 * Callers:
 *     ?ProcessApplyScaleImpulse@CInteractionTracker2@@AEAAXXZ @ 0x180274928 (-ProcessApplyScaleImpulse@CInteractionTracker2@@AEAAXXZ.c)
 * Callees:
 *     ?TransitionToInertia@CInteractionTracker2@@AEAA_NW4InertiaReason@1@@Z @ 0x180277668 (-TransitionToInertia@CInteractionTracker2@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?ApplyImpulse@CScrollAnimation@@QEAAXM@Z @ 0x1802899B0 (-ApplyImpulse@CScrollAnimation@@QEAAXM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CInteractionTracker2::ApplyScaleImpulse(
        CInteractionTracker2 *this,
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
    CInteractionTracker2::TransitionToInertia(this, 2LL);
    if ( (*(unsigned __int8 (__fastcall **)(CInteractionTracker2 *))(*(_QWORD *)this + 272LL))(this) )
    {
      CScrollAnimation::ApplyImpulse(*((CScrollAnimation **)this + 81), a2);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 82) + 256LL))(*((_QWORD *)this + 82));
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 83) + 256LL))(*((_QWORD *)this + 83));
      *(_QWORD *)((char *)this + 820) = *(_QWORD *)a3;
    }
  }
  return v4;
}
