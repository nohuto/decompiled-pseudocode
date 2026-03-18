/*
 * XREFs of ?ApplyPositionImpulse@CInteractionTracker2@@AEAA_NAEBUD2DVector3@@@Z @ 0x180271BA4
 * Callers:
 *     ?ProcessApplyPositionImpulse@CInteractionTracker2@@AEAAXXZ @ 0x1802747FC (-ProcessApplyPositionImpulse@CInteractionTracker2@@AEAAXXZ.c)
 * Callees:
 *     ?TransitionToInertia@CInteractionTracker2@@AEAA_NW4InertiaReason@1@@Z @ 0x180277668 (-TransitionToInertia@CInteractionTracker2@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?ApplyImpulse@CScrollAnimation@@QEAAXM@Z @ 0x1802899B0 (-ApplyImpulse@CScrollAnimation@@QEAAXM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CInteractionTracker2::ApplyPositionImpulse(CInteractionTracker2 *this, const struct D2DVector3 *a2)
{
  int v2; // r8d
  char v3; // si

  v2 = *((_DWORD *)this + 22);
  v3 = 0;
  if ( !v2 || (unsigned int)(v2 - 2) <= 1 )
  {
    v3 = 1;
    CInteractionTracker2::TransitionToInertia(this, 2LL);
    if ( (*(unsigned __int8 (__fastcall **)(CInteractionTracker2 *))(*(_QWORD *)this + 272LL))(this) )
    {
      CScrollAnimation::ApplyImpulse(*((CScrollAnimation **)this + 82), *(float *)a2);
      CScrollAnimation::ApplyImpulse(*((CScrollAnimation **)this + 83), *((float *)a2 + 1));
    }
  }
  return v3;
}
