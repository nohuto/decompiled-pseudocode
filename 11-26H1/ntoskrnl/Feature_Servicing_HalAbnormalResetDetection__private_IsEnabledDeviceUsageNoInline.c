/*
 * XREFs of Feature_Servicing_HalAbnormalResetDetection__private_IsEnabledDeviceUsageNoInline @ 0x140576A60
 * Callers:
 *     HalpTimerInitializeEarlyStallSource @ 0x14057797C (HalpTimerInitializeEarlyStallSource.c)
 *     HalpTimerWatchdogGeneratedLastReset @ 0x140781AD0 (HalpTimerWatchdogGeneratedLastReset.c)
 * Callees:
 *     Feature_Servicing_HalAbnormalResetDetection__private_IsEnabledFallback @ 0x140576A9C (Feature_Servicing_HalAbnormalResetDetection__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_HalAbnormalResetDetection__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_HalAbnormalResetDetection__private_featureState & 0x10) != 0 )
    return Feature_Servicing_HalAbnormalResetDetection__private_featureState & 1;
  else
    return Feature_Servicing_HalAbnormalResetDetection__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_HalAbnormalResetDetection__private_featureState,
             3LL);
}
