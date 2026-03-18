/*
 * XREFs of Feature_UISCSF__private_ReportDeviceUsage @ 0x140049340
 * Callers:
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x140005A68 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     UsbDevice_SetAddress @ 0x140025BE0 (UsbDevice_SetAddress.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x140036438 (UsbDevice_ReconfigureEndpoint.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x14003A690 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x14003B660 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_SendConfigureEndpointCommand @ 0x14003BF8C (UsbDevice_SendConfigureEndpointCommand.c)
 *     UsbDevice_UcxEvtUpdate @ 0x14003C210 (UsbDevice_UcxEvtUpdate.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140046428 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1400465B8 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void Feature_UISCSF__private_ReportDeviceUsage()
{
  unsigned __int8 v0; // [rsp+30h] [rbp+8h]

  if ( (Feature_UISCSF__private_featureState & 0x10) == 0 )
  {
    v0 = Feature_UISCSF__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_UISCSF__private_descriptor,
      Feature_UISCSF__private_featureState | 1,
      3);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v0, 3, (__int64)&Feature_UISCSF__private_descriptor);
  }
}
