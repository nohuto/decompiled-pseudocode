/*
 * XREFs of ??0?$test_watcher@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@QEAA@$$QEAV01@@Z @ 0x1805CB994
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180279DE0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800B3F5C (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 */

struct wil::details::IFailureCallback *__fastcall tip2::test_watcher<tip2::details::merged_data<_tip_AppPrelaunch,_tip_AppPrelaunch>>::test_watcher<tip2::details::merged_data<_tip_AppPrelaunch,_tip_AppPrelaunch>>(
        struct wil::details::IFailureCallback *a1)
{
  struct wil::details::IFailureCallback *result; // rax

  *(_QWORD *)a1 = &tip2::test_watcher<tip2::details::merged_data<_tip_SetPhysicalDeviceAccessRegKeyTipTest,_tip_SetPhysicalDeviceAccessRegKeyTipTest>>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 8),
    a1,
    0LL,
    0);
  result = a1;
  *((_QWORD *)a1 + 6) = 0LL;
  return result;
}
