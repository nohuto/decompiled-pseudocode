/*
 * XREFs of GetSrbDataBuffer @ 0x14000F230
 * Callers:
 *     ScsiInquiryRequest @ 0x140001B10 (ScsiInquiryRequest.c)
 *     NVMeHwBuildIo @ 0x140002CA0 (NVMeHwBuildIo.c)
 *     ScsiReportLunsCommand @ 0x140011620 (ScsiReportLunsCommand.c)
 *     BootPartitionActivate @ 0x140019528 (BootPartitionActivate.c)
 *     BootPartitionDownload @ 0x140019764 (BootPartitionDownload.c)
 *     BootPartitionGetInfo @ 0x140019B50 (BootPartitionGetInfo.c)
 *     FirmwareActivate @ 0x14001A3D8 (FirmwareActivate.c)
 *     FirmwareDownload @ 0x14001A63C (FirmwareDownload.c)
 *     FormInquiryBlockProvisioningData @ 0x14001AA78 (FormInquiryBlockProvisioningData.c)
 *     FormInquiryDeviceCharacteristicsData @ 0x14001AB60 (FormInquiryDeviceCharacteristicsData.c)
 *     FormInquirySerialNumberData @ 0x14001ABD4 (FormInquirySerialNumberData.c)
 *     FormInquiryVpdSupportedPagesData @ 0x14001ADBC (FormInquiryVpdSupportedPagesData.c)
 *     IoctlCreateReservedQueuePair @ 0x14001AF84 (IoctlCreateReservedQueuePair.c)
 *     IoctlDeleteReservedQueuePair @ 0x14001B478 (IoctlDeleteReservedQueuePair.c)
 *     IoctlFirmwareProcess @ 0x14001B93C (IoctlFirmwareProcess.c)
 *     IoctlQueryEnduranceInformation @ 0x14001BD34 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryProtocolInfoProcess @ 0x14001BF38 (IoctlQueryProtocolInfoProcess.c)
 *     IoctlQueryReservedQueueEntries @ 0x14001C028 (IoctlQueryReservedQueueEntries.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x14001C2B0 (IoctlQueryTemperatureInfoProcess.c)
 *     IoctlSetProtocolInfoProcess @ 0x14001C474 (IoctlSetProtocolInfoProcess.c)
 *     IoctlSetTemperatureThresholdProcess @ 0x14001C534 (IoctlSetTemperatureThresholdProcess.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x14001C670 (IoctlStorageStreamsGetOpenStreams.c)
 *     IoctlStorageStreamsGetParameters @ 0x14001C844 (IoctlStorageStreamsGetParameters.c)
 *     IoctlStorageStreamsReleaseId @ 0x14001CC20 (IoctlStorageStreamsReleaseId.c)
 *     LogSenseInformationalExceptions @ 0x14001CD6C (LogSenseInformationalExceptions.c)
 *     LogSenseSupportedLogPages @ 0x14001CF20 (LogSenseSupportedLogPages.c)
 *     LogSenseTemperature @ 0x14001CFC8 (LogSenseTemperature.c)
 *     NVMeGetDeviceTelemetryData @ 0x14001DA38 (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x14001DCFC (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeGetLogPageHealthInfoCompletion @ 0x14001DFC0 (NVMeGetLogPageHealthInfoCompletion.c)
 *     NVMeGetLogPageTelemetryDataCompletion @ 0x14001E080 (NVMeGetLogPageTelemetryDataCompletion.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x14001E3D0 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     NVMeReservationAcquireCommand @ 0x14001ECE4 (NVMeReservationAcquireCommand.c)
 *     NVMeReservationRegisterAndMoveCommand @ 0x14001EEA4 (NVMeReservationRegisterAndMoveCommand.c)
 *     NVMeReservationRegisterCommand @ 0x14001F050 (NVMeReservationRegisterCommand.c)
 *     NVMeReservationReleaseCommand @ 0x14001F23C (NVMeReservationReleaseCommand.c)
 *     NVMeReservationReportCapabilitiesCompletion @ 0x14001F490 (NVMeReservationReportCapabilitiesCompletion.c)
 *     NVMeReservationReportStatusCompletion @ 0x14001F800 (NVMeReservationReportStatusCompletion.c)
 *     NVMeSplitIoCommandCompletion @ 0x1400202F0 (NVMeSplitIoCommandCompletion.c)
 *     QueryEnduranceInfoLogCompletion @ 0x140020B40 (QueryEnduranceInfoLogCompletion.c)
 *     QueryProtocolInfoFeatureData @ 0x140021090 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x140021554 (QueryProtocolInfoIdentifyData.c)
 *     QueryProtocolInfoLogPageData @ 0x140021888 (QueryProtocolInfoLogPageData.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x140022200 (QueryTemperatureInfoHealthLogCompletion.c)
 *     QueryTemperatureThresholdCompletion @ 0x140022410 (QueryTemperatureThresholdCompletion.c)
 *     ScsiModeSelectRequest @ 0x1400225C8 (ScsiModeSelectRequest.c)
 *     ScsiPersistentReserveIn @ 0x140022748 (ScsiPersistentReserveIn.c)
 *     ScsiPersistentReserveOut @ 0x140022838 (ScsiPersistentReserveOut.c)
 *     SetProtocolInfoFeatureData @ 0x140022C1C (SetProtocolInfoFeatureData.c)
 *     ProcessCommandNvmePacket @ 0x14002B038 (ProcessCommandNvmePacket.c)
 *     NVMeIceConfigureSrbExclusionAddress @ 0x1400317D4 (NVMeIceConfigureSrbExclusionAddress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSrbDataBuffer(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  if ( *(_BYTE *)(a1 + 2) == 40 )
  {
    result = *(_QWORD *)(a1 + 64);
    if ( !a2 )
      return result;
    v3 = a1 + 60;
    goto LABEL_4;
  }
  result = *(_QWORD *)(a1 + 24);
  if ( a2 )
  {
    v3 = a1 + 16;
LABEL_4:
    *a2 = v3;
  }
  return result;
}
