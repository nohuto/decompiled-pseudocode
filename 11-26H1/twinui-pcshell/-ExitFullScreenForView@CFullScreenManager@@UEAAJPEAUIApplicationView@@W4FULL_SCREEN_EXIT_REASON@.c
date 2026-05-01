/*
 * XREFs of ?ExitFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@@@Z @ 0x180322F20
 * Callers:
 *     ?ExitFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_EXIT_REASON@@@Z @ 0x180322E80 (-ExitFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_EXIT_REASON@@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x1800472C0 (-IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180077520 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflector_ea_180077520.c)
 *     ?IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18008D3BC (-IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180177550 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_AddFullScreenOptionalHand.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_2b23a0664410194b06926212d84c9639___ @ 0x180322358 (ShellPositionerHelpers--PerformCallbackOnView__lambda_2b23a0664410194b06926212d84c9639___.c)
 *     ??1FSMExitFullScreenForView@FullScreenManagerTelemetry@@QEAA@XZ @ 0x1803225FC (--1FSMExitFullScreenForView@FullScreenManagerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@FSMExitFullScreenForView@FullScreenManagerTelemetry@@QEAAXPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@@@Z @ 0x180324258 (-StartActivity@FSMExitFullScreenForView@FullScreenManagerTelemetry@@QEAAXPEAUIApplicationView@@W.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180324614 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFullScreenManager::ExitFullScreenForView(
        CFullScreenManager *a1,
        int (__fastcall ***a2)(FullScreenPositionerHelpers *, GUID *, __int64 *),
        unsigned int a3)
{
  struct IApplicationView *v6; // rdx
  char v7; // dl
  unsigned int v8; // ebx
  IUnknown *v9; // rcx
  HRESULT Service; // eax
  __int64 v11; // rdx
  int v13; // [rsp+20h] [rbp-E0h] BYREF
  int v14; // [rsp+24h] [rbp-DCh] BYREF
  void *ppvOut[3]; // [rsp+28h] [rbp-D8h] BYREF
  volatile signed __int32 *v16[42]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v14 = 0;
  if ( (int)CFullScreenManager::IsViewFullScreen(a1, (struct IApplicationView *)a2, &v14) >= 0 && v14 )
  {
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v16,
      (__int64)"FSMExitFullScreenForView");
    v16[0] = (volatile signed __int32 *)&FullScreenManagerTelemetry::FSMExitFullScreenForView::`vftable';
    FullScreenManagerTelemetry::FSMExitFullScreenForView::StartActivity(v16, a2, a3);
    if ( FullScreenPositionerHelpers::IsFullScreenCompatQuirkedApp(a2, v6) )
    {
      v8 = -2147024809;
LABEL_11:
      FullScreenManagerTelemetry::FSMExitFullScreenForView::~FSMExitFullScreenForView(v16);
      return v8;
    }
    LOBYTE(v13) = 0;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::__private_IsEnabledPreCheck(
      `wil::Feature<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::GetImpl'::`2'::impl,
      v7);
    v9 = (IUnknown *)*((_QWORD *)a1 - 9);
    ppvOut[1] = &v13;
    ppvOut[0] = a2;
    ShellPositionerHelpers::PerformCallbackOnView__lambda_2b23a0664410194b06926212d84c9639___(
      v9,
      (__int64)a2,
      (__int128 *)ppvOut);
    if ( !(_BYTE)v13 )
    {
      ppvOut[0] = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)ppvOut);
      Service = IUnknown_QueryService(
                  *((IUnknown **)a1 - 9),
                  &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
                  &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
                  ppvOut);
      v8 = Service;
      if ( Service < 0 )
      {
        v11 = 199LL;
LABEL_10:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
          (const char *)(unsigned int)Service);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)ppvOut);
        goto LABEL_11;
      }
      Service = (*(__int64 (__fastcall **)(void *, _QWORD, __int64))(*(_QWORD *)ppvOut[0] + 32LL))(ppvOut[0], a2, 4LL);
      v8 = Service;
      if ( Service < 0 )
      {
        v11 = 200LL;
        goto LABEL_10;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)ppvOut);
    }
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v16);
    FullScreenManagerTelemetry::FSMExitFullScreenForView::~FSMExitFullScreenForView(v16);
  }
  return 0LL;
}
