/*
 * XREFs of ??1?$test_watcher@V?$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180666600
 * Callers:
 *     ?TryGetHostServicesForAppProcess@RemoteSystemServiceBroker@implementation@Shell@Internal@Windows@winrt@@SA?AUIRemoteSystemServicesExtension@RemoteSystems@3456@AEBI@Z @ 0x180666670 (-TryGetHostServicesForAppProcess@RemoteSystemServiceBroker@implementation@Shell@Internal@Windows.c)
 *     ?TryGetProviderServicesForAppWindow@RemoteSystemServiceBroker@implementation@Shell@Internal@Windows@winrt@@SA?AUIRemoteSystemServicesExtension@RemoteSystems@3456@AEBUWindowId@UI@56@@Z @ 0x180666758 (-TryGetProviderServicesForAppWindow@RemoteSystemServiceBroker@implementation@Shell@Internal@Wind.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180666578 (--1-$com_ptr_t@V-$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@.c)
 */

void __fastcall tip2::test_watcher<tip2::details::merged_data<_tip_BrokerTipTest,_tip_BrokerTipTest>>::~test_watcher<tip2::details::merged_data<_tip_BrokerTipTest,_tip_BrokerTipTest>>(
        __int64 a1)
{
  wil::com_ptr_t<tip2::details::merged_data<_tip_BrokerTipTest,_tip_BrokerTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_BrokerTipTest,_tip_BrokerTipTest>,wil::err_returncode_policy>((void **)(a1 + 48));
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
