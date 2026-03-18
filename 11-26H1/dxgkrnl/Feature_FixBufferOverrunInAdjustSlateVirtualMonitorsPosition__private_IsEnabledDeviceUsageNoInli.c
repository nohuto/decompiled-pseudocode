/*
 * XREFs of Feature_FixBufferOverrunInAdjustSlateVirtualMonitorsPosition__private_IsEnabledDeviceUsageNoInline @ 0x1400980F8
 * Callers:
 *     ?AdjustSlateVirtualMonitorsPosition@CCD_TOPOLOGY@@AEAAJPEAUtagRECT@@AEAIAEAJ@Z @ 0x1404459A8 (-AdjustSlateVirtualMonitorsPosition@CCD_TOPOLOGY@@AEAAJPEAUtagRECT@@AEAIAEAJ@Z.c)
 * Callees:
 *     Feature_FixBufferOverrunInAdjustSlateVirtualMonitorsPosition__private_IsEnabledFallback @ 0x140098134 (Feature_FixBufferOverrunInAdjustSlateVirtualMonitorsPosition__private_IsEnabledFallback.c)
 */

__int64 Feature_FixBufferOverrunInAdjustSlateVirtualMonitorsPosition__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FixBufferOverrunInAdjustSlateVirtualMonitorsPosition__private_featureState & 0x10) != 0 )
    return Feature_FixBufferOverrunInAdjustSlateVirtualMonitorsPosition__private_featureState & 1;
  else
    return Feature_FixBufferOverrunInAdjustSlateVirtualMonitorsPosition__private_IsEnabledFallback(
             (unsigned int)Feature_FixBufferOverrunInAdjustSlateVirtualMonitorsPosition__private_featureState,
             3LL);
}
