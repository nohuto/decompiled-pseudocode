/*
 * XREFs of ?RegisterWindow@VirtualDesktopGestureWindow@@IEAAJPEBG0@Z @ 0x18023A418
 * Callers:
 *     ?Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z @ 0x18026AA78 (-Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z.c)
 *     ?Initialize@VirtualDesktopHotKeyWindow@@QEAAJXZ @ 0x18026C514 (-Initialize@VirtualDesktopHotKeyWindow@@QEAAJXZ.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 */

__int64 __fastcall VirtualDesktopGestureWindow::RegisterWindow(
        VirtualDesktopGestureWindow *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  HCURSOR CursorW; // rax
  const char *v7; // r9
  WNDCLASSW WndClass; // [rsp+70h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  memset_0(&WndClass, 0, sizeof(WndClass));
  WndClass.lpszClassName = a2;
  WndClass.lpfnWndProc = (WNDPROC)CWRLImpWndProc<VirtualDesktopGestureWindow>::s_WndProcBase;
  WndClass.hInstance = &_ImageBase;
  CursorW = LoadCursorW(0LL, (LPCWSTR)0x7F00);
  WndClass.cbWndExtra = 8;
  WndClass.hCursor = CursorW;
  RegisterClassW(&WndClass);
  if ( CreateWindowInBand(
         136315008LL,
         a2,
         a3,
         2415919104LL,
         *((_DWORD *)this + 46),
         *((_DWORD *)this + 47),
         *((_DWORD *)this + 48) - *((_DWORD *)this + 46),
         *((_DWORD *)this + 49) - *((_DWORD *)this + 47),
         0LL,
         0LL,
         &_ImageBase,
         this,
         2) )
  {
    return 0LL;
  }
  else
  {
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x58,
             (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
             v7);
  }
}
