/*
 * XREFs of ?StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXM_N@Z @ 0x1801A1A20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTrackerBase@@XZ @ 0x18013A96C (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTrackerBase@@XZ.c)
 *     ?IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z @ 0x18013C94C (-IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z.c)
 *     ?GetVelocity@CScrollAnimation@@QEBAMXZ @ 0x1801A1C4C (-GetVelocity@CScrollAnimation@@QEBAMXZ.c)
 *     ?StartInertia@CPositionMotion@@QEAAXMMMMMM_N0@Z @ 0x18021C088 (-StartInertia@CPositionMotion@@QEAAXMMMMMM_N0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTrackerPositionAnimation::StartInertiaWorker(
        CInteractionTrackerPositionAnimation *this,
        float a2,
        bool a3)
{
  struct CInteractionTrackerBase *InteractionTracker; // rsi
  double v6; // xmm0_8
  float v7; // xmm10_4
  float Velocity; // xmm8_4
  InteractionSourceManager *v9; // rax
  char IsInertiaEnabledForAxis; // bl
  unsigned int v11; // r11d
  double v12; // xmm0_8
  float v13; // xmm7_4
  double v14; // xmm0_8
  float v15; // xmm6_4

  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  v6 = (*(double (__fastcall **)(struct CInteractionTrackerBase *, __int64, _QWORD))(*(_QWORD *)InteractionTracker
                                                                                   + 344LL))(
         InteractionTracker,
         2LL,
         *((unsigned int *)this + 71));
  v7 = *(float *)&v6;
  Velocity = CScrollAnimation::GetVelocity(this);
  if ( a3 && (*((_BYTE *)this + 288) & 1) != 0 )
    Velocity = 0.0;
  v9 = (InteractionSourceManager *)(*(__int64 (__fastcall **)(struct CInteractionTrackerBase *))(*(_QWORD *)InteractionTracker
                                                                                               + 368LL))(InteractionTracker);
  IsInertiaEnabledForAxis = InteractionSourceManager::IsInertiaEnabledForAxis(v9);
  v12 = (*(double (__fastcall **)(struct CInteractionTrackerBase *, _QWORD))(*(_QWORD *)InteractionTracker + 360LL))(
          InteractionTracker,
          v11);
  v13 = *(float *)&v12;
  v14 = (*(double (__fastcall **)(struct CInteractionTrackerBase *, __int64))(*(_QWORD *)InteractionTracker + 352LL))(
          InteractionTracker,
          2LL);
  v15 = *(float *)&v14;
  *(float *)&v14 = (*(float (__fastcall **)(struct CInteractionTrackerBase *, __int64))(*(_QWORD *)InteractionTracker
                                                                                      + 232LL))(
                     InteractionTracker,
                     2LL);
  CPositionMotion::StartInertia(
    (CInteractionTrackerPositionAnimation *)((char *)this + 400),
    Velocity,
    a2,
    *(float *)&v14,
    v15,
    v7,
    v13,
    IsInertiaEnabledForAxis,
    a3);
  *((_BYTE *)this + 288) &= ~1u;
}
