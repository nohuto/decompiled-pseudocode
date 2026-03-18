/*
 * XREFs of Feature_Capture_RequestFrameAPI__private_IsEnabledDeviceUsageNoInline @ 0x14023B784
 * Callers:
 *     ?EmitUpdateCommands@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140199320 (-EmitUpdateCommands@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?ActivateTrigger@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEA_N@Z @ 0x14023B4D0 (-ActivateTrigger@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 * Callees:
 *     Feature_Capture_RequestFrameAPI__private_IsEnabledFallback @ 0x14023B7BC (Feature_Capture_RequestFrameAPI__private_IsEnabledFallback.c)
 */

__int64 Feature_Capture_RequestFrameAPI__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Capture_RequestFrameAPI__private_featureState & 0x10) != 0 )
    return Feature_Capture_RequestFrameAPI__private_featureState & 1;
  else
    return Feature_Capture_RequestFrameAPI__private_IsEnabledFallback(
             (unsigned int)Feature_Capture_RequestFrameAPI__private_featureState,
             3LL);
}
