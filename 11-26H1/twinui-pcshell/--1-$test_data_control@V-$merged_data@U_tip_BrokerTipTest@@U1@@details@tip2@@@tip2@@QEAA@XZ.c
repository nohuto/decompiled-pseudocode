/*
 * XREFs of ??1?$test_data_control@V?$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1806665C8
 * Callers:
 *     ?TryGetHostServicesForAppProcess@RemoteSystemServiceBroker@implementation@Shell@Internal@Windows@winrt@@SA?AUIRemoteSystemServicesExtension@RemoteSystems@3456@AEBI@Z @ 0x180666670 (-TryGetHostServicesForAppProcess@RemoteSystemServiceBroker@implementation@Shell@Internal@Windows.c)
 *     ?TryGetProviderServicesForAppWindow@RemoteSystemServiceBroker@implementation@Shell@Internal@Windows@winrt@@SA?AUIRemoteSystemServicesExtension@RemoteSystems@3456@AEBUWindowId@UI@56@@Z @ 0x180666758 (-TryGetProviderServicesForAppWindow@RemoteSystemServiceBroker@implementation@Shell@Internal@Wind.c)
 * Callees:
 *     ?end_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180281974 (-end_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1806668C8 (-reset@-$com_ptr_t@V-$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@Uerr_returncode_policy@.c)
 */

__int64 __fastcall tip2::test_data_control<tip2::details::merged_data<_tip_BrokerTipTest,_tip_BrokerTipTest>>::~test_data_control<tip2::details::merged_data<_tip_BrokerTipTest,_tip_BrokerTipTest>>(
        void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    tip2::details::shared_data<1,0,0>::end_update((__int64)v2 + 8);
    wil::com_ptr_t<tip2::details::merged_data<_tip_BrokerTipTest,_tip_BrokerTipTest>,wil::err_returncode_policy>::reset(a1);
  }
  return wil::com_ptr_t<tip2::details::merged_data<_tip_BrokerTipTest,_tip_BrokerTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_BrokerTipTest,_tip_BrokerTipTest>,wil::err_returncode_policy>(a1);
}
