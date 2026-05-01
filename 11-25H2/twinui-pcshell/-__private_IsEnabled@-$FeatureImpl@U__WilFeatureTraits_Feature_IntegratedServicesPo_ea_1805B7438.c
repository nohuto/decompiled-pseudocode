/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_IntegratedServicesPolicyControl@@@details@wil@@QEAA_NXZ @ 0x1805B7438
 * Callers:
 *     _lambda_3b5ffae6afd814ed3ce8dd3dc657fc2a_::operator() @ 0x1805A88F0 (_lambda_3b5ffae6afd814ed3ce8dd3dc657fc2a_--operator().c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_IntegratedServicesPolicyControl@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803A9778 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_IntegratedServicesPolicy.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_IntegratedServicesPolicyControl@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803AF828 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_IntegratedServicesPolicyControl@@@details.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_IntegratedServicesPolicyControl>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r9
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_IntegratedServicesPolicyControl>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_IntegratedServicesPolicyControl>::ReportUsage(a1, v5 & 1, 3u, v3);
  return v2;
}
