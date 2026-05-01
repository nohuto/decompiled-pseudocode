/*
 * XREFs of ??$open@V?$tip_test@V?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?AV?$tip_test@V?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@@0@XZ @ 0x180647440
 * Callers:
 *     ?RestoreRemoteSystemsDataAndNotifyOnRemote@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@AEBV?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@Z @ 0x180650A4C (-RestoreRemoteSystemsDataAndNotifyOnRemote@RemoteSystemDataModel@factory_implementation@Shell@In.c)
 * Callees:
 *     ?open_helper@?$tip_test@V?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@@tip2@@AEAA_NPEAU_GUID@@@Z @ 0x180295E3C (-open_helper@-$tip_test@V-$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@@tip.c)
 */

__int64 *__fastcall tip2::open<tip2::tip_test<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>>>(
        __int64 *a1,
        void *a2)
{
  *a1 = 0LL;
  tip2::tip_test<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>>::open_helper(
    a1,
    a2);
  return a1;
}
