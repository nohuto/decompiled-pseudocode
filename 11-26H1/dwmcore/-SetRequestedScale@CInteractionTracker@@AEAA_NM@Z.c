/*
 * XREFs of ?SetRequestedScale@CInteractionTracker@@AEAA_NM@Z @ 0x180135480
 * Callers:
 *     ?ProcessSetRequestedScale@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALE@@@Z @ 0x180135400 (-ProcessSetRequestedScale@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIO.c)
 * Callees:
 *     ?SetRequestedBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@M@Z @ 0x180135518 (-SetRequestedBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBa.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x18013C7BC (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CInteractionTracker::SetRequestedScale(CInteractionTracker *this, float a2)
{
  int v2; // edx
  char v3; // bl
  double v6; // xmm0_8
  __int64 v7; // rdx
  CInteractionTrackerBindingManager *v8; // rcx

  v2 = *((_DWORD *)this + 22);
  v3 = 0;
  if ( v2 )
  {
    if ( (unsigned int)(v2 - 2) >= 2 )
      return v3;
    CInteractionTracker::TransitionToIdle(this);
  }
  v3 = 1;
  v6 = (*(double (__fastcall **)(CInteractionTracker *, __int64))(*(_QWORD *)this + 584LL))(this, 2LL);
  (*(void (__fastcall **)(CInteractionTracker *, __int64, _QWORD))(*(_QWORD *)this + 496LL))(this, v7, 0LL);
  v8 = (CInteractionTrackerBindingManager *)*((_QWORD *)this + 75);
  if ( v8 )
    CInteractionTrackerBindingManager::SetRequestedBoundTrackerScale(v8, this, *(float *)&v6);
  return v3;
}
