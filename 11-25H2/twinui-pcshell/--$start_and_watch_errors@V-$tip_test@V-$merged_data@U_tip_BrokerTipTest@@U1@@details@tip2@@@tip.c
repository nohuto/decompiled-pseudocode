/*
 * XREFs of ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180640960
 * Callers:
 *     ?TryGetHostServicesForAppProcess@RemoteSystemServiceBroker@implementation@Shell@Internal@Windows@winrt@@SA?AUIRemoteSystemServicesExtension@RemoteSystems@3456@AEBI@Z @ 0x180640B90 (-TryGetHostServicesForAppProcess@RemoteSystemServiceBroker@implementation@Shell@Internal@Windows.c)
 *     ?TryGetProviderServicesForAppWindow@RemoteSystemServiceBroker@implementation@Shell@Internal@Windows@winrt@@SA?AUIRemoteSystemServicesExtension@RemoteSystems@3456@AEBUWindowId@UI@56@@Z @ 0x180640C74 (-TryGetProviderServicesForAppWindow@RemoteSystemServiceBroker@implementation@Shell@Internal@Wind.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800D53EC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180640A98 (--1-$com_ptr_t@V-$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x180640E90 (-start@-$tip_test@V-$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@@tip2@@QEAA-AU_GUID@@XZ.c)
 */

struct wil::details::IFailureCallback *__fastcall tip2::start_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_BrokerTipTest,_tip_BrokerTipTest>>>(
        struct wil::details::IFailureCallback *a1)
{
  __int64 v2; // rax
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  tip2::tip_test<tip2::details::merged_data<_tip_BrokerTipTest,_tip_BrokerTipTest>>::start(&v5, v4);
  *(_QWORD *)a1 = &tip2::test_watcher<tip2::details::merged_data<_tip_SetPhysicalDeviceAccessRegKeyTipTest,_tip_SetPhysicalDeviceAccessRegKeyTipTest>>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 8),
    a1,
    0LL,
    1);
  v2 = v5;
  *((_QWORD *)a1 + 6) = v5;
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 288));
  wil::com_ptr_t<tip2::details::merged_data<_tip_BrokerTipTest,_tip_BrokerTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_BrokerTipTest,_tip_BrokerTipTest>,wil::err_returncode_policy>(&v5);
  return a1;
}
