/*
 * XREFs of ?_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@W4SNAP_ASSIST_VIEW_FLAGS@@HPEA_N@Z @ 0x1805A8DF0
 * Callers:
 *     ?AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z @ 0x18016C5A0 (-AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z.c)
 *     ?TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18022B940 (-TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIAppli.c)
 *     ?TriggerSnapAssistFromAppLayout@CSnapAssistControllerBase@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppLayout@@@Z @ 0x1805A8340 (-TriggerSnapAssistFromAppLayout@CSnapAssistControllerBase@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppL.c)
 *     ?TriggerSnapAssistWithRegions@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4SNAP_ASSIST_VIEW_FLAGS@@PEBUtagRECT@@I@Z @ 0x1805A8550 (-TriggerSnapAssistWithRegions@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4SNAP_ASSIS.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800580B4 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ?IsValidSnapRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z @ 0x18005A490 (-IsValidSnapRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18006CF04 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 *     ?IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z @ 0x18008A42C (-IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCSnapComponentTelemetry@@@details@wil@@QEAAPEAVCSnapComponentTelemetry@@P6AXXZ@Z @ 0x18008A46C (-get@-$static_lazy@VCSnapComponentTelemetry@@@details@wil@@QEAAPEAVCSnapComponentTelemetry@@P6AX.c)
 *     ?_Tidy@?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXXZ @ 0x1800CB854 (-_Tidy@-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAXXZ.c)
 *     ?EndGuidedSnapAssist@CSnapAssistControllerBase@@IEAAXW4GuidedSnapAssistResult@1@V?$vector@_KV?$allocator@_K@std@@@std@@@Z @ 0x1800E2890 (-EndGuidedSnapAssist@CSnapAssistControllerBase@@IEAAXW4GuidedSnapAssistResult@1@V-$vector@_KV-$a.c)
 *     ?DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCRect@Geometry@@PEAUIImmersiveMonitor@@@Z @ 0x18016CF88 (-DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCRect@Geometry@.c)
 *     ?ApplicationViewFilteredCollection_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIObjectCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1801BE488 (-ApplicationViewFilteredCollection_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIAppli.c)
 *     ?_CollectItemsForSnapAssist@CSnapAssistControllerBase@@IEAAJPEAUIImmersiveMonitor@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@PEAPEAUIObjectCollection@@@Z @ 0x1802060E4 (-_CollectItemsForSnapAssist@CSnapAssistControllerBase@@IEAAJPEAUIImmersiveMonitor@@AEBV-$vector@.c)
 *     ?SnapAssistTriggered_@CSnapComponentTelemetry@@QEAAXUtagRECT@@HW4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x180231444 (-SnapAssistTriggered_@CSnapComponentTelemetry@@QEAAXUtagRECT@@HW4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18027F904 (--1-$test_data_control@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@.c)
 *     ?Show@GuidedSnapAssistControl@@QEAAXV?$shared_ptr@VGuidedSnapAssistData@@@std@@V?$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18027F93C (-Show@GuidedSnapAssistControl@@QEAAXV-$shared_ptr@VGuidedSnapAssistData@@@std@@V-$com_ptr_t@UIAp.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@1@XZ @ 0x18027FB80 (--C-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1802A2788 (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ??$make_shared@VGuidedSnapAssistData@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@AEAV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@3@AEBUCRect@Geometry@@AEAH@std@@YA?AV?$shared_ptr@VGuidedSnapAssistData@@@0@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@0@AEAV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@0@AEBUCRect@Geometry@@AEAH@Z @ 0x1802B3D2C (--$make_shared@VGuidedSnapAssistData@@AEBV-$vector@V-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V-.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?HasValidSnapAssistItems@CSnapAssistControllerBase@@IEAA_NPEAUIObjectCollection@@@Z @ 0x1805A70AC (-HasValidSnapAssistItems@CSnapAssistControllerBase@@IEAA_NPEAUIObjectCollection@@@Z.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1805A9934 (-reset@-$com_ptr_t@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@Uerr_returncode_.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x1805A9AE4 (-start@-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA-AU_GU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  int v19; // r14d
  void *v20; // rdx
  int v21; // eax
  CSnapAssistControllerBase *v22; // rcx
  unsigned int v23; // ebx
  __int64 *v24; // rax
  const struct _GUID *v25; // r9
  int Instance; // eax
  __int64 result; // rax
  char v28; // r8
  const char *v29; // r9
  GuidedSnapAssistControl *v30; // rbx
  _QWORD *v31; // rax
  __int64 v32; // [rsp+30h] [rbp-98h] BYREF
  __int64 v33; // [rsp+38h] [rbp-90h] BYREF
  _OWORD *v34; // [rsp+40h] [rbp-88h] BYREF
  _QWORD *v35; // [rsp+48h] [rbp-80h] BYREF
  std::_Ref_count_base *v36; // [rsp+50h] [rbp-78h]
  __int128 v37; // [rsp+58h] [rbp-70h] BYREF
  __int64 v38; // [rsp+68h] [rbp-60h]
  struct IObjectCollection *v39[2]; // [rsp+70h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v35 = a4;
  v34 = a2;
  v32 = a5;
  v11 = a8;
  v12 = (__int64)(a4[1] - *a4) >> 3;
  if ( CSnapComponentTelemetry::IsEnabled(a5) )
  {
    wil::details::static_lazy<CSnapComponentTelemetry>::get(
      v13,
      (void (__cdecl *)())_lambda_3442a9d6c0a6f0a8d43c13feb2a6d4f2_::_lambda_invoker_cdecl_);
    *(_OWORD *)v39 = *a2;
    v14 = a6;
    CSnapComponentTelemetry::SnapAssistTriggered_(v15, (int *)v39, v12, a6);
  }
  else
  {
    v14 = a6;
  }
  if ( v11 )
    *v11 = 0;
  v16 = *(_QWORD *)(a1 + 112);
  LODWORD(v33) = 0;
  v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v16 + 32LL))(v16, 3LL, &v33);
  if ( v17 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2C7,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
      (const char *)(unsigned int)v17);
    return 0LL;
  }
  if ( !(_DWORD)v33 )
    return 0LL;
  *(_OWORD *)v39 = 0LL;
  if ( (*(int (__fastcall **)(SnapRectHelpers *, struct IObjectCollection **))(*(_QWORD *)a3 + 88LL))(a3, v39) < 0 )
    return 0LL;
  v18 = SnapLayoutHelpers::DetermineSnapRegionFromMonitorWorkArea((__int64)a2, a3);
  if ( !SnapLayoutHelpers::IsValidSnapRegion((SnapLayoutHelpers *)v18) )
    return 0LL;
  v39[0] = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v39);
  v19 = (int)v35;
  v21 = CSnapAssistControllerBase::_CollectItemsForSnapAssist(
          (CSnapAssistControllerBase *)a1,
          v20,
          (__int64)v35,
          v32,
          (void **)v39);
  v23 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x363,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
      (const char *)(unsigned int)v21);
LABEL_16:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v39);
    return v23;
  }
  if ( !CSnapAssistControllerBase::HasValidSnapAssistItems(v22, v39[0]) )
  {
LABEL_29:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v39);
    return 0LL;
  }
  v32 = 0LL;
  v24 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v32);
  Instance = ApplicationViewFilteredCollection_CreateInstance(
               *(struct IApplicationViewCollection **)(a1 + 72),
               *(struct IApplicationViewVisibilityDebouncedNotificationService **)(a1 + 80),
               v39[0],
               v25,
               (void **)v24);
  v23 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36A,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
      (const char *)(unsigned int)Instance);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
    goto LABEL_16;
  }
  std::make_shared<GuidedSnapAssistData,std::vector<Microsoft::WRL::ComPtr<ISnappedWindow>> const &,std::deque<tagRECT> &,Geometry::CRect const &,int &>(
    &v35,
    v19,
    a1 + 176,
    (int)v34,
    &a7);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
    1u,
    v28);
  if ( !(unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((__int64 *)(a1 + 240)) )
    tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::start(
      a1 + 240,
      &v37);
  if ( !*((_BYTE *)v35 + 48) )
  {
    v30 = *(GuidedSnapAssistControl **)(a1 + 288);
    wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
      &v33,
      v32);
    v31 = std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v37, &v35);
    GuidedSnapAssistControl::Show(v30, v31, &v33, v14);
    wil::com_ptr_t<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>,wil::err_returncode_policy>::reset(a1 + 240);
    std::deque<tagRECT>::_Tidy((_QWORD *)(a1 + 176));
    if ( v11 )
      *v11 = 1;
    if ( v36 )
      std::_Ref_count_base::_Decref(v36);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
    goto LABEL_29;
  }
  *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::operator->(
                          a1 + 240,
                          (__int64)&v34)
           + 288LL) = 1;
  tip2::test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::~test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>((__int64 *)&v34);
  try
  {
    v37 = 0LL;
    v38 = 0LL;
    CSnapAssistControllerBase::EndGuidedSnapAssist(a1, 0, (__int64)&v37);
    if ( v36 )
      std::_Ref_count_base::_Decref(v36);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v39);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v33) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x387,
                     (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
                     v29);
    if ( v36 )
      std::_Ref_count_base::_Decref(v36);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v39);
    return (unsigned int)v33;
  }
  return result;
}
