/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_UxAccOptimization@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18003D74C
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PackagedComElevationSupport@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18002C44C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_PackagedComElevationSup.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_UxAccOptimization@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18003B948 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_UxAccOptimization@@@deta.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_UxAccOptimization@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003CECC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_UxAccOptimization@@@details@wil@@QEAAX_NW.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_UxAccOptimization>::__private_IsEnabled(
        wil::details *a1)
{
  __int64 v1; // rdx
  wil::details *v2; // rcx
  __int64 v3; // r8
  wil::details *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_UxAccOptimization>::GetCachedFeatureEnabledState(a1, &v5);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_UxAccOptimization>::ReportUsage(v2, v1, v3);
  return (unsigned __int8)v5 & 1;
}
