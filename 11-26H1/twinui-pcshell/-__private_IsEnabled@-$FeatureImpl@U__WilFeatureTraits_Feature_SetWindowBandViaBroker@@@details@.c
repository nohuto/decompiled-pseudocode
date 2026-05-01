/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SetWindowBandViaBroker@@@details@wil@@QEAA_NXZ @ 0x1803F462C
 * Callers:
 *     ?SetWindowBand@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@0K@Z @ 0x1802417C0 (-SetWindowBand@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@0K@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SetWindowBandViaBroker@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803F3870 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SetWindowBandViaBroker@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SetWindowBandViaBroker@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803F3EF4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SetWindowBandViaBroker@@@details@wil@@QEA.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SetWindowBandViaBroker>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SetWindowBandViaBroker>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SetWindowBandViaBroker>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
