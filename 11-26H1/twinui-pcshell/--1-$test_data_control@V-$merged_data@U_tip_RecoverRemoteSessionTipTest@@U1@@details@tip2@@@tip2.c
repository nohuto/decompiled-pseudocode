/*
 * XREFs of ??1?$test_data_control@V?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180649F98
 * Callers:
 *     ?RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@AEBV?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@Z @ 0x180650708 (-RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Int.c)
 *     ?RestoreRemoteSystemsDataAndNotifyOnRemote@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@AEBV?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@Z @ 0x180650A4C (-RestoreRemoteSystemsDataAndNotifyOnRemote@RemoteSystemDataModel@factory_implementation@Shell@In.c)
 *     ?RecreateDesktopWithViewsAssociation@SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBUhstring@6@@Z @ 0x18066E604 (-RecreateDesktopWithViewsAssociation@SwitchConnectStateBase@implementation@Shell@Internal@Window.c)
 *     _winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::RestoreRemoteSystemsDataAndNotifyOnLocal_::_1_::dtor$4 @ 0x180703E4B (_winrt--Windows--Internal--Shell--factory_implementation--RemoteSystemDataModel--Re_ea_180703E4B.c)
 *     _winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::RestoreRemoteSystemsDataAndNotifyOnRemote_::_1_::dtor$5 @ 0x180703E93 (_winrt--Windows--Internal--Shell--factory_implementation--RemoteSystemDataModel--Re_ea_180703E93.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase::RecreateDesktopWithViewsAssociation_::_1_::dtor$6 @ 0x1807056EA (_winrt--Windows--Internal--Shell--implementation--SwitchConnectStateBase--RecreateD_ea_1807056EA.c)
 * Callees:
 *     ?end_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180281974 (-end_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18064324C (-reset@-$com_ptr_t@V-$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@Uerr_retu.c)
 */

__int64 __fastcall tip2::test_data_control<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>>::~test_data_control<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    tip2::details::shared_data<1,0,0>::end_update((__int64)(v2 + 2));
    wil::com_ptr_t<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>,wil::err_returncode_policy>::reset(a1);
  }
  return wil::com_ptr_t<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>,wil::err_returncode_policy>((void **)a1);
}
