/*
 * XREFs of ProcessCommand @ 0x14000A680
 * Callers:
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1400025C0 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeCheckOCPCompliance @ 0x140005D10 (NVMeCheckOCPCompliance.c)
 *     NVMeGetFeatureIdentifiersSupportedLog @ 0x140005F30 (NVMeGetFeatureIdentifiersSupportedLog.c)
 *     NVMeGetSupportedLogPagesLog @ 0x1400060D0 (NVMeGetSupportedLogPagesLog.c)
 *     NVMeControllerSetWriteCacheEnable @ 0x1400066C0 (NVMeControllerSetWriteCacheEnable.c)
 *     NVMeSetPowerState @ 0x140008720 (NVMeSetPowerState.c)
 *     NVMeHwStartIo @ 0x14000BEE0 (NVMeHwStartIo.c)
 *     NVMeIoSubmissionQueueCreate @ 0x14000BFE0 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeIoSubmissionQueueDelete @ 0x14000C3B0 (NVMeIoSubmissionQueueDelete.c)
 *     NVMeIoCompletionQueueCreate @ 0x14000C760 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoCompletionQueueDelete @ 0x14000CAE0 (NVMeIoCompletionQueueDelete.c)
 *     NVMeIssueAsyncEventCommand @ 0x14000CB80 (NVMeIssueAsyncEventCommand.c)
 *     NVMeSetIoQueueCount @ 0x14000CEE0 (NVMeSetIoQueueCount.c)
 *     NVMeSetArbitration @ 0x14000D0E0 (NVMeSetArbitration.c)
 *     NVMeControllerGetFeaturesSupportedCacheCapabilities @ 0x14000D680 (NVMeControllerGetFeaturesSupportedCacheCapabilities.c)
 *     NVMeSetInterruptCoalescing @ 0x14000DA40 (NVMeSetInterruptCoalescing.c)
 *     NVMeSetHostMemoryBuffer @ 0x14000DB20 (NVMeSetHostMemoryBuffer.c)
 *     NVMeGetCommandEffectsLog @ 0x14000DE30 (NVMeGetCommandEffectsLog.c)
 *     NVMeGetTemperatureThreshold @ 0x14000DFE0 (NVMeGetTemperatureThreshold.c)
 *     NVMeConfigAsyncEvent @ 0x140011740 (NVMeConfigAsyncEvent.c)
 *     NVMeControllerSetHostIdentifier @ 0x14001795C (NVMeControllerSetHostIdentifier.c)
 *     NVMeFirmwareActivateCompletion @ 0x14001D5A0 (NVMeFirmwareActivateCompletion.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x14001E3D0 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     NVMeGetSanitizeLogWorkItem @ 0x14001E990 (NVMeGetSanitizeLogWorkItem.c)
 *     NVMeReservationReportStatusCompletion @ 0x14001F800 (NVMeReservationReportStatusCompletion.c)
 *     NVMeSanitizeRecoverCompletionRoutine @ 0x14001FFA0 (NVMeSanitizeRecoverCompletionRoutine.c)
 *     NVMeSplitIoCommandCompletion @ 0x1400202F0 (NVMeSplitIoCommandCompletion.c)
 *     NVMeWriteBufferFirmwareActivateCompletion @ 0x140020630 (NVMeWriteBufferFirmwareActivateCompletion.c)
 *     ProtocolCommandCompletion @ 0x140020940 (ProtocolCommandCompletion.c)
 *     QueryProtocolInfoCompletion @ 0x140020C50 (QueryProtocolInfoCompletion.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x140022200 (QueryTemperatureInfoHealthLogCompletion.c)
 *     QueryTemperatureThresholdCompletion @ 0x140022410 (QueryTemperatureThresholdCompletion.c)
 *     NVMeAsyncEventRequestCompletion @ 0x140023580 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeBuildPollingConfiguration @ 0x1400241C8 (NVMeBuildPollingConfiguration.c)
 *     NVMeControllerIdentify @ 0x140024388 (NVMeControllerIdentify.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x140024D74 (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x140024E28 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x140024FBC (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x140025078 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x140025280 (NVMeDirectiveStreamsReleaseId.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x14002533C (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetActiveNameSpaceIdList @ 0x140025540 (NVMeGetActiveNameSpaceIdList.c)
 *     NVMeGetAutoPowerStateTransition @ 0x140025668 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetCloudSSDErrorRecoveryLog @ 0x140025814 (NVMeGetCloudSSDErrorRecoveryLog.c)
 *     NVMeGetControllerInitiatedTelemetryHeader @ 0x140025C58 (NVMeGetControllerInitiatedTelemetryHeader.c)
 *     NVMeGetControllerInitiatedTelemetryLog @ 0x140025D48 (NVMeGetControllerInitiatedTelemetryLog.c)
 *     NVMeGetControllerIoCommandSetIdentify @ 0x1400260A4 (NVMeGetControllerIoCommandSetIdentify.c)
 *     NVMeGetControllerUUIDListIdentify @ 0x1400261A8 (NVMeGetControllerUUIDListIdentify.c)
 *     NVMeGetHealthInfoLog @ 0x140026310 (NVMeGetHealthInfoLog.c)
 *     NVMeGetLogPageCompletion @ 0x1400264B0 (NVMeGetLogPageCompletion.c)
 *     NVMeGetNVMSetAttributeList @ 0x1400269E0 (NVMeGetNVMSetAttributeList.c)
 *     NVMeGetNamespaceDescriptorListIdentify @ 0x140026B8C (NVMeGetNamespaceDescriptorListIdentify.c)
 *     NVMeGetNamespaceIoCommandSetIdentify @ 0x140026CF0 (NVMeGetNamespaceIoCommandSetIdentify.c)
 *     NVMeGetNamespaceMetadata @ 0x140026EFC (NVMeGetNamespaceMetadata.c)
 *     NVMeNameSpaceIdentify @ 0x140027A44 (NVMeNameSpaceIdentify.c)
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x140028820 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x140029400 (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     NVMeReservedCompletionQueueCreate @ 0x140029A20 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x140029EA4 (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeSanitizeRecoverWorkItem @ 0x14002A480 (NVMeSanitizeRecoverWorkItem.c)
 *     NVMeSetAutoPowerStateTransition @ 0x14002A63C (NVMeSetAutoPowerStateTransition.c)
 *     NVMeSetHostBehaviorSupport @ 0x14002A6F4 (NVMeSetHostBehaviorSupport.c)
 *     NVMeSetNonOperationalPowerStatePermissiveMode @ 0x14002ABD0 (NVMeSetNonOperationalPowerStatePermissiveMode.c)
 *     NVMeSyncHostTime @ 0x14002ADCC (NVMeSyncHostTime.c)
 *     ProcessMultipleCommands @ 0x14002BADC (ProcessMultipleCommands.c)
 * Callees:
 *     NVMeRequestComplete @ 0x140007B70 (NVMeRequestComplete.c)
 *     ProcessCommandInSpecificQueue @ 0x14000A910 (ProcessCommandInSpecificQueue.c)
 */

