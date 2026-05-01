/*
 * XREFs of VirtualDesktopSwitcherHost::DismissAsync$_InitCoro$2 @ 0x180686724
 * Callers:
 *     ?DismissAsync@VirtualDesktopSwitcherHost@@AEAA?AUfire_and_forget@winrt@@W4VIRTUAL_DESKTOP_SWITCHER_HIDE_DETAILS@@@Z @ 0x1802B99E8 (-DismissAsync@VirtualDesktopSwitcherHost@@AEAA-AUfire_and_forget@winrt@@W4VIRTUAL_DESKTOP_SWITCH.c)
 * Callees:
 *     VirtualDesktopSwitcherHost::DismissAsync$_ResumeCoro$1 @ 0x180686790 (VirtualDesktopSwitcherHost--DismissAsync$_ResumeCoro$1.c)
 */

__int64 __fastcall VirtualDesktopSwitcherHost::DismissAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        int *a4,
        __int64 a5)
{
  int v5; // r9d

  v5 = *a4;
  *(_QWORD *)(a2 + 49) = a5;
  *(_DWORD *)(a2 + 57) = v5;
  *(_QWORD *)a2 = VirtualDesktopSwitcherHost::DismissAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 48) = 0;
  return VirtualDesktopSwitcherHost::DismissAsync__ResumeCoro_1(a2);
}
