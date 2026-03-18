/*
 * XREFs of ?ProcessSetUpdateId@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETUPDATEID@@@Z @ 0x1802578F8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_WindowExclusionBackport@@@details@wil@@QEAA_NXZ @ 0x18025819C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_WindowExclusionBackport@@.c)
 */

__int64 __fastcall CCaptureRenderTarget::ProcessSetUpdateId(
        CCaptureRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CAPTURERENDERTARGET_SETUPDATEID *a3)
{
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_WindowExclusionBackport>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_WindowExclusionBackport>::GetImpl'::`2'::impl) )
    return 2147500033LL;
  *((_QWORD *)this + 356) = *((_QWORD *)a3 + 1);
  return 0LL;
}
