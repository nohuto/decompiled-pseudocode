/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ApplicationFrameHostPerformanceImprovements@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801138B8
 * Callers:
 *     ?DisplaySettingsChange@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1801137B0 (-DisplaySettingsChange@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISP.c)
 *     _lambda_c8a2fb21ce249544899dca467e4f9e40_::operator() @ 0x180113AEC (_lambda_c8a2fb21ce249544899dca467e4f9e40_--operator().c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180072930 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ApplicationFrameHostPerformanceImprovements@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1804D7120 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ApplicationFrameHostPerf.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ApplicationFrameHostPerformanceImprovements>::ReportUsage(
        _DWORD *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  unsigned int v6; // edi
  _BYTE v7[24]; // [rsp+40h] [rbp-18h] BYREF
  int v8; // [rsp+60h] [rbp+8h] BYREF
  __int16 v9; // [rsp+64h] [rbp+Ch]
  __int64 v10; // [rsp+78h] [rbp+20h]

  v10 = a4;
  LODWORD(v4) = *a1;
  v6 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ApplicationFrameHostPerformanceImprovements>::GetCachedFeatureEnabledState(
                      a1,
                      v7);
    v10 = v4;
  }
  v8 = 0;
  v9 = 3;
  wil::details::ReportUsageToService(
    (__int64)(a1 + 2),
    0x25E0B70u,
    ((unsigned int)v4 >> 10) & 1,
    ((unsigned int)v4 >> 11) & 1,
    (__int64)&v8,
    v6,
    3);
}
