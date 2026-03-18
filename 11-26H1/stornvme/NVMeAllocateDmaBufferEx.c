/*
 * XREFs of NVMeAllocateDmaBufferEx @ 0x14001098C
 * Callers:
 *     NVMeGetFeatureIdentifiersSupportedLog @ 0x140005F30 (NVMeGetFeatureIdentifiersSupportedLog.c)
 *     NVMeGetSupportedLogPagesLog @ 0x1400060D0 (NVMeGetSupportedLogPagesLog.c)
 *     NVMeGetCommandEffectsLog @ 0x14000DE30 (NVMeGetCommandEffectsLog.c)
 *     NVMeControllerSetHostIdentifier @ 0x14001795C (NVMeControllerSetHostIdentifier.c)
 *     IoctlQueryEnduranceInformation @ 0x14001BD34 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x14001C2B0 (IoctlQueryTemperatureInfoProcess.c)
 *     LogSenseInformationalExceptions @ 0x14001CD6C (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x14001CFC8 (LogSenseTemperature.c)
 *     NVMeControllerInitializeTimestampSyncCommand @ 0x14001D3F4 (NVMeControllerInitializeTimestampSyncCommand.c)
 *     NVMeGetDeviceTelemetryData @ 0x14001DA38 (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x14001DCFC (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeGetSanitizeLogWorkItem @ 0x14001E990 (NVMeGetSanitizeLogWorkItem.c)
 *     NVMeReservationAcquireCommand @ 0x14001ECE4 (NVMeReservationAcquireCommand.c)
 *     NVMeReservationRegisterAndMoveCommand @ 0x14001EEA4 (NVMeReservationRegisterAndMoveCommand.c)
 *     NVMeReservationRegisterCommand @ 0x14001F050 (NVMeReservationRegisterCommand.c)
 *     NVMeReservationReleaseCommand @ 0x14001F23C (NVMeReservationReleaseCommand.c)
 *     NVMeReservationReportStatus @ 0x14001F5D4 (NVMeReservationReportStatus.c)
 *     ProtocolCommandCompletion @ 0x140020940 (ProtocolCommandCompletion.c)
 *     QueryProtocolInfoFeatureData @ 0x140021090 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x140021554 (QueryProtocolInfoIdentifyData.c)
 *     QueryProtocolInfoLogPageData @ 0x140021888 (QueryProtocolInfoLogPageData.c)
 *     SetProtocolInfoFeatureData @ 0x140022C1C (SetProtocolInfoFeatureData.c)
 *     NVMeAsyncEventRequestCompletion @ 0x140023580 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x140024E28 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x140025078 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x14002533C (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetAutoPowerStateTransition @ 0x140025668 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetCloudSSDErrorRecoveryLog @ 0x140025814 (NVMeGetCloudSSDErrorRecoveryLog.c)
 *     NVMeGetControllerInitiatedTelemetry @ 0x140025A3C (NVMeGetControllerInitiatedTelemetry.c)
 *     NVMeGetControllerInitiatedTelemetryLog @ 0x140025D48 (NVMeGetControllerInitiatedTelemetryLog.c)
 *     NVMeGetHealthInfoLog @ 0x140026310 (NVMeGetHealthInfoLog.c)
 *     NVMeGetNamespaceMetadata @ 0x140026EFC (NVMeGetNamespaceMetadata.c)
 *     NVMeNameSpaceIdentify @ 0x140027A44 (NVMeNameSpaceIdentify.c)
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x140028820 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x140029400 (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     NVMeSetHostBehaviorSupport @ 0x14002A6F4 (NVMeSetHostBehaviorSupport.c)
 *     NVMeSyncHostTime @ 0x14002ADCC (NVMeSyncHostTime.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x140005C10 (NVMeAllocateDmaBuffer.c)
 *     NVMeFreeDmaBuffer @ 0x14000FA50 (NVMeFreeDmaBuffer.c)
 *     NVMeIceConfigureExclusionAddress @ 0x1400315BC (NVMeIceConfigureExclusionAddress.c)
 */

__int64 __fastcall NVMeAllocateDmaBufferEx(__int64 a1, char a2, char a3, unsigned int a4, __int64 *a5, _QWORD *a6)
{
  unsigned int DmaBuffer; // edi
  int v11; // r9d

  DmaBuffer = NVMeAllocateDmaBuffer(a1, a4);
  if ( !DmaBuffer )
  {
    if ( (*(_DWORD *)(a1 + 4344) & 4) != 0
      && (LOBYTE(v11) = a2, (DmaBuffer = NVMeIceConfigureExclusionAddress(a1, 0, a4, v11, a3, 1)) != 0) )
    {
      NVMeFreeDmaBuffer(a1, a4, a5, 0LL);
      *a5 = 0LL;
    }
    else
    {
      *a6 = 0LL;
    }
  }
  return DmaBuffer;
}
