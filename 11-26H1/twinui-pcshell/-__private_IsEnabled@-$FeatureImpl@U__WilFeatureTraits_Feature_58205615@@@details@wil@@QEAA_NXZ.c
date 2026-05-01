/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_58205615@@@details@wil@@QEAA_NXZ @ 0x18038B3B0
 * Callers:
 *     ?SetDockedStartController@CStartExperienceManager@@UEAAJPEAUIInspectable@@@Z @ 0x18038AFF0 (-SetDockedStartController@CStartExperienceManager@@UEAAJPEAUIInspectable@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_58205615@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180388960 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_58205615@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_58205615@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18038AC18 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_58205615@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_58205615>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_58205615>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_58205615>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
