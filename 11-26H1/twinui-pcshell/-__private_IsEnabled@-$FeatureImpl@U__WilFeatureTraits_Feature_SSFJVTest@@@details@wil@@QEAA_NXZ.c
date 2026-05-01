/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SSFJVTest@@@details@wil@@QEAA_NXZ @ 0x18038EB68
 * Callers:
 *     ?OnViewUncloaking@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18023A9D0 (-OnViewUncloaking@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SSFJVTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18038CC54 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SSFJVTest@@@details@wil@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SSFJVTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18038E090 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SSFJVTest@@@details@wil@@QEAAX_NW4Reporti.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SSFJVTest>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SSFJVTest>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SSFJVTest>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
