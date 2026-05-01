/*
 * XREFs of ?ActivateWindows@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAAXU?$array_view@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@7@W4ActivateWindowsOptions@34567@@Z @ 0x180563C98
 * Callers:
 *     ?ActivateWindows@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@@impl@winrt@@UEAAHIPEAUstruct_Windows_Internal_ApplicationModel_WindowManagement_WindowId@23@I@Z @ 0x180563C50 (-ActivateWindows@-$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Id@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180061EB0 (-Id@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal.c)
 *     ?TryFindGroupWithWindow@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModel@UITaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@3@@Z @ 0x18026D298 (-TryFindGroupWithWindow@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModel@UITaskGr.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028AAC4 (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$TaskGroupSwitchToCompleted@Uguid@winrt@@@TaskGroupsTraceLoggingProvider@@SAX$$QEAUguid@winrt@@@Z @ 0x180563344 (--$TaskGroupSwitchToCompleted@Uguid@winrt@@@TaskGroupsTraceLoggingProvider@@SAX$$QEAUguid@winrt@.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1805638C4 (--1-$com_ptr_t@V-$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805639B4 (--1-$test_watcher@V-$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windo.c)
 *     ?open_and_watch_errors@?$tip_test@V?$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@@2@XZ @ 0x180565EAC (-open_and_watch_errors@-$tip_test@V-$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shel.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::ActivateWindows(
        __int64 a1,
        unsigned int **a2)
{
  unsigned int *v4; // rsi
  unsigned int *v5; // rdi
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rdx
  int v9; // r9d
  __int64 v10; // r8
  __int64 v12; // [rsp+40h] [rbp-78h] BYREF
  void *v13; // [rsp+48h] [rbp-70h] BYREF
  _BYTE v14[48]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v15; // [rsp+80h] [rbp-38h]
  __int128 v16; // [rsp+88h] [rbp-30h] BYREF

  v13 = 0LL;
  tip2::tip_test<tip2::details::merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest,winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest>>::open_and_watch_errors(
    &v13,
    v14);
  v4 = *a2;
  v5 = *a2;
  v6 = (__int64)&(*a2)[*((unsigned int *)a2 + 2)];
  if ( *a2 != (unsigned int *)v6 )
  {
    v7 = *v4;
    do
    {
      v8 = *v5;
      v9 = 16;
      if ( v7 != v8 )
        v9 = 1;
      v10 = 0LL;
      if ( v7 != v8 )
        v10 = v7;
      (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int, int, int))(**(_QWORD **)(a1 + 176) + 24LL))(
        *(_QWORD *)(a1 + 176),
        v8,
        v10,
        0LL,
        3,
        v9,
        2);
      ++v5;
    }
    while ( v5 != (unsigned int *)v6 );
  }
  tip2::details::shared_data<1,0,0>::complete_without_lock(v15 + 8);
  if ( *(_QWORD *)(a1 + 456) )
  {
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModel<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModel>::TryFindGroupWithWindow(
      (__int64 **)(a1 + 456),
      &v12,
      v4);
    if ( v12 )
    {
      winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroup<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>::Id(
        &v12,
        &v16);
      TaskGroupsTraceLoggingProvider::TaskGroupSwitchToCompleted<winrt::guid>();
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
  }
  tip2::test_watcher<tip2::details::merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest,winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest>>::~test_watcher<tip2::details::merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest,winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest>>((__int64)v14);
  return wil::com_ptr_t<tip2::details::merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest,winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest,winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest>,wil::err_returncode_policy>(&v13);
}
