/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_38762814@@@details@wil@@QEAA_NXZ @ 0x180369C18
 * Callers:
 *     ?CompleteHide@CActionCenterExperienceManager@@AEAAJXZ @ 0x180364C68 (-CompleteHide@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z @ 0x180365AE0 (-GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z.c)
 *     CActionCenterExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x180367D70 (CActionCenterExperienceManager--ShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_38762814@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180365530 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_38762814@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_38762814@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180367620 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_38762814@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_38762814>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_38762814>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_38762814>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
