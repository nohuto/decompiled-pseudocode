/*
 * XREFs of ??1?$test_watcher@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180624344
 * Callers:
 *     ?DisconnectProvider@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAXAEBUhstring@6@@Z @ 0x180625CD8 (-DisconnectProvider@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAXAEBUhs.c)
 *     ?DeactivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUguid@6@@Z @ 0x1806347FC (-DeactivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?OnWindowDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x180635918 (-OnWindowDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAX.c)
 *     _lambda_67f0fced1d981ef80ea3a06f45134b83_::operator() @ 0x180646CE4 (_lambda_67f0fced1d981ef80ea3a06f45134b83_--operator().c)
 *     _lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_::operator() @ 0x180646DF8 (_lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_--operator().c)
 *     winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1 @ 0x180647150 (winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseClou_ea_180647150.c)
 *     ?DeactivateRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEBAXAEBUguid@6@@Z @ 0x180647B90 (-DeactivateRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UE.c)
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::DisconnectProvider_::_1_::dtor$0 @ 0x1806DAE07 (_winrt--Windows--Internal--Shell--implementation--RemoteSystemDataModel--DisconnectProvider_--_1.c)
 *     __lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_::operator()_::_1_::dtor$0 @ 0x1806DB747 (__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_--operator()_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::OnWindowDestroyed_::_1_::dtor$2 @ 0x1806DB802 (_winrt--Windows--Internal--Shell--implementation--RemoteSessionWindowManager--OnWin_ea_1806DB802.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806DC5CC (_winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseClo_ea_1806DC5CC.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180623CF4 (--1-$com_ptr_t@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@Uerr_retur.c)
 */

void __fastcall tip2::test_watcher<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>::~test_watcher<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>(
        __int64 a1)
{
  wil::com_ptr_t<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>,wil::err_returncode_policy>((void **)(a1 + 48));
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
