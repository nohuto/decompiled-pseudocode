/*
 * XREFs of ??1?$test_watcher@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1806330B8
 * Callers:
 *     ?ActivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x18063427C (-ActivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@Q.c)
 *     ?ActivateRemoteDesktopProvider@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBURemoteDesktopProviderInfo@3456@@Z @ 0x180634484 (-ActivateRemoteDesktopProvider@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@.c)
 *     ?HandleProviderAppLaunchResult@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBU?$IAsyncOperation@_N@Foundation@56@@Z @ 0x180645D50 (-HandleProviderAppLaunchResult@SwitchProviderActivator@implementation@Shell@Internal@Windows@win.c)
 *     _lambda_5dd99ac34d6bd03dd8b88786cad3764c_::operator() @ 0x18064AD54 (_lambda_5dd99ac34d6bd03dd8b88786cad3764c_--operator().c)
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::ActivateRemoteDesktop_::_1_::dtor$0 @ 0x1806DB69E (_winrt--Windows--Internal--Shell--implementation--RemoteSessionWindowManager--Activ_ea_1806DB69E.c)
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::ActivateRemoteDesktopProvider_::_1_::dtor$0 @ 0x1806DB6C2 (_winrt--Windows--Internal--Shell--implementation--RemoteSessionWindowManager--Activ_ea_1806DB6C2.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator::HandleProviderAppLaunchResult_::_1_::dtor$0 @ 0x1806DC498 (_winrt--Windows--Internal--Shell--implementation--SwitchProviderActivator--HandleProviderAppLaun.c)
 *     __lambda_5dd99ac34d6bd03dd8b88786cad3764c_::operator()_::_1_::dtor$1 @ 0x1806DCAE8 (__lambda_5dd99ac34d6bd03dd8b88786cad3764c_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180632DE8 (--1-$com_ptr_t@V-$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@Uerr_retur.c)
 */

void __fastcall tip2::test_watcher<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>>::~test_watcher<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>>(
        __int64 a1)
{
  wil::com_ptr_t<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>,wil::err_returncode_policy>((void **)(a1 + 48));
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
