/*
 * XREFs of Feature_Servicing_StorNVMeDriverTimeoutOverride__private_IsEnabledDeviceUsageNoInline @ 0x14005D160
 * Callers:
 *     RaidAdapterStartMiniport @ 0x140053D94 (RaidAdapterStartMiniport.c)
 *     WaitForNVMeCommandComplete @ 0x1400C6F10 (WaitForNVMeCommandComplete.c)
 *     NvmeControllerBuildIoPollingConfiguration @ 0x1400CEA24 (NvmeControllerBuildIoPollingConfiguration.c)
 *     NvmeControllerBuildIoPollingConfigurationCompletion @ 0x1400CED80 (NvmeControllerBuildIoPollingConfigurationCompletion.c)
 *     NvmeControllerInitPhase1 @ 0x1400F570C (NvmeControllerInitPhase1.c)
 *     NvmeControllerInitPhase2 @ 0x1400F5A18 (NvmeControllerInitPhase2.c)
 * Callees:
 *     Feature_Servicing_StorNVMeDriverTimeoutOverride__private_IsEnabledFallback @ 0x14005D19C (Feature_Servicing_StorNVMeDriverTimeoutOverride__private_IsEnabledFallback.c)
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
