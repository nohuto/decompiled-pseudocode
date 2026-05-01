/*
 * XREFs of ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180647468
 * Callers:
 *     ?DisconnectProvider@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAXAEBUhstring@6@@Z @ 0x18064BA78 (-DisconnectProvider@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAXAEBUhs.c)
 *     _lambda_67f0fced1d981ef80ea3a06f45134b83_::operator() @ 0x18066CB60 (_lambda_67f0fced1d981ef80ea3a06f45134b83_--operator().c)
 *     _lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_::operator() @ 0x18066CC74 (_lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_--operator().c)
 *     winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1 @ 0x18066CF40 (winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseCloudPCConnection.c)
 *     ?DeactivateRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEBAXAEBUguid@6@@Z @ 0x18066D9D0 (-DeactivateRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UE.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1806499D0 (--1-$com_ptr_t@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@Uerr_retur.c)
 *     ?open_helper@?$tip_test@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@AEAA_NPEAU_GUID@@@Z @ 0x18065479C (-open_helper@-$tip_test@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@2@XZ @ 0x180654FF4 (-watch_errors@-$tip_test@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@.c)
 */

__int64 __fastcall tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>>(
        __int64 a1)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  tip2::tip_test<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>::open_helper(&v3);
  tip2::tip_test<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>::watch_errors(
    &v3,
    a1);
  wil::com_ptr_t<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>,wil::err_returncode_policy>(&v3);
  return a1;
}
