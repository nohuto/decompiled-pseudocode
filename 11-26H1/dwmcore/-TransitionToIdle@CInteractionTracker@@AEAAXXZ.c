/*
 * XREFs of ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x18013C7BC
 * Callers:
 *     ?SetRequestedScale@CInteractionTracker@@AEAA_NM@Z @ 0x180135480 (-SetRequestedScale@CInteractionTracker@@AEAA_NM@Z.c)
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@W43InteractionTrackerPositionUpdateOption@@@Z @ 0x180139380 (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampi.c)
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x18013C68C (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?BoostCompositorClock@CInteractionTracker@@AEAAX_N@Z @ 0x18013CF74 (-BoostCompositorClock@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x18013D338 (-DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker::TransitionToIdle(CInteractionTracker *this)
{
  int v2; // ecx
  __int64 v3; // rax
  __int64 v4; // xmm1_8
  __int64 v5; // rax
  _BYTE v6[56]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *((_DWORD *)this + 22) - 2;
  if ( v2 )
  {
    if ( v2 != 1 )
      return;
    (*(void (__fastcall **)(CInteractionTracker *, _QWORD))(*(_QWORD *)this + 432LL))(this, 0LL);
  }
  else
  {
    v3 = (*(__int64 (__fastcall **)(CInteractionTracker *, _BYTE *))(*(_QWORD *)this + 480LL))(this, v6);
    *((_OWORD *)this + 8) = *(_OWORD *)v3;
    *((_OWORD *)this + 9) = *(_OWORD *)(v3 + 16);
    *((_OWORD *)this + 10) = *(_OWORD *)(v3 + 32);
    v4 = *(_QWORD *)(v3 + 48);
    v5 = *(_QWORD *)this;
    *((_QWORD *)this + 22) = v4;
    (*(void (__fastcall **)(CInteractionTracker *))(v5 + 440))(this);
    CInteractionTracker::DestroyDefaultAnimations(this, 0);
  }
  CInteractionTracker::BoostCompositorClock(this, 0);
  (*(void (__fastcall **)(CInteractionTracker *, _QWORD, _QWORD))(*(_QWORD *)this + 448LL))(this, 0LL, 0LL);
}
