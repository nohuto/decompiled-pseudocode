/*
 * XREFs of ?CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@MPEAM@Z @ 0x180139DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x18013A5DC (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTrackerBase@@XZ @ 0x18013A96C (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTrackerBase@@XZ.c)
 *     ?CalculateInContactValue@CPositionMotion@@QEAAMMMMMMM@Z @ 0x18013B30C (-CalculateInContactValue@CPositionMotion@@QEAAMMMMMMM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionTrackerPositionAnimation::CalculateInContactValueWorker(
        CInteractionTrackerPositionAnimation *this,
        struct CExpressionValueStack *a2,
        float a3,
        float *a4)
{
  struct CInteractionTrackerBase *InteractionTracker; // rbx
  double v7; // xmm0_8
  float v8; // xmm9_4
  double v9; // xmm0_8
  float v10; // xmm8_4
  double v11; // xmm0_8
  float v12; // xmm7_4
  double v13; // xmm0_8
  float v14; // xmm6_4
  __int64 v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  float updated; // xmm0_4
  __int64 result; // rax

  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  v7 = (*(double (__fastcall **)(struct CInteractionTrackerBase *, __int64, _QWORD))(*(_QWORD *)InteractionTracker
                                                                                   + 344LL))(
         InteractionTracker,
         1LL,
         *((unsigned int *)this + 71));
  v8 = *(float *)&v7;
  v9 = (*(double (__fastcall **)(struct CInteractionTrackerBase *, __int64))(*(_QWORD *)InteractionTracker + 232LL))(
         InteractionTracker,
         2LL);
  v10 = *(float *)&v9;
  v11 = (*(double (__fastcall **)(struct CInteractionTrackerBase *, _QWORD))(*(_QWORD *)InteractionTracker + 384LL))(
          InteractionTracker,
          *((unsigned int *)this + 71));
  v12 = *(float *)&v11;
  v13 = (*(double (__fastcall **)(struct CInteractionTrackerBase *, __int64, _QWORD))(*(_QWORD *)InteractionTracker
                                                                                    + 376LL))(
          InteractionTracker,
          2LL,
          *((unsigned int *)this + 71));
  v14 = *(float *)&v13;
  *(float *)&v13 = (*(float (__fastcall **)(struct CInteractionTrackerBase *, __int64, _QWORD))(*(_QWORD *)InteractionTracker
                                                                                              + 376LL))(
                     InteractionTracker,
                     1LL,
                     *((unsigned int *)this + 71));
  CPositionMotion::CalculateInContactValue(
    (CInteractionTrackerPositionAnimation *)((char *)this + 400),
    *(float *)&v13,
    v14,
    a3,
    v12,
    v10,
    v8);
  (*(void (__fastcall **)(struct CInteractionTrackerBase *, __int64, _QWORD))(*(_QWORD *)InteractionTracker + 208LL))(
    InteractionTracker,
    v15,
    *((unsigned int *)this + 71));
  updated = CScrollAnimation::UpdateValueWithChaining(this, v17, v18, v16);
  result = 0LL;
  *a4 = updated;
  return result;
}
