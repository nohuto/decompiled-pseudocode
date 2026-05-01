/*
 * XREFs of ?CreateAdjacentDesktop@VirtualDesktopHotKeyWindow@@QEAAJPEA_NPEAUIVirtualDesktop@@V?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@IH@Z @ 0x18056A498
 * Callers:
 *     ?AnimateOperation2@VirtualDesktopSwitchAnimator@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchDirection@@W4VirtualDesktopSwitchType@@@Z @ 0x180567660 (-AnimateOperation2@VirtualDesktopSwitchAnimator@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitc.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ @ 0x1801FDA14 (--1-$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ.c)
 *     ?CreateAdjacentDesktop@VirtualDesktopHotKeyWindow@@AEAAJPEA_NPEAUIVirtualDesktop@@V?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@IUtagRECT@@@Z @ 0x180569E30 (-CreateAdjacentDesktop@VirtualDesktopHotKeyWindow@@AEAAJPEA_NPEAUIVirtualDesktop@@V-$shared_any_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopHotKeyWindow::CreateAdjacentDesktop(
        VirtualDesktopGestureWindow *a1,
        _BYTE *a2,
        struct IVirtualDesktop *a3,
        __int64 a4,
        int a5,
        int a6)
{
  int v7; // r10d
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v12[2]; // [rsp+30h] [rbp-28h] BYREF
  struct tagRECT v13; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v7 = *((_DWORD *)a1 + 48) - *((_DWORD *)a1 + 46);
  v12[0] = (unsigned int)(a6 * v7);
  LODWORD(v12[1]) = v7 + LODWORD(v12[0]);
  HIDWORD(v12[1]) = *((_DWORD *)a1 + 49) - *((_DWORD *)a1 + 47);
  v13 = 0LL;
  v8 = *(_QWORD *)(a4 + 8);
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  v13 = *(struct tagRECT *)a4;
  v9 = VirtualDesktopHotKeyWindow::CreateAdjacentDesktop(a1, a2, a3, &v13, a5, (struct tagRECT *)v12);
  v10 = v9;
  if ( v9 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA3,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeywindow.cpp",
      (const char *)(unsigned int)v9);
  std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>::~shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>(a4);
  return v10;
}
