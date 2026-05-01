/*
 * XREFs of ?MonitorForCopilotExtendedSignals@CopilotHotkeyManager@@AEAA?AUfire_and_forget@winrt@@W4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x1806334E4
 * Callers:
 *     ?OnHotkeyInvoke@CopilotHotkeyManager@@QEAAXW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x1806335CC (-OnHotkeyInvoke@CopilotHotkeyManager@@QEAAXW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 *     ?OnMessage@CopilotHotkeyManager@@UEAAJI_K_J@Z @ 0x1806336E0 (-OnMessage@CopilotHotkeyManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     CopilotHotkeyManager::MonitorForCopilotExtendedSignals$_ResumeCoro$1 @ 0x180633140 (CopilotHotkeyManager--MonitorForCopilotExtendedSignals$_ResumeCoro$1.c)
 */

_BYTE *__fastcall CopilotHotkeyManager::MonitorForCopilotExtendedSignals(
        void (__fastcall *a1)(char *a1),
        _BYTE *a2,
        int a3)
{
  void (__fastcall **v7)(char *); // [rsp+40h] [rbp+8h]

  v7 = (void (__fastcall **)(char *))operator new(0x90uLL);
  v7[15] = a1;
  *((_DWORD *)v7 + 32) = a3;
  *v7 = CopilotHotkeyManager::MonitorForCopilotExtendedSignals__ResumeCoro_1;
  *((_DWORD *)v7 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v7 + 112) = 0;
  CopilotHotkeyManager::MonitorForCopilotExtendedSignals__ResumeCoro_1((char *)v7);
  return a2;
}
