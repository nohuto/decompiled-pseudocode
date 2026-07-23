/*
 * XREFs of PopDiagTraceEventNoPayload @ 0x1404C0304
 * Callers:
 *     PopScanIdleList @ 0x1404BFF50 (PopScanIdleList.c)
 *     PopThermalStandbyNotify @ 0x14060A7A4 (PopThermalStandbyNotify.c)
 *     PopDiagTracePrepareSleep @ 0x14077DC4C (PopDiagTracePrepareSleep.c)
 *     PopCoalescingNotify @ 0x1407D2370 (PopCoalescingNotify.c)
 *     PopSetSystemAwayMode @ 0x1407D4430 (PopSetSystemAwayMode.c)
 *     PopDiagTraceDevicesWakeEnd @ 0x1407D645C (PopDiagTraceDevicesWakeEnd.c)
 *     PopDiagTraceSuspendResumeNotification @ 0x1407D86B4 (PopDiagTraceSuspendResumeNotification.c)
 *     PopSuspendApps @ 0x1409F5528 (PopSuspendApps.c)
 *     PopResumeApps @ 0x1409F557C (PopResumeApps.c)
 *     PopSuspendServices @ 0x1409F5634 (PopSuspendServices.c)
 *     PopResumeServices @ 0x1409F5698 (PopResumeServices.c)
 *     PopDiagTraceIoCoalescingOff @ 0x140B49AC8 (PopDiagTraceIoCoalescingOff.c)
 *     PopDispatchSuperfetchNotification @ 0x140B51798 (PopDispatchSuperfetchNotification.c)
 *     PopNotifyCallbacksPreSleep @ 0x140B5EE28 (PopNotifyCallbacksPreSleep.c)
 *     PopDiagTracePrepareSleepEnd @ 0x140B5FA0C (PopDiagTracePrepareSleepEnd.c)
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 *     PopDiagTraceFlushSleepStudyLogger @ 0x140BEF57C (PopDiagTraceFlushSleepStudyLogger.c)
 *     PopGracefulShutdown @ 0x140BFF180 (PopGracefulShutdown.c)
 *     PopDiagTraceGracefulShutdown @ 0x140C03B68 (PopDiagTraceGracefulShutdown.c)
 *     PopDiagTraceZeroHiberFile @ 0x140C03D1C (PopDiagTraceZeroHiberFile.c)
 *     PopDiagTraceZeroHiberFileEnd @ 0x140C03D38 (PopDiagTraceZeroHiberFileEnd.c)
 *     PopTransitionToSleep @ 0x140C0A210 (PopTransitionToSleep.c)
 *     PopBuildDeviceNotifyList @ 0x140C0AED8 (PopBuildDeviceNotifyList.c)
 *     PoBroadcastSystemState @ 0x140C0BF20 (PoBroadcastSystemState.c)
 *     PopFlushVolumes @ 0x140C0C930 (PopFlushVolumes.c)
 *     PopDiagTraceFlushSleepStudyLoggerEnd @ 0x140C12740 (PopDiagTraceFlushSleepStudyLoggerEnd.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 */

void __fastcall PopDiagTraceEventNoPayload(PCEVENT_DESCRIPTOR EventDescriptor)
{
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, EventDescriptor) )
      EtwWriteEx(PopDiagHandle, EventDescriptor, 0LL, 0, 0LL, 0LL, 0, 0LL);
  }
}
