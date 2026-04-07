/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_GE_EssentialsBundle_D@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800E9294
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FixArrangeAnimateFlickering2@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800E5218 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FixArrangeAnimateFlicke.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_GE_EssentialsBundle_D@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800E4BB4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_GE_EssentialsBundle_D@@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GE_EssentialsBundle_D@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800E7C50 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GE_EssentialsBundle_D@@@details@wil@@QEAA.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_GE_EssentialsBundle_D>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GE_EssentialsBundle_D>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GE_EssentialsBundle_D>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
