/*
 * XREFs of ?DeactivateRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEBAXAEBUguid@6@@Z @ 0x180647B90
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0?$test_data_control@V?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@@tip2@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18028CD70 (--0-$test_data_control@V-$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@.c)
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x180295E10 (-is_running@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x1806219C4 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@de.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180624208 (--1-$test_data_control@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@t.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180624344 (--1-$test_watcher@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@.c)
 *     ?DisconnectProvider@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAXAEBUhstring@6@@Z @ 0x180625CD8 (-DisconnectProvider@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAXAEBUhs.c)
 *     ?GetSystemIdForDesktop@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@AEBUguid@6@@Z @ 0x180644EE4 (-GetSystemIdForDesktop@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::DeactivateRemoteDesktop(
        RTL_SRWLOCK **this,
        __m128i *a2)
{
  _BYTE v4[48]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v5[3]; // [rsp+50h] [rbp-18h] BYREF
  RTL_SRWLOCK v6; // [rsp+70h] [rbp+8h] BYREF

  tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>>((__int64)v4);
  if ( tip2::details::shared_data<1,0,0>::is_running(v5[0] + 8) )
  {
    tip2::test_data_control<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>>::test_data_control<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>>(
      (__int64 *)&v6,
      v5);
    *((_BYTE *)v6.Ptr + 299) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>::~test_data_control<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>(&v6.Ptr);
  }
  winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::GetSystemIdForDesktop(this[17], &v6, a2);
  winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::DisconnectProvider((const struct winrt::hstring *)&v6);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v6);
  tip2::test_watcher<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>::~test_watcher<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>((__int64)v4);
}
