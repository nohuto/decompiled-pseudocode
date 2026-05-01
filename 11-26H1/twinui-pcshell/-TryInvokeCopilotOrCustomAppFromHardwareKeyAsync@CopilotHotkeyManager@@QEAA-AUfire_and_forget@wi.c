/*
 * XREFs of ?TryInvokeCopilotOrCustomAppFromHardwareKeyAsync@CopilotHotkeyManager@@QEAA?AUfire_and_forget@winrt@@W4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x1806354AC
 * Callers:
 *     CopilotHotkeyManager::CancelHoldAsync$_ResumeCoro$1 @ 0x1806237D0 (CopilotHotkeyManager--CancelHoldAsync$_ResumeCoro$1.c)
 *     CopilotHotkeyManager::MonitorForCopilotExtendedSignals$_ResumeCoro$1 @ 0x180633140 (CopilotHotkeyManager--MonitorForCopilotExtendedSignals$_ResumeCoro$1.c)
 *     ?OnMessage@CopilotHotkeyManager@@UEAAJI_K_J@Z @ 0x1806336E0 (-OnMessage@CopilotHotkeyManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     CopilotHotkeyManager::TryInvokeCopilotOrCustomAppFromHardwareKeyAsync$_ResumeCoro$1 @ 0x180635280 (CopilotHotkeyManager--TryInvokeCopilotOrCustomAppFromHardwareKeyAsync$_ResumeCoro$1.c)
 */

_BYTE *__fastcall CopilotHotkeyManager::TryInvokeCopilotOrCustomAppFromHardwareKeyAsync(
        void (__fastcall *a1)(__int64 a1),
        _BYTE *a2,
        int a3)
{
  void (__fastcall **v7)(__int64); // [rsp+40h] [rbp+8h]

  v7 = (void (__fastcall **)(__int64))operator new(0x90uLL);
  v7[15] = a1;
  *((_DWORD *)v7 + 32) = a3;
  *v7 = CopilotHotkeyManager::TryInvokeCopilotOrCustomAppFromHardwareKeyAsync__ResumeCoro_1;
  *((_DWORD *)v7 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v7 + 112) = 0;
  CopilotHotkeyManager::TryInvokeCopilotOrCustomAppFromHardwareKeyAsync__ResumeCoro_1((__int64)v7);
  return a2;
}
