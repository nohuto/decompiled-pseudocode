/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DelegationInCoreInputView_58789108@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18047499C
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TryShowHidesImmediatelyV2@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18046DA68 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TryShowHidesImmediately.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DelegationInCoreInputView_58789108@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18046CE10 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DelegationInCoreInputVie.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DelegationInCoreInputView_58789108@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18046FD74 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DelegationInCoreInputView_58789108@@@deta.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DelegationInCoreInputView_58789108>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DelegationInCoreInputView_58789108>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DelegationInCoreInputView_58789108>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
