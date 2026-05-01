/*
 * XREFs of ?CancelHoldAsync@CopilotHotkeyManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1805FE88C
 * Callers:
 *     ?v_WndProc@CopilotHotkeyManager@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x180612190 (-v_WndProc@CopilotHotkeyManager@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     CopilotHotkeyManager::CancelHoldAsync$_InitCoro$2 @ 0x1805FE5B0 (CopilotHotkeyManager--CancelHoldAsync$_InitCoro$2.c)
 */

_BYTE *__fastcall CopilotHotkeyManager::CancelHoldAsync(__int64 a1, _BYTE *a2)
{
  void *v4; // rax
  int v6; // [rsp+88h] [rbp+10h] BYREF

  v4 = operator new(0x50uLL);
  v6 = 0;
  CopilotHotkeyManager::CancelHoldAsync__InitCoro_2(&v6, (__int64)v4, a2, a1);
  return a2;
}
