/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Bugfix_58554964@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180474960
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DelegationInCoreInputView_58789108@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18046D66C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DelegationInCoreInputVi.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Bugfix_58554964@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18046CD3C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Bugfix_58554964@@@detail.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Bugfix_58554964@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18046FCF0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Bugfix_58554964@@@details@wil@@QEAAX_NW4R.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Bugfix_58554964>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Bugfix_58554964>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Bugfix_58554964>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
