/*
 * XREFs of Feature_SecureUSBDeviceFirmwareHashCheck__private_ReportDeviceUsage @ 0x14003DAC4
 * Callers:
 *     Isoch_RetrieveNextStage @ 0x140010510 (Isoch_RetrieveNextStage.c)
 *     TR_ValidateSecureTransferType @ 0x140029BF0 (TR_ValidateSecureTransferType.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140046428 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1400465B8 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_SecureUSBDeviceFirmwareHashCheck__private_ReportDeviceUsage()
{
  __int64 result; // rax
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_SecureUSBDeviceFirmwareHashCheck__private_featureState;
  if ( (Feature_SecureUSBDeviceFirmwareHashCheck__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_SecureUSBDeviceFirmwareHashCheck__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      &Feature_SecureUSBDeviceFirmwareHashCheck__private_descriptor,
      v1,
      3LL);
    return wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
             v1,
             3LL,
             &Feature_SecureUSBDeviceFirmwareHashCheck__private_descriptor);
  }
  return result;
}
