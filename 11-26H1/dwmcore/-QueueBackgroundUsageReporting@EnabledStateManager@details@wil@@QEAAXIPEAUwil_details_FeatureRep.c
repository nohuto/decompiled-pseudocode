/*
 * XREFs of ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x18009969C
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync@@@details@wil@@QEAA_NXZ @ 0x180032E10 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAA_NXZ @ 0x180033150 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@Q.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_D3D11ShaderAccessRestrictedResource@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180098F88 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_D3D11ShaderAccessRestrictedResource@@@det.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@details@wil@@QEAA_NXZ @ 0x1800EEDF0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@details@wil@.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800F7390 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 * Callees:
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180099780 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x1800999F8 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x1801D5518 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1801D741C (--1last_error_context@wil@@QEAA@XZ.c)
 *     ?EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@AEA_N_J@Z @ 0x1801E2E54 (-EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV-$unique_any_t@V-$unique_storage@U-$resource_.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18020358C (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 */

void __fastcall wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
        RTL_SRWLOCK *pv,
        int a2,
        struct wil_details_FeatureReportingCache *a3)
{
  PTP_TIMER ThreadpoolTimer; // rax
  _DWORD v7[2]; // [rsp+20h] [rbp-18h] BYREF
  struct wil_details_FeatureReportingCache *v8; // [rsp+28h] [rbp-10h]
  char v9; // [rsp+40h] [rbp+8h] BYREF

  if ( LOBYTE(pv->Ptr) && !wil::ProcessShutdownInProgress((wil *)pv) )
  {
    AcquireSRWLockExclusive(pv + 1);
    v7[0] = a2;
    v7[1] = 0;
    v8 = a3;
    wil::details_abi::heap_buffer::push_back((wil::details_abi::heap_buffer *)&pv[6], v7, 0x10uLL);
    if ( !LOBYTE(pv[3].Ptr) )
    {
      if ( !pv[2].Ptr )
      {
        wil::last_error_context::last_error_context((wil::last_error_context *)&v9);
        ThreadpoolTimer = CreateThreadpoolTimer(
                            `wil::details::EnsureCoalescedTimer<wil::details::EnabledStateManager>'::`8'::_lambda_1_::_lambda_invoker_cdecl_,
                            pv,
                            0LL);
        wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
          &pv[2],
          ThreadpoolTimer);
        wil::last_error_context::~last_error_context((wil::last_error_context *)&v9);
      }
      wil::details::EnsureCoalescedTimer_SetTimer(&pv[2], &pv[3], 300000LL);
    }
    if ( pv != (RTL_SRWLOCK *)-8LL )
      ReleaseSRWLockExclusive(pv + 1);
  }
}
