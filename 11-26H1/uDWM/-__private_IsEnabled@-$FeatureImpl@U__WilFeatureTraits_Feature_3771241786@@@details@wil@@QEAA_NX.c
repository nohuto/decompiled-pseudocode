/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_3771241786@@@details@wil@@QEAA_NXZ @ 0x1800E4EFC
 * Callers:
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x1800814E0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_3771241786@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800E0D60 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_3771241786@@@details@wil.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_3771241786@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800E4044 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_3771241786@@@details@wil@@QEAAX_NW4Report.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_3771241786>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_3771241786>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_3771241786>::ReportUsage(
    (volatile signed __int32 *)a1,
    v5 & 1,
    v3);
  return v2;
}
