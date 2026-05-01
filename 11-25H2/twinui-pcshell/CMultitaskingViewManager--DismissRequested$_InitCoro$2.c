/*
 * XREFs of CMultitaskingViewManager::DismissRequested$_InitCoro$2 @ 0x18048F6D0
 * Callers:
 *     ?DismissRequested@CMultitaskingViewManager@@AEAA?AUfire_and_forget@winrt@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x18048F95C (-DismissRequested@CMultitaskingViewManager@@AEAA-AUfire_and_forget@winrt@@UDismissShellViewReque.c)
 * Callees:
 *     CMultitaskingViewManager::DismissRequested$_ResumeCoro$1 @ 0x18048F740 (CMultitaskingViewManager--DismissRequested$_ResumeCoro$1.c)
 */

__int64 __fastcall CMultitaskingViewManager::DismissRequested__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 v5; // rax

  *(_QWORD *)(a2 + 81) = a5;
  v5 = *a4;
  *a4 = 0LL;
  *(_QWORD *)(a2 + 89) = v5;
  *(_QWORD *)a2 = CMultitaskingViewManager::DismissRequested__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 80) = 0;
  return CMultitaskingViewManager::DismissRequested__ResumeCoro_1(a2);
}
