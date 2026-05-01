/*
 * XREFs of ?OnFlyoutInstanceReady@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@Z @ 0x180272310
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x1801E9A20 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 *     ?TryGetFlyoutInstance@SnapFlyoutHost@@AEAA?AV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@AEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180202E7C (-TryGetFlyoutInstance@SnapFlyoutHost@@AEAA-AV-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@.c)
 *     ?ProgressRequest@?$consume_Windows_Internal_Shell_WindowManagementEvents_IArrangedWindowResizeStartedEventArgs@UIArrangedWindowResizeStartedEventArgs@WindowManagementEvents@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180202F10 (-ProgressRequest@-$consume_Windows_Internal_Shell_WindowManagementEvents_IArrangedWindowResizeSt.c)
 *     ?Run@?$consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback@UIImmersiveShellThreadDispatcherCallback@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180227A18 (-Run@-$consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback@UIIm.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18028AB88 (--1-$test_data_control@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@1@XZ @ 0x18028C808 (--C-$tip_test@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_da.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029752C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$SnapFlyout_InstanceReady@I@SnapFlyoutTelemetry@@SAX$$QEAI@Z @ 0x1802CC430 (--$SnapFlyout_InstanceReady@I@SnapFlyoutTelemetry@@SAX$$QEAI@Z.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1802CFFBC (-complete@-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@ti.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall SnapFlyoutHost::OnFlyoutInstanceReady(
        RTL_SRWLOCK *this,
        const struct winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance *a2)
{
  const char *v4; // r9
  __int64 v5; // rcx
  unsigned int v6; // eax
  __int64 v7; // [rsp+20h] [rbp-30h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-28h]
  int v9; // [rsp+30h] [rbp-20h] BYREF
  __int128 v10; // [rsp+38h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  __int64 v12; // [rsp+60h] [rbp+10h] BYREF
  RTL_SRWLOCK *v13; // [rsp+70h] [rbp+20h] BYREF

  LODWORD(v12) = winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IArrangedWindowResizeStartedEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IArrangedWindowResizeStartedEventArgs>::ProgressRequest((__int64 *)a2);
  SnapFlyoutTelemetry::SnapFlyout_InstanceReady<unsigned int>(&v12);
  wil::AcquireSRWLockExclusive(&v13, this + 22);
  SnapFlyoutHost::TryGetFlyoutInstance((__int64)this, &v7, (__int64)a2);
  if ( !v7 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x348,
      (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyouthost.cpp",
      v4);
  if ( LODWORD(this[6].Ptr) == (unsigned int)winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IArrangedWindowResizeStartedEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IArrangedWindowResizeStartedEventArgs>::ProgressRequest((__int64 *)a2) )
  {
    *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::operator->(
                            v7,
                            &v12)
             + 264LL) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>(&v12);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
      &v13,
      0LL);
    winrt::impl::consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback<winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback>::Run((__int64 *)a2);
  }
  else
  {
    *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::operator->(
                            v7,
                            &v12)
             + 266LL) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>(&v12);
    v5 = *(_QWORD *)a2;
    v9 = 0;
    v10 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 64LL))(v5);
    winrt::check_hresult(&v12, v6, &v9);
    tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete(v7);
  }
  v12 = 0LL;
  this[17].Ptr = 0LL;
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v13);
}
