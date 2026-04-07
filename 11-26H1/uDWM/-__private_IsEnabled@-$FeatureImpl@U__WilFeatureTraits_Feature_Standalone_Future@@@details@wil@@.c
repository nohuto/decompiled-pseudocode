/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_Future@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800A68D0
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_UxAccOptimization@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800A0628 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_UxAccOptimization@@@det.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_Future@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18009F54C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_Future@@@deta.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_Future@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A10E4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_Future@@@details@wil@@QEAAX_NW.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Standalone_Future>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Standalone_Future>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Standalone_Future>::ReportUsage(
    (volatile signed __int32 *)a1,
    v5 & 1,
    v3);
  return v2;
}
