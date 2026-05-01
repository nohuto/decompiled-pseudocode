/*
 * XREFs of CJumpViewExperienceManager::DismissRequested$_InitCoro$2 @ 0x1803854F8
 * Callers:
 *     ?DismissRequested@CJumpViewExperienceManager@@AEAA?AUfire_and_forget@winrt@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1803856EC (-DismissRequested@CJumpViewExperienceManager@@AEAA-AUfire_and_forget@winrt@@UDismissShellViewReq.c)
 * Callees:
 *     CJumpViewExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x180385560 (CJumpViewExperienceManager--DismissRequested$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CJumpViewExperienceManager::DismissRequested__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 v5; // rax

  *(_QWORD *)(a2 + 49) = a5;
  v5 = *a4;
  *a4 = 0LL;
  *(_QWORD *)(a2 + 57) = v5;
  *(_QWORD *)a2 = CJumpViewExperienceManager::DismissRequested__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 48) = 0;
  return CJumpViewExperienceManager::DismissRequested__ResumeCoro_1(a2);
}
