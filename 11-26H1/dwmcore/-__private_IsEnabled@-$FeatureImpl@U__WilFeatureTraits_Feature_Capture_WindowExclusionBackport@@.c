/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_WindowExclusionBackport@@@details@wil@@QEAA_NXZ @ 0x18025819C
 * Callers:
 *     ?Present@CCaptureRenderTarget@@MEAAJXZ @ 0x1801FCCF0 (-Present@CCaptureRenderTarget@@MEAAJXZ.c)
 *     ?ProcessSetUpdateId@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETUPDATEID@@@Z @ 0x1802578F8 (-ProcessSetUpdateId@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTA.c)
 *     ?ProcessSetVisualsToExclude@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETVISUALSTOEXCLUDE@@@Z @ 0x180257940 (-ProcessSetVisualsToExclude@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURE.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_WindowExclusionBackport@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180257078 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_WindowExclusionB.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_WindowExclusionBackport@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180257D38 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_WindowExclusionBackport@@@details.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_WindowExclusionBackport>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_WindowExclusionBackport>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_WindowExclusionBackport>::ReportUsage(
    (volatile signed __int32 *)a1,
    v5 & 1,
    v3);
  return v2;
}