__int64 __fastcall ProcessCommand(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rbx
  unsigned int v6; // ebp
  __int64 v7; // r12
  unsigned __int16 v8; // r15
  __int64 v9; // r14
  __int64 result; // rax
  __int64 v11; // r9
  unsigned int v12; // eax
  unsigned int v13; // r13d
  unsigned int v14; // eax
  unsigned int v15; // edx
  char v16; // cl
  __int64 v17; // rdx
  unsigned int v18; // r8d

  v2 = 104LL;
  if ( *(_BYTE *)(a2 + 2) != 40 )
    v2 = 56LL;
  v5 = *(_QWORD *)(v2 + a2);
  if ( (v5 & 0xFFF) != 0 )
    v5 = v5 - (v5 & 0xFFF) + 4096;
  v6 = 0;
  v7 = 0LL;
  if ( *(_WORD *)(v5 + 4212) )
  {
    if ( (*(_DWORD *)(a1 + 4064) & 0x1000) != 0 )
      MEMORY[0x30] = 4660;
    v8 = *(_WORD *)(a1 + 326);
    v9 = 208LL * *(unsigned __int16 *)(v5 + 4212) + *(_QWORD *)(a1 + 936) - 208LL;
  }
  else
  {
    v8 = *(_WORD *)(a1 + 324);
    v9 = a1 + 336;
  }
  if ( g_HeteroSystem && (*(_BYTE *)(a1 + 4064) & 0x10) == 0 )
    v7 = v9;
  result = ProcessCommandInSpecificQueue(a1, a2, v9, v8);
  if ( (_BYTE)result )
    return result;
  if ( *(_BYTE *)(a2 + 3) != 5 )
    return NVMeRequestComplete(a1, a2, 0);
  if ( !*(_WORD *)(v9 + 48) )
    goto LABEL_37;
  v12 = *(unsigned __int16 *)(a1 + 330);
  if ( v12 > 1 )
  {
    *(_BYTE *)(v5 + 4225) |= 0x10u;
    v13 = v12;
    do
    {
      v14 = *(unsigned __int16 *)(a1 + 330);
      LOWORD(v15) = *(_WORD *)(v9 + 48) + 1;
      if ( (unsigned __int16)v15 > (unsigned __int16)v14 )
        v15 = (unsigned __int16)v15 % v14;
      *(_WORD *)(v5 + 4212) = v15;
      v9 = 208LL * (unsigned __int16)v15 + *(_QWORD *)(a1 + 936) - 208LL;
      result = ProcessCommandInSpecificQueue(a1, a2, v9, v8);
      v16 = result;
      if ( (_BYTE)result )
        break;
      if ( *(_BYTE *)(a2 + 3) != 5 )
        break;
      ++v6;
    }
    while ( v6 < v13 );
    if ( !g_HeteroSystem || (result = *(unsigned int *)(a1 + 4064), (result & 0x10) != 0) )
    {
      if ( v16 )
        return result;
    }
    else if ( v16 )
    {
      if ( v6 < v13 )
      {
        v17 = *(_QWORD *)(a1 + 944);
        v18 = *(_DWORD *)(392LL * *(unsigned __int16 *)(v7 + 58) + v17 - 148) & 0xF;
        result = *(_DWORD *)(392LL * *(unsigned __int16 *)(v9 + 58) + v17 - 148) & 0xF;
        if ( (_DWORD)result == v18 )
        {
          ++*(_DWORD *)(a1 + 4120);
        }
        else if ( (unsigned int)result >= v18 )
        {
          ++*(_DWORD *)(a1 + 4128);
        }
        else
        {
          ++*(_DWORD *)(a1 + 4124);
        }
      }
      return result;
    }
    return NVMeRequestComplete(a1, a2, 0);
  }
  if ( *(_WORD *)(v9 + 48) )
    return NVMeRequestComplete(a1, a2, 0);
LABEL_37:
  while ( 1 )
  {
    StorPortExtendedFunction(81LL, a1, 1000LL, v11);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 992));
    result = ProcessCommandInSpecificQueue(a1, a2, v9, v8);
    if ( (_BYTE)result )
      break;
    if ( ++v6 >= 4 )
      return NVMeRequestComplete(a1, a2, 0);
  }
  return result;
}
