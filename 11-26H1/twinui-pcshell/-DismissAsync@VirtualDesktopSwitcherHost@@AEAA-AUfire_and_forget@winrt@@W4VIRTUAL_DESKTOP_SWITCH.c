/*
 * XREFs of ?DismissAsync@VirtualDesktopSwitcherHost@@AEAA?AUfire_and_forget@winrt@@W4VIRTUAL_DESKTOP_SWITCHER_HIDE_DETAILS@@@Z @ 0x1806ADC5C
 * Callers:
 *     ?DisplaySettingsChange@VirtualDesktopSwitcherHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1806ADCE0 (-DisplaySettingsChange@VirtualDesktopSwitcherHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONIT.c)
 *     ?Hide@VirtualDesktopSwitcherHost@@UEAAJW4VIRTUAL_DESKTOP_SWITCHER_HIDE_DETAILS@@@Z @ 0x1806AE430 (-Hide@VirtualDesktopSwitcherHost@@UEAAJW4VIRTUAL_DESKTOP_SWITCHER_HIDE_DETAILS@@@Z.c)
 *     winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_eba64241e9b90ff96c214d869f8d7087___::Invoke @ 0x1806AE730 (winrt--impl--delegate_winrt--Windows--System--Threading--TimerElapsedHandler__lambda_eba64241e9b.c)
 *     ?MonitorAdded@VirtualDesktopSwitcherHost@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x1806AE900 (-MonitorAdded@VirtualDesktopSwitcherHost@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     VirtualDesktopSwitcherHost::DismissAsync$_ResumeCoro$1 @ 0x1806ADAD0 (VirtualDesktopSwitcherHost--DismissAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall VirtualDesktopSwitcherHost::DismissAsync(void (__fastcall *a1)(__int64 a1), _BYTE *a2, int a3)
{
  void (__fastcall **v7)(__int64); // [rsp+40h] [rbp+8h]

  v7 = (void (__fastcall **)(__int64))operator new(0x50uLL);
  v7[7] = a1;
  *((_DWORD *)v7 + 16) = a3;
  *v7 = VirtualDesktopSwitcherHost::DismissAsync__ResumeCoro_1;
  *((_DWORD *)v7 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v7 + 48) = 0;
  VirtualDesktopSwitcherHost::DismissAsync__ResumeCoro_1((__int64)v7);
  return a2;
}
