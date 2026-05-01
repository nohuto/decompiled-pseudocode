/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_59382207@@@details@wil@@QEAA_NXZ @ 0x180504DAC
 * Callers:
 *     ?HandleViewRecovery@GamingPosturePositioner@@AEAAXXZ @ 0x1804FDD60 (-HandleViewRecovery@GamingPosturePositioner@@AEAAXXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_59382207@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1804FB4F4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_59382207@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_59382207@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180502ACC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_59382207@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_59382207>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_59382207>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_59382207>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
