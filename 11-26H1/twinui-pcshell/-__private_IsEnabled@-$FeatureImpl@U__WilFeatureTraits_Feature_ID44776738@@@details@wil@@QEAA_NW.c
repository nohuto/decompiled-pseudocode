/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID44776738@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1802E7A30
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ID47983836@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180624FEC (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ID47983836@@@details@wi.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ID44776738@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802B4498 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ID44776738@@@details@wil@@QEAAX_NW4Report.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ID44776738@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802E00B8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ID44776738@@@details@wil.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID44776738>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID44776738>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID44776738>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
