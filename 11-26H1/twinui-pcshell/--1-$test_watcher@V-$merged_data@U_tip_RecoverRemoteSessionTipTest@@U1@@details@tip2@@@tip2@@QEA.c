/*
 * XREFs of ??1?$test_watcher@V?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180295CF4
 * Callers:
 *     ?RecoverRemoteSessionsData@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x18027C0A4 (-RecoverRemoteSessionsData@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@w.c)
 *     ?RecoverRemoteSessions@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180641B3C (-RecoverRemoteSessions@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@AEBV?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@Z @ 0x180650708 (-RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Int.c)
 *     ?RecreateDesktopWithViewsAssociation@SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBUhstring@6@@Z @ 0x18066E604 (-RecreateDesktopWithViewsAssociation@SwitchConnectStateBase@implementation@Shell@Internal@Window.c)
 *     _winrt::Windows::Internal::Shell::implementation::CloudPCComponent::RecoverRemoteSessions_::_1_::dtor$0 @ 0x180703971 (_winrt--Windows--Internal--Shell--implementation--CloudPCComponent--RecoverRemoteSessions_--_1_-.c)
 *     _winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::RestoreRemoteSystemsDataAndNotifyOnLocal_::_1_::dtor$0 @ 0x180703D97 (_winrt--Windows--Internal--Shell--factory_implementation--RemoteSystemDataModel--Re_ea_180703D97.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase::RecreateDesktopWithViewsAssociation_::_1_::dtor$4 @ 0x1807056D8 (_winrt--Windows--Internal--Shell--implementation--SwitchConnectStateBase--RecreateD_ea_1807056D8.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180295D68 (--1-$com_ptr_t@V-$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@Uerr_returnco.c)
 */

void __fastcall tip2::test_watcher<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>>::~test_watcher<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>>(
        __int64 a1)
{
  wil::com_ptr_t<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>,wil::err_returncode_policy>(a1 + 48);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
