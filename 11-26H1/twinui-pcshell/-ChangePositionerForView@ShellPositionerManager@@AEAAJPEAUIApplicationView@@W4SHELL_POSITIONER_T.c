/*
 * XREFs of ?ChangePositionerForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@_N@Z @ 0x1800F2D10
 * Callers:
 *     ?AddPositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1804EAD10 (-AddPositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE.c)
 *     ?RemovePositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1804EBEC0 (-RemovePositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_T.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180043774 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x1800614C8 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ??1?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180076910 (--1-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@_ea_180076910.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180076944 (-reset@-$shared_object@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag__ea_180076944.c)
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800769D4 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Par.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180077520 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflector_ea_180077520.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationView@@@Z @ 0x18008D36C (-GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationVie.c)
 *     ?PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B4A10 (-PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@1@Z @ 0x180296400 (-PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_.c)
 *     ??1ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAA@XZ @ 0x1802C4C94 (--1ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180324614 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ??4ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1804EA8F0 (--4ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?StartActivity@ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAAXPEAUIApplicationView@@W4CompactOverlayExitReason@2@@Z @ 0x1804EC018 (-StartActivity@ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAAXPEAUIApplicationView@@W4.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall ShellPositionerManager::ChangePositionerForView(
        __int64 a1,
        struct IApplicationView *a2,
        unsigned int a3,
        char a4)
{
  int PositionerPriorityForView; // eax
  unsigned int v9; // ebx
  unsigned int v10; // r14d
  unsigned int v11; // r12d
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, _QWORD, __int64 *); // rbx
  int v14; // eax
  struct IApplicationView *v15; // rdx
  struct IImmersiveApplication *ApplicationFromView; // rax
  struct IImmersiveApplication *v17; // rbx
  int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  struct IShellPositionerPriority *v21; // rcx
  struct IShellPositionerPriority *v23; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v24[3]; // [rsp+28h] [rbp-D8h] BYREF
  void **v25; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v26[264]; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD *v27; // [rsp+150h] [rbp+50h]
  volatile signed __int32 *v28; // [rsp+158h] [rbp+58h] BYREF
  _BYTE v29[48]; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v30[42]; // [rsp+190h] [rbp+90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+328h] [rbp+228h]

  v23 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
  PositionerPriorityForView = ShellPositionerManager::GetPositionerPriorityForView(
                                (ShellPositionerManager *)a1,
                                a2,
                                &v23);
  v9 = PositionerPriorityForView;
  if ( PositionerPriorityForView < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x459,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)PositionerPriorityForView);
LABEL_28:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
    return v9;
  }
  v10 = (*(__int64 (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v23 + 24LL))(v23);
  if ( a4 )
    (*(void (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(*(_QWORD *)v23 + 48LL))(v23, a3);
  else
    (*(void (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(*(_QWORD *)v23 + 40LL))(v23, a3);
  v11 = (*(__int64 (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v23 + 24LL))(v23);
  if ( v11 == v10 )
  {
LABEL_27:
    ShellPositionerManager::PersistPositionerPriority((ShellPositionerManager *)a1, a2);
    v9 = 0;
    goto LABEL_28;
  }
  v24[0] = 0LL;
  v12 = *(_QWORD *)(a1 + 176);
  v13 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v12 + 32LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v24);
  v14 = v13(v12, (unsigned int)(*(_DWORD *)(a1 + 144) != 0) + 1, v24);
  if ( v14 >= 0 )
  {
    ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(a2, v15);
    v17 = ApplicationFromView;
    v24[1] = (__int64)ApplicationFromView;
    if ( ApplicationFromView )
      (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)ApplicationFromView + 8LL))(ApplicationFromView);
    if ( v17 )
    {
      v18 = (*(__int64 (__fastcall **)(struct IImmersiveApplication *, __int64))(*(_QWORD *)v17 + 400LL))(v17, v24[0]);
      if ( v18 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x477,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)v18);
    }
    if ( v17 )
      (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x472,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v14);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)&v25,
    (__int64)"ExitCompactOverlayModeForView");
  v25 = &OverlayModeTelemetry::ExitCompactOverlayModeForView::`vftable';
  if ( v10 == 7 )
  {
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v30,
      (__int64)"ExitCompactOverlayModeForView");
    v30[0] = &OverlayModeTelemetry::ExitCompactOverlayModeForView::`vftable';
    OverlayModeTelemetry::ExitCompactOverlayModeForView::StartActivity(v30, a2, 1LL);
    OverlayModeTelemetry::ExitCompactOverlayModeForView::operator=(&v25, v30);
    OverlayModeTelemetry::ExitCompactOverlayModeForView::~ExitCompactOverlayModeForView((OverlayModeTelemetry::ExitCompactOverlayModeForView *)v30);
  }
  v19 = ShellPositionerManager::PerformPositionerHandoff(a1, a2, v10, v11);
  v9 = v19;
  if ( v19 >= 0 )
  {
    if ( *v27 == 1 )
      wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v25);
    OverlayModeTelemetry::ExitCompactOverlayModeForView::~ExitCompactOverlayModeForView((OverlayModeTelemetry::ExitCompactOverlayModeForView *)&v25);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v24);
    goto LABEL_27;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x482,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)(unsigned int)v19);
  v25 = &OverlayModeTelemetry::ExitCompactOverlayModeForView::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy((volatile signed __int32 **)&v25);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v29);
  wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v28);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v26);
  v20 = v24[0];
  if ( v24[0] )
  {
    v24[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v21 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v21 + 16LL))(v21);
  }
  return v9;
}
