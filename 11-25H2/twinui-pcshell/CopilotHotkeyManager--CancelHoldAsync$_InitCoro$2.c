/*
 * XREFs of CopilotHotkeyManager::CancelHoldAsync$_InitCoro$2 @ 0x1805FE5B0
 * Callers:
 *     ?CancelHoldAsync@CopilotHotkeyManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1805FE88C (-CancelHoldAsync@CopilotHotkeyManager@@AEAA-AUfire_and_forget@winrt@@XZ.c)
 * Callees:
 *     CopilotHotkeyManager::CancelHoldAsync$_ResumeCoro$1 @ 0x1805FE610 (CopilotHotkeyManager--CancelHoldAsync$_ResumeCoro$1.c)
 */

__int64 __fastcall CopilotHotkeyManager::CancelHoldAsync__InitCoro_2(_DWORD *a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  *(_QWORD *)(a2 + 65) = a4;
  *(_QWORD *)a2 = CopilotHotkeyManager::CancelHoldAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 64) = 0;
  return CopilotHotkeyManager::CancelHoldAsync__ResumeCoro_1(a2);
}
