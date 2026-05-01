/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_59720924@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180502B54
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_59720924@@@details@wil@@QEAA_NXZ @ 0x180504DE8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_59720924@@@details@wil@@QEAA_NXZ.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18006D890 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_59720924@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1804FB5C8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_59720924@@@details@wil@@.c)
 */

void wil::details::FeatureImpl<__WilFeatureTraits_Feature_59720924>::ReportUsage(
        wil::details *a1,
        unsigned __int8 a2,
        __int64 a3,
        ...)
{
  __int64 v3; // r8
  unsigned int v5; // edi
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v7 = va_arg(va1, _QWORD);
  LODWORD(v3) = *(_DWORD *)a1;
  v5 = a2;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    v3 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_59720924>::GetCachedFeatureEnabledState(a1, &v6);
    v6 = v3;
  }
  LODWORD(v7) = 0;
  WORD2(v7) = 2;
  wil::details::ReportUsageToService(
    (__int64)a1 + 8,
    0x38F44DCu,
    ((unsigned int)v3 >> 10) & 1,
    ((unsigned int)v3 >> 11) & 1,
    (__int64)va,
    v5,
    3);
}
