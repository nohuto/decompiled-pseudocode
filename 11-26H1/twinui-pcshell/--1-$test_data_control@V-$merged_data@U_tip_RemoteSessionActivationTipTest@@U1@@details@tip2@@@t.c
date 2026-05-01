/*
 * XREFs of ??1?$test_data_control@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180658C68
 * Callers:
 *     ?ActivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x180659F8C (-ActivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@Q.c)
 *     ?ActivateRemoteDesktopProvider@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBURemoteDesktopProviderInfo@3456@@Z @ 0x18065A194 (-ActivateRemoteDesktopProvider@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@.c)
 *     ?ActivateProvider@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18066B3C0 (-ActivateProvider@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTr.c)
 *     ?HandleProviderAppLaunchResult@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBU?$IAsyncOperation@_N@Foundation@56@@Z @ 0x18066BAF0 (-HandleProviderAppLaunchResult@SwitchProviderActivator@implementation@Shell@Internal@Windows@win.c)
 *     _lambda_5dd99ac34d6bd03dd8b88786cad3764c_::operator() @ 0x180670CA4 (_lambda_5dd99ac34d6bd03dd8b88786cad3764c_--operator().c)
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::ActivateRemoteDesktop_::_1_::dtor$7 @ 0x180704459 (_winrt--Windows--Internal--Shell--implementation--RemoteSessionWindowManager--Activ_ea_180704459.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator::ActivateProvider_::_1_::dtor$6 @ 0x1807050D5 (_winrt--Windows--Internal--Shell--implementation--SwitchProviderActivator--Activate_ea_1807050D5.c)
 * Callees:
 *     ?end_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180281974 (-end_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18065DB78 (-reset@-$com_ptr_t@V-$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@Uerr_r.c)
 */

__int64 __fastcall tip2::test_data_control<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>>::~test_data_control<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>>(
        void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    tip2::details::shared_data<1,0,0>::end_update((__int64)v2 + 8);
    wil::com_ptr_t<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>,wil::err_returncode_policy>::reset(a1);
  }
  return wil::com_ptr_t<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>,wil::err_returncode_policy>(a1);
}
