/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DmaSsoMSACompliance@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18003E274
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_48101911@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180030F44 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_48101911@@@details@wil@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DmaSsoMSACompliance@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18003050C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DmaSsoMSACompliance@@@de.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DmaSsoMSACompliance@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180039C74 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DmaSsoMSACompliance@@@details@wil@@QEAAX_.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DmaSsoMSACompliance>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DmaSsoMSACompliance>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DmaSsoMSACompliance>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
