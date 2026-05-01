/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RdpShellExtension@@@details@wil@@QEAA_NXZ @ 0x180674D9C
 * Callers:
 *     ?IsRdpShellExtensionHostEnabled@@YA_NXZ @ 0x1803E52B0 (-IsRdpShellExtensionHostEnabled@@YA_NXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_RdpShellExtension@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180674270 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_RdpShellExtension@@@deta.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_RdpShellExtension@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180674AF8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_RdpShellExtension@@@details@wil@@QEAAX_NW.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_RdpShellExtension>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_RdpShellExtension>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_RdpShellExtension>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
