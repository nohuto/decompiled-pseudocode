/*
 * XREFs of CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher$_InitCoro$2 @ 0x18025A9C0
 * Callers:
 *     ?ShowRequestedVirtualDesktopSwitcher@CMultitaskingViewManager@@AEAA?AUfire_and_forget@winrt@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1801E231C (-ShowRequestedVirtualDesktopSwitcher@CMultitaskingViewManager@@AEAA-AUfire_and_forget@winrt@@USh.c)
 * Callees:
 *     CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1 @ 0x18025AA30 (CMultitaskingViewManager--ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1.c)
 */

__int64 __fastcall CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher__InitCoro_2(
        _DWORD *a1,
        char *a2,
        _BYTE *a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 v5; // rax

  *(_QWORD *)(a2 + 161) = a5;
  v5 = *a4;
  *a4 = 0LL;
  *(_QWORD *)(a2 + 169) = v5;
  *(_QWORD *)a2 = CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher__ResumeCoro_1;
  *((_DWORD *)a2 + 2) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  a2[160] = 0;
  return CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher__ResumeCoro_1(a2);
}
