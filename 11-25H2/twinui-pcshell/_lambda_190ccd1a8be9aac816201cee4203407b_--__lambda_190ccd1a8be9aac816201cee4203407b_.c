/*
 * XREFs of _lambda_190ccd1a8be9aac816201cee4203407b_::__lambda_190ccd1a8be9aac816201cee4203407b_ @ 0x1805DBB34
 * Callers:
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_190ccd1a8be9aac816201cee4203407b___::_implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_190ccd1a8be9aac816201cee4203407b___ @ 0x1805DBBF0 (winrt--impl--implements_delegate_winrt--Windows--Foundation--TypedEventHandler_winr_ea_1805DBBF0.c)
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x1805DD240 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 *     _CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1_::_1_::dtor$39 @ 0x1806D8217 (_CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1_--_1_--dtor$39.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_190ccd1a8be9aac816201cee4203407b_::__lambda_190ccd1a8be9aac816201cee4203407b_(__int64 *a1)
{
  volatile int *v2; // rdx
  __int64 v3; // rcx

  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 5));
  v3 = a1[2];
  if ( v3 )
  {
    a1[2] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return wil::com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>::~com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>(
           a1 + 1,
           v2);
}
