/*
 * XREFs of __security_check_cookie @ 0x140061BD0
 * Callers:
 *     UsbhSshSuspendHub @ 0x140006848 (UsbhSshSuspendHub.c)
 *     UsbhDisableTimerObject @ 0x140007330 (UsbhDisableTimerObject.c)
 *     UsbhReset2Complete @ 0x14000A840 (UsbhReset2Complete.c)
 *     UsbhPortConnect @ 0x14000BF90 (UsbhPortConnect.c)
 *     UsbhEtwLogHubIrpEvent @ 0x14000C7E0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhCreatePdo @ 0x14000C9F0 (UsbhCreatePdo.c)
 *     UsbhReset1Complete @ 0x14000E460 (UsbhReset1Complete.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x14000F910 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhCreateDevice @ 0x14001016C (UsbhCreateDevice.c)
 *     UsbhPdoDevicePowerState @ 0x1400156F0 (UsbhPdoDevicePowerState.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhHubProcessIsr @ 0x14001C3D0 (UsbhHubProcessIsr.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x14001D870 (UsbhEtwLogHubEventWithExtraData.c)
 *     UsbhEtwWrite @ 0x14001DA20 (UsbhEtwWrite.c)
 *     UsbhUpdateUxdSettings @ 0x1400220B4 (UsbhUpdateUxdSettings.c)
 *     UsbhGetGlobalUxdSettings @ 0x140022680 (UsbhGetGlobalUxdSettings.c)
 *     UsbhIoctlValidateParameters @ 0x140027160 (UsbhIoctlValidateParameters.c)
 *     UsbhEtwLogPortInformation @ 0x140027A6C (UsbhEtwLogPortInformation.c)
 *     UsbhEtwLogHubInformation @ 0x140028050 (UsbhEtwLogHubInformation.c)
 *     UsbhFdoSystemPowerState @ 0x140028454 (UsbhFdoSystemPowerState.c)
 *     UsbhEtwLogHubPowerEvent @ 0x140028B5C (UsbhEtwLogHubPowerEvent.c)
 *     UsbhEtwLogHubPastExceptions @ 0x140029294 (UsbhEtwLogHubPastExceptions.c)
 *     UsbhSshResumeUpstream @ 0x140029894 (UsbhSshResumeUpstream.c)
 *     UsbhEnableTimerObject @ 0x14002BB10 (UsbhEnableTimerObject.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x14002F1E4 (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x140031CF8 (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     UsbhEtwLogDeviceInformation @ 0x1400334AC (UsbhEtwLogDeviceInformation.c)
 *     UsbhQueryBusRelations @ 0x140034C9C (UsbhQueryBusRelations.c)
 *     UsbhGetPerformanceInfo @ 0x140035950 (UsbhGetPerformanceInfo.c)
 *     UsbhInitializeDevice @ 0x140038404 (UsbhInitializeDevice.c)
 *     UsbhEtwLogDeviceDescription @ 0x14003A514 (UsbhEtwLogDeviceDescription.c)
 *     UsbhAcpiEnumChildren @ 0x14003A850 (UsbhAcpiEnumChildren.c)
 *     UsbhAcpiEvalAcpiMethodEx @ 0x14003A9E4 (UsbhAcpiEvalAcpiMethodEx.c)
 *     UsbhFdoCleanupDeviceInterfaceForBillBoard @ 0x14003B168 (UsbhFdoCleanupDeviceInterfaceForBillBoard.c)
 *     UsbhFdoCreateDeviceInterfaceForBillBoard @ 0x14003B2A4 (UsbhFdoCreateDeviceInterfaceForBillBoard.c)
 *     UsbhGetAcpiPortAttributes @ 0x14003B898 (UsbhGetAcpiPortAttributes.c)
 *     UsbhSetPortPower @ 0x14003DD14 (UsbhSetPortPower.c)
 *     UsbhExtPropDescSemaphorePresent @ 0x1400422F0 (UsbhExtPropDescSemaphorePresent.c)
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x14004EA08 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     wil_details_RecordCachedUsage @ 0x1400521F8 (wil_details_RecordCachedUsage.c)
 *     UsbhGetD3Policy @ 0x1400523D4 (UsbhGetD3Policy.c)
 *     UsbhUpdateRegSurpriseRemovalCount @ 0x1400532F0 (UsbhUpdateRegSurpriseRemovalCount.c)
 *     UsbhBuildWmiConnectionNotification @ 0x140054F90 (UsbhBuildWmiConnectionNotification.c)
 *     UsbhQuerySSstate @ 0x140057D88 (UsbhQuerySSstate.c)
 *     UsbhReset1Timeout @ 0x140058E50 (UsbhReset1Timeout.c)
 *     UsbhReset2Timeout @ 0x140059450 (UsbhReset2Timeout.c)
 *     UsbhGetDeviceFlags @ 0x14005B0BC (UsbhGetDeviceFlags.c)
 *     UsbhPdoCheckBootDeviceReady @ 0x14005CF70 (UsbhPdoCheckBootDeviceReady.c)
 *     UsbhPdo_ReportPnPFailureProblem @ 0x14005DC8C (UsbhPdo_ReportPnPFailureProblem.c)
 *     UsbhDeleteUxdDeviceKey @ 0x14005F5F4 (UsbhDeleteUxdDeviceKey.c)
 *     UsbhDeleteUxdPortSettings @ 0x14005F704 (UsbhDeleteUxdPortSettings.c)
 *     UsbhDeleteUxdSubKeys @ 0x14005F7D4 (UsbhDeleteUxdSubKeys.c)
 *     UsbhGetUxdDeviceKey @ 0x14005F964 (UsbhGetUxdDeviceKey.c)
 *     UsbhGetUxdPortKey @ 0x14005FBEC (UsbhGetUxdPortKey.c)
 *     UsbhPropagateUxdState @ 0x14005FE94 (UsbhPropagateUxdState.c)
 *     WnfPublishUsbPartnerDualRoleFeatures @ 0x140060850 (WnfPublishUsbPartnerDualRoleFeatures.c)
 *     MyRegQueryUlong @ 0x14006199C (MyRegQueryUlong.c)
 *     __GSHandlerCheckCommon @ 0x140061A9C (__GSHandlerCheckCommon.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x140078008 (wil_RtlStagingConfig_QueryFeatureState.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x14007893C (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x140079168 (wil_details_PopulateInitialConfiguredFeatureStates.c)
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
