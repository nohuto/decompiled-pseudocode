/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_59192315@@@details@wil@@QEAA_NXZ @ 0x180358A0C
 * Callers:
 *     GamingOverlayExperienceManager::SendGamepadCommand$_ResumeCoro$1 @ 0x180353120 (GamingOverlayExperienceManager--SendGamepadCommand$_ResumeCoro$1.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_59192315@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18034783C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_59192315@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_59192315@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180352508 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_59192315@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_59192315>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_59192315>::GetCachedFeatureEnabledState(a1, &v4);
  v2 = v4 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_59192315>::ReportUsage(a1, v4 & 1);
  return v2;
}
