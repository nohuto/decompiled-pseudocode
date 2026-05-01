/*
 * XREFs of ??0FocusHoldingTank@@QEAA@PEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@@Z @ 0x180451928
 * Callers:
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180254FE0 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ??$make_unique_nothrow@VFocusHoldingTank@@PEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@@wil@@YA?AV?$unique_ptr@VFocusHoldingTank@@U?$default_delete@VFocusHoldingTank@@@wistd@@@wistd@@$$QEAPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@@Z @ 0x180449BF8 (--$make_unique_nothrow@VFocusHoldingTank@@PEAUICortanaExperienceManager@Experience@Shell@Interna.c)
 * Callees:
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180047468 (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180093874 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ??1CreateHoldingTankWindow@StartWindowTelemetry@@QEAA@XZ @ 0x180451B70 (--1CreateHoldingTankWindow@StartWindowTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@CreateHoldingTankWindow@StartWindowTelemetry@@QEAAXXZ @ 0x1804521A8 (-StartActivity@CreateHoldingTankWindow@StartWindowTelemetry@@QEAAXXZ.c)
 *     ?Stop@CreateHoldingTankWindow@StartWindowTelemetry@@QEAAXPEAX@Z @ 0x1804522C0 (-Stop@CreateHoldingTankWindow@StartWindowTelemetry@@QEAAXPEAX@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ForegroundOnDesktopSwitchEx@@@details@wil@@QEAA_NXZ @ 0x1804529A8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ForegroundOnDesktopSwitchEx@@@det.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
FocusHoldingTank *__fastcall FocusHoldingTank::FocusHoldingTank(
        LONG_PTR dwNewLong,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2)
{
  char IsEnabled; // al
  __int64 v4; // rcx
  __int64 WindowInBand; // rax
  const char *v6; // r9
  const char *v7; // r9
  bool v8; // zf
  char v9; // al
  const char *v10; // r9
  WNDCLASSW WndClass; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v13[42]; // [rsp+D0h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+148h]

  *(_QWORD *)dwNewLong = 0LL;
  *(_DWORD *)(dwNewLong + 8) = 0;
  *(_QWORD *)(dwNewLong + 16) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *))(*(_QWORD *)a2 + 8LL))(a2);
  wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v13,
    (__int64)"CreateHoldingTankWindow");
  v13[0] = &StartWindowTelemetry::CreateHoldingTankWindow::`vftable';
  StartWindowTelemetry::CreateHoldingTankWindow::StartActivity((StartWindowTelemetry::CreateHoldingTankWindow *)v13);
  *(_DWORD *)(dwNewLong + 8) = GetCurrentThreadId();
  memset_0(&WndClass, 0, sizeof(WndClass));
  WndClass.lpfnWndProc = (WNDPROC)FocusHoldingTank::s_WndProc;
  WndClass.hInstance = &_ImageBase;
  WndClass.hCursor = LoadCursorW(0LL, (LPCWSTR)0x7F00);
  WndClass.lpszClassName = L"StartAndCortanaFocusHoldingTank";
  RegisterClassW(&WndClass);
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_ForegroundOnDesktopSwitchEx>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ForegroundOnDesktopSwitchEx>::GetImpl'::`2'::impl);
  v4 = 0x200000LL;
  if ( !IsEnabled )
    v4 = 2097280LL;
  WindowInBand = CreateWindowInBand(
                   v4,
                   L"StartAndCortanaFocusHoldingTank",
                   0LL,
                   0x80000000LL,
                   0,
                   0,
                   0,
                   0,
                   0LL,
                   0LL,
                   &_ImageBase,
                   0LL,
                   6);
  *(_QWORD *)dwNewLong = WindowInBand;
  if ( !WindowInBand )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x39,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\focusholdingtank.cpp",
      v6);
  if ( *(_QWORD *)dwNewLong )
  {
    SetLastError(0);
    if ( SetWindowLongPtrW(*(HWND *)dwNewLong, -21, dwNewLong) || (v8 = GetLastError() == 0, v9 = 1, v8) )
      v9 = 0;
    if ( v9 )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x42,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\focusholdingtank.cpp",
        v7);
    if ( !SetWindowPos(*(HWND *)dwNewLong, 0LL, 0, 0, 0, 0, 0x57u) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x46,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\focusholdingtank.cpp",
        v10);
    StartWindowTelemetry::CreateHoldingTankWindow::Stop(
      (StartWindowTelemetry::CreateHoldingTankWindow *)v13,
      *(void **)dwNewLong);
  }
  StartWindowTelemetry::CreateHoldingTankWindow::~CreateHoldingTankWindow((StartWindowTelemetry::CreateHoldingTankWindow *)v13);
  return (FocusHoldingTank *)dwNewLong;
}
