/*
 * XREFs of ?TransitionToInContact@CInteractionTracker2@@AEAAXXZ @ 0x180277604
 * Callers:
 *     ?NotifyActiveManipulationUpdated@CInteractionTracker2@@UEAAXPEAVCManipulation@@@Z @ 0x180274430 (-NotifyActiveManipulationUpdated@CInteractionTracker2@@UEAAXPEAVCManipulation@@@Z.c)
 * Callees:
 *     ?EnsureInteractionAnimations@CInteractionTracker2@@AEAAJXZ @ 0x18013E7AC (-EnsureInteractionAnimations@CInteractionTracker2@@AEAAJXZ.c)
 *     ?BoostCompositorClock@CInteractionTracker2@@AEAAX_N@Z @ 0x180271DFC (-BoostCompositorClock@CInteractionTracker2@@AEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker2::TransitionToInContact(CInteractionTracker2 *this)
{
  int v1; // edx

  v1 = *((_DWORD *)this + 22);
  if ( !v1 || (unsigned int)(v1 - 2) <= 1 )
  {
    CInteractionTracker2::BoostCompositorClock(this, 1);
    (*(void (__fastcall **)(CInteractionTracker2 *, _QWORD))(*(_QWORD *)this + 432LL))(this, 0LL);
    CInteractionTracker2::EnsureInteractionAnimations((struct CComposition **)this);
    (*(void (__fastcall **)(CInteractionTracker2 *, __int64))(*(_QWORD *)this + 448LL))(this, 1LL);
  }
}
