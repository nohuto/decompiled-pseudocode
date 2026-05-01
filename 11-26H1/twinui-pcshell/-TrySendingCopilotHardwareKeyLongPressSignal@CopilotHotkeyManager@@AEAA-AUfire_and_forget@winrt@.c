/*
 * XREFs of ?TrySendingCopilotHardwareKeyLongPressSignal@CopilotHotkeyManager@@AEAA?AUfire_and_forget@winrt@@_N@Z @ 0x180636100
 * Callers:
 *     CopilotHotkeyManager::CancelHoldAsync$_ResumeCoro$1 @ 0x1806237D0 (CopilotHotkeyManager--CancelHoldAsync$_ResumeCoro$1.c)
 *     ?SendPressAndHoldStopSignalIfNeeded@CopilotHotkeyManager@@AEAA_NXZ @ 0x1806348E4 (-SendPressAndHoldStopSignalIfNeeded@CopilotHotkeyManager@@AEAA_NXZ.c)
 *     ?v_WndProc@CopilotHotkeyManager@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x180637E00 (-v_WndProc@CopilotHotkeyManager@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1 @ 0x180635530 (CopilotHotkeyManager--TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal(
        void (__fastcall *a1)(char *a1),
        _BYTE *a2,
        char a3)
{
  void (__fastcall **v7)(char *); // [rsp+20h] [rbp-28h]

  v7 = (void (__fastcall **)(char *))operator new(0x250uLL);
  v7[71] = a1;
  *((_BYTE *)v7 + 576) = a3;
  *v7 = CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal__ResumeCoro_1;
  *((_DWORD *)v7 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v7 + 560) = 0;
  CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal__ResumeCoro_1((char *)v7);
  return a2;
}
