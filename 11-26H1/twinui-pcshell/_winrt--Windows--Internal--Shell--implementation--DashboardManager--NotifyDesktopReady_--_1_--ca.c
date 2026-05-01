/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::DashboardManager::NotifyDesktopReady_::_1_::catch$17 @ 0x1806FBEA3
 * Callers:
 *     <none>
 * Callees:
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x180283040 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802C047C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x1802D91F4 (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805CC1B8 (--1-$test_data_control@V-$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@@tip2@.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::NotifyDesktopReady_::_1_::catch_17(
        wil *a1,
        __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // rbx

  v3 = wil::ResultFromCaughtException(a1);
  wil::details::in1diag3::Log_Hr(
    *(wil::details::in1diag3 **)(a2 + 168),
    (void *)0x91A,
    (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
    (const char *)v3);
  v4 = *(_QWORD *)(a2 + 112);
  *(_QWORD *)(a2 + 40) = v4;
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 312));
  tip2::details::shared_data<0,0,1>::begin_update(v4 + 8);
  *(_DWORD *)(v4 + 272) = v3;
  tip2::test_data_control<tip2::details::merged_data<_tip_AppPrelaunchBackgroundTask,_tip_AppPrelaunchBackgroundTask>>::~test_data_control<tip2::details::merged_data<_tip_AppPrelaunchBackgroundTask,_tip_AppPrelaunchBackgroundTask>>((void **)(a2 + 40));
  return 0LL;
}
