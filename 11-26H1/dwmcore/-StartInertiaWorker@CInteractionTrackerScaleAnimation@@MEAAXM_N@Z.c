/*
 * XREFs of ?StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAXM_N@Z @ 0x1801A1360
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTrackerBase@@XZ @ 0x18013A96C (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTrackerBase@@XZ.c)
 *     ?IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z @ 0x18013C94C (-IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z.c)
 *     ?StartInertia@CMotion@@IEAAXMM_N0@Z @ 0x1801A14F8 (-StartInertia@CMotion@@IEAAXMM_N0@Z.c)
 *     ?GetVelocity@CScrollAnimation@@QEBAMXZ @ 0x1801A1C4C (-GetVelocity@CScrollAnimation@@QEBAMXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTrackerScaleAnimation::StartInertiaWorker(
        CInteractionTrackerScaleAnimation *this,
        float a2,
        bool a3)
{
  struct CInteractionTrackerBase *InteractionTracker; // rdi
  InteractionSourceManager *v6; // rax
  char IsInertiaEnabledForAxis; // bl
  unsigned int v8; // r11d
  double v9; // xmm0_8
  float v10; // xmm6_4

  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  v6 = (InteractionSourceManager *)(*(__int64 (__fastcall **)(struct CInteractionTrackerBase *))(*(_QWORD *)InteractionTracker
                                                                                               + 368LL))(InteractionTracker);
  IsInertiaEnabledForAxis = InteractionSourceManager::IsInertiaEnabledForAxis(v6);
  v9 = (*(double (__fastcall **)(struct CInteractionTrackerBase *, _QWORD))(*(_QWORD *)InteractionTracker + 360LL))(
         InteractionTracker,
         v8);
  v10 = *(float *)&v9;
  *(float *)&v9 = CScrollAnimation::GetVelocity(this);
  *((float *)this + 117) = a2;
  CMotion::StartInertia(
    (CInteractionTrackerScaleAnimation *)((char *)this + 400),
    *(float *)&v9,
    v10,
    IsInertiaEnabledForAxis,
    a3);
}
