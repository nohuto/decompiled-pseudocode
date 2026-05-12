/*
 * XREFs of Feature_FixDeviceStopRestartForAzureStorageRepaveNode__private_IsEnabledDeviceUsageNoInline @ 0x1400B2790
 * Callers:
 *     NvmeControllerPerfStateTransition @ 0x14003BB08 (NvmeControllerPerfStateTransition.c)
 *     StorpTelemetryCollectNvmePerfData @ 0x140056700 (StorpTelemetryCollectNvmePerfData.c)
 *     StorpInitializeNvmeNamespaceTelemetry @ 0x1400B7678 (StorpInitializeNvmeNamespaceTelemetry.c)
 *     NvmeControllerRemove @ 0x1400F9AE8 (NvmeControllerRemove.c)
 *     NvmeControllerStop @ 0x1400FADAC (NvmeControllerStop.c)
 *     NvmeControllerPowerSettingChangeNotification @ 0x140127220 (NvmeControllerPowerSettingChangeNotification.c)
 * Callees:
 *     Feature_FixDeviceStopRestartForAzureStorageRepaveNode__private_IsEnabledFallback @ 0x1400B27CC (Feature_FixDeviceStopRestartForAzureStorageRepaveNode__private_IsEnabledFallback.c)
 */

__int64 Feature_FixDeviceStopRestartForAzureStorageRepaveNode__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FixDeviceStopRestartForAzureStorageRepaveNode__private_featureState & 0x10) != 0 )
    return Feature_FixDeviceStopRestartForAzureStorageRepaveNode__private_featureState & 1;
  else
    return Feature_FixDeviceStopRestartForAzureStorageRepaveNode__private_IsEnabledFallback(
             (unsigned int)Feature_FixDeviceStopRestartForAzureStorageRepaveNode__private_featureState,
             3LL);
}
