/*
 * XREFs of ?IsVisible@FallbackFlyoutView@@UEAA_NXZ @ 0x1805D65C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180093874 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FindWindowByPropertyName@Utils@@YAPEAUHWND__@@PEBG@Z @ 0x1805D4AFC (-FindWindowByPropertyName@Utils@@YAPEAUHWND__@@PEBG@Z.c)
 */

bool __fastcall FallbackFlyoutView::IsVisible(FallbackFlyoutView *this, const unsigned __int16 *a2)
{
  __int64 WindowByPropertyName; // rax
  char v3; // bl
  HWND v4; // rdi
  const char *v5; // r9
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v9; // [rsp+58h] [rbp+10h] BYREF

  WindowByPropertyName = Utils::FindWindowByPropertyName((Utils *)L"MeetAndChatFallback", a2);
  v3 = 0;
  v4 = (HWND)WindowByPropertyName;
  if ( WindowByPropertyName )
  {
    v9 = 0;
    v7[1] = &v9;
    v7[0] = 18LL;
    v7[2] = 4LL;
    if ( !(unsigned int)GetWindowCompositionAttribute(WindowByPropertyName, v7) )
    {
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x2D,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\fallbackflyoutview.cpp",
        v5);
      v9 = 0;
    }
    if ( IsWindowVisible(v4) && !v9 )
      v3 = 1;
    LOBYTE(WindowByPropertyName) = v3;
  }
  return WindowByPropertyName;
}
