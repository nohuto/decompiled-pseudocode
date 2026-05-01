/*
 * XREFs of ?DismissContextMenu@ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@XZ @ 0x1802BAA10
 * Callers:
 *     ?Dismiss@ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x180614EF0 (-Dismiss@ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::DismissContextMenu$_InitCoro$2 @ 0x180614F0C (winrt--Windows--Internal--Shell--implementation--ImeContextMenuManager--DismissContextMenu$_Init.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::DismissContextMenu(
        __int64 a1,
        __int64 a2)
{
  void *v4; // rax
  int v6; // [rsp+88h] [rbp+10h] BYREF

  v4 = operator new(0x50uLL);
  v6 = 0;
  winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::DismissContextMenu__InitCoro_2(
    &v6,
    v4,
    a2,
    a1);
  return a2;
}
