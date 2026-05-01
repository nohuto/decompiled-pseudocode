/*
 * XREFs of ?_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@W4SNAP_ASSIST_VIEW_FLAGS@@HPEA_N@Z @ 0x180584EA0
 * Callers:
 *     ?AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z @ 0x1800DA680 (-AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z.c)
 *     ?TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18023AE30 (-TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIAppli.c)
 *     ?TriggerSnapAssistFromAppLayout@CSnapAssistControllerBase@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppLayout@@@Z @ 0x1805844F0 (-TriggerSnapAssistFromAppLayout@CSnapAssistControllerBase@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppL.c)
 *     ?TriggerSnapAssistWithRegions@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4SNAP_ASSIST_VIEW_FLAGS@@PEBUtagRECT@@I@Z @ 0x1805846D0 (-TriggerSnapAssistWithRegions@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4SNAP_ASSIS.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x18002A564 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z @ 0x18008F5F8 (-IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCSnapComponentTelemetry@@@details@wil@@QEAAPEAVCSnapComponentTelemetry@@P6AXXZ@Z @ 0x18008F638 (-get@-$static_lazy@VCSnapComponentTelemetry@@@details@wil@@QEAAPEAVCSnapComponentTelemetry@@P6AX.c)
 *     ?EndGuidedSnapAssist@CSnapAssistControllerBase@@IEAAXW4GuidedSnapAssistResult@1@V?$vector@_KV?$allocator@_K@std@@@std@@@Z @ 0x1800BC9A4 (-EndGuidedSnapAssist@CSnapAssistControllerBase@@IEAAXW4GuidedSnapAssistResult@1@V-$vector@_KV-$a.c)
 *     ?_Tidy@?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXXZ @ 0x1800BCBD4 (-_Tidy@-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAXXZ.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800BCE18 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuit.c)
 *     ?IsValidSnapRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z @ 0x1800D9658 (-IsValidSnapRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z.c)
 *     ?DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCRect@Geometry@@PEAUIImmersiveMonitor@@@Z @ 0x1800D9698 (-DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCRect@Geometry@.c)
 *     ?_CollectItemsForSnapAssist@CSnapAssistControllerBase@@IEAAJPEAUIImmersiveMonitor@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@PEAPEAUIObjectCollection@@@Z @ 0x1800F3458 (-_CollectItemsForSnapAssist@CSnapAssistControllerBase@@IEAAJPEAUIImmersiveMonitor@@AEBV-$vector@.c)
 *     ?ApplicationViewFilteredCollection_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIObjectCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1800F3A6C (-ApplicationViewFilteredCollection_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIAppli.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800F646C (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ?SnapAssistTriggered_@CSnapComponentTelemetry@@QEAAXUtagRECT@@HW4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18023FFE4 (-SnapAssistTriggered_@CSnapComponentTelemetry@@QEAAXUtagRECT@@HW4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 *     ?Show@GuidedSnapAssistControl@@QEAAXV?$shared_ptr@VGuidedSnapAssistData@@@std@@V?$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x180288600 (-Show@GuidedSnapAssistControl@@QEAAXV-$shared_ptr@VGuidedSnapAssistData@@@std@@V-$com_ptr_t@UIAp.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@1@XZ @ 0x1802887E8 (--C-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18028DA04 (-reset@-$com_ptr_t@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@Uerr_returncode_.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x180295DEC (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ??$make_shared@VGuidedSnapAssistData@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@AEAV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@3@AEBUCRect@Geometry@@AEAH@std@@YA?AV?$shared_ptr@VGuidedSnapAssistData@@@0@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@0@AEAV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@0@AEBUCRect@Geometry@@AEAH@Z @ 0x1802BC9F8 (--$make_shared@VGuidedSnapAssistData@@AEBV-$vector@V-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V-.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C9254 (--1-$test_data_control@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?HasValidSnapAssistItems@CSnapAssistControllerBase@@IEAA_NPEAUIObjectCollection@@@Z @ 0x18058328C (-HasValidSnapAssistItems@CSnapAssistControllerBase@@IEAA_NPEAUIObjectCollection@@@Z.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x180585BE0 (-start@-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA-AU_GU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSnapAssistControllerBase::_SnapAssistTriggered(
        __int64 a1,
        _OWORD *a2,
        SnapRectHelpers *a3,
        _QWORD *a4,
        __int64 a5,
        int a6,
        int a7,
        _BYTE *a8)
{
  _BYTE *v11; // r15
  __int64 v12; // rbx
  __int64 v13; // rcx
  unsigned int v14; // r13d
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // eax
  void *v19; // rdx
  int v20; // eax
  CSnapAssistControllerBase *v21; // rcx
  unsigned int v22; // ebx
  __int64 *v23; // rax
  const struct _GUID *v24; // r9
  int Instance; // eax
  __int64 result; // rax
  char v27; // dl
  const char *v28; // r9
  GuidedSnapAssistControl *v29; // rbx
  _QWORD *v30; // rax
  __int64 v31; // [rsp+30h] [rbp-98h] BYREF
  struct IObjectCollection *v32; // [rsp+38h] [rbp-90h] BYREF
  __int64 v33; // [rsp+40h] [rbp-88h] BYREF
  unsigned int v34; // [rsp+48h] [rbp-80h] BYREF
  __int128 v35; // [rsp+50h] [rbp-78h] BYREF
  __int64 v36; // [rsp+60h] [rbp-68h]
  std::_Ref_count_base *v37[2]; // [rsp+70h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v31 = (__int64)a4;
  v33 = a5;
  v11 = a8;
  v12 = (__int64)(a4[1] - *a4) >> 3;
  if ( CSnapComponentTelemetry::IsEnabled(a5) )
  {
    wil::details::static_lazy<CSnapComponentTelemetry>::get(
      v13,
      (void (__cdecl *)())_lambda_3442a9d6c0a6f0a8d43c13feb2a6d4f2_::_lambda_invoker_cdecl_);
    *(_OWORD *)v37 = *a2;
    v14 = a6;
    CSnapComponentTelemetry::SnapAssistTriggered_(v15, (int *)v37, v12, a6);
  }
  else
  {
    v14 = a6;
  }
  if ( v11 )
    *v11 = 0;
  v16 = *(_QWORD *)(a1 + 112);
  v34 = 0;
  v17 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)v16 + 32LL))(v16, 3LL, &v34);
  if ( v17 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2C7,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
      (const char *)(unsigned int)v17);
    return 0LL;
  }
  if ( !v34 )
    return 0LL;
  *(_OWORD *)v37 = 0LL;
  if ( (*(int (__fastcall **)(SnapRectHelpers *, std::_Ref_count_base **))(*(_QWORD *)a3 + 88LL))(a3, v37) < 0 )
    return 0LL;
  v18 = SnapLayoutHelpers::DetermineSnapRegionFromMonitorWorkArea((__int64)a2, a3);
  if ( !SnapLayoutHelpers::IsValidSnapRegion((SnapLayoutHelpers *)v18) )
    return 0LL;
  v32 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
  v20 = CSnapAssistControllerBase::_CollectItemsForSnapAssist(
          (CSnapAssistControllerBase *)a1,
          v19,
          v31,
          v33,
          (void **)&v32);
  v22 = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x362,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
      (const char *)(unsigned int)v20);
LABEL_16:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
    return v22;
  }
  if ( !CSnapAssistControllerBase::HasValidSnapAssistItems(v21, v32) )
  {
LABEL_29:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
    return 0LL;
  }
  v33 = 0LL;
  v23 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v33);
  Instance = ApplicationViewFilteredCollection_CreateInstance(
               *(struct IApplicationViewCollection **)(a1 + 72),
               *(struct IApplicationViewVisibilityDebouncedNotificationService **)(a1 + 80),
               v32,
               v24,
               (void **)v23);
  v22 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x369,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
      (const char *)(unsigned int)Instance);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
    goto LABEL_16;
  }
  std::make_shared<GuidedSnapAssistData,std::vector<Microsoft::WRL::ComPtr<ISnappedWindow>> const &,std::deque<tagRECT> &,Geometry::CRect const &,int &>(
    v37,
    v31,
    a1 + 176,
    (int)a2,
    &a7);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::__private_IsEnabledPreCheck(
    `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
    v27);
  if ( !(unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((__int64 *)(a1 + 240)) )
    tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::start(
      a1 + 240,
      &v35);
  if ( !*((_BYTE *)v37[0] + 48) )
  {
    v29 = *(GuidedSnapAssistControl **)(a1 + 288);
    wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
      &v31,
      v33);
    v30 = std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v35, v37);
    GuidedSnapAssistControl::Show(v29, v30, &v31, v14);
    wil::com_ptr_t<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>,wil::err_returncode_policy>::reset((void **)(a1 + 240));
    std::deque<tagRECT>::_Tidy((_QWORD *)(a1 + 176));
    if ( v11 )
      *v11 = 1;
    if ( v37[1] )
      std::_Ref_count_base::_Decref(v37[1]);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
    goto LABEL_29;
  }
  *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::operator->(
                          a1 + 240,
                          (__int64)&v31)
           + 280LL) = 1;
  tip2::test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::~test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>((void **)&v31);
  try
  {
    v35 = 0LL;
    v36 = 0LL;
    CSnapAssistControllerBase::EndGuidedSnapAssist(a1, 0, (__int64)&v35);
    if ( v37[1] )
      std::_Ref_count_base::_Decref(v37[1]);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
    result = 0LL;
  }
  catch ( ... )
  {
    v34 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x386,
            (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
            v28);
    if ( v37[1] )
      std::_Ref_count_base::_Decref(v37[1]);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
    return v34;
  }
  return result;
}
