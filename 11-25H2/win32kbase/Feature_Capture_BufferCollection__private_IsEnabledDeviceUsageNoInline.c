/*
 * XREFs of Feature_Capture_BufferCollection__private_IsEnabledDeviceUsageNoInline @ 0x14023B6DC
 * Callers:
 *     ?EmitBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14019919C (-EmitBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?SetHandleProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z @ 0x1401995F0 (-SetHandleProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z.c)
 * Callees:
 *     Feature_Capture_BufferCollection__private_IsEnabledFallback @ 0x14023B714 (Feature_Capture_BufferCollection__private_IsEnabledFallback.c)
 */

__int64 Feature_Capture_BufferCollection__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Capture_BufferCollection__private_featureState & 0x10) != 0 )
    return Feature_Capture_BufferCollection__private_featureState & 1;
  else
    return Feature_Capture_BufferCollection__private_IsEnabledFallback(
             (unsigned int)Feature_Capture_BufferCollection__private_featureState,
             3LL);
}
