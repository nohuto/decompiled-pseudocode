/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DDisplayScanoutCacheFlags@@@details@wil@@QEAA_NXZ @ 0x18021F758
 * Callers:
 *     ?Matches@CDDisplayCachedScanout@@QEAA_NIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180034D78 (-Matches@CDDisplayCachedScanout@@QEAA_NIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAPEAUIDisplaySca.c)
 *     ??0Plane@CDDisplayCachedScanout@@QEAA@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1801C3ABC (--0Plane@CDDisplayCachedScanout@@QEAA@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DDisplayScanoutCacheFlags@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801DDBC0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DDisplayScanoutCacheFlags@@@details@wil@@.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DDisplayScanoutCacheFlags@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1801E0C84 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DDisplayScanoutCacheFlag.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DDisplayScanoutCacheFlags>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DDisplayScanoutCacheFlags>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DDisplayScanoutCacheFlags>::ReportUsage((__int64)a1, v5 & 1, v3);
  return v2;
}
