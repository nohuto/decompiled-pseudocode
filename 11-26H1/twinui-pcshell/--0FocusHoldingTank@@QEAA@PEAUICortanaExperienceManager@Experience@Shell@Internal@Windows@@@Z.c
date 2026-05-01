/*
 * XREFs of ??0FocusHoldingTank@@QEAA@PEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@@Z @ 0x18045E56C
 * Callers:
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180249650 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ??$make_unique_nothrow@VFocusHoldingTank@@PEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@@wil@@YA?AV?$unique_ptr@VFocusHoldingTank@@U?$default_delete@VFocusHoldingTank@@@wistd@@@wistd@@$$QEAPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@@Z @ 0x1804563AC (--$make_unique_nothrow@VFocusHoldingTank@@PEAUICortanaExperienceManager@Experience@Shell@Interna.c)
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004FBA0 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180097340 (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??1CreateHoldingTankWindow@StartWindowTelemetry@@QEAA@XZ @ 0x18045E7A8 (--1CreateHoldingTankWindow@StartWindowTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@CreateHoldingTankWindow@StartWindowTelemetry@@QEAAXXZ @ 0x18045E91C (-StartActivity@CreateHoldingTankWindow@StartWindowTelemetry@@QEAAXXZ.c)
 *     ?Stop@CreateHoldingTankWindow@StartWindowTelemetry@@QEAAXPEAX@Z @ 0x18045EA54 (-Stop@CreateHoldingTankWindow@StartWindowTelemetry@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
FocusHoldingTank *__fastcall FocusHoldingTank::FocusHoldingTank(
        LONG_PTR dwNewLong,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2)
{
  __int64 WindowInBand; // rax
  const char *v4; // r9
  const char *v5; // r9
  bool v6; // zf
  char v7; // al
  const char *v8; // r9
  WNDCLASSW WndClass; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v11[42]; // [rsp+D0h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+148h]

  *(_QWORD *)dwNewLong = 0LL;
  *(_DWORD *)(dwNewLong + 8) = 0;
  *(_QWORD *)(dwNewLong + 16) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *))(*(_QWORD *)a2 + 8LL))(a2);
  wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v11,
    (__int64)"CreateHoldingTankWindow");
  v11[0] = &StartWindowTelemetry::CreateHoldingTankWindow::`vftable';
  StartWindowTelemetry::CreateHoldingTankWindow::StartActivity((StartWindowTelemetry::CreateHoldingTankWindow *)v11);
  *(_DWORD *)(dwNewLong + 8) = GetCurrentThreadId();
  memset_0(&WndClass, 0, sizeof(WndClass));
  WndClass.lpfnWndProc = (WNDPROC)FocusHoldingTank::s_WndProc;
  WndClass.hInstance = &_ImageBase;
  WndClass.hCursor = LoadCursorW(0LL, (LPCWSTR)0x7F00);
  WndClass.lpszClassName = L"StartAndCortanaFocusHoldingTank";
  RegisterClassW(&WndClass);
  WindowInBand = CreateWindowInBand(0x200000LL, L"StartAndCortanaFocusHoldingTank", 0LL, 0x80000000LL);
  *(_QWORD *)dwNewLong = WindowInBand;
  if ( !WindowInBand )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x25,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\focusholdingtank.cpp",
      v4);
  if ( *(_QWORD *)dwNewLong )
  {
    SetLastError(0);
    if ( SetWindowLongPtrW(*(HWND *)dwNewLong, -21, dwNewLong) || (v6 = GetLastError() == 0, v7 = 1, v6) )
      v7 = 0;
    if ( v7 )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x2E,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\focusholdingtank.cpp",
        v5);
    if ( !SetWindowPos(*(HWND *)dwNewLong, 0LL, 0, 0, 0, 0, 0x57u) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x32,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\focusholdingtank.cpp",
        v8);
    StartWindowTelemetry::CreateHoldingTankWindow::Stop(
      (StartWindowTelemetry::CreateHoldingTankWindow *)v11,
      *(void **)dwNewLong);
  }
  StartWindowTelemetry::CreateHoldingTankWindow::~CreateHoldingTankWindow((StartWindowTelemetry::CreateHoldingTankWindow *)v11);
  return (FocusHoldingTank *)dwNewLong;
}
