/*
 * XREFs of ??1FocusHoldingTank@@QEAA@XZ @ 0x18045E800
 * Callers:
 *     ?reset@?$unique_ptr@VFocusHoldingTank@@U?$default_delete@VFocusHoldingTank@@@wistd@@@wistd@@QEAAXPEAVFocusHoldingTank@@@Z @ 0x180050904 (-reset@-$unique_ptr@VFocusHoldingTank@@U-$default_delete@VFocusHoldingTank@@@wistd@@@wistd@@QEAA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004FBA0 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Stop@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180096920 (-Stop@-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180097340 (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??1DestroyHoldingTankWindow@StartWindowTelemetry@@QEAA@XZ @ 0x18045E7D4 (--1DestroyHoldingTankWindow@StartWindowTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@DestroyHoldingTankWindow@StartWindowTelemetry@@QEAAXXZ @ 0x18045E9B8 (-StartActivity@DestroyHoldingTankWindow@StartWindowTelemetry@@QEAAXXZ.c)
 */

void __fastcall FocusHoldingTank::~FocusHoldingTank(FocusHoldingTank *this)
{
  DWORD v2; // edx
  const char *v3; // r9
  _QWORD v4[42]; // [rsp+20h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v4,
    (__int64)"DestroyHoldingTankWindow");
  v4[0] = &StartWindowTelemetry::DestroyHoldingTankWindow::`vftable';
  StartWindowTelemetry::DestroyHoldingTankWindow::StartActivity((StartWindowTelemetry::DestroyHoldingTankWindow *)v4);
  if ( *(_QWORD *)this )
  {
    SetLastError(0);
    if ( !SetWindowLongPtrW(*(HWND *)this, -21, 0LL) && GetLastError() )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x42,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\focusholdingtank.cpp",
        v3);
    DestroyWindow(*(HWND *)this);
    *(_QWORD *)this = 0LL;
  }
  wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v4, v2);
  StartWindowTelemetry::DestroyHoldingTankWindow::~DestroyHoldingTankWindow((StartWindowTelemetry::DestroyHoldingTankWindow *)v4);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 2);
}
