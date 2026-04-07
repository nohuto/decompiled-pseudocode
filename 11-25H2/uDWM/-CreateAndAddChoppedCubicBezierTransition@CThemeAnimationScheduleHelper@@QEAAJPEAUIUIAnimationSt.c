/*
 * XREFs of ?CreateAndAddChoppedCubicBezierTransition@CThemeAnimationScheduleHelper@@QEAAJPEAUIUIAnimationStoryboard2@@PEAUIUIAnimationVariable2@@PEAUIUIAnimationTransitionLibrary2@@NPEAN3I33IMMMMPEAU__MIDL___MIDL_itf_UIAnimation_0000_0002_0003@@@Z @ 0x1800A6D0C
 * Callers:
 *     ?AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NNPEAN2IPEAUTA_TIMINGFUNCTION@@W4TransformMode@@22I@Z @ 0x180046334 (-AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NN.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180007758 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??0CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAA@PEAUIUIAnimationStoryboard2@@PEAUIUIAnimationVariable2@@PEAUIUIAnimationTransitionLibrary2@@PEAN3IPEAU__MIDL___MIDL_itf_UIAnimation_0000_0002_0003@@NNI@Z @ 0x1800A65F4 (--0CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAA@PEAUIUIAnimationStoryboard2@@PEAUIUIA.c)
 *     ??1CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAA@XZ @ 0x1800A66EC (--1CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CThemeAnimationScheduleHelper::CreateAndAddChoppedCubicBezierTransition(
        CThemeAnimationScheduleHelper *this,
        struct IUIAnimationStoryboard2 *a2,
        struct IUIAnimationVariable2 *a3,
        struct IUIAnimationTransitionLibrary2 *a4,
        double a5,
        double *a6,
        double *a7,
        unsigned int a8,
        double *a9,
        double *a10,
        unsigned int a11,
        float a12,
        float a13,
        float a14,
        float a15,
        struct __MIDL___MIDL_itf_UIAnimation_0000_0002_0003 *a16)
{
  double v18; // xmm7_8
  double v19; // xmm6_8
  double v20; // xmm1_8
  double v21; // xmm0_8
  LPVOID *ppv; // rax
  __int64 v23; // rdx
  HRESULT Instance; // ebx
  __int64 v25; // rdx
  __int64 v26; // rdx
  struct __MIDL___MIDL_itf_UIAnimation_0000_0002_0003 *v27; // [rsp+40h] [rbp-C8h]
  __int64 v28; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+70h] [rbp-98h]
  _BYTE v30[192]; // [rsp+78h] [rbp-90h] BYREF
  CThemeAnimationScheduleHelper *v31; // [rsp+148h] [rbp+40h] BYREF

  v31 = this;
  if ( a8 > 4 )
    return 2147942450LL;
  if ( a5 <= 0.0 )
    return 2147942487LL;
  if ( a11 >= a8 )
    return 2147942487LL;
  v18 = a7[a11];
  v19 = a6[a11];
  if ( v18 == v19 )
    return 2147942487LL;
  v20 = a9 ? *a9 : a6[a11];
  v21 = a10 ? *a10 : a7[a11];
  if ( v20 != v21 && v18 > v19 == v20 > v21 )
    return 2147942487LL;
  if ( v18 > v19 == v19 > v20 && v18 > v19 == v21 > v19 )
    v20 = a6[a11];
  if ( v18 > v19 == v18 > v20 && v18 > v19 == v21 > v18 )
    v21 = a7[a11];
  CThemeAnimationScheduleHelper::CCubicBezierChopper::CCubicBezierChopper(
    (CThemeAnimationScheduleHelper::CCubicBezierChopper *)v30,
    a2,
    a3,
    a4,
    a6,
    a7,
    a8,
    v27,
    v20,
    v21,
    a11);
  v31 = 0LL;
  ppv = (LPVOID *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v31);
  Instance = CoCreateInstance(&CLSID_UIAnimationManager2, 0LL, 3u, &GUID_d8b6f7d4_4109_4d3f_acee_879926968cb1, ppv);
  if ( Instance >= 0 )
  {
    Instance = (*(__int64 (__fastcall **)(CThemeAnimationScheduleHelper *, __int64, _QWORD))(*(_QWORD *)v31 + 72LL))(
                 v31,
                 v23,
                 0LL);
    if ( Instance >= 0 )
    {
      v28 = 0LL;
      Instance = (*(__int64 (__fastcall **)(CThemeAnimationScheduleHelper *, __int64, __int64 *))(*(_QWORD *)v31 + 32LL))(
                   v31,
                   v25,
                   &v28);
      if ( Instance >= 0 )
      {
        a16 = 0LL;
        Instance = (*(__int64 (__fastcall **)(CThemeAnimationScheduleHelper *, struct __MIDL___MIDL_itf_UIAnimation_0000_0002_0003 **))(*(_QWORD *)v31 + 48LL))(
                     v31,
                     &a16);
        if ( Instance >= 0 )
        {
          v29 = 0LL;
          Instance = ((__int64 (__fastcall *)(struct IUIAnimationTransitionLibrary2 *))a4->lpVtbl->CreateCubicBezierLinearTransition)(a4);
          if ( Instance >= 0 )
          {
            Instance = (*(__int64 (__fastcall **)(struct __MIDL___MIDL_itf_UIAnimation_0000_0002_0003 *, __int64, __int64))(*(_QWORD *)&a16->_ + 24LL))(
                         a16,
                         v28,
                         v29);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
            if ( Instance >= 0 )
              Instance = (*(__int64 (__fastcall **)(struct __MIDL___MIDL_itf_UIAnimation_0000_0002_0003 *, __int64, _QWORD))(*(_QWORD *)&a16->_ + 96LL))(
                           a16,
                           v26,
                           0LL);
          }
          (*(void (__fastcall **)(struct __MIDL___MIDL_itf_UIAnimation_0000_0002_0003 *))(*(_QWORD *)&a16->_ + 16LL))(a16);
          if ( Instance >= 0 )
            Instance = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v28 + 48LL))(v28, v30);
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      }
    }
    (*(void (__fastcall **)(CThemeAnimationScheduleHelper *))(*(_QWORD *)v31 + 16LL))(v31);
  }
  CThemeAnimationScheduleHelper::CCubicBezierChopper::~CCubicBezierChopper((CThemeAnimationScheduleHelper::CCubicBezierChopper *)v30);
  return (unsigned int)Instance;
}
