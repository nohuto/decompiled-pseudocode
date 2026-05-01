/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_59163424@@@details@wil@@QEAA_NXZ @ 0x180504CF8
 * Callers:
 *     _lambda_ab57ea0a18b59054314f7ae3775d9ac6_::operator() @ 0x1804F82D0 (_lambda_ab57ea0a18b59054314f7ae3775d9ac6_--operator().c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_59163424@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1804FB278 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_59163424@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_59163424@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180502934 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_59163424@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_59163424>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_59163424>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_59163424>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
