/*
 * XREFs of ?CreateTransition@CCubicBezierInterpolator@@SAJPEAUIUIAnimationTransitionFactory2@@NPEANIMMMMPEAPEAUIUIAnimationTransition2@@@Z @ 0x1800AB780
 * Callers:
 *     ?CreateAnimationTransition@CAnimationEngine@@AEAAJIPEAUTA_TIMINGFUNCTION@@NPEANIPEAPEAUIUIAnimationTransition2@@@Z @ 0x1800469FC (-CreateAnimationTransition@CAnimationEngine@@AEAAJIPEAUTA_TIMINGFUNCTION@@NPEANIPEAPEAUIUIAnimat.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800946B8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CCubicBezierInterpolator@@IEAA@NNNN@Z @ 0x1800AB6B4 (--0CCubicBezierInterpolator@@IEAA@NNNN@Z.c)
 *     ?Initialize@CCubicBezierInterpolator@@IEAAJNPEANI@Z @ 0x1800AB94C (-Initialize@CCubicBezierInterpolator@@IEAAJNPEANI@Z.c)
 *     ?Release@CCubicBezierInterpolator@@UEAAKXZ @ 0x1800ABD40 (-Release@CCubicBezierInterpolator@@UEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  const struct std::nothrow_t *v9; // rdx
  CCubicBezierInterpolator *v13; // rax
  CCubicBezierInterpolator *v14; // rax
  CCubicBezierInterpolator *v15; // rsi
  int v16; // edi
  unsigned int v17; // eax

  v13 = (CCubicBezierInterpolator *)operator new[](0x50uLL, v9);
  if ( !v13 || (v14 = CCubicBezierInterpolator::CCubicBezierInterpolator(v13, a5, a6, a7, a8), (v15 = v14) == 0LL) )
  {
    v16 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x126u, 0LL);
    return (unsigned int)v16;
  }
  v16 = CCubicBezierInterpolator::Initialize(v14, a2, a3, a4);
  if ( v16 < 0 )
  {
    v17 = 296;
    goto LABEL_7;
  }
  v16 = ((__int64 (__fastcall *)(struct IUIAnimationTransitionFactory2 *, CCubicBezierInterpolator *, struct IUIAnimationTransition2 **))a1->lpVtbl->CreateTransition)(
          a1,
          v15,
          a9);
  if ( v16 < 0 )
  {
    v17 = 297;
LABEL_7:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, v17, 0LL);
    CCubicBezierInterpolator::Release(v15);
  }
  return (unsigned int)v16;
}
