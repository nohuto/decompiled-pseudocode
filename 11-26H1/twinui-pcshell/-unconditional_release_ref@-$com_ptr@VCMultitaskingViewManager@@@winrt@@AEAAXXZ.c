/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ @ 0x1801C5D64
 * Callers:
 *     ?RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs@1@@Z @ 0x1801A3154 (-RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_809da4074b2def485a571e5b447a149a___::_implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_809da4074b2def485a571e5b447a149a___ @ 0x1801C5CA8 (winrt--impl--implements_delegate_winrt--Windows--Foundation--TypedEventHandler_winr_ea_1801C5CA8.c)
 *     _lambda_dc2607754e001e0dc3a004d65aa5a9ed_::__lambda_dc2607754e001e0dc3a004d65aa5a9ed_ @ 0x1801C5CD8 (_lambda_dc2607754e001e0dc3a004d65aa5a9ed_--__lambda_dc2607754e001e0dc3a004d65aa5a9ed_.c)
 *     ??1?$com_ptr@VCMultitaskingViewManager@@@winrt@@QEAA@XZ @ 0x1801C5CF8 (--1-$com_ptr@VCMultitaskingViewManager@@@winrt@@QEAA@XZ.c)
 *     std::_Func_impl_no_alloc__lambda_dc2607754e001e0dc3a004d65aa5a9ed__void_enum_winrt::WindowsUdk::UI::Shell::ViewVisibility_::_Delete_this @ 0x1801C5D20 (std--_Func_impl_no_alloc__lambda_dc2607754e001e0dc3a004d65aa5a9ed__void_enum_winrt--WindowsUdk--.c)
 *     CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1 @ 0x180253BA0 (CMultitaskingViewManager--ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_6daa9864e3a60bb25737e1a0d14b42c1___ @ 0x18049FA04 (winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Shell--ShellVi_ea_18049FA04.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_809da4074b2def485a571e5b447a149a___ @ 0x18049FA7C (winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Shell--ShellVi_ea_18049FA7C.c)
 *     CMultitaskingViewManager::DismissRequested$_ResumeCoro$1 @ 0x1804A02D0 (CMultitaskingViewManager--DismissRequested$_ResumeCoro$1.c)
 *     CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher$_ResumeCoro$1 @ 0x1804A0570 (CMultitaskingViewManager--DismissRequestedVirtualDesktopSwitcher$_ResumeCoro$1.c)
 *     CMultitaskingViewManager::ShowRequested$_ResumeCoro$1 @ 0x1804A1120 (CMultitaskingViewManager--ShowRequested$_ResumeCoro$1.c)
 *     std::_Func_impl_no_alloc__lambda_4947cc5562530a5e119976c0de6f80d3__void_enum_winrt::WindowsUdk::UI::Shell::ViewVisibility_::_Delete_this @ 0x1804A1D00 (std--_Func_impl_no_alloc__lambda_4947cc5562530a5e119976c0de6f80d3__void_enum_winrt-_ea_1804A1D00.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::com_ptr<CMultitaskingViewManager>::unconditional_release_ref(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  *a1 = 0LL;
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMultitaskingViewManager,IMultitaskingViewManagerInternal,IMultitaskingViewDismissCallback,IMultitaskingViewForegroundStaging>::Release(v2);
}
