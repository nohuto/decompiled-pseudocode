/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestAccPerf@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803F3F7C
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_GE_EssentialsBundle_J@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1803F3A18 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_GE_EssentialsBundle_J@@.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TestLoc1Perf@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18045AD94 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TestLoc1Perf@@@details@.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TouchKeyboardCrashAfterHideAnimation@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18046D998 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TouchKeyboardCrashAfter.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_59072773@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1804FC060 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_59072773@@@details@wil@.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_59362422@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1804FC414 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_59362422@@@details@wil@.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_59382207@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1804FC50C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_59382207@@@details@wil@.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_59720924@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1804FC604 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_59720924@@@details@wil@.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SnapBarCleanupCrash@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1805B3C68 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SnapBarCleanu.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_58379993@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1805D18F0 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_58379993@@@details@wil@.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_BTDKS_55832605@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180624F1C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_BTDKS_55832605@@@detail.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ID59122885@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1806252B4 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ID59122885@@@details@wi.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_54703473@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180688DE0 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_54703473@@@details@wil@.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_59440465@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1806A1750 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_59440465@@@details@wil@.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18006D890 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TestAccPerf@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803F3944 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TestAccPerf@@@details@wi.c)
 */

void wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestAccPerf>::ReportUsage(
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
    v5 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestAccPerf>::GetCachedFeatureEnabledState(a1, &v5);
    v3 = v5;
  }
  WORD2(v6) = 3;
  LODWORD(v6) = 0;
  wil::details::ReportUsageToService((__int64)a1 + 8, 0x3667CADu, (v3 >> 10) & 1, (v3 >> 11) & 1, (__int64)va, 1u, 0);
}
