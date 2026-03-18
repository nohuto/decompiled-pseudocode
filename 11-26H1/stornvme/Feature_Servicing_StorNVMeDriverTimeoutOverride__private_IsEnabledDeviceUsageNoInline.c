/*
 * XREFs of Feature_Servicing_StorNVMeDriverTimeoutOverride__private_IsEnabledDeviceUsageNoInline @ 0x14002308C
 * Callers:
 *     WaitForCommandComplete @ 0x14000C330 (WaitForCommandComplete.c)
 *     NVMeBuildDevicePollingConfiguration @ 0x1400240C0 (NVMeBuildDevicePollingConfiguration.c)
 *     NVMeBuildPollingConfiguration @ 0x1400241C8 (NVMeBuildPollingConfiguration.c)
 * Callees:
 *     Feature_Servicing_StorNVMeDriverTimeoutOverride__private_IsEnabledFallback @ 0x1400230C8 (Feature_Servicing_StorNVMeDriverTimeoutOverride__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_StorNVMeDriverTimeoutOverride__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_StorNVMeDriverTimeoutOverride__private_featureState & 0x10) != 0 )
    return Feature_Servicing_StorNVMeDriverTimeoutOverride__private_featureState & 1;
  else
    return Feature_Servicing_StorNVMeDriverTimeoutOverride__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_StorNVMeDriverTimeoutOverride__private_featureState,
             3LL);
}
