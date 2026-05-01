/*
 * XREFs of ?InternalShowFlyout@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801C87B0
 * Callers:
 *     _lambda_1e80c37ddcde987ca8d07444e2bbbfce_::operator() @ 0x1801C8678 (_lambda_1e80c37ddcde987ca8d07444e2bbbfce_--operator().c)
 *     SnapFlyoutHost::ShowFlyoutAsync$_ResumeCoro$1 @ 0x180272750 (SnapFlyoutHost--ShowFlyoutAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??$TryGetVisibleFlyoutInstance@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@SnapFlyoutHost@@AEAA?AV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801EE850 (--$TryGetVisibleFlyoutInstance@V-$unique_any_t@V-$unique_storage@U-$resource_policy_ea_1801EE850.c)
 *     ?CancelDismissTimer@SnapFlyoutHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180206044 (-CancelDismissTimer@SnapFlyoutHost@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$resource_policy.c)
 *     ?TryGetMaximizeButtonRectFromDwm@SnapLayoutHelpers@@YA_NPEAUHWND__@@PEAUCRect@Geometry@@@Z @ 0x180234138 (-TryGetMaximizeButtonRectFromDwm@SnapLayoutHelpers@@YA_NPEAUHWND__@@PEAUCRect@Geometry@@@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18028AB88 (--1-$test_data_control@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18028C690 (--1-$com_ptr_t@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@Uerr_returncode_policy.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@1@XZ @ 0x18028C808 (--C-$tip_test@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_da.c)
 *     ??0?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@AEBV01@@Z @ 0x18028CB9C (--0-$tip_test@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@AEBV01@@Z.c)
 *     ?start_and_watch_errors@?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@2@XZ @ 0x18028CBD0 (-start_and_watch_errors@-$tip_test@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@t.c)
 *     ?CreateSnapFlyoutInstanceAsync@SnapFlyoutHost@@AEAA?AUIAsyncAction@Foundation@Windows@winrt@@PEAUHWND__@@W4SnapControlType@SnapComponent@Shell@Internal@45@IW4InputDeviceKind@9UI@WindowsUdk@5@PEAUHMONITOR__@@V?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@W4ShowFlags@1@@Z @ 0x18028CF18 (-CreateSnapFlyoutInstanceAsync@SnapFlyoutHost@@AEAA-AUIAsyncAction@Foundation@Windows@winrt@@PEA.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18028D5E4 (--1-$test_watcher@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029752C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?IsEnabled@SnapFlyoutTelemetry@@SA_NE_K@Z @ 0x1802B20A0 (-IsEnabled@SnapFlyoutTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSnapFlyoutTelemetry@@@details@wil@@QEAAPEAVSnapFlyoutTelemetry@@P6AXXZ@Z @ 0x1802B20E0 (-get@-$static_lazy@VSnapFlyoutTelemetry@@@details@wil@@QEAAPEAVSnapFlyoutTelemetry@@P6AXXZ@Z.c)
 *     ?SnapFlyout_ReuseFlyout@SnapFlyoutTelemetry@@SAXXZ @ 0x1802CF1A0 (-SnapFlyout_ReuseFlyout@SnapFlyoutTelemetry@@SAXXZ.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1802CFFBC (-complete@-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@ti.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?SnapFlyoutInvoke_@SnapFlyoutTelemetry@@QEBAXW4InvocationSource@1@@Z @ 0x180590E5C (-SnapFlyoutInvoke_@SnapFlyoutTelemetry@@QEBAXW4InvocationSource@1@@Z.c)
 *     ?SnapFlyout_RejectShowFlyout@SnapFlyoutTelemetry@@SAXXZ @ 0x180590EF4 (-SnapFlyout_RejectShowFlyout@SnapFlyoutTelemetry@@SAXXZ.c)
 *     ?StartXamlExplorerHostThread@SnapFlyoutHost@@AEAAXV?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180591110 (-StartXamlExplorerHostThread@SnapFlyoutHost@@AEAAXV-$tip_test@V-$merged_data@U_tip_SnapFlyoutSho.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SnapFlyoutHost::InternalShowFlyout(__int64 a1, HWND a2, char a3)
{
  unsigned __int64 v6; // rdx
  unsigned __int8 v7; // cl
  __int64 v8; // rcx
  __int64 v9; // rcx
  const char *v10; // r9
  __int64 v11; // rax
  struct Geometry::CRect *v12; // r8
  int v13; // edi
  __int64 v14; // rbx
  HMONITOR v15; // rax
  __int64 v17; // [rsp+50h] [rbp-49h] BYREF
  struct tagPOINT Point; // [rsp+58h] [rbp-41h] BYREF
  __int64 v19; // [rsp+60h] [rbp-39h] BYREF
  std::_Ref_count_base *v20; // [rsp+68h] [rbp-31h]
  _BYTE v21[56]; // [rsp+70h] [rbp-29h] BYREF
  RECT rc; // [rsp+A8h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v17 = 0LL;
  *(_DWORD *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::operator->(
                           &v17,
                           &Point)
            + 276LL) = 1;
  tip2::test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>(&Point);
  tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::start_and_watch_errors(
    &v17,
    v21);
  if ( SnapFlyoutTelemetry::IsEnabled(v7, v6) )
  {
    wil::details::static_lazy<SnapFlyoutTelemetry>::get(
      v8,
      _lambda_9927b359eceb7275e94a8a7346ff996f_::_lambda_invoker_cdecl_);
    SnapFlyoutTelemetry::SnapFlyoutInvoke_(v9, !(a3 & 1));
  }
  SnapFlyoutHost::CancelDismissTimer(a1);
  if ( !*(_DWORD *)(a1 + 168) )
  {
    if ( (unsigned __int64)(*(_QWORD *)(a1 + 88) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x1E5,
        (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyouthost.cpp",
        v10);
    if ( *(_QWORD *)(a1 + 96) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x1E6,
        (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyouthost.cpp",
        v10);
    v11 = tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>(
            &Point,
            &v17);
    SnapFlyoutHost::StartXamlExplorerHostThread(a1, v11);
LABEL_13:
    if ( (a3 & 1) != 0
      && (rc = 0LL, SnapLayoutHelpers::TryGetMaximizeButtonRectFromDwm(a2, (HWND)&rc, v12))
      && (Point = 0LL, GetPhysicalCursorPos(&Point), !PtInRect(&rc, Point)) )
    {
      SnapFlyoutTelemetry::SnapFlyout_RejectShowFlyout();
      *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::operator->(
                              &v17,
                              &v19)
               + 268LL) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>(&v19);
      tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete(&v17);
    }
    else
    {
      v13 = ++*(_DWORD *)(a1 + 48);
      v14 = tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>(
              &v19,
              &v17);
      v15 = MonitorFromWindow(a2, 2u);
      SnapFlyoutHost::CreateSnapFlyoutInstanceAsync(
        a1,
        (unsigned int)&Point,
        (_DWORD)a2,
        1,
        v13,
        !(a3 & 1) + 2,
        (__int64)v15,
        v14,
        a3);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&Point);
    }
    goto LABEL_18;
  }
  SnapFlyoutHost::TryGetVisibleFlyoutInstance<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>>(
    a1,
    &v19);
  if ( !v19 || *(HWND *)(*(_QWORD *)(v19 + 8) + 328LL) != a2 )
  {
    if ( v20 )
      std::_Ref_count_base::_Decref(v20);
    goto LABEL_13;
  }
  SnapFlyoutTelemetry::SnapFlyout_ReuseFlyout();
  *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::operator->(
                          &v17,
                          &Point)
           + 272LL) = 1;
  tip2::test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>(&Point);
  tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete(&v17);
  if ( v20 )
    std::_Ref_count_base::_Decref(v20);
LABEL_18:
  tip2::test_watcher<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::~test_watcher<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>(v21);
  return wil::com_ptr_t<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>,wil::err_returncode_policy>(&v17);
}
