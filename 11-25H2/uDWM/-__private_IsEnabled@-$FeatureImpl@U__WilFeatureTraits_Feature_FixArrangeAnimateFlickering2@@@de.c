/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FixArrangeAnimateFlickering2@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800E9258
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ApplyWindowActionConvergence@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800E5104 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ApplyWindowActionConver.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FixArrangeAnimateFlickering2@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800E4A88 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FixArrangeAnimateFlicker.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FixArrangeAnimateFlickering2@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800E7BCC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FixArrangeAnimateFlickering2@@@details@wi.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixArrangeAnimateFlickering2>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixArrangeAnimateFlickering2>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixArrangeAnimateFlickering2>::ReportUsage(
    (__int64)a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
