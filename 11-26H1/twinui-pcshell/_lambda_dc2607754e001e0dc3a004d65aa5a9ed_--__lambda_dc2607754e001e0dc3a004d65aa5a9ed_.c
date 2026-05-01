/*
 * XREFs of _lambda_dc2607754e001e0dc3a004d65aa5a9ed_::__lambda_dc2607754e001e0dc3a004d65aa5a9ed_ @ 0x1801C5CD8
 * Callers:
 *     _CMultitaskingViewManager::RuntimeClassInitialize_::_1_::dtor$19 @ 0x1806D895C (_CMultitaskingViewManager--RuntimeClassInitialize_--_1_--dtor$19.c)
 *     _CMultitaskingViewManager::RuntimeClassInitialize_::_1_::dtor$36 @ 0x1806D896E (_CMultitaskingViewManager--RuntimeClassInitialize_--_1_--dtor$36.c)
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_809da4074b2def485a571e5b447a149a____::_1_::dtor$0 @ 0x1806EFFDD (_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Shell--ShellV_ea_1806EFFDD.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ @ 0x1801C5D64 (-unconditional_release_ref@-$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_dc2607754e001e0dc3a004d65aa5a9ed_::__lambda_dc2607754e001e0dc3a004d65aa5a9ed_(__int64 a1)
{
  _QWORD *v1; // rcx
  __int64 result; // rax

  v1 = (_QWORD *)(a1 + 8);
  if ( *v1 )
    return winrt::com_ptr<CMultitaskingViewManager>::unconditional_release_ref(v1);
  return result;
}
