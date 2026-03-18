/*
 * XREFs of Feature_Servicing_GraphicsKernelDwmHangFix__private_IsEnabledDeviceUsageNoInline @ 0x1400561E4
 * Callers:
 *     VidSchInitializeAdapter @ 0x1400C2230 (VidSchInitializeAdapter.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernelDwmHangFix__private_IsEnabledFallback @ 0x140056220 (Feature_Servicing_GraphicsKernelDwmHangFix__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_GraphicsKernelDwmHangFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_GraphicsKernelDwmHangFix__private_featureState & 0x10) != 0 )
    return Feature_Servicing_GraphicsKernelDwmHangFix__private_featureState & 1;
  else
    return Feature_Servicing_GraphicsKernelDwmHangFix__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_GraphicsKernelDwmHangFix__private_featureState,
             3LL);
}
