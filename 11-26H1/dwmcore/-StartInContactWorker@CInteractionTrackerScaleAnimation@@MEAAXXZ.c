/*
 * XREFs of ?StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ @ 0x1801A1750
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTrackerBase@@XZ @ 0x18013A96C (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTrackerBase@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTrackerScaleAnimation::StartInContactWorker(CInteractionTrackerScaleAnimation *this)
{
  struct CInteractionTrackerBase *InteractionTracker; // rdi
  double v3; // xmm0_8
  char v4; // al

  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  v3 = (*(double (__fastcall **)(struct CInteractionTrackerBase *, __int64))(*(_QWORD *)InteractionTracker + 232LL))(
         InteractionTracker,
         2LL);
  v4 = (*(__int64 (__fastcall **)(struct CInteractionTrackerBase *, __int64))(*(_QWORD *)InteractionTracker + 240LL))(
         InteractionTracker,
         2LL);
  *((_DWORD *)this + 126) = LODWORD(v3);
  *((_DWORD *)this + 117) = LODWORD(v3);
  CMotion::StartInContact((CInteractionTrackerScaleAnimation *)((char *)this + 400), v4);
}
