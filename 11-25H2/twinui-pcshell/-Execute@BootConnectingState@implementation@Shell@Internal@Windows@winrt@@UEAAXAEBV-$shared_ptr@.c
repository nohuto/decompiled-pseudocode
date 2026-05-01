/*
 * XREFs of ?Execute@BootConnectingState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x180644180
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x18028C87C (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x180295E10 (-is_running@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180616ED8 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180618F30 (--1-$test_data_control@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180618FD8 (--1-$test_watcher@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?GetLockImagePath@Utils@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@XZ @ 0x1806431BC (-GetLockImagePath@Utils@implementation@Shell@Internal@Windows@winrt@@SA-AUhstring@6@XZ.c)
 *     ?GetMaxConnectionTimeoutFromAdmin@CloudPCHelpers@@YAHXZ @ 0x1806432A4 (-GetMaxConnectionTimeoutFromAdmin@CloudPCHelpers@@YAHXZ.c)
 *     ?ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXW4CloudPCState@3456@0@Z @ 0x18064C834 (-ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::BootConnectingState::Execute(
        CloudPCHelpers *a1,
        __int64 a2,
        unsigned int a3)
{
  int MaxConnectionTimeoutFromAdmin; // eax
  void (__fastcall *v6)(CloudPCHelpers *, __int64, const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *(__fastcall **)(const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *, __int64 **), __int64 *); // rbx
  __int64 v7; // r14
  const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *(__fastcall **v8)(const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *, __int64 **); // rax
  volatile signed __int32 *v9; // rbx
  void (__fastcall *v10)(CloudPCHelpers *, __int64, const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *(__fastcall **)(const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *, __int64 **), __int64 *); // rbx
  const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *(__fastcall **LockImagePath)(const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *, __int64 **); // rax
  const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *(__fastcall *v12)(const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *, __int64 **); // [rsp+30h] [rbp-50h] BYREF
  volatile signed __int32 *v13; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v14[48]; // [rsp+40h] [rbp-40h] BYREF
  volatile signed __int32 *v15; // [rsp+70h] [rbp-10h]
  __int64 v16; // [rsp+B8h] [rbp+38h] BYREF

  if ( a3 == 1 )
  {
    v10 = *(void (__fastcall **)(CloudPCHelpers *, __int64, const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *(__fastcall **)(const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *, __int64 **), __int64 *))(*(_QWORD *)a1 + 8LL);
    v16 = 1200000000LL;
    LockImagePath = winrt::Windows::Internal::Shell::implementation::Utils::GetLockImagePath((const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *(__fastcall **)(const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *, __int64 **))&v13);
    v10(a1, a2, LockImagePath, &v16);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v13);
  }
  else
  {
    if ( a3 != 2 )
    {
      if ( a3 == 98 )
        return;
      if ( a3 - 99 > 1 )
        winrt::Windows::Internal::Shell::implementation::ConnectionStateBase::ThrowIllegalStateTransition(a1, a3, 0LL);
    }
    MaxConnectionTimeoutFromAdmin = CloudPCHelpers::GetMaxConnectionTimeoutFromAdmin(a1);
    v6 = *(void (__fastcall **)(CloudPCHelpers *, __int64, const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *(__fastcall **)(const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *, __int64 **), __int64 *))(*(_QWORD *)a1 + 8LL);
    v7 = MaxConnectionTimeoutFromAdmin;
    v16 = 600000000LL * MaxConnectionTimeoutFromAdmin;
    v8 = winrt::Windows::Internal::Shell::implementation::Utils::GetLockImagePath(&v12);
    v6(a1, a2, v8, &v16);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v12);
    tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>>((struct wil::details::IFailureCallback *)v14);
    if ( tip2::details::shared_data<1,0,0>::is_running((__int64)(v15 + 2)) )
    {
      v9 = v15;
      v13 = v15;
      if ( v15 )
        _InterlockedIncrement(v15 + 90);
      tip2::details::shared_data<1,0,0>::begin_update((__int64)(v9 + 2));
      *((_QWORD *)v9 + 44) = v7;
      tip2::test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>::~test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>((void **)&v13);
    }
    tip2::test_watcher<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>::~test_watcher<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>((__int64)v14);
  }
}
