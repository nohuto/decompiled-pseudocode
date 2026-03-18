/*
 * XREFs of ?CalculateInertiaValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@MPEAM@Z @ 0x180289F60
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTrackerBase@@XZ @ 0x18013A96C (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTrackerBase@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionTrackerScaleAnimation::CalculateInertiaValueWorker(
        double (__fastcall ***this)(char *, struct CExpressionValueStack *),
        struct CExpressionValueStack *a2,
        float a3,
        float *a4)
{
  struct CInteractionTrackerBase *InteractionTracker; // rsi
  double v8; // xmm0_8
  float v9; // xmm7_4
  double (__fastcall *v10)(char *, struct CExpressionValueStack *); // rbx
  double v11; // xmm0_8
  int v12; // eax
  unsigned int v13; // ebx

  InteractionTracker = CScrollAnimation::GetInteractionTracker((CScrollAnimation *)this);
  v8 = (*(double (__fastcall **)(struct CInteractionTrackerBase *, __int64))(*(_QWORD *)InteractionTracker + 232LL))(
         InteractionTracker,
         2LL);
  v9 = *(float *)&v8;
  v10 = *this[50];
  (*(void (__fastcall **)(struct CInteractionTrackerBase *, __int64, __int64))(*(_QWORD *)InteractionTracker + 376LL))(
    InteractionTracker,
    2LL,
    2LL);
  (*(void (__fastcall **)(struct CInteractionTrackerBase *, __int64, __int64))(*(_QWORD *)InteractionTracker + 376LL))(
    InteractionTracker,
    1LL,
    2LL);
  v11 = v10((char *)this + 400, a2);
  if ( *(float *)&v11 == v9
    || (v12 = (*(__int64 (__fastcall **)(struct CInteractionTrackerBase *, struct CExpressionValueStack *, __int64))(*(_QWORD *)InteractionTracker + 400LL))(
                InteractionTracker,
                a2,
                2LL),
        v13 = v12,
        v12 >= 0) )
  {
    *a4 = *(float *)&v11;
    return 0;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x112u, 0LL);
  }
  return v13;
}
