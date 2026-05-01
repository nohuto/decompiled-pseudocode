/*
 * XREFs of ?Show@GuidedSnapAssistControl@@QEAAXV?$shared_ptr@VGuidedSnapAssistData@@@std@@V?$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18027F93C
 * Callers:
 *     ?_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@W4SNAP_ASSIST_VIEW_FLAGS@@HPEA_N@Z @ 0x1805A8DF0 (-_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@.c)
 * Callees:
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180043774 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800580B4 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ?IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z @ 0x18008A42C (-IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCSnapComponentTelemetry@@@details@wil@@QEAAPEAVCSnapComponentTelemetry@@P6AXXZ@Z @ 0x18008A46C (-get@-$static_lazy@VCSnapComponentTelemetry@@@details@wil@@QEAAPEAVCSnapComponentTelemetry@@P6AX.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800B3F5C (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ??$com_agile_copy@AEAV?$com_ptr_t@UISnapAssistCallback@@Uerr_exception_policy@wil@@@wil@@@wil@@YA?AV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@0@AEAV?$com_ptr_t@UISnapAssistCallback@@Uerr_exception_policy@wil@@@0@W4AgileReferenceOptions@@@Z @ 0x18027F038 (--$com_agile_copy@AEAV-$com_ptr_t@UISnapAssistCallback@@Uerr_exception_policy@wil@@@wil@@@wil@@Y.c)
 *     GuidedSnapAssistControl::RunMultitaskingViewTask__lambda_017e4516d3db66192a06ba57bc482270___ @ 0x18027F0B4 (GuidedSnapAssistControl--RunMultitaskingViewTask__lambda_017e4516d3db66192a06ba57bc482270___.c)
 *     ?SetIsControlDismissing@GuidedSnapAssistControl@@AEAAX_N@Z @ 0x18027F834 (-SetIsControlDismissing@GuidedSnapAssistControl@@AEAAX_N@Z.c)
 *     ??$query@UISnapAssistCallback@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UISnapAssistCallback@@Uerr_exception_policy@wil@@@1@XZ @ 0x18027F880 (--$query@UISnapAssistCallback@@@-$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18027FB60 (--1-$com_ptr_t@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@Uerr_returncode_poli.c)
 *     ?open_helper@?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@AEAA_NPEAU_GUID@@@Z @ 0x18027FBAC (-open_helper@-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@AEAA.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18027FCAC (-ensure_data@-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@AEBA.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180291BCC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ShowGuidedSnapAssist_@CSnapComponentTelemetry@@QEAAXAEBURect@Foundation@Windows@winrt@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1805BCD70 (-ShowGuidedSnapAssist_@CSnapComponentTelemetry@@QEAAXAEBURect@Foundation@Windows@winrt@@W4SNAP_A.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
void __fastcall GuidedSnapAssistControl::Show(GuidedSnapAssistControl *this, _QWORD *a2, __int64 *a3, unsigned int a4)
{
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 *v10; // rbx
  __int64 v11; // rax
  const char *v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rcx
  std::_Ref_count_base *v15; // rcx
  void *v16; // [rsp+28h] [rbp-59h] BYREF
  __int64 v17; // [rsp+30h] [rbp-51h] BYREF
  unsigned int v18; // [rsp+38h] [rbp-49h]
  __int64 v19; // [rsp+40h] [rbp-41h] BYREF
  __int64 v20; // [rsp+48h] [rbp-39h] BYREF
  __int64 v21; // [rsp+50h] [rbp-31h] BYREF
  std::_Ref_count_base *v22; // [rsp+58h] [rbp-29h]
  __int64 v23; // [rsp+60h] [rbp-21h] BYREF
  __int128 v24; // [rsp+68h] [rbp-19h] BYREF
  void **v25; // [rsp+78h] [rbp-9h] BYREF
  _BYTE v26[40]; // [rsp+80h] [rbp-1h] BYREF
  _QWORD v27[6]; // [rsp+A8h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  __int64 v29; // [rsp+E8h] [rbp+67h] BYREF
  _QWORD *v30; // [rsp+F0h] [rbp+6Fh]
  __int64 *v31; // [rsp+F8h] [rbp+77h]

  v31 = a3;
  v30 = a2;
  v24 = *(_OWORD *)(*a2 + 24LL);
  if ( CSnapComponentTelemetry::IsEnabled((__int64)this) )
  {
    wil::details::static_lazy<CSnapComponentTelemetry>::get(
      v8,
      (void (__cdecl *)())_lambda_3442a9d6c0a6f0a8d43c13feb2a6d4f2_::_lambda_invoker_cdecl_);
    CSnapComponentTelemetry::ShowGuidedSnapAssist_(v9, &v24, a4);
  }
  v29 = 0LL;
  tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::open_helper(&v29);
  v10 = (__int64 *)tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::ensure_data(&v29);
  v25 = &tip2::test_watcher<tip2::details::merged_data<_tip_SetPhysicalDeviceAccessRegKeyTipTest,_tip_SetPhysicalDeviceAccessRegKeyTipTest>>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)v26,
    (struct wil::details::IFailureCallback *)&v25,
    0LL,
    1);
  v11 = *v10;
  v27[0] = v11;
  if ( v11 )
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 296));
  GuidedSnapAssistControl::SetIsControlDismissing((RTL_SRWLOCK *)this);
  wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::query<ISnapAssistCallback>(
    (struct IWeakReference **)this + 4,
    &v16);
  if ( !v16 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x3B,
      (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\guidedsnapassistcontrol.cpp",
      v12);
  wil::com_agile_copy<wil::com_ptr_t<ISnapAssistCallback,wil::err_exception_policy> &>(&v17, (__int64 *)&v16);
  v13 = *a3;
  *(_QWORD *)&v24 = v13;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  v18 = a4;
  wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(&v19, *a3);
  v20 = v17;
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v21, a2);
  v14 = *(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::ensure_data(&v29);
  v23 = v14;
  if ( v14 )
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 296));
  GuidedSnapAssistControl::RunMultitaskingViewTask__lambda_017e4516d3db66192a06ba57bc482270___((__int64)this);
  wil::com_ptr_t<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>,wil::err_returncode_policy>(&v23);
  if ( v22 )
    std::_Ref_count_base::_Decref(v22);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v20);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v19);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v16 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v16 + 16LL))(v16);
  wil::com_ptr_t<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>,wil::err_returncode_policy>(v27);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v26);
  wil::com_ptr_t<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>,wil::err_returncode_policy>(&v29);
  v15 = (std::_Ref_count_base *)a2[1];
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a3);
}
