/*
 * XREFs of ?TrySendingCopilotHardwareKeyLongPressSignal@CopilotHotkeyManager@@AEAA?AUfire_and_forget@winrt@@_N@Z @ 0x180610580
 * Callers:
 *     CopilotHotkeyManager::CancelHoldAsync$_ResumeCoro$1 @ 0x1805FE610 (CopilotHotkeyManager--CancelHoldAsync$_ResumeCoro$1.c)
 *     ?SendPressAndHoldStopSignalIfNeeded@CopilotHotkeyManager@@AEAA_NXZ @ 0x18060F350 (-SendPressAndHoldStopSignalIfNeeded@CopilotHotkeyManager@@AEAA_NXZ.c)
 *     ?v_WndProc@CopilotHotkeyManager@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x180612190 (-v_WndProc@CopilotHotkeyManager@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal$_InitCoro$2 @ 0x18060FFAC (CopilotHotkeyManager--TrySendingCopilotHardwareKeyLongPressSignal$_InitCoro$2.c)
 */

_BYTE *__fastcall CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal(__int64 a1, _BYTE *a2, char a3)
{
  char *v5; // rax
  int v7; // [rsp+1A8h] [rbp+10h] BYREF
  char v8; // [rsp+1B0h] [rbp+18h] BYREF

  v8 = a3;
  v5 = (char *)operator new(0x160uLL);
  v7 = 0;
  CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal__InitCoro_2(&v7, v5, a2, &v8, a1);
  return a2;
}
