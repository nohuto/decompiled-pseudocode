/*
 * XREFs of ?_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@Z @ 0x1801E54C8
 * Callers:
 *     _lambda_d6b4118795ae303e935bbd5b6ca0014f_$_ResumeCoro$1::operator() @ 0x180601070 (_lambda_d6b4118795ae303e935bbd5b6ca0014f_$_ResumeCoro$1--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801E5778 (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ??0TaskScheduler@shell@@QEAA@PEAUIShellTaskScheduler@@AEBU_GUID@@@Z @ 0x18023090C (--0TaskScheduler@shell@@QEAA@PEAUIShellTaskScheduler@@AEBU_GUID@@@Z.c)
 *     ??1LauncherTipContextMenuExecuteCommand@LauncherTipContextMenuTelemetry@@QEAA@XZ @ 0x1802A23F8 (--1LauncherTipContextMenuExecuteCommand@LauncherTipContextMenuTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@LauncherTipContextMenuExecuteCommand@LauncherTipContextMenuTelemetry@@QEAAXPEBG@Z @ 0x1802BD608 (-StartActivity@LauncherTipContextMenuExecuteCommand@LauncherTipContextMenuTelemetry@@QEAAXPEBG@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     shell::TaskScheduler::AddTask__lambda_21d9478fa7481aa5ac8b815bdb34bba5__CRefCountedObject_CLauncherTipContextMenu::LauncherTipMenuCommand____ @ 0x1805FF09C (shell--TaskScheduler--AddTask__lambda_21d9478fa7481aa5ac8b815bdb34bba5__CRefCountedObject_CLaunc.c)
 *     _lambda_21d9478fa7481aa5ac8b815bdb34bba5_::_lambda_21d9478fa7481aa5ac8b815bdb34bba5_ @ 0x1806002EC (_lambda_21d9478fa7481aa5ac8b815bdb34bba5_--_lambda_21d9478fa7481aa5ac8b815bdb34bba5_.c)
 *     _lambda_21d9478fa7481aa5ac8b815bdb34bba5_::__lambda_21d9478fa7481aa5ac8b815bdb34bba5_ @ 0x1806007EC (_lambda_21d9478fa7481aa5ac8b815bdb34bba5_--__lambda_21d9478fa7481aa5ac8b815bdb34bba5_.c)
 *     ??1TaskScheduler@shell@@QEAA@XZ @ 0x1806009D0 (--1TaskScheduler@shell@@QEAA@XZ.c)
 *     ?_EnsureScheduler@CLauncherTipContextMenu@@AEAAJXZ @ 0x180603D20 (-_EnsureScheduler@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?_EnsureWindowMessageService@CLauncherTipContextMenu@@AEAAJXZ @ 0x180603DA8 (-_EnsureWindowMessageService@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?_IsInImmersiveAppOrLauncher@CLauncherTipContextMenu@@AEAA_NXZ @ 0x180604338 (-_IsInImmersiveAppOrLauncher@CLauncherTipContextMenu@@AEAA_NXZ.c)
 *     ?LaunchCortanaApp@@YAJPEBGW4CortanaAppLaunchType@@_N@Z @ 0x1806844F8 (-LaunchCortanaApp@@YAJPEBGW4CortanaAppLaunchType@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=17
void __fastcall CLauncherTipContextMenu::_ExecuteCommand(CLauncherTipContextMenu *this, __int64 *a2)
{
  const unsigned __int16 *v4; // rbx
  __int64 v5; // rdx
  char v6; // bl
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v10[8]; // [rsp+30h] [rbp-D0h] BYREF
  void *ppvOut; // [rsp+38h] [rbp-C8h] BYREF
  void *v12[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v13[32]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v14[42]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v15[352]; // [rsp+1C0h] [rbp+C0h] BYREF

  v12[1] = a2;
  v4 = *(const unsigned __int16 **)(*a2 + 16);
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v14);
  v14[0] = &LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand::`vftable';
  LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand::StartActivity(
    (LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand *)v14,
    v4);
  if ( (*(_BYTE *)(*a2 + 112) & 8) != 0 && CLauncherTipContextMenu::_IsInImmersiveAppOrLauncher(this) )
  {
    if ( (int)CLauncherTipContextMenu::_EnsureWindowMessageService(this) >= 0 )
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**((_QWORD **)this + 18) + 48LL))(
        *((_QWORD *)this + 18),
        786LL,
        0LL,
        1LL);
  }
  else if ( (*(_BYTE *)(*a2 + 112) & 0x20) != 0 )
  {
    LaunchCortanaApp(L"StartMode=Proactive&QuerySource=StartContextMenu", v5, 1LL);
  }
  else if ( (int)CLauncherTipContextMenu::_EnsureScheduler(this) >= 0 )
  {
    v12[0] = 0LL;
    v6 = 1;
    if ( (*(_BYTE *)(*a2 + 112) & 2) != 0 )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
      if ( IUnknown_QueryService(
             *((IUnknown **)this + 2),
             &IID_IImmersiveApplicationManager,
             &GUID_bf63999f_7411_40da_861c_df72c0ffee84,
             &ppvOut) >= 0 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v12);
        if ( IUnknown_QueryService(
               *((IUnknown **)this + 2),
               &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
               &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
               v12) >= 0 )
        {
          CoAllowSetForegroundWindow((IUnknown *)ppvOut, 0LL);
          (*(void (__fastcall **)(void *, void *, __int64))(*(_QWORD *)ppvOut + 104LL))(ppvOut, v12[0], 1LL);
        }
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    }
    if ( GetKeyState(160) >= 0 && GetKeyState(161) >= 0 || GetKeyState(17) >= 0 || (*(_BYTE *)(*a2 + 112) & 4) != 0 )
      v6 = 0;
    v10[0] = v6;
    shell::TaskScheduler::TaskScheduler(
      (shell::TaskScheduler *)v13,
      *((struct IShellTaskScheduler **)this + 17),
      &TOID_LAUNCHERTIPCONTEXTMENU_EXECUTECOMMAND);
    v7 = lambda_21d9478fa7481aa5ac8b815bdb34bba5_::_lambda_21d9478fa7481aa5ac8b815bdb34bba5_(v15, v12, v14, v10);
    ppvOut = (void *)*a2;
    shell::TaskScheduler::AddTask__lambda_21d9478fa7481aa5ac8b815bdb34bba5__CRefCountedObject_CLauncherTipContextMenu::LauncherTipMenuCommand____(
      v13,
      v8,
      &ppvOut,
      v7);
    lambda_21d9478fa7481aa5ac8b815bdb34bba5_::__lambda_21d9478fa7481aa5ac8b815bdb34bba5_(v15);
    shell::TaskScheduler::~TaskScheduler((shell::TaskScheduler *)v13);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v12);
  }
  LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand::~LauncherTipContextMenuExecuteCommand((LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand *)v14);
  v9 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
}
