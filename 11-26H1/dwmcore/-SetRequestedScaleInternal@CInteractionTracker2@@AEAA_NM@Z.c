/*
 * XREFs of ?SetRequestedScaleInternal@CInteractionTracker2@@AEAA_NM@Z @ 0x180276D98
 * Callers:
 *     ?ProcessSetRequestedScale@CInteractionTracker2@@AEAAXXZ @ 0x180275350 (-ProcessSetRequestedScale@CInteractionTracker2@@AEAAXXZ.c)
 * Callees:
 *     ?SetRequestedBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@M@Z @ 0x180135518 (-SetRequestedBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBa.c)
 *     ?TransitionToIdle@CInteractionTracker2@@AEAAXXZ @ 0x180277528 (-TransitionToIdle@CInteractionTracker2@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CInteractionTracker2::SetRequestedScaleInternal(CInteractionTracker2 *this, float a2)
{
  int v2; // edx
  char v3; // bl
  double v5; // xmm0_8
  __int64 v6; // rdx
  CInteractionTrackerBindingManager *v7; // rcx

  v2 = *((_DWORD *)this + 22);
  v3 = 0;
  if ( v2 )
  {
    if ( (unsigned int)(v2 - 2) > 1 )
      return v3;
    CInteractionTracker2::TransitionToIdle(this);
  }
  v3 = 1;
  v5 = (*(double (__fastcall **)(CInteractionTracker2 *, __int64))(*(_QWORD *)this + 584LL))(this, 2LL);
  (*(void (__fastcall **)(CInteractionTracker2 *, __int64, _QWORD))(*(_QWORD *)this + 496LL))(this, v6, 0LL);
  v7 = (CInteractionTrackerBindingManager *)*((_QWORD *)this + 131);
  if ( v7 )
    CInteractionTrackerBindingManager::SetRequestedBoundTrackerScale(v7, this, *(float *)&v5);
  return v3;
}
