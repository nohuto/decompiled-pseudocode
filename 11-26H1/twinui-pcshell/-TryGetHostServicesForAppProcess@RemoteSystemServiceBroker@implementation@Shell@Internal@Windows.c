/*
 * XREFs of ?TryGetHostServicesForAppProcess@RemoteSystemServiceBroker@implementation@Shell@Internal@Windows@winrt@@SA?AUIRemoteSystemServicesExtension@RemoteSystems@3456@AEBI@Z @ 0x180666670
 * Callers:
 *     ?PerformLocalAction@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBW4RemoteDesktopLocalAction@3456@@Z @ 0x18064EE38 (-PerformLocalAction@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@Q.c)
 *     ?RestoreRemoteSystemsDataAndNotifyOnRemote@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@AEBV?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@Z @ 0x180650A4C (-RestoreRemoteSystemsDataAndNotifyOnRemote@RemoteSystemDataModel@factory_implementation@Shell@In.c)
 *     ?SwitchToRemoteDesktop@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@@Z @ 0x180651114 (-SwitchToRemoteDesktop@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180029578 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802816D8 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028BFAC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180666440 (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@@tip.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1806665C8 (--1-$test_data_control@V-$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180666600 (--1-$test_watcher@V-$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 */

winrt *__fastcall winrt::Windows::Internal::Shell::implementation::RemoteSystemServiceBroker::TryGetHostServicesForAppProcess(
        winrt *a1,
        unsigned int *a2)
{
  volatile signed __int32 *v4; // rbx
  struct IUnknown *v5; // rdx
  void **v6; // rax
  volatile signed __int32 *v7; // rbx
  _BYTE v9[48]; // [rsp+20h] [rbp-48h] BYREF
  volatile signed __int32 *v10; // [rsp+50h] [rbp-18h]
  volatile signed __int32 *v11; // [rsp+70h] [rbp+8h] BYREF

  tip2::start_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_BrokerTipTest,_tip_BrokerTipTest>>>((struct wil::details::IFailureCallback *)v9);
  v4 = v10;
  v11 = v10;
  if ( v10 )
    _InterlockedIncrement(v10 + 74);
  tip2::details::shared_data<1,0,0>::begin_update((__int64)(v4 + 2));
  *((_BYTE *)v4 + 288) = 0;
  tip2::test_data_control<tip2::details::merged_data<_tip_BrokerTipTest,_tip_BrokerTipTest>>::~test_data_control<tip2::details::merged_data<_tip_BrokerTipTest,_tip_BrokerTipTest>>((void **)&v11);
  *(_QWORD *)a1 = 0LL;
  v6 = winrt::put_abi(a1, v5);
  if ( (int)CoreQueryApplicationService(
              *a2,
              &SID_RemoteDesktopHostService,
              &winrt::impl::guid_v<winrt::Windows::Internal::Shell::RemoteSystems::IRemoteSystemServicesExtension>,
              v6) >= 0 )
  {
    v7 = v10;
    v11 = v10;
    if ( v10 )
      _InterlockedIncrement(v10 + 74);
    tip2::details::shared_data<1,0,0>::begin_update((__int64)(v7 + 2));
    *((_BYTE *)v7 + 272) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_BrokerTipTest,_tip_BrokerTipTest>>::~test_data_control<tip2::details::merged_data<_tip_BrokerTipTest,_tip_BrokerTipTest>>((void **)&v11);
  }
  tip2::details::shared_data<1,0,0>::complete_without_lock((__int64)(v10 + 2));
  tip2::test_watcher<tip2::details::merged_data<_tip_BrokerTipTest,_tip_BrokerTipTest>>::~test_watcher<tip2::details::merged_data<_tip_BrokerTipTest,_tip_BrokerTipTest>>((__int64)v9);
  return a1;
}
