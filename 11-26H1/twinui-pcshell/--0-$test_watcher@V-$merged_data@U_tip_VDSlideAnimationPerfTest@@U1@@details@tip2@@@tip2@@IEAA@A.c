/*
 * XREFs of ??0?$test_watcher@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@IEAA@AEAV?$com_ptr_t@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180551744
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180279DE0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180550644 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@.c)
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180551030 (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details.c)
 *     ?start_and_watch_errors@?$tip_test@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@2@XZ @ 0x1805DD178 (-start_and_watch_errors@-$tip_test@V-$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@Q.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800B3F5C (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 */

struct wil::details::IFailureCallback *__fastcall tip2::test_watcher<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>::test_watcher<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>(
        struct wil::details::IFailureCallback *a1,
        __int64 *a2)
{
  __int64 v4; // rax

  *(_QWORD *)a1 = &tip2::test_watcher<tip2::details::merged_data<_tip_SetPhysicalDeviceAccessRegKeyTipTest,_tip_SetPhysicalDeviceAccessRegKeyTipTest>>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 8),
    a1,
    0LL,
    1);
  v4 = *a2;
  *((_QWORD *)a1 + 6) = *a2;
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 352));
  return a1;
}
