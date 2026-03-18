/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DDisplayInkBlackFlash@@@details@wil@@QEAA_NXZ @ 0x180254B20
 * Callers:
 *     ?SyncLock@CDDisplayRenderTarget@@UEAAXI@Z @ 0x1801FC760 (-SyncLock@CDDisplayRenderTarget@@UEAAXI@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DDisplayInkBlackFlash@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802539B8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DDisplayInkBlackFlash@@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DDisplayInkBlackFlash@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18025469C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DDisplayInkBlackFlash@@@details@wil@@QEAA.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DDisplayInkBlackFlash>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DDisplayInkBlackFlash>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DDisplayInkBlackFlash>::ReportUsage(
    (volatile signed __int32 *)a1,
    v5 & 1,
    v3);
  return v2;
}
