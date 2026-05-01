/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EPDA@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18061CA74
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FSOE@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18061AE44 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FSOE@@@details@wil@@AEA.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_EPDA@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180344C84 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_EPDA@@@details@wil@@AEAA.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_EPDA@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18034E04C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_EPDA@@@details@wil@@QEAAX_NW4ReportingKin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_EPDA>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_EPDA>::GetCachedFeatureEnabledState(a1, &v4);
  v2 = v4 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_EPDA>::ReportUsage(a1, v4 & 1, 0);
  return v2;
}
