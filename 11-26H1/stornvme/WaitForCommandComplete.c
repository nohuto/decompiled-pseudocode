/*
 * XREFs of WaitForCommandComplete @ 0x14000C330
 * Callers:
 *     NVMeCheckOCPCompliance @ 0x140005D10 (NVMeCheckOCPCompliance.c)
 *     NVMeGetFeatureIdentifiersSupportedLog @ 0x140005F30 (NVMeGetFeatureIdentifiersSupportedLog.c)
 *     NVMeGetSupportedLogPagesLog @ 0x1400060D0 (NVMeGetSupportedLogPagesLog.c)
 *     NVMeControllerSetWriteCacheEnable @ 0x1400066C0 (NVMeControllerSetWriteCacheEnable.c)
 *     NVMeHwStartIo @ 0x14000BEE0 (NVMeHwStartIo.c)
 *     NVMeIoSubmissionQueueCreate @ 0x14000BFE0 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeIoSubmissionQueueDelete @ 0x14000C3B0 (NVMeIoSubmissionQueueDelete.c)
 *     NVMeIoCompletionQueueCreate @ 0x14000C760 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoCompletionQueueDelete @ 0x14000CAE0 (NVMeIoCompletionQueueDelete.c)
 *     NVMeSetIoQueueCount @ 0x14000CEE0 (NVMeSetIoQueueCount.c)
 *     NVMeSetArbitration @ 0x14000D0E0 (NVMeSetArbitration.c)
 *     NVMeControllerGetFeaturesSupportedCacheCapabilities @ 0x14000D680 (NVMeControllerGetFeaturesSupportedCacheCapabilities.c)
 *     NVMeSetInterruptCoalescing @ 0x14000DA40 (NVMeSetInterruptCoalescing.c)
 *     NVMeSetHostMemoryBuffer @ 0x14000DB20 (NVMeSetHostMemoryBuffer.c)
 *     NVMeGetCommandEffectsLog @ 0x14000DE30 (NVMeGetCommandEffectsLog.c)
 *     NVMeGetTemperatureThreshold @ 0x14000DFE0 (NVMeGetTemperatureThreshold.c)
 *     NVMeConfigAsyncEvent @ 0x140011740 (NVMeConfigAsyncEvent.c)
 *     NVMeControllerSetHostIdentifier @ 0x14001795C (NVMeControllerSetHostIdentifier.c)
 *     NVMeGetSanitizeLogWorkItem @ 0x14001E990 (NVMeGetSanitizeLogWorkItem.c)
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
 *     NVMeGetNVMSetAttributeList @ 0x1400269E0 (NVMeGetNVMSetAttributeList.c)
 *     NVMeGetNamespaceDescriptorListIdentify @ 0x140026B8C (NVMeGetNamespaceDescriptorListIdentify.c)
 *     NVMeGetNamespaceIoCommandSetIdentify @ 0x140026CF0 (NVMeGetNamespaceIoCommandSetIdentify.c)
 *     NVMeGetNamespaceMetadata @ 0x140026EFC (NVMeGetNamespaceMetadata.c)
 *     NVMeNameSpaceIdentify @ 0x140027A44 (NVMeNameSpaceIdentify.c)
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x140028820 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 *     NVMeReservedCompletionQueueCreate @ 0x140029A20 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x140029EA4 (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeSanitizeRecoverWorkItem @ 0x14002A480 (NVMeSanitizeRecoverWorkItem.c)
 *     NVMeSetAutoPowerStateTransition @ 0x14002A63C (NVMeSetAutoPowerStateTransition.c)
 *     NVMeSetHostBehaviorSupport @ 0x14002A6F4 (NVMeSetHostBehaviorSupport.c)
 *     NVMeSyncHostTime @ 0x14002ADCC (NVMeSyncHostTime.c)
 * Callees:
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1400088C0 (WaitForCommandCompleteWithCustomTimeout.c)
 *     Feature_Servicing_StorNVMeDriverTimeoutOverride__private_IsEnabledDeviceUsageNoInline @ 0x14002308C (Feature_Servicing_StorNVMeDriverTimeoutOverride__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall WaitForCommandComplete(__int64 a1, __int64 a2, char a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rax

  v6 = 10000000;
  if ( (unsigned int)Feature_Servicing_StorNVMeDriverTimeoutOverride__private_IsEnabledDeviceUsageNoInline() )
  {
    v7 = *(unsigned __int16 *)(a1 + 3770);
    if ( (_WORD)v7 )
    {
      v6 = 1000000 * v7;
      if ( (unsigned __int64)(1000000 * v7) > 0xFFFFFFFF )
        v6 = -1;
    }
  }
  return WaitForCommandCompleteWithCustomTimeout(a1, a2, a3, v6);
}
