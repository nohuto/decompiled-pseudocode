/*
 * XREFs of NVMeFreeDmaBufferEx @ 0x140010C58
 * Callers:
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1400025C0 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeCheckOCPCompliance @ 0x140005D10 (NVMeCheckOCPCompliance.c)
 *     NVMeGetFeatureIdentifiersSupportedLog @ 0x140005F30 (NVMeGetFeatureIdentifiersSupportedLog.c)
 *     NVMeGetSupportedLogPagesLog @ 0x1400060D0 (NVMeGetSupportedLogPagesLog.c)
 *     NVMeControllerRemove @ 0x14000E0B0 (NVMeControllerRemove.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x14000FEA0 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     NVMeControllerDeleteTimestampSyncCommand @ 0x1400113E0 (NVMeControllerDeleteTimestampSyncCommand.c)
 *     NVMeControllerSetHostIdentifier @ 0x14001795C (NVMeControllerSetHostIdentifier.c)
 *     NVMeGetErrorInfoLogPageCompletion @ 0x14001DEF0 (NVMeGetErrorInfoLogPageCompletion.c)
 *     NVMeGetLogPageHealthInfoCompletion @ 0x14001DFC0 (NVMeGetLogPageHealthInfoCompletion.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x14001E3D0 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     NVMeGetSanitizeLogWorkItem @ 0x14001E990 (NVMeGetSanitizeLogWorkItem.c)
 *     NVMePersistentReserveOutCompletionRoutine @ 0x14001EBF0 (NVMePersistentReserveOutCompletionRoutine.c)
 *     NVMeReservationReportStatus @ 0x14001F5D4 (NVMeReservationReportStatus.c)
 *     NVMeReservationReportStatusCompletion @ 0x14001F800 (NVMeReservationReportStatusCompletion.c)
 *     QueryEnduranceInfoLogCompletion @ 0x140020B40 (QueryEnduranceInfoLogCompletion.c)
 *     QueryProtocolInfoCompletion @ 0x140020C50 (QueryProtocolInfoCompletion.c)
 *     QueryProtocolInfoLogPageData @ 0x140021888 (QueryProtocolInfoLogPageData.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x140022200 (QueryTemperatureInfoHealthLogCompletion.c)
 *     SetProtocolInfoCompletion @ 0x140022B40 (SetProtocolInfoCompletion.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x140024E28 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x140025078 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x14002533C (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetAutoPowerStateTransition @ 0x140025668 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetCloudSSDErrorRecoveryLogPageCompletion @ 0x140025970 (NVMeGetCloudSSDErrorRecoveryLogPageCompletion.c)
 *     NVMeGetControllerInitiatedTelemetry @ 0x140025A3C (NVMeGetControllerInitiatedTelemetry.c)
 *     NVMeGetControllerInitiatedTelemetryLog @ 0x140025D48 (NVMeGetControllerInitiatedTelemetryLog.c)
 *     NVMeGetHealthInfoLog @ 0x140026310 (NVMeGetHealthInfoLog.c)
 *     NVMeGetLogPageCompletion @ 0x1400264B0 (NVMeGetLogPageCompletion.c)
 *     NVMeGetNamespaceMetadata @ 0x140026EFC (NVMeGetNamespaceMetadata.c)
 *     NVMeNameSpaceIdentify @ 0x140027A44 (NVMeNameSpaceIdentify.c)
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x140028820 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeListCompletion @ 0x140029670 (NVMeReenumerateReissueGetLogNamespaceChangeListCompletion.c)
 *     NVMeSetHostBehaviorSupport @ 0x14002A6F4 (NVMeSetHostBehaviorSupport.c)
 *     NVMeSyncHostTime @ 0x14002ADCC (NVMeSyncHostTime.c)
 * Callees:
 *     NVMeFreeDmaBuffer @ 0x14000FA50 (NVMeFreeDmaBuffer.c)
 *     NVMeIceConfigureExclusionAddress @ 0x1400315BC (NVMeIceConfigureExclusionAddress.c)
 */

__int64 __fastcall NVMeFreeDmaBufferEx(__int64 a1, char a2, char a3, __int64 a4, __int64 *a5, __int64 a6)
{
  __int64 v6; // rsi
  unsigned int v8; // ebp

  v6 = a4;
  if ( (*(_DWORD *)(a1 + 4344) & 4) == 0 )
    return NVMeFreeDmaBuffer(a1, v6, a5, a6);
  LOBYTE(a4) = a2;
  v8 = NVMeIceConfigureExclusionAddress(a1, a6, v6, a4, a3, 0);
  if ( !v8 )
    return NVMeFreeDmaBuffer(a1, v6, a5, a6);
  NVMeFreeDmaBuffer(a1, v6, a5, a6);
  if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
    StorPortExtendedFunction(87LL, a1, 0LL, 1LL);
  return v8;
}
