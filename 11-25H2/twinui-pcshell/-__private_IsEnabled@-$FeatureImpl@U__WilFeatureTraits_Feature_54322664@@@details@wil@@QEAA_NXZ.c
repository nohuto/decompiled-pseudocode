/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_54322664@@@details@wil@@QEAA_NXZ @ 0x1803B2528
 * Callers:
 *     ?ActivationDeferralComplete@UndockedSearchAppExperienceManager@@AEAAX_N@Z @ 0x180248D9C (-ActivationDeferralComplete@UndockedSearchAppExperienceManager@@AEAAX_N@Z.c)
 *     ?Hide@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x1802493D0 (-Hide@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 *     ?HideView@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1802497A0 (-HideView@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?evaluate@_tip_SearchHideTest@@QEAAXXZ @ 0x18024BF0C (-evaluate@_tip_SearchHideTest@@QEAAXXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_54322664@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803A8684 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_54322664@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_54322664@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803AEE1C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_54322664@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_54322664>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r9
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_54322664>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_54322664>::ReportUsage(a1, v5 & 1, 3u, v3);
  return v2;
}
