/*
 * XREFs of ?CancelHoldAsync@CopilotHotkeyManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x180623A80
 * Callers:
 *     ?v_WndProc@CopilotHotkeyManager@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x180637E00 (-v_WndProc@CopilotHotkeyManager@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     CopilotHotkeyManager::CancelHoldAsync$_ResumeCoro$1 @ 0x1806237D0 (CopilotHotkeyManager--CancelHoldAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall CopilotHotkeyManager::CancelHoldAsync(void (__fastcall *a1)(__int64 a1), _BYTE *a2)
{
  void (__fastcall **v5)(__int64); // [rsp+40h] [rbp+8h]

  v5 = (void (__fastcall **)(__int64))operator new(0x60uLL);
  v5[11] = a1;
  *v5 = CopilotHotkeyManager::CancelHoldAsync__ResumeCoro_1;
  *((_DWORD *)v5 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v5 + 80) = 0;
  CopilotHotkeyManager::CancelHoldAsync__ResumeCoro_1((__int64)v5);
  return a2;
}
