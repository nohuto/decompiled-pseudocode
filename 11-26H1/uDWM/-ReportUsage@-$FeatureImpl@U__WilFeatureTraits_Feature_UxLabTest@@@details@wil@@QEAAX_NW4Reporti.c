/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_UxLabTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A1368
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2508@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800AB1B0 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2508@@.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800399C0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_UxLabTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18009FA20 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_UxLabTest@@@details@wil@.c)
 */

void wil::details::FeatureImpl<__WilFeatureTraits_Feature_UxLabTest>::ReportUsage(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        ...)
{
  volatile unsigned __int32 v3; // r8d
  unsigned __int8 v5; // [rsp+38h] [rbp-10h]
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v7 = va_arg(va1, _QWORD);
  v3 = *a1;
  if ( (*a1 & 4) == 0 )
  {
    v6 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_UxLabTest>::GetCachedFeatureEnabledState(
            (wil::details *)a1,
            &v6);
    v3 = v6;
  }
  WORD2(v7) = 3;
  LODWORD(v7) = 0;
  wil::details::ReportUsageToService(a1 + 2, 0x3667C9Au, (v3 >> 10) & 1, (v3 >> 11) & 1, (__int64)va, 1u, 0, v5);
}
