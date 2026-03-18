/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_InkScanoutBuffer2@@@details@wil@@QEAA_NXZ @ 0x18025D408
 * Callers:
 *     ?PostPresent@CLegacySwapChain@@IEAAX_N0@Z @ 0x180034184 (-PostPresent@CLegacySwapChain@@IEAAX_N0@Z.c)
 *     ?PostPresent@CDDisplaySwapChain@@IEAAX_N0@Z @ 0x180035018 (-PostPresent@CDDisplaySwapChain@@IEAAX_N0@Z.c)
 *     ?DecideBufferToDispatch@CComputeScribbleScheduler@@AEAAJPEAPEAVCComputeScribbleFramebuffer@@0@Z @ 0x180193914 (-DecideBufferToDispatch@CComputeScribbleScheduler@@AEAAJPEAPEAVCComputeScribbleFramebuffer@@0@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_InkScanoutBuffer2@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18025CB3C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_InkScanoutBuffer2@@@deta.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InkScanoutBuffer2@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18025D134 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InkScanoutBuffer2@@@details@wil@@QEAAX_NW.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_InkScanoutBuffer2>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InkScanoutBuffer2>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InkScanoutBuffer2>::ReportUsage(
    (volatile signed __int32 *)a1,
    v5 & 1,
    v3);
  return v2;
}
