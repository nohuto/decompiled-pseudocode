/*
 * XREFs of Feature_Capture_ExpandCapturableWindows__private_IsEnabledDeviceUsageNoInline @ 0x140228984
 * Callers:
 *     NtDCompositionSendDwmLpcMessage @ 0x140229300 (NtDCompositionSendDwmLpcMessage.c)
 * Callees:
 *     Feature_Capture_ExpandCapturableWindows__private_IsEnabledFallback @ 0x1402289C0 (Feature_Capture_ExpandCapturableWindows__private_IsEnabledFallback.c)
 */

__int64 Feature_Capture_ExpandCapturableWindows__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Capture_ExpandCapturableWindows__private_featureState & 0x10) != 0 )
    return Feature_Capture_ExpandCapturableWindows__private_featureState & 1;
  else
    return Feature_Capture_ExpandCapturableWindows__private_IsEnabledFallback(
             (unsigned int)Feature_Capture_ExpandCapturableWindows__private_featureState,
             3LL);
}
