/*
 * XREFs of ?start_and_watch_errors@?$tip_test@V?$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@@2@XZ @ 0x1806B1740
 * Callers:
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1801B0678 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwi.c)
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1806B6634 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwit.c)
 * Callees:
 *     ??0?$test_watcher@V?$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@@tip2@@IEAA@AEAV?$com_ptr_t@V?$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18027FE84 (--0-$test_watcher@V-$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windo.c)
 *     ?start@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x18028038C (-start@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ?has_ever_started@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802C604C (-has_ever_started@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180589E5C (-ensure_data@-$tip_test@V-$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1806B1718 (-reset@-$com_ptr_t@V-$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Wind.c)
 */

struct wil::details::IFailureCallback *__fastcall tip2::tip_test<tip2::details::merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest,winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest>>::start_and_watch_errors(
        volatile signed __int32 **a1,
        struct wil::details::IFailureCallback *a2)
{
  volatile signed __int32 *v4; // rcx
  void **v5; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a1;
  if ( v4 && tip2::details::shared_data<1,0,0>::has_ever_started((__int64)(v4 + 2)) )
    wil::com_ptr_t<tip2::details::merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest,winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest>,wil::err_returncode_policy>::reset(a1);
  v5 = tip2::tip_test<tip2::details::merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest,winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest>>::ensure_data((void **)a1);
  tip2::details::shared_data<1,0,0>::start((__int64)*v5 + 8, &v7);
  tip2::test_watcher<tip2::details::merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest,winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest>>::test_watcher<tip2::details::merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest,winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest>>(
    a2,
    (__int64 *)a1);
  return a2;
}
