/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GatePerf@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802E48D0
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_56661439@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18039B22C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_56661439@@@details@wil@.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_55383831@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1805D1358 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_55383831@@@details@wil@.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DashboardManagerAppExtensionAVCrash@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1805D1BEC (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DashboardMana.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DashboardManagerTelemetryCrashFix@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1805D1CBC (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing__ea_1805D1CBC.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_57343652@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180624E20 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_57343652@@@details@wil@.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18006D890 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_GatePerf@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802DFFE4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_GatePerf@@@details@wil@@.c)
 */

void wil::details::FeatureImpl<__WilFeatureTraits_Feature_GatePerf>::ReportUsage(
        wil::details *a1,
        __int64 a2,
        __int64 a3,
        ...)
{
  unsigned int v3; // r8d
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF
  __int64 v6; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v6 = va_arg(va1, _QWORD);
  v3 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    v5 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_GatePerf>::GetCachedFeatureEnabledState(a1, &v5);
    v3 = v5;
  }
  WORD2(v6) = 3;
  LODWORD(v6) = 0;
  wil::details::ReportUsageToService((__int64)a1 + 8, 0x33B9B30u, (v3 >> 10) & 1, (v3 >> 11) & 1, (__int64)va, 1u, 0);
}
