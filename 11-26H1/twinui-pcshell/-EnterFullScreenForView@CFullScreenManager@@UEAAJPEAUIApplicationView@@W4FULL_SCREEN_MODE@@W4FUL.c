/*
 * XREFs of ?EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x180322C70
 * Callers:
 *     ?EnterFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_MODE@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x180322BC0 (-EnterFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_MODE@@W4FULL_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x1800472C0 (-IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180077520 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflector_ea_180077520.c)
 *     ?IsFullScreenModeDisabledForView@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18008D4B0 (-IsFullScreenModeDisabledForView@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180177550 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_AddFullScreenOptionalHand.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_0897d79458d75a71d6dbc9365df3a548___ @ 0x180322208 (ShellPositionerHelpers--PerformCallbackOnView__lambda_0897d79458d75a71d6dbc9365df3a548___.c)
 *     ??1FSMEnterFullScreenForView@FullScreenManagerTelemetry@@QEAA@XZ @ 0x1803225D0 (--1FSMEnterFullScreenForView@FullScreenManagerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@FSMEnterFullScreenForView@FullScreenManagerTelemetry@@QEAAXPEAUIApplicationView@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x180324118 (-StartActivity@FSMEnterFullScreenForView@FullScreenManagerTelemetry@@QEAAXPEAUIApplicationView@@.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180324614 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFullScreenManager::EnterFullScreenForView(
        CFullScreenManager *a1,
        struct IApplicationView *a2,
        __int64 a3,
        unsigned int a4)
{
  int IsViewFullScreen; // ebx
  __int64 v8; // rdx
  struct IApplicationView *v10; // rdx
  char v11; // dl
  IUnknown *v12; // rcx
  HRESULT Service; // eax
  __int64 v14; // rdx
  int v15; // [rsp+20h] [rbp-E0h] BYREF
  int v16; // [rsp+24h] [rbp-DCh] BYREF
  int v17; // [rsp+28h] [rbp-D8h] BYREF
  __int128 ppvOut; // [rsp+30h] [rbp-D0h] BYREF
  volatile signed __int32 *v19[42]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  v16 = 0;
  IsViewFullScreen = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 88LL))(a2, &v16);
  if ( IsViewFullScreen < 0 )
  {
    v8 = 128LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)IsViewFullScreen);
    return (unsigned int)IsViewFullScreen;
  }
  if ( v16 )
  {
    v17 = 0;
    IsViewFullScreen = CFullScreenManager::IsViewFullScreen(a1, a2, &v17);
    if ( IsViewFullScreen < 0 )
    {
      v8 = 132LL;
      goto LABEL_3;
    }
    if ( !v17 )
    {
      wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v19,
        (__int64)"FSMEnterFullScreenForView");
      v19[0] = (volatile signed __int32 *)&FullScreenManagerTelemetry::FSMEnterFullScreenForView::`vftable';
      FullScreenManagerTelemetry::FSMEnterFullScreenForView::StartActivity(v19, a2, a4);
      if ( FullScreenPositionerHelpers::IsFullScreenModeDisabledForView(a2, v10) )
      {
        IsViewFullScreen = -2147024891;
LABEL_19:
        FullScreenManagerTelemetry::FSMEnterFullScreenForView::~FSMEnterFullScreenForView(v19);
        return (unsigned int)IsViewFullScreen;
      }
      LOBYTE(v15) = 0;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::__private_IsEnabledPreCheck(
        `wil::Feature<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::GetImpl'::`2'::impl,
        v11);
      v12 = (IUnknown *)*((_QWORD *)a1 - 9);
      *((_QWORD *)&ppvOut + 1) = &v15;
      *(_QWORD *)&ppvOut = a2;
      ShellPositionerHelpers::PerformCallbackOnView__lambda_0897d79458d75a71d6dbc9365df3a548___(
        v12,
        (__int64)a2,
        &ppvOut);
      if ( !(_BYTE)v15 )
      {
        *(_QWORD *)&ppvOut = 0LL;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
        Service = IUnknown_QueryService(
                    *((IUnknown **)a1 - 9),
                    &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
                    &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
                    (void **)&ppvOut);
        IsViewFullScreen = Service;
        if ( Service < 0 )
        {
          v14 = 160LL;
LABEL_14:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v14,
            (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
            (const char *)(unsigned int)Service);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
          goto LABEL_19;
        }
        Service = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, __int64))(*(_QWORD *)ppvOut + 24LL))(
                    ppvOut,
                    a2,
                    4LL);
        IsViewFullScreen = Service;
        if ( Service < 0 )
        {
          v14 = 161LL;
          goto LABEL_14;
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
      }
      wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v19);
      IsViewFullScreen = 0;
      goto LABEL_19;
    }
  }
  return 2147942487LL;
}
