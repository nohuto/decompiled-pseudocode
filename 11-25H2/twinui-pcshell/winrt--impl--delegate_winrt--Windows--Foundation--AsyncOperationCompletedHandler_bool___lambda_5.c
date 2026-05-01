/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___lambda_57788f35bdd9b54a58cb4d12640be97c___::Invoke @ 0x180634D00
 * Callers:
 *     <none>
 * Callees:
 *     ?check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z @ 0x18005CD48 (-check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z.c)
 *     ?GetResults@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@_N@impl@winrt@@QEBA@XZ @ 0x18021659C (-GetResults@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@_N@Foundation@Window.c)
 *     ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180287DF0 (-Status@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028AAC4 (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ??0?$test_data_control@V?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@@tip2@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18028CD70 (--0-$test_data_control@V-$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@_N@Foundation@Windows@1@I@Z @ 0x1805A69FC (--$wait_for_completed@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@YA-A_PAEBU-$I.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180631788 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180632FFC (--1-$test_data_control@V-$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180633090 (--1-$test_watcher@V-$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@@tip.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___lambda_57788f35bdd9b54a58cb4d12640be97c___::Invoke(
        _BYTE *a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64 *, __int64 *))
{
  unsigned int v2; // eax
  __int64 v3; // rdx
  __int64 result; // rax
  _BYTE v5[48]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v6[3]; // [rsp+50h] [rbp-18h] BYREF
  _BYTE *v7; // [rsp+70h] [rbp+8h] BYREF
  __int64 (__fastcall ***v8)(_QWORD, __int64 *, __int64 *); // [rsp+78h] [rbp+10h] BYREF

  v8 = a2;
  v7 = a1;
  tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>>>((struct wil::details::IFailureCallback *)v5);
  try
  {
    v2 = winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<bool>>::Status(&v8);
    if ( !v2 )
      v2 = winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<bool>>((__int64 *)&v8);
    winrt::impl::check_status_canceled((winrt::impl *)v2, v3);
    if ( !winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<bool>,bool>::GetResults((__int64 *)&v8) )
    {
      tip2::test_data_control<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>>::test_data_control<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>>(
        (__int64 *)&v7,
        v6);
      v7[328] = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>>::~test_data_control<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>>((void **)&v7);
    }
    tip2::details::shared_data<1,0,0>::complete_without_lock(v6[0] + 8);
    tip2::test_watcher<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>>::~test_watcher<tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>>((__int64)v5);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v7) = *winrt::to_hresult(&v7);
    return (unsigned int)v7;
  }
  return result;
}
