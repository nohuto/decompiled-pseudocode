/*
 * XREFs of ??0?$test_data_control@V?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@@tip2@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180280074
 * Callers:
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x18023B458 (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@1@XZ @ 0x18027FF9C (--C-$tip_test@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$t.c)
 *     ?DisconnectProvider@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAXAEBUhstring@6@@Z @ 0x18064BA78 (-DisconnectProvider@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAXAEBUhs.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@1@XZ @ 0x180659088 (--C-$tip_test@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@QEAA.c)
 *     _lambda_57788f35bdd9b54a58cb4d12640be97c_::operator() @ 0x1806597D0 (_lambda_57788f35bdd9b54a58cb4d12640be97c_--operator().c)
 *     ?LaunchRemoteSystemSettings@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEBAXXZ @ 0x18065B07C (-LaunchRemoteSystemSettings@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@win.c)
 *     _lambda_67f0fced1d981ef80ea3a06f45134b83_::operator() @ 0x18066CB60 (_lambda_67f0fced1d981ef80ea3a06f45134b83_--operator().c)
 *     _lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_::operator() @ 0x18066CC74 (_lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_--operator().c)
 *     winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1 @ 0x18066CF40 (winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseCloudPCConnection.c)
 *     ?DeactivateRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEBAXAEBUguid@6@@Z @ 0x18066D9D0 (-DeactivateRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UE.c)
 * Callees:
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802816D8 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 */

__int64 *__fastcall tip2::test_data_control<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>>::test_data_control<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rax

  v2 = *a2;
  *a1 = *a2;
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 344));
  tip2::details::shared_data<1,0,0>::begin_update(*a1 + 8);
  return a1;
}
