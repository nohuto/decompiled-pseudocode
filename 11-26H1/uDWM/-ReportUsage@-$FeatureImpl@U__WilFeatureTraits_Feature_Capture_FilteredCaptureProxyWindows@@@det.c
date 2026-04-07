/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureProxyWindows@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A0D38
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureProxyWindows@@@details@wil@@QEAA_NXZ @ 0x1800A679C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureProxyWindo.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800399C0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureProxyWindows@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18009ECD0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureP.c)
 */

void wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_FilteredCaptureProxyWindows>::ReportUsage(
        volatile signed __int32 *a1,
        unsigned __int8 a2,
        __int64 a3,
        ...)
{
  __int64 v3; // r8
  unsigned int v5; // edi
  unsigned __int8 v6; // [rsp+38h] [rbp-10h]
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  LODWORD(v3) = *a1;
  v5 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v3 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_FilteredCaptureProxyWindows>::GetCachedFeatureEnabledState(
            (wil::details *)a1,
            &v7);
    v7 = v3;
  }
  LODWORD(v8) = 0;
  WORD2(v8) = 2;
  wil::details::ReportUsageToService(
    a1 + 2,
    0x37F77E1u,
    ((unsigned int)v3 >> 10) & 1,
    ((unsigned int)v3 >> 11) & 1,
    (__int64)va,
    v5,
    3,
    v6);
}
