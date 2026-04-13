/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56845155@@@details@wil@@QEAA_NXZ @ 0x18003E238
 * Callers:
 *     ?IsPhoneLinkingBlockedByPolicy@Policy@Mobility@@YA?AW4LinkedPhonesPolicyState@12@XZ @ 0x1800342A4 (-IsPhoneLinkingBlockedByPolicy@Policy@Mobility@@YA-AW4LinkedPhonesPolicyState@12@XZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_56845155@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800303D4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_56845155@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_56845155@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180039BEC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_56845155@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_56845155>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_56845155>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_56845155>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
