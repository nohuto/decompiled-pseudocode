/*
 * XREFs of ?LaunchHardwareKeySettings@CopilotHotkeyManager@@QEAA?AU?$IAsyncOperation@_N@Foundation@Windows@winrt@@XZ @ 0x18060DE18
 * Callers:
 *     CopilotHotkeyManager::TryInvokeCopilotOrCustomAppFromHardwareKeyAsync$_ResumeCoro$1 @ 0x18060FD80 (CopilotHotkeyManager--TryInvokeCopilotOrCustomAppFromHardwareKeyAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     CopilotHotkeyManager::LaunchHardwareKeySettings$_InitCoro$2 @ 0x18060DAA8 (CopilotHotkeyManager--LaunchHardwareKeySettings$_InitCoro$2.c)
 */

__int64 *__fastcall CopilotHotkeyManager::LaunchHardwareKeySettings(__int64 a1, __int64 *a2)
{
  void *v4; // rax
  int v6; // [rsp+158h] [rbp+10h] BYREF

  v4 = operator new(0x120uLL);
  v6 = 0;
  CopilotHotkeyManager::LaunchHardwareKeySettings__InitCoro_2(&v6, (__int64)v4 + 112, a2, a1);
  return a2;
}
