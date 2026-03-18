/*
 * XREFs of ?StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ @ 0x1801A1430
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTrackerBase@@XZ @ 0x18013A96C (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTrackerBase@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTrackerPositionAnimation::StartInContactWorker(CInteractionTrackerPositionAnimation *this)
{
  struct CInteractionTrackerBase *InteractionTracker; // rsi
  double v3; // xmm0_8
  int v4; // xmm7_4
  double v5; // xmm0_8
  char v6; // al

  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  if ( *((_QWORD *)this + 53) )
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 53);
  v3 = (*(double (__fastcall **)(struct CInteractionTrackerBase *))(*(_QWORD *)InteractionTracker + 336LL))(InteractionTracker);
  v4 = LODWORD(v3);
  v5 = (*(double (__fastcall **)(struct CInteractionTrackerBase *, _QWORD))(*(_QWORD *)InteractionTracker + 232LL))(
         InteractionTracker,
         *((unsigned int *)this + 71));
  v6 = (*(__int64 (__fastcall **)(struct CInteractionTrackerBase *, _QWORD, _QWORD))(*(_QWORD *)InteractionTracker
                                                                                   + 240LL))(
         InteractionTracker,
         *((unsigned int *)this + 71),
         0LL);
  *((_DWORD *)this + 117) = LODWORD(v5);
  *((_DWORD *)this + 134) = LODWORD(v5);
  *((_DWORD *)this + 135) = v4;
  CMotion::StartInContact((CInteractionTrackerPositionAnimation *)((char *)this + 400), v6);
}
