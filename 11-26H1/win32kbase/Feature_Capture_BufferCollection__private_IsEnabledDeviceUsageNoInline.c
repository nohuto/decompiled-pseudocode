/*
 * XREFs of Feature_Capture_BufferCollection__private_IsEnabledDeviceUsageNoInline @ 0x1401B8EF0
 * Callers:
 *     ?EmitBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140182C40 (-EmitBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?SetHandleProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAXPEA_N@Z @ 0x140245A70 (-SetHandleProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_.c)
 * Callees:
 *     Feature_Capture_BufferCollection__private_IsEnabledFallback @ 0x1401B8F2C (Feature_Capture_BufferCollection__private_IsEnabledFallback.c)
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
