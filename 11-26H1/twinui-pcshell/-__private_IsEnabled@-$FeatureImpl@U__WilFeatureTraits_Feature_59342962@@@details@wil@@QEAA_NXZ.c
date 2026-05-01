/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_59342962@@@details@wil@@QEAA_NXZ @ 0x18045DA04
 * Callers:
 *     ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x1800505E8 (-PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z.c)
 *     ?OnSearchAppVisibilityChanged@XamlLauncher@@UEAAX_N@Z @ 0x1802445F0 (-OnSearchAppVisibilityChanged@XamlLauncher@@UEAAX_N@Z.c)
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x180244780 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 *     ?RepairWNFStalenessIfNecessary@XamlLauncher@@AEAAXXZ @ 0x180244EA0 (-RepairWNFStalenessIfNecessary@XamlLauncher@@AEAAXXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_59342962@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18045A514 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_59342962@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_59342962@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18045CEE4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_59342962@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_59342962>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_59342962>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_59342962>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
