/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestGateImp@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18023106C
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2504@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18023BF54 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2504@@.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800F7390 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TestGateImp@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180230918 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TestGateImp@@@details@wi.c)
 */

void wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestGateImp>::ReportUsage(
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
    v6 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestGateImp>::GetCachedFeatureEnabledState(
            (wil::details *)a1,
            &v6);
    v3 = v6;
  }
  WORD2(v7) = 3;
  LODWORD(v7) = 0;
  wil::details::ReportUsageToService(a1 + 2, 0x33B9B24u, (v3 >> 10) & 1, (v3 >> 11) & 1, (__int64)va, 1u, 0, v5);
}
