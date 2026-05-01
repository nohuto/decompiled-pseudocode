/*
 * XREFs of ?push_back@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@QEAAX$$QEAUMenuItem@UI@WindowsUdk@winrt@@@Z @ 0x1805DFC9C
 * Callers:
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x1805DD240 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *__fastcall std::vector<winrt::WindowsUdk::UI::MenuItem>::push_back(
        __int64 a1,
        __int64 *a2)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **v2; // r9
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *result; // rax

  v2 = *(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension ***)(a1 + 8);
  if ( v2 == *(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension ***)(a1 + 16) )
    return std::vector<winrt::WindowsUdk::UI::MenuItem>::_Emplace_reallocate<winrt::WindowsUdk::UI::MenuItem>(
             (__int64 **)a1,
             *(_QWORD **)(a1 + 8),
             a2);
  result = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)*a2;
  *a2 = 0LL;
  *v2 = result;
  *(_QWORD *)(a1 + 8) += 8LL;
  return result;
}
