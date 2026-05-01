/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55755684@@@details@wil@@QEAA_NXZ @ 0x1803B2620
 * Callers:
 *     ?OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z @ 0x1802499E0 (-OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z.c)
 *     ?Prelaunch@UndockedSearchAppExperienceManager@@UEAAJE@Z @ 0x18024A8C0 (-Prelaunch@UndockedSearchAppExperienceManager@@UEAAJE@Z.c)
 *     ?OnViewDestroyed@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1803ADFE4 (-OnViewDestroyed@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?evaluate@_tip_SearchFullActivationTest@@QEAAXXZ @ 0x1803B3284 (-evaluate@_tip_SearchFullActivationTest@@QEAAXXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_55755684@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803A8930 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_55755684@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_55755684@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803AEFBC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_55755684@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_55755684>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r9
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_55755684>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_55755684>::ReportUsage(a1, v5 & 1, 3u, v3);
  return v2;
}
