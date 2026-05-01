/*
 * XREFs of ?HandleProviderAppLaunchResult@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBU?$IAsyncOperation@_N@Foundation@56@@Z @ 0x18066BAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z @ 0x18013A340 (-check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z.c)
 *     ?GetResults@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@_N@impl@winrt@@QEBA@XZ @ 0x180208578 (-GetResults@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@_N@Foundation@Window.c)
 *     ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18027F280 (-Status@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028BFAC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@_N@Foundation@Windows@1@I@Z @ 0x1805CAB38 (--$wait_for_completed@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@YA-A_PAEBU-$I.c)
 *     ??0?$test_data_control@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@tip2@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1805CB8EC (--0-$test_data_control@V-$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@t.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x18065749C (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@de.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180658C68 (--1-$test_data_control@V-$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@t.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180658D00 (--1-$test_watcher@V-$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@@tip2@@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator::HandleProviderAppLaunchResult(
        __int64 a1,
        __int64 *a2)
{
  unsigned int v3; // eax
  __int64 v4; // rdx
  _BYTE v5[48]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v6[3]; // [rsp+50h] [rbp-18h] BYREF
  _BYTE *v7; // [rsp+80h] [rbp+18h] BYREF

  tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>>>((struct wil::details::IFailureCallback *)v5);
  v3 = winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<bool>>::Status((__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))a2);
  if ( !v3 )
    v3 = winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<bool>>(a2);
  winrt::impl::check_status_canceled((winrt::impl *)v3, v4);
  if ( !winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<bool>,bool>::GetResults(a2) )
  {
    tip2::test_data_control<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>>::test_data_control<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>>(
      (__int64 *)&v7,
      v6);
    v7[274] = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>>::~test_data_control<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>>((void **)&v7);
  }
  tip2::details::shared_data<1,0,0>::complete_without_lock(v6[0] + 8);
  tip2::test_watcher<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>>::~test_watcher<tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>>((__int64)v5);
}
