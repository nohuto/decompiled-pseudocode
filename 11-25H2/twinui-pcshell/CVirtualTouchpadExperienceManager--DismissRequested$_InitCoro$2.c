/*
 * XREFs of CVirtualTouchpadExperienceManager::DismissRequested$_InitCoro$2 @ 0x18038FA88
 * Callers:
 *     ?DismissRequested@CVirtualTouchpadExperienceManager@@AEAA?AUfire_and_forget@winrt@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x18038FC78 (-DismissRequested@CVirtualTouchpadExperienceManager@@AEAA-AUfire_and_forget@winrt@@UDismissShell.c)
 * Callees:
 *     CVirtualTouchpadExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x18038FAF0 (CVirtualTouchpadExperienceManager--DismissRequested$_ResumeCoro$1.c)
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::DismissRequested__InitCoro_2(
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
  *(_QWORD *)a2 = CVirtualTouchpadExperienceManager::DismissRequested__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 48) = 0;
  return CVirtualTouchpadExperienceManager::DismissRequested__ResumeCoro_1(a2);
}
