/*
 * XREFs of __security_check_cookie @ 0x1400614F0
 * Callers:
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x14000A9B0 (UsbhEtwLogHubEventWithExtraData.c)
 *     UsbhEtwWrite @ 0x14000AB60 (UsbhEtwWrite.c)
 *     UsbhHubProcessIsr @ 0x14000AC30 (UsbhHubProcessIsr.c)
 *     UsbhEtwLogHubIrpEvent @ 0x14000C5A0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x14000C7AC (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhDisableTimerObject @ 0x14000C938 (UsbhDisableTimerObject.c)
 *     UsbhPdoDevicePowerState @ 0x14000EBA4 (UsbhPdoDevicePowerState.c)
 *     UsbhCreateDevice @ 0x140012398 (UsbhCreateDevice.c)
 *     UsbhReset1Complete @ 0x140012800 (UsbhReset1Complete.c)
 *     UsbhPortConnect @ 0x140013B30 (UsbhPortConnect.c)
 *     UsbhCreatePdo @ 0x140014360 (UsbhCreatePdo.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x140016858 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1400187B8 (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     UsbhReset2Complete @ 0x14001BA40 (UsbhReset2Complete.c)
 *     UsbhInitializeDevice @ 0x14001CFD4 (UsbhInitializeDevice.c)
 *     UsbhUpdateUxdSettings @ 0x14001D3EC (UsbhUpdateUxdSettings.c)
 *     UsbhGetGlobalUxdSettings @ 0x14001D9E4 (UsbhGetGlobalUxdSettings.c)
 *     UsbhIoctlValidateParameters @ 0x140023120 (UsbhIoctlValidateParameters.c)
 *     UsbhSshSuspendHub @ 0x1400297BC (UsbhSshSuspendHub.c)
 *     UsbhSshResumeUpstream @ 0x14002A798 (UsbhSshResumeUpstream.c)
 *     UsbhEtwLogHubPastExceptions @ 0x14002AC70 (UsbhEtwLogHubPastExceptions.c)
 *     UsbhEtwLogHubPowerEvent @ 0x14002B584 (UsbhEtwLogHubPowerEvent.c)
 *     UsbhQueryBusRelations @ 0x14002D43C (UsbhQueryBusRelations.c)
 *     UsbhEtwLogDeviceInformation @ 0x14002D914 (UsbhEtwLogDeviceInformation.c)
 *     UsbhEnableTimerObject @ 0x14002EA20 (UsbhEnableTimerObject.c)
 *     UsbhFdoSystemPowerState @ 0x14002F8C0 (UsbhFdoSystemPowerState.c)
 *     UsbhEtwLogHubInformation @ 0x1400319A4 (UsbhEtwLogHubInformation.c)
 *     UsbhEtwLogPortInformation @ 0x140031AA4 (UsbhEtwLogPortInformation.c)
 *     UsbhGetPerformanceInfo @ 0x1400377CC (UsbhGetPerformanceInfo.c)
 *     UsbhEtwLogDeviceDescription @ 0x14003AAB4 (UsbhEtwLogDeviceDescription.c)
 *     UsbhAcpiEnumChildren @ 0x14003ADE0 (UsbhAcpiEnumChildren.c)
 *     UsbhAcpiEvalAcpiMethodEx @ 0x14003AF70 (UsbhAcpiEvalAcpiMethodEx.c)
 *     UsbhFdoCleanupDeviceInterfaceForBillBoard @ 0x14003B708 (UsbhFdoCleanupDeviceInterfaceForBillBoard.c)
 *     UsbhFdoCreateDeviceInterfaceForBillBoard @ 0x14003B83C (UsbhFdoCreateDeviceInterfaceForBillBoard.c)
 *     UsbhGetAcpiPortAttributes @ 0x14003BE24 (UsbhGetAcpiPortAttributes.c)
 *     UsbhSetPortPower @ 0x14003E270 (UsbhSetPortPower.c)
 *     UsbhExtPropDescSemaphorePresent @ 0x1400427B8 (UsbhExtPropDescSemaphorePresent.c)
 *     wil_details_RecordCachedUsage @ 0x140051CF8 (wil_details_RecordCachedUsage.c)
 *     UsbhGetD3Policy @ 0x140051ED4 (UsbhGetD3Policy.c)
 *     UsbhUpdateRegSurpriseRemovalCount @ 0x140052DE0 (UsbhUpdateRegSurpriseRemovalCount.c)
 *     UsbhBuildWmiConnectionNotification @ 0x140054A10 (UsbhBuildWmiConnectionNotification.c)
 *     UsbhQuerySSstate @ 0x140057820 (UsbhQuerySSstate.c)
 *     UsbhReset1Timeout @ 0x1400588F0 (UsbhReset1Timeout.c)
 *     UsbhReset2Timeout @ 0x140058EE0 (UsbhReset2Timeout.c)
 *     UsbhGetDeviceFlags @ 0x14005AB40 (UsbhGetDeviceFlags.c)
 *     UsbhPdoCheckBootDeviceReady @ 0x14005C990 (UsbhPdoCheckBootDeviceReady.c)
 *     UsbhPdo_ReportPnPFailureProblem @ 0x14005D68C (UsbhPdo_ReportPnPFailureProblem.c)
 *     UsbhDeleteUxdDeviceKey @ 0x14005EFAC (UsbhDeleteUxdDeviceKey.c)
 *     UsbhDeleteUxdPortSettings @ 0x14005F06C (UsbhDeleteUxdPortSettings.c)
 *     UsbhDeleteUxdSubKeys @ 0x14005F13C (UsbhDeleteUxdSubKeys.c)
 *     UsbhGetUxdDeviceKey @ 0x14005F2CC (UsbhGetUxdDeviceKey.c)
 *     UsbhGetUxdPortKey @ 0x14005F550 (UsbhGetUxdPortKey.c)
 *     UsbhPropagateUxdState @ 0x14005F7EC (UsbhPropagateUxdState.c)
 *     WnfPublishUsbPartnerDualRoleFeatures @ 0x1400601A0 (WnfPublishUsbPartnerDualRoleFeatures.c)
 *     MyRegQueryUlong @ 0x1400612A4 (MyRegQueryUlong.c)
 *     __GSHandlerCheckCommon @ 0x1400613AC (__GSHandlerCheckCommon.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x14007786C (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x140078168 (wil_details_PopulateInitialConfiguredFeatureStates.c)
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
