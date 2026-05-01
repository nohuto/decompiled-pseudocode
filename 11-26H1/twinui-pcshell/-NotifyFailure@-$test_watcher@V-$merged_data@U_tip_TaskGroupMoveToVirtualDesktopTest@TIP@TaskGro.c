/*
 * XREFs of ?NotifyFailure@?$test_watcher@V?$merged_data@U_tip_TaskGroupMoveToVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@@tip2@@EEAA_NAEBUFailureInfo@wil@@@Z @ 0x1803B65B0
 * Callers:
 *     <none>
 * Callees:
 *     ?log_failure@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEBUFailureInfo@wil@@@Z @ 0x1803BD15C (-log_failure@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEBUFailureInfo@wil@@@Z.c)
 */

char __fastcall tip2::test_watcher<tip2::details::merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupMoveToVirtualDesktopTest,winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupMoveToVirtualDesktopTest>>::NotifyFailure(
        __int64 a1)
{
  tip2::details::shared_data<1,0,0>::log_failure(*(_QWORD *)(a1 + 48) + 8LL);
  return 0;
}
