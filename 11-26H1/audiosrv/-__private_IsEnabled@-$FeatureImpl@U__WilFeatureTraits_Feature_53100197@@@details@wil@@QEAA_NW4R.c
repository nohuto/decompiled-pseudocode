/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_53100197@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800DBC0C
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_55795972@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800D8B24 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_55795972@@@details@wil@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_53100197@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800D855C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_53100197@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_53100197@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DA150 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_53100197@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_53100197>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_53100197>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_53100197>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
