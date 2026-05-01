/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::DismissContextMenu$_InitCoro$2 @ 0x180614F0C
 * Callers:
 *     ?DismissContextMenu@ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@XZ @ 0x1802BAA10 (-DismissContextMenu@ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@QEAA-AUfi.c)
 * Callees:
 *     winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::DismissContextMenu$_ResumeCoro$1 @ 0x180614F60 (winrt--Windows--Internal--Shell--implementation--ImeContextMenuManager--DismissContextMenu$_Resu.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::DismissContextMenu__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4)
{
  *(_QWORD *)(a2 + 65) = a4;
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::DismissContextMenu__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 64) = 0;
  return winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::DismissContextMenu__ResumeCoro_1(a2);
}
