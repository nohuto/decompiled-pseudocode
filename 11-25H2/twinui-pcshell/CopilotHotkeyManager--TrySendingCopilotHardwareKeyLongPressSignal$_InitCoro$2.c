/*
 * XREFs of CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal$_InitCoro$2 @ 0x18060FFAC
 * Callers:
 *     ?TrySendingCopilotHardwareKeyLongPressSignal@CopilotHotkeyManager@@AEAA?AUfire_and_forget@winrt@@_N@Z @ 0x180610580 (-TrySendingCopilotHardwareKeyLongPressSignal@CopilotHotkeyManager@@AEAA-AUfire_and_forget@winrt@.c)
 * Callees:
 *     CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1 @ 0x180610010 (CopilotHotkeyManager--TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1.c)
 */

__int64 __fastcall CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal__InitCoro_2(
        _DWORD *a1,
        char *a2,
        _BYTE *a3,
        char *a4,
        __int64 a5)
{
  char v5; // r9

  v5 = *a4;
  *(_QWORD *)(a2 + 321) = a5;
  a2[329] = v5;
  *(_QWORD *)a2 = CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal__ResumeCoro_1;
  *((_DWORD *)a2 + 2) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  a2[320] = 0;
  return CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal__ResumeCoro_1(a2);
}
