/*
 * XREFs of ?CreateXamlHostWindow@SharedDesktopBackgroundVisualHost@@AEAAPEAUHWND__@@XZ @ 0x18060A960
 * Callers:
 *     ?XamlHostThreadProc@SharedDesktopBackgroundVisualHost@@AEAAKXZ @ 0x18060EE88 (-XamlHostThreadProc@SharedDesktopBackgroundVisualHost@@AEAAKXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??0?$ActivityBase@VSharedVisualHostProvider@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18060967C (--0-$ActivityBase@VSharedVisualHostProvider@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ??1CreateXamlHostWindow@SharedVisualHostProvider@@QEAA@XZ @ 0x180609DC0 (--1CreateXamlHostWindow@SharedVisualHostProvider@@QEAA@XZ.c)
 *     ?StartActivity@CreateXamlHostWindow@SharedVisualHostProvider@@QEAAXXZ @ 0x18060BE78 (-StartActivity@CreateXamlHostWindow@SharedVisualHostProvider@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VSharedVisualHostProvider@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18060C714 (-Stop@-$ActivityBase@VSharedVisualHostProvider@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag.c)
 */

// Hidden C++ exception states: #wind=1
HWND __fastcall SharedDesktopBackgroundVisualHost::CreateXamlHostWindow(SharedDesktopBackgroundVisualHost *this)
{
  HWND WindowInBand; // rbx
  int v3; // [rsp+70h] [rbp-90h] BYREF
  int pvAttribute; // [rsp+74h] [rbp-8Ch] BYREF
  _QWORD v5[3]; // [rsp+78h] [rbp-88h] BYREF
  WNDCLASSW WndClass; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v7[42]; // [rsp+E0h] [rbp-20h] BYREF

  wil::ActivityBase<SharedVisualHostProvider,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SharedVisualHostProvider,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v7,
    (__int64)"CreateXamlHostWindow");
  v7[0] = &SharedVisualHostProvider::CreateXamlHostWindow::`vftable';
  SharedVisualHostProvider::CreateXamlHostWindow::StartActivity((SharedVisualHostProvider::CreateXamlHostWindow *)v7);
  memset_0(&WndClass, 0, sizeof(WndClass));
  WndClass.hCursor = LoadCursorW(0LL, (LPCWSTR)0x7F00);
  WndClass.hbrBackground = (HBRUSH)GetStockObject(4);
  WndClass.lpszClassName = L"WindowName";
  WndClass.style = 3;
  WndClass.lpfnWndProc = (WNDPROC)SharedDesktopBackgroundVisualHost::WndProc;
  RegisterClassW(&WndClass);
  WindowInBand = (HWND)CreateWindowInBand(2621568LL, WndClass.lpszClassName, &pvData, 0x80000000LL);
  v3 = 1;
  v5[0] = 13LL;
  v5[1] = &v3;
  v5[2] = 4LL;
  SetWindowCompositionAttribute(WindowInBand, v5);
  SetPropW(WindowInBand, L"NonRudeHWND", HANDLE_FLAG_INHERIT);
  SetPropW(WindowInBand, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT);
  pvAttribute = 1;
  DwmSetWindowAttribute(WindowInBand, 0xDu, &pvAttribute, 4u);
  wil::ActivityBase<SharedVisualHostProvider,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v7);
  SharedVisualHostProvider::CreateXamlHostWindow::~CreateXamlHostWindow((SharedVisualHostProvider::CreateXamlHostWindow *)v7);
  return WindowInBand;
}
