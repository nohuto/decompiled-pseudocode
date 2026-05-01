/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_GameInput_XInputExplorer@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180358AC4
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprovements@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180348B94 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprovemen.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_GameInput_XInputExplorer@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180347B1C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_GameInput_XInputExplorer.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GameInput_XInputExplorer@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803526F4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GameInput_XInputExplorer@@@details@wil@@Q.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_GameInput_XInputExplorer>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GameInput_XInputExplorer>::GetCachedFeatureEnabledState(a1, &v4);
  v2 = v4 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GameInput_XInputExplorer>::ReportUsage(a1, v4 & 1);
  return v2;
}
