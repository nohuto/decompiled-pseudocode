/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_UnpinForNoFlip@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F822C
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_UnpinForNoFlip@@@details@wil@@QEAA_NXZ @ 0x180035C1C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_UnpinForNoFlip@@@details@wil@@QEA.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_UnpinForNoFlip@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800362F8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_UnpinForNoFlip@@@details.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800F7390 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 */

void wil::details::FeatureImpl<__WilFeatureTraits_Feature_UnpinForNoFlip>::ReportUsage(
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
    v3 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_UnpinForNoFlip>::GetCachedFeatureEnabledState(
            (wil::details *)a1,
            &v7);
    v7 = v3;
  }
  LODWORD(v8) = 0;
  WORD2(v8) = 2;
  wil::details::ReportUsageToService(
    a1 + 2,
    0x35546ECu,
    ((unsigned int)v3 >> 10) & 1,
    ((unsigned int)v3 >> 11) & 1,
    (__int64)va,
    v5,
    3,
    v6);
}
