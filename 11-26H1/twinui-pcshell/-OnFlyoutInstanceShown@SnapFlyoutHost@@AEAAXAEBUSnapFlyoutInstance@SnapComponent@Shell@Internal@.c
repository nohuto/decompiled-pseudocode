/*
 * XREFs of ?OnFlyoutInstanceShown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@_N@Z @ 0x1805B44D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$SnapFlyout_InstanceShown@IAEA_N@SnapFlyoutTelemetry@@SAX$$QEAIAEA_N@Z @ 0x180186EF4 (--$SnapFlyout_InstanceShown@IAEA_N@SnapFlyoutTelemetry@@SAX$$QEAIAEA_N@Z.c)
 *     ?TryGetFlyoutInstance@SnapFlyoutHost@@AEAA?AV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@AEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801C79D0 (-TryGetFlyoutInstance@SnapFlyoutHost@@AEAA-AV-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@.c)
 *     ?ProgressRequest@?$consume_Windows_Internal_Shell_WindowManagementEvents_IArrangedWindowResizeStartedEventArgs@UIArrangedWindowResizeStartedEventArgs@WindowManagementEvents@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801C7A5C (-ProgressRequest@-$consume_Windows_Internal_Shell_WindowManagementEvents_IArrangedWindowResizeSt.c)
 *     ?SnapControlType@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180239E30 (-SnapControlType@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyout.c)
 *     ?HitTestControl@WindowDragInputProvider@@QEAAXUPoint@Foundation@Windows@winrt@@@Z @ 0x18026B630 (-HitTestControl@WindowDragInputProvider@@QEAAXUPoint@Foundation@Windows@winrt@@@Z.c)
 *     ?RegisterForCustomDockTargetMessages@WindowDragInputProvider@@AEAAXXZ @ 0x18026BE48 (-RegisterForCustomDockTargetMessages@WindowDragInputProvider@@AEAAXXZ.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18028163C (--1-$test_data_control@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@1@XZ @ 0x180281674 (--C-$tip_test@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_da.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x18028BF74 (-complete@-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@ti.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180291BCC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1802A2788 (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ?SetActiveControl@WindowDragInputProvider@@QEAAXUIControlWindow@SnapComponent@Shell@Internal@Windows@winrt@@@Z @ 0x1802C561C (-SetActiveControl@WindowDragInputProvider@@QEAAXUIControlWindow@SnapComponent@Shell@Internal@Win.c)
 *     ?StartWindowDrag@WindowDragInputProviderTelemetry@@SAXXZ @ 0x1802C66E4 (-StartWindowDrag@WindowDragInputProviderTelemetry@@SAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall SnapFlyoutHost::OnFlyoutInstanceShown(
        SnapFlyoutHost *this,
        const struct winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance *a2,
        char a3)
{
  const char *v6; // r9
  int v7; // ebx
  __int64 v8; // rcx
  __m128 v9; // xmm2
  float *v10; // rax
  WindowDragInputProvider *v11; // rbx
  __int64 v12; // rbx
  void (__fastcall ***v13)(_QWORD, __int64 *, __int64 *); // rcx
  const char *v14; // r9
  __int64 *v15; // [rsp+20h] [rbp-10h] BYREF
  std::_Ref_count_base *v16; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v18; // [rsp+50h] [rbp+20h] BYREF
  char v19; // [rsp+60h] [rbp+30h] BYREF
  RTL_SRWLOCK *v20; // [rsp+68h] [rbp+38h] BYREF

  v19 = a3;
  LODWORD(v18) = winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IArrangedWindowResizeStartedEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IArrangedWindowResizeStartedEventArgs>::ProgressRequest((__int64 *)a2);
  SnapFlyoutTelemetry::SnapFlyout_InstanceShown<unsigned int,bool &>((int *)&v18, &v19);
  wil::AcquireSRWLockExclusive(&v20, (RTL_SRWLOCK *)this + 22);
  SnapFlyoutHost::TryGetFlyoutInstance((__int64)this, &v15, (__int64)a2);
  if ( !v15 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x36B,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyouthost.cpp",
      v6);
  if ( a3 )
  {
    v7 = *((_DWORD *)this + 12);
    if ( v7 == (unsigned int)winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IArrangedWindowResizeStartedEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IArrangedWindowResizeStartedEventArgs>::ProgressRequest((__int64 *)a2) )
    {
      if ( (unsigned int)winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::SnapControlType((__int64 *)a2) == 2 )
      {
        v9 = (__m128)*((unsigned int *)this + 34);
        v10 = (float *)((char *)this + 140);
        if ( v9.m128_f32[0] != 0.0 || *v10 != 0.0 )
          WindowDragInputProvider::HitTestControl(
            *((__int64 **)this + 14),
            _mm_unpacklo_ps(v9, (__m128)*(unsigned int *)v10).m128_i64[0]);
        v11 = (WindowDragInputProvider *)*((_QWORD *)this + 14);
        WindowDragInputProviderTelemetry::StartWindowDrag(v8);
        WindowDragInputProvider::RegisterForCustomDockTargetMessages(v11);
        v12 = *((_QWORD *)this + 14);
        v13 = *(void (__fastcall ****)(_QWORD, __int64 *, __int64 *))a2;
        v18 = 0LL;
        if ( v13 )
          (**v13)(v13, &winrt::impl::guid_v<winrt::Windows::Internal::Shell::SnapComponent::IControlWindow>, &v18);
        WindowDragInputProvider::SetActiveControl(v12, &v18);
      }
      if ( !(unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool(v15) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x384,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyouthost.cpp",
          v14);
      *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::operator->(
                              (__int64)v15,
                              (__int64)&v18)
               + 273LL) = 1;
    }
    else
    {
      *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::operator->(
                              (__int64)v15,
                              (__int64)&v18)
               + 274LL) = 1;
    }
    tip2::test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>(&v18);
    tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete(v15);
  }
  if ( v16 )
    std::_Ref_count_base::_Decref(v16);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v20);
}
