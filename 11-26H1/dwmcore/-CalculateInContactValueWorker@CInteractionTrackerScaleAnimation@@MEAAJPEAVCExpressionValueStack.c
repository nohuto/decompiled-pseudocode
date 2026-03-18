/*
 * XREFs of ?CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@MPEAM@Z @ 0x18013B680
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x18013A5DC (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTrackerBase@@XZ @ 0x18013A96C (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTrackerBase@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionTrackerScaleAnimation::CalculateInContactValueWorker(
        CInteractionTrackerScaleAnimation *this,
        struct CExpressionValueStack *a2,
        double a3,
        float *a4)
{
  struct CInteractionTrackerBase *InteractionTracker; // rdi
  double v8; // xmm0_8
  float v9; // xmm8_4
  double v10; // xmm0_8
  int v11; // xmm7_4
  double v12; // xmm6_8
  __int64 v13; // rdx
  unsigned int v14; // eax
  float v15; // xmm6_4
  unsigned int v16; // ebx
  int v18; // eax

  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  v8 = (*(double (__fastcall **)(struct CInteractionTrackerBase *, __int64))(*(_QWORD *)InteractionTracker + 232LL))(
         InteractionTracker,
         2LL);
  v9 = *(float *)&v8;
  v10 = (*(double (__fastcall **)(struct CInteractionTrackerBase *, __int64))(*(_QWORD *)InteractionTracker + 384LL))(
          InteractionTracker,
          2LL);
  v11 = LODWORD(v10);
  (*(void (__fastcall **)(struct CInteractionTrackerBase *, __int64, __int64))(*(_QWORD *)InteractionTracker + 376LL))(
    InteractionTracker,
    2LL,
    2LL);
  (*(void (__fastcall **)(struct CInteractionTrackerBase *, __int64, __int64))(*(_QWORD *)InteractionTracker + 376LL))(
    InteractionTracker,
    1LL,
    2LL);
  HIDWORD(v12) = HIDWORD(a3);
  *((_DWORD *)this + 113) = v11;
  *(float *)&v12 = *(float *)&a3 * *((float *)this + 126);
  *((_DWORD *)this + 126) = LODWORD(v12);
  v14 = (*(__int64 (__fastcall **)(struct CInteractionTrackerBase *, __int64, __int64))(*(_QWORD *)InteractionTracker
                                                                                      + 208LL))(
          InteractionTracker,
          v13,
          2LL);
  v15 = CScrollAnimation::UpdateValueWithChaining((__int64)this, v12, a3, v14).m128_f32[0];
  if ( v15 == v9
    || (v18 = (*(__int64 (__fastcall **)(struct CInteractionTrackerBase *, struct CExpressionValueStack *, __int64))(*(_QWORD *)InteractionTracker + 400LL))(
                InteractionTracker,
                a2,
                1LL),
        v16 = v18,
        v18 >= 0) )
  {
    *a4 = v15;
    return 0;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0xD9u, 0LL);
  }
  return v16;
}
