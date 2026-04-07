/*
 * XREFs of ?CreateTransition@CCubicBezierInterpolator@@SAJPEAUIUIAnimationTransitionFactory2@@NPEANIMMMMPEAPEAUIUIAnimationTransition2@@@Z @ 0x180085EC8
 * Callers:
 *     ?CreateAnimationTransition@CAnimationEngine@@AEAAJIPEAUTA_TIMINGFUNCTION@@NPEANIPEAPEAUIUIAnimationTransition2@@@Z @ 0x180053048 (-CreateAnimationTransition@CAnimationEngine@@AEAAJIPEAUTA_TIMINGFUNCTION@@NPEANIPEAPEAUIUIAnimat.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 *     ??0CCubicBezierInterpolator@@IEAA@NNNN@Z @ 0x180086008 (--0CCubicBezierInterpolator@@IEAA@NNNN@Z.c)
 *     ?Initialize@CCubicBezierInterpolator@@IEAAJNPEANI@Z @ 0x1800A98C0 (-Initialize@CCubicBezierInterpolator@@IEAAJNPEANI@Z.c)
 *     ?Release@CCubicBezierInterpolator@@UEAAKXZ @ 0x1800A9CB0 (-Release@CCubicBezierInterpolator@@UEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCubicBezierInterpolator::CreateTransition(
        struct IUIAnimationTransitionFactory2 *a1,
        double a2,
        double *a3,
        unsigned int a4,
        float a5,
        float a6,
        float a7,
        float a8,
        struct IUIAnimationTransition2 **a9)
{
  CCubicBezierInterpolator *v12; // rax
  CCubicBezierInterpolator *v13; // rax
  CCubicBezierInterpolator *v14; // rsi
  int v15; // edi
  unsigned int v16; // eax

  v12 = (CCubicBezierInterpolator *)operator new(0x50uLL);
  if ( !v12 || (v13 = CCubicBezierInterpolator::CCubicBezierInterpolator(v12, a5, a6, a7, a8), (v14 = v13) == 0LL) )
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x126u, 0LL);
    return (unsigned int)v15;
  }
  v15 = CCubicBezierInterpolator::Initialize(v13, a2, a3, a4);
  if ( v15 < 0 )
  {
    v16 = 296;
    goto LABEL_7;
  }
  v15 = ((__int64 (__fastcall *)(struct IUIAnimationTransitionFactory2 *, CCubicBezierInterpolator *, struct IUIAnimationTransition2 **))a1->lpVtbl->CreateTransition)(
          a1,
          v14,
          a9);
  if ( v15 < 0 )
  {
    v16 = 297;
LABEL_7:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, v16, 0LL);
    CCubicBezierInterpolator::Release(v14);
  }
  return (unsigned int)v15;
}
