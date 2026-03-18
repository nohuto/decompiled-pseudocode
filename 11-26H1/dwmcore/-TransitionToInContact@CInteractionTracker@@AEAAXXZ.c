/*
 * XREFs of ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x18013CF10
 * Callers:
 *     ?NotifyActiveManipulationUpdated@CInteractionTracker@@UEAAXPEAVCManipulation@@@Z @ 0x180270E50 (-NotifyActiveManipulationUpdated@CInteractionTracker@@UEAAXPEAVCManipulation@@@Z.c)
 * Callees:
 *     ?BoostCompositorClock@CInteractionTracker@@AEAAX_N@Z @ 0x18013CF74 (-BoostCompositorClock@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x18013CFC0 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker::TransitionToInContact(CInteractionTracker *this)
{
  int v1; // edx

  v1 = *((_DWORD *)this + 22);
  if ( !v1 || (unsigned int)(v1 - 2) <= 1 )
  {
    CInteractionTracker::BoostCompositorClock(this, 1);
    (*(void (__fastcall **)(CInteractionTracker *, _QWORD))(*(_QWORD *)this + 432LL))(this, 0LL);
    CInteractionTracker::EnsureInteractionAnimations(this);
    (*(void (__fastcall **)(CInteractionTracker *, __int64))(*(_QWORD *)this + 448LL))(this, 1LL);
  }
}
