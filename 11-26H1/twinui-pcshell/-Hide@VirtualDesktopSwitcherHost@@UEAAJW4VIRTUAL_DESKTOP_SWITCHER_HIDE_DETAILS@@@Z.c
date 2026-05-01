/*
 * XREFs of ?Hide@VirtualDesktopSwitcherHost@@UEAAJW4VIRTUAL_DESKTOP_SWITCHER_HIDE_DETAILS@@@Z @ 0x1806AE430
 * Callers:
 *     <none>
 * Callees:
 *     ?DismissAsync@VirtualDesktopSwitcherHost@@AEAA?AUfire_and_forget@winrt@@W4VIRTUAL_DESKTOP_SWITCHER_HIDE_DETAILS@@@Z @ 0x1806ADC5C (-DismissAsync@VirtualDesktopSwitcherHost@@AEAA-AUfire_and_forget@winrt@@W4VIRTUAL_DESKTOP_SWITCH.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall VirtualDesktopSwitcherHost::Hide(__int64 a1, int a2)
{
  __int64 v3; // rdi
  HWND WindowW; // rax
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1 - 8;
  try
  {
    if ( (*(unsigned __int8 (**)(void))(*(_QWORD *)(v3 + 136) + 40LL))() )
    {
      WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
      if ( WindowW )
        PostMessageW(WindowW, 0x111u, 0xA031uLL, 0LL);
    }
    VirtualDesktopSwitcherHost::DismissAsync((void (__fastcall *)(__int64))v3, &v8, a2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x12C,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\virtualdesktopswitcherhost.cpp",
                           v5);
  }
  return result;
}
