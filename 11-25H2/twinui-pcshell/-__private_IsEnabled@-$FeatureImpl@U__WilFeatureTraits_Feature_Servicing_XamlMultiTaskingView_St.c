/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_XamlMultiTaskingView_States@@@details@wil@@QEAA_NXZ @ 0x180680F78
 * Callers:
 *     ?ToggleAllUpView@TaskViewHost@@UEAAJXZ @ 0x180680A80 (-ToggleAllUpView@TaskViewHost@@UEAAJXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_XamlMultiTaskingView_States@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18067F328 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_XamlMultiTaski.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_XamlMultiTaskingView_States@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180680048 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_XamlMultiTaskingView_States@@@d.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_XamlMultiTaskingView_States>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_XamlMultiTaskingView_States>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_XamlMultiTaskingView_States>::ReportUsage(
    a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
