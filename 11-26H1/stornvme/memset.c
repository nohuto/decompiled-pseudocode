/*
 * XREFs of memset @ 0x140032A40
 * Callers:
 *     ProtocolCommandToNVMe @ 0x140001290 (ProtocolCommandToNVMe.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1400015F0 (FormInquiryDeviceIdentifiersData.c)
 *     ScsiInquiryRequest @ 0x140001B10 (ScsiInquiryRequest.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1400025C0 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x140002A30 (NVMeWriteBufferFirmwareDownload.c)
 *     NVMeHwBuildIo @ 0x140002CA0 (NVMeHwBuildIo.c)
 *     NVMeSetSenseData @ 0x140002E20 (NVMeSetSenseData.c)
 *     SetPrpFromSrb @ 0x140003380 (SetPrpFromSrb.c)
 *     ScsiUnmapRequest @ 0x140003A80 (ScsiUnmapRequest.c)
 *     ScsiReadWriteRequest @ 0x140003DE0 (ScsiReadWriteRequest.c)
 *     NVMeGetFeatureIdentifiersSupportedLog @ 0x140005F30 (NVMeGetFeatureIdentifiersSupportedLog.c)
 *     NVMeGetSupportedLogPagesLog @ 0x1400060D0 (NVMeGetSupportedLogPagesLog.c)
 *     AdminQueueInitialize @ 0x1400067B0 (AdminQueueInitialize.c)
 *     SubmissionQueueReInit @ 0x140006A00 (SubmissionQueueReInit.c)
 *     CompletionQueueReInit @ 0x140006A60 (CompletionQueueReInit.c)
 *     NVMeHwAdapterControl @ 0x140007FB0 (NVMeHwAdapterControl.c)
 *     NVMeSetPowerState @ 0x140008720 (NVMeSetPowerState.c)
 *     NVMeMapError @ 0x14000AD00 (NVMeMapError.c)
 *     NVMeIoSubmissionQueueCreate @ 0x14000BFE0 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeIoSubmissionQueueDelete @ 0x14000C3B0 (NVMeIoSubmissionQueueDelete.c)
 *     NVMeIoCompletionQueueCreate @ 0x14000C760 (NVMeIoCompletionQueueCreate.c)
 *     LocalCommandReuse @ 0x14000CA80 (LocalCommandReuse.c)
 *     NVMeInitHostMemoryBuffer @ 0x14000D7A0 (NVMeInitHostMemoryBuffer.c)
 *     NVMeGetCommandEffectsLog @ 0x14000DE30 (NVMeGetCommandEffectsLog.c)
 *     GetProcessorInformation @ 0x14000E550 (GetProcessorInformation.c)
 *     NVMeAllocateAsyncEventCommands @ 0x14000EB70 (NVMeAllocateAsyncEventCommands.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x14000FEA0 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     NVMeHwUnitControl @ 0x140010210 (NVMeHwUnitControl.c)
 *     GetInterruptMessageInformation @ 0x140010A50 (GetInterruptMessageInformation.c)
 *     AdminQueuesFreeResources @ 0x140011A00 (AdminQueuesFreeResources.c)
 *     ControllerAllocateUncachedExtension @ 0x140011CE0 (ControllerAllocateUncachedExtension.c)
 *     DriverEntry @ 0x140012008 (DriverEntry.c)
 *     FillControllerConfiguration @ 0x140012268 (FillControllerConfiguration.c)
 *     FillControllerRuntimeLog @ 0x1400124C4 (FillControllerRuntimeLog.c)
 *     NVMeHwFindAdapter @ 0x140012650 (NVMeHwFindAdapter.c)
 *     NVMeLogEtwControllerInfo @ 0x1400131FC (NVMeLogEtwControllerInfo.c)
 *     NVMeLogTelemetry @ 0x140013404 (NVMeLogTelemetry.c)
 *     GetProcessorGroupInformation @ 0x14001465C (GetProcessorGroupInformation.c)
 *     IoQueuesInitialize @ 0x140014D10 (IoQueuesInitialize.c)
 *     IoReservedQueuesInitialize @ 0x140015460 (IoReservedQueuesInitialize.c)
 *     NVMeAllocateAsyncEventCommandsForMFND @ 0x140015D24 (NVMeAllocateAsyncEventCommandsForMFND.c)
 *     NVMeCaptureLiveDumpWorkItem @ 0x1400161F0 (NVMeCaptureLiveDumpWorkItem.c)
 *     NVMeCleanUpSqCqMapping @ 0x14001639C (NVMeCleanUpSqCqMapping.c)
 *     NVMeControllerFilterResourceRequirements @ 0x140016B24 (NVMeControllerFilterResourceRequirements.c)
 *     NVMeControllerReset @ 0x1400175BC (NVMeControllerReset.c)
 *     NVMeControllerStop @ 0x140017BD4 (NVMeControllerStop.c)
 *     NVMeInitStreams @ 0x1400182D4 (NVMeInitStreams.c)
 *     NVMePowerInitialize @ 0x1400188C4 (NVMePowerInitialize.c)
 *     BootPartitionDownload @ 0x140019764 (BootPartitionDownload.c)
 *     DiagAllDiagnosticData @ 0x140019DA0 (DiagAllDiagnosticData.c)
 *     FirmwareDownload @ 0x14001A63C (FirmwareDownload.c)
 *     IoctlCreateReservedQueuePair @ 0x14001AF84 (IoctlCreateReservedQueuePair.c)
 *     IoctlQueryEnduranceInformation @ 0x14001BD34 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryReservedQueueEntries @ 0x14001C028 (IoctlQueryReservedQueueEntries.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x14001C2B0 (IoctlQueryTemperatureInfoProcess.c)
 *     LogSenseInformationalExceptions @ 0x14001CD6C (LogSenseInformationalExceptions.c)
 *     LogSenseSupportedLogPages @ 0x14001CF20 (LogSenseSupportedLogPages.c)
 *     LogSenseTemperature @ 0x14001CFC8 (LogSenseTemperature.c)
 *     NVMeControllerAllocateLocalCommand @ 0x14001D1A8 (NVMeControllerAllocateLocalCommand.c)
 *     NVMeControllerInitializeTimestampSyncCommand @ 0x14001D3F4 (NVMeControllerInitializeTimestampSyncCommand.c)
 *     NVMeControllerReclaimLocalCommand @ 0x14001D4C4 (NVMeControllerReclaimLocalCommand.c)
 *     NVMeGetDeviceTelemetryData @ 0x14001DA38 (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x14001DCFC (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeGetLogPageTelemetryDataCompletion @ 0x14001E080 (NVMeGetLogPageTelemetryDataCompletion.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x14001E3D0 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     NVMeGetRichDeviceDescription @ 0x14001E830 (NVMeGetRichDeviceDescription.c)
 *     NVMeGetSanitizeLogWorkItem @ 0x14001E990 (NVMeGetSanitizeLogWorkItem.c)
 *     NVMeReservationReportStatus @ 0x14001F5D4 (NVMeReservationReportStatus.c)
 *     NVMeReservationReportStatusCompletion @ 0x14001F800 (NVMeReservationReportStatusCompletion.c)
 *     QueryProtocolInfoFeatureData @ 0x140021090 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x140021554 (QueryProtocolInfoIdentifyData.c)
 *     QueryProtocolInfoLogPageData @ 0x140021888 (QueryProtocolInfoLogPageData.c)
 *     SetProtocolInfoFeatureData @ 0x140022C1C (SetProtocolInfoFeatureData.c)
 *     NVMeAsyncEventRequestCompletion @ 0x140023580 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeControllerIdentify @ 0x140024388 (NVMeControllerIdentify.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x140024790 (NVMeControllerPanicResetActionWorkItem.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x140025078 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeGetAutoPowerStateTransition @ 0x140025668 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetCloudSSDErrorRecoveryLog @ 0x140025814 (NVMeGetCloudSSDErrorRecoveryLog.c)
 *     NVMeGetControllerInitiatedTelemetryHeader @ 0x140025C58 (NVMeGetControllerInitiatedTelemetryHeader.c)
 *     NVMeGetControllerInitiatedTelemetryLog @ 0x140025D48 (NVMeGetControllerInitiatedTelemetryLog.c)
 *     NVMeGetControllerUUIDListIdentify @ 0x1400261A8 (NVMeGetControllerUUIDListIdentify.c)
 *     NVMeGetHealthInfoLog @ 0x140026310 (NVMeGetHealthInfoLog.c)
 *     NVMeGetNamespaceMetadata @ 0x140026EFC (NVMeGetNamespaceMetadata.c)
 *     NVMeNameSpaceIdentify @ 0x140027A44 (NVMeNameSpaceIdentify.c)
 *     NVMeParseNameSpaceIdentifyData @ 0x140027F0C (NVMeParseNameSpaceIdentifyData.c)
 *     NVMeReenumerateNameSpaceIdentify @ 0x140028618 (NVMeReenumerateNameSpaceIdentify.c)
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x140028820 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 *     NVMeReenumerateNameSpaceMerge @ 0x140028C6C (NVMeReenumerateNameSpaceMerge.c)
 *     NVMeReenumerateNameSpaceStart @ 0x140029204 (NVMeReenumerateNameSpaceStart.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x140029400 (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     NVMeReservedCompletionQueueCreate @ 0x140029A20 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x140029EA4 (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeSetHostBehaviorSupport @ 0x14002A6F4 (NVMeSetHostBehaviorSupport.c)
 *     ProcessPendingIoCommands @ 0x14002C2D0 (ProcessPendingIoCommands.c)
 *     GetDynamicRegistrySettings @ 0x14002DC90 (GetDynamicRegistrySettings.c)
 *     GetRegistrySettings @ 0x14002DEA8 (GetRegistrySettings.c)
 *     GetRegistrySettingsForSpecificKey @ 0x14003020C (GetRegistrySettingsForSpecificKey.c)
 *     ReadBinaryRegistryValue @ 0x140030398 (ReadBinaryRegistryValue.c)
 *     ReadMultiSzRegistryValueAndCompareId @ 0x1400304D0 (ReadMultiSzRegistryValueAndCompareId.c)
 *     NVMeSendControllerInternalData @ 0x14003090C (NVMeSendControllerInternalData.c)
 *     NVMeSendLunInternalData @ 0x14003102C (NVMeSendLunInternalData.c)
 *     memset$thunk$772440563353939046 @ 0x140037020 (memset$thunk$772440563353939046.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  __m128 v5; // xmm0
  char *v6; // r8
  __m128 *v7; // rdx
  _OWORD *v8; // r9
  size_t v9; // r8
  __m128 *v10; // r9
  size_t v11; // r8
  _DWORD *v12; // r9
  size_t v13; // r8

  result = a1;
  v4 = 0x101010101010101LL * (unsigned __int8)Val;
  v5 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
  if ( Size >= 0x40 )
  {
    if ( (_isa_info & 2) != 0 && Size >= 0x320 )
      return (void *)_memset_repmovs();
    *(__m128 *)a1 = v5;
    v6 = (char *)a1 + Size;
    a1 = (void *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
    Size = v6 - (_BYTE *)a1;
    if ( Size >= 0x40 )
    {
      v7 = (__m128 *)((char *)a1 + Size - 16);
      v8 = (_OWORD *)(((unsigned __int64)a1 + Size - 48) & 0xFFFFFFFFFFFFFFF0uLL);
      v9 = Size >> 6;
      do
      {
        *(__m128 *)a1 = v5;
        *((__m128 *)a1 + 1) = v5;
        a1 = (char *)a1 + 64;
        --v9;
        *((__m128 *)a1 - 2) = v5;
        *((__m128 *)a1 - 1) = v5;
      }
      while ( v9 );
      *v8 = v5;
      v8[1] = v5;
      v8[2] = v5;
      *v7 = v5;
      return result;
    }
LABEL_9:
    v10 = (__m128 *)((char *)a1 + Size - 16);
    *(__m128 *)a1 = v5;
    v11 = (Size & 0x20) >> 1;
    *v10 = v5;
    *(__m128 *)((char *)a1 + v11) = v5;
    *(__m128 *)((char *)v10 - v11) = v5;
    return result;
  }
  if ( Size >= 0x10 )
    goto LABEL_9;
  if ( Size < 4 )
  {
    if ( Size )
    {
      *(_BYTE *)a1 = v4;
      if ( Size != 1 )
        *(_WORD *)((char *)a1 + Size - 2) = v4;
    }
  }
  else
  {
    v12 = (char *)a1 + Size - 4;
    *(_DWORD *)a1 = v4;
    v13 = (Size & 8) >> 1;
    *v12 = v4;
    *(_DWORD *)((char *)a1 + v13) = v4;
    *(_DWORD *)((char *)v12 - v13) = v4;
  }
  return result;
}
