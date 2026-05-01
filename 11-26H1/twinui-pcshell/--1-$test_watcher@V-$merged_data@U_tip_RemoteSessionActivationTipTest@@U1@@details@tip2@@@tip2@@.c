/*
 * XREFs of ??1?$test_watcher@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180658D00
 * Callers:
 *     ?ActivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x180659F8C (-ActivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@Q.c)
 *     ?ActivateRemoteDesktopProvider@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBURemoteDesktopProviderInfo@3456@@Z @ 0x18065A194 (-ActivateRemoteDesktopProvider@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@.c)
 *     ?HandleProviderAppLaunchResult@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBU?$IAsyncOperation@_N@Foundation@56@@Z @ 0x18066BAF0 (-HandleProviderAppLaunchResult@SwitchProviderActivator@implementation@Shell@Internal@Windows@win.c)
 *     _lambda_5dd99ac34d6bd03dd8b88786cad3764c_::operator() @ 0x180670CA4 (_lambda_5dd99ac34d6bd03dd8b88786cad3764c_--operator().c)
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::ActivateRemoteDesktop_::_1_::dtor$0 @ 0x180704447 (_winrt--Windows--Internal--Shell--implementation--RemoteSessionWindowManager--Activ_ea_180704447.c)
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::ActivateRemoteDesktopProvider_::_1_::dtor$0 @ 0x18070446B (_winrt--Windows--Internal--Shell--implementation--RemoteSessionWindowManager--Activ_ea_18070446B.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator::HandleProviderAppLaunchResult_::_1_::dtor$0 @ 0x18070511D (_winrt--Windows--Internal--Shell--implementation--SwitchProviderActivator--HandleProviderAppLaun.c)
 *     __lambda_5dd99ac34d6bd03dd8b88786cad3764c_::operator()_::_1_::dtor$1 @ 0x180705795 (__lambda_5dd99ac34d6bd03dd8b88786cad3764c_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180658A30 (--1-$com_ptr_t@V-$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@Uerr_retur.c)
 */

void __fastcall tip2::test_watcher<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>>::~test_watcher<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>>(
        __int64 a1)
{
  wil::com_ptr_t<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>,wil::err_returncode_policy>((void **)(a1 + 48));
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
