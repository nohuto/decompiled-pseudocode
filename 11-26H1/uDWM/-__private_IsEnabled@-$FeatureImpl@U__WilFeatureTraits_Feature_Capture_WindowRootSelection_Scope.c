/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_WindowRootSelection_Scoped@@@details@wil@@QEAA_NXZ @ 0x1800A6858
 * Callers:
 *     ?_GetWindowRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAPEAVCVisualProxy@@@Z @ 0x1800A545C (-_GetWindowRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAPEAVCVisualProxy@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_WindowRootSelection_Scoped@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18009EFEC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_WindowRootSelect.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_WindowRootSelection_Scoped@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A0EDC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_WindowRootSelection_Scoped@@@deta.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_WindowRootSelection_Scoped>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_WindowRootSelection_Scoped>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_WindowRootSelection_Scoped>::ReportUsage(
    (volatile signed __int32 *)a1,
    v5 & 1,
    v3);
  return v2;
}
