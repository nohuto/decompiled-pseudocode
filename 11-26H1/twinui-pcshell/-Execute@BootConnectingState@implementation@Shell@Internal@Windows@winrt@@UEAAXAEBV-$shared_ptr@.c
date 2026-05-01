/*
 * XREFs of ?Execute@BootConnectingState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x180669F20
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802816D8 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802A27AC (-is_running@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x18063CDA8 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18063EDBC (--1-$test_data_control@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18063EE64 (--1-$test_watcher@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?GetLockImagePath@Utils@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@XZ @ 0x180668E40 (-GetLockImagePath@Utils@implementation@Shell@Internal@Windows@winrt@@SA-AUhstring@6@XZ.c)
 *     ?GetMaxConnectionTimeoutFromAdmin@CloudPCHelpers@@YAHXZ @ 0x180668ED0 (-GetMaxConnectionTimeoutFromAdmin@CloudPCHelpers@@YAHXZ.c)
 *     ?ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXW4CloudPCState@3456@0@Z @ 0x1806727F8 (-ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::BootConnectingState::Execute(
        CloudPCHelpers *a1,
        __int64 a2,
        unsigned int a3)
{
  int MaxConnectionTimeoutFromAdmin; // eax
  void (__fastcall *v6)(CloudPCHelpers *, __int64, _QWORD *, __int64 *); // rbx
  __int64 v7; // r14
  _QWORD *v8; // rax
  volatile signed __int32 *v9; // rbx
  void (__fastcall *v10)(CloudPCHelpers *, __int64, _QWORD *, __int64 *); // rbx
  _QWORD *LockImagePath; // rax
  volatile signed __int32 *v12; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v13[48]; // [rsp+38h] [rbp-38h] BYREF
  volatile signed __int32 *v14; // [rsp+68h] [rbp-8h]
  __int64 v15; // [rsp+A8h] [rbp+38h] BYREF

  if ( a3 == 1 )
  {
    v10 = *(void (__fastcall **)(CloudPCHelpers *, __int64, _QWORD *, __int64 *))(*(_QWORD *)a1 + 8LL);
    v15 = 1200000000LL;
    LockImagePath = winrt::Windows::Internal::Shell::implementation::Utils::GetLockImagePath(&v12);
    v10(a1, a2, LockImagePath, &v15);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v12);
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
    v6 = *(void (__fastcall **)(CloudPCHelpers *, __int64, _QWORD *, __int64 *))(*(_QWORD *)a1 + 8LL);
    v7 = MaxConnectionTimeoutFromAdmin;
    v15 = 600000000LL * MaxConnectionTimeoutFromAdmin;
    v8 = winrt::Windows::Internal::Shell::implementation::Utils::GetLockImagePath(&v12);
    v6(a1, a2, v8, &v15);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v12);
    tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>>((struct wil::details::IFailureCallback *)v13);
    if ( tip2::details::shared_data<1,0,0>::is_running((__int64)(v14 + 2)) )
    {
      v9 = v14;
      v15 = (__int64)v14;
      if ( v14 )
        _InterlockedIncrement(v14 + 92);
      tip2::details::shared_data<1,0,0>::begin_update((__int64)(v9 + 2));
      *((_QWORD *)v9 + 45) = v7;
      tip2::test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>::~test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>((void **)&v15);
    }
    tip2::test_watcher<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>::~test_watcher<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>((__int64)v13);
  }
}
