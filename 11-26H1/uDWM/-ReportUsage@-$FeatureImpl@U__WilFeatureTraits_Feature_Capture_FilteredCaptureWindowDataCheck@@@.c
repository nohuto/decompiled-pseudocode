/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureWindowDataCheck@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A0DC0
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureWindowDataCheck@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800A67D8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureWindowData.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureWindowDataCheck@@@details@wil@@QEAA_NXZ @ 0x1800A6818 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCapt_ea_1800A6818.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800399C0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureWindowDataCheck@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18009EDAC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureW.c)
 */

void wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_FilteredCaptureWindowDataCheck>::ReportUsage(
        volatile signed __int32 *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        ...)
{
  int v3; // edi
  volatile unsigned __int32 v5; // r8d
  unsigned int v6; // esi
  unsigned __int8 v7; // [rsp+38h] [rbp-10h]
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  v3 = a3;
  v5 = *a1;
  v6 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v8 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_FilteredCaptureWindowDataCheck>::GetCachedFeatureEnabledState(
            (wil::details *)a1,
            &v8);
    v5 = v8;
  }
  LODWORD(v9) = 0;
  WORD2(v9) = 2;
  wil::details::ReportUsageToService(a1 + 2, 0x3720035u, (v5 >> 10) & 1, (v5 >> 11) & 1, (__int64)va, v6, v3, v7);
}
