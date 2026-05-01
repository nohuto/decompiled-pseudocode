/*
 * XREFs of ?StartTaskbarBounceAnimation@CAppThumbnailWindow@@QEAAXXZ @ 0x1804989A8
 * Callers:
 *     ?NotifyRaiseDesktopCompleted@MultitaskingViewGestureHandler@@UEAAXXZ @ 0x18048BDA0 (-NotifyRaiseDesktopCompleted@MultitaskingViewGestureHandler@@UEAAXXZ.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18005556C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180093874 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

void __fastcall CAppThumbnailWindow::StartTaskbarBounceAnimation(
        CAppThumbnailWindow *this,
        struct IApplicationView *a2)
{
  __int64 (__fastcall ****v2)(ApplicationViewHelpers *, GUID *, __int64 *); // rdi
  __int64 (__fastcall ****i)(ApplicationViewHelpers *, GUID *, __int64 *); // rbx
  __int64 WindowForView; // rax
  const char *v5; // r9
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (__int64 (__fastcall ****)(ApplicationViewHelpers *, GUID *, __int64 *))*((_QWORD *)this + 69);
  for ( i = (__int64 (__fastcall ****)(ApplicationViewHelpers *, GUID *, __int64 *))*((_QWORD *)this + 68); i != v2; ++i )
  {
    WindowForView = ApplicationViewHelpers::GetWindowForView(*i, a2);
    if ( WindowForView )
    {
      v6 = 0LL;
      if ( !(unsigned int)GetWindowMinimizeRect(WindowForView, &v6) )
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0x6A5,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
          v5);
    }
  }
}
