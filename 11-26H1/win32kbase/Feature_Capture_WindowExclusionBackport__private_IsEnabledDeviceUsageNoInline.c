/*
 * XREFs of Feature_Capture_WindowExclusionBackport__private_IsEnabledDeviceUsageNoInline @ 0x1402289DC
 * Callers:
 *     NtDCompositionCreateSharedResourceHandle @ 0x1401B27C0 (NtDCompositionCreateSharedResourceHandle.c)
 *     ?EmitUpdateCommands@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1401B30F0 (-EmitUpdateCommands@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?ReleaseAllReferences@CCaptureRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1401B32E0 (-ReleaseAllReferences@CCaptureRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChan.c)
 *     NtDCompositionSendDwmLpcMessage @ 0x140229300 (NtDCompositionSendDwmLpcMessage.c)
 *     ?EmitUpdateId@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140245754 (-EmitUpdateId@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitVisualsToExclude@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1402457BC (-EmitVisualsToExclude@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?SetBufferProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140245890 (-SetBufferProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel.c)
 *     ?SetReferenceProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x140245C80 (-SetReferenceProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChan.c)
 *     ?SetRemarshalingFlags@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x140245D50 (-SetRemarshalingFlags@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NXZ.c)
 * Callees:
 *     Feature_Capture_WindowExclusionBackport__private_IsEnabledFallback @ 0x140228A18 (Feature_Capture_WindowExclusionBackport__private_IsEnabledFallback.c)
 */

__int64 Feature_Capture_WindowExclusionBackport__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Capture_WindowExclusionBackport__private_featureState & 0x10) != 0 )
    return Feature_Capture_WindowExclusionBackport__private_featureState & 1;
  else
    return Feature_Capture_WindowExclusionBackport__private_IsEnabledFallback(
             (unsigned int)Feature_Capture_WindowExclusionBackport__private_featureState,
             3LL);
}
