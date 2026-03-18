/*
 * XREFs of __security_check_cookie @ 0x140032530
 * Callers:
 *     FormInquiryStandardData @ 0x140001F50 (FormInquiryStandardData.c)
 *     ScsiReadWriteRequest @ 0x140003DE0 (ScsiReadWriteRequest.c)
 *     BuildReadWriteCommand @ 0x140004540 (BuildReadWriteCommand.c)
 *     SrbAssignQueueId @ 0x1400047C0 (SrbAssignQueueId.c)
 *     ScsiSyncCacheRequest @ 0x140004E90 (ScsiSyncCacheRequest.c)
 *     CheckDpcWatchdogTimerExpireSoon @ 0x140006AC0 (CheckDpcWatchdogTimerExpireSoon.c)
 *     NVMeControllerInitPart1 @ 0x140006C00 (NVMeControllerInitPart1.c)
 *     NVMeControllerInitPart3 @ 0x140006E40 (NVMeControllerInitPart3.c)
 *     ControllerReset @ 0x140007840 (ControllerReset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1400088C0 (WaitForCommandCompleteWithCustomTimeout.c)
 *     NVMeCompletionDpcRoutine @ 0x1400096D0 (NVMeCompletionDpcRoutine.c)
 *     NVMeMapError @ 0x14000AD00 (NVMeMapError.c)
 *     NVMeControllerInitPart2 @ 0x14000CC70 (NVMeControllerInitPart2.c)
 *     NVMeInitHostMemoryBuffer @ 0x14000D7A0 (NVMeInitHostMemoryBuffer.c)
 *     GetStreamId @ 0x14000F2D0 (GetStreamId.c)
 *     ControllerEnable @ 0x14000F460 (ControllerEnable.c)
 *     GetInterruptMessageInformation @ 0x140010A50 (GetInterruptMessageInformation.c)
 *     NVMeHwFindAdapter @ 0x140012650 (NVMeHwFindAdapter.c)
 *     NVMeLogEtwControllerInfo @ 0x1400131FC (NVMeLogEtwControllerInfo.c)
 *     NVMeLogTelemetry @ 0x140013404 (NVMeLogTelemetry.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x140013C18 (wil_RtlStagingConfig_QueryFeatureState.c)
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x140014100 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     NVMeCaptureLiveDumpWorkItem @ 0x1400161F0 (NVMeCaptureLiveDumpWorkItem.c)
 *     NVMeControllerReset @ 0x1400175BC (NVMeControllerReset.c)
 *     NVMeFreeHostMemoryBuffer @ 0x140017CC0 (NVMeFreeHostMemoryBuffer.c)
 *     NVMeInitStreams @ 0x1400182D4 (NVMeInitStreams.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x14001C670 (IoctlStorageStreamsGetOpenStreams.c)
 *     IoctlStorageStreamsGetParameters @ 0x14001C844 (IoctlStorageStreamsGetParameters.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x140024790 (NVMeControllerPanicResetActionWorkItem.c)
 *     NVMeReenumerateNameSpaceRescan @ 0x140028F38 (NVMeReenumerateNameSpaceRescan.c)
 *     ProcessPendingIoCommands @ 0x14002C2D0 (ProcessPendingIoCommands.c)
 *     GetDynamicRegistrySettings @ 0x14002DC90 (GetDynamicRegistrySettings.c)
 *     GetRegistrySettings @ 0x14002DEA8 (GetRegistrySettings.c)
 *     GetRegistrySettingsForSpecificKey @ 0x14003020C (GetRegistrySettingsForSpecificKey.c)
 *     SendNVMeEventNotification @ 0x1400306EC (SendNVMeEventNotification.c)
 *     NVMeSendControllerInternalData @ 0x14003090C (NVMeSendControllerInternalData.c)
 *     NVMeSendLunInternalData @ 0x14003102C (NVMeSendLunInternalData.c)
 *     NVMeIceConfigureExclusionAddress @ 0x1400315BC (NVMeIceConfigureExclusionAddress.c)
 *     NVMeIceConfigureReadWriteCommand @ 0x140031644 (NVMeIceConfigureReadWriteCommand.c)
 *     NVMeIceInitPart2 @ 0x140031A48 (NVMeIceInitPart2.c)
 *     wil_details_RecordCachedUsage @ 0x1400321D0 (wil_details_RecordCachedUsage.c)
 *     __GSHandlerCheckCommon @ 0x1400323FC (__GSHandlerCheckCommon.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x1400492AC (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x14004B168 (wil_details_PopulateInitialConfiguredFeatureStates.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
ReportFailure:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto ReportFailure;
  }
}
