/*
 * XREFs of ?OnViewClosing@CDesktopPositioner@@UEAAJPEAUIApplicationView@@H@Z @ 0x180165B90
 * Callers:
 *     ?OnViewClosing@CDesktopPositioner@@W7EAAJPEAUIApplicationView@@H@Z @ 0x1805106A0 (-OnViewClosing@CDesktopPositioner@@W7EAAJPEAUIApplicationView@@H@Z.c)
 *     ?OnViewClosing@CDesktopPositioner@@WBA@EAAJPEAUIApplicationView@@H@Z @ 0x1805106B0 (-OnViewClosing@CDesktopPositioner@@WBA@EAAJPEAUIApplicationView@@H@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180047CDC (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_PersistPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180165C7C (-_PersistPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall CDesktopPositioner::OnViewClosing(
        CDesktopPositioner *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        int a3)
{
  __int64 WindowForView; // rbx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    WindowForView = ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
    if ( WindowForView )
    {
      if ( (int)DwmpBeginTransitionRequest(50LL) >= 0 )
      {
        v6 = DwmpTransitionWindow(WindowForView, 536870997LL);
        if ( v6 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1A6,
            (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v6);
        v7 = DwmpEndTransitionRequest(50LL);
        if ( v7 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1A7,
            (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v7);
      }
    }
  }
  v8 = CDesktopPositioner::_PersistPosition((CDesktopPositioner *)((char *)this - 120), (struct IApplicationView *)a2);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1AC,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
