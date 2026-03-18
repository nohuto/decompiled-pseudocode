/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_DirtyRegionOcclusion@@@details@wil@@QEAA_NXZ @ 0x180258160
 * Callers:
 *     ?UpdateTargetDirty@CCaptureRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z @ 0x1801FD0C0 (-UpdateTargetDirty@CCaptureRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_DirtyRegionOcclusion@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180256F9C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_DirtyRegionOcclu.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_DirtyRegionOcclusion@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180257CB0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_DirtyRegionOcclusion@@@details@wi.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_DirtyRegionOcclusion>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_DirtyRegionOcclusion>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_DirtyRegionOcclusion>::ReportUsage(
    (volatile signed __int32 *)a1,
    v5 & 1,
    v3);
  return v2;
}
