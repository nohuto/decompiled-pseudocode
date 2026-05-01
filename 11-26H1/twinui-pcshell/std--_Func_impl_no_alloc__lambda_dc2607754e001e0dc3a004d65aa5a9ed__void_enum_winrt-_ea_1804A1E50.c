/*
 * XREFs of std::_Func_impl_no_alloc__lambda_dc2607754e001e0dc3a004d65aa5a9ed__void_enum_winrt::WindowsUdk::UI::Shell::ViewVisibility_::_Do_call @ 0x1804A1E50
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportVisibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x18023821C (-ReportVisibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@She.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_dc2607754e001e0dc3a004d65aa5a9ed__void_enum_winrt::WindowsUdk::UI::Shell::ViewVisibility_::_Do_call(
        __int64 a1,
        unsigned int *a2)
{
  __int64 *v2; // rcx
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)(*(_QWORD *)(a1 + 8) + 344LL);
  v4 = *a2;
  return winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::ReportVisibility(
           v2,
           &v4);
}
