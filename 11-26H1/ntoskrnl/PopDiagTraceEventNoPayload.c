/*
 * XREFs of PopDiagTraceEventNoPayload @ 0x1404C6954
 * Callers:
 *     PopScanIdleList @ 0x1404C65A0 (PopScanIdleList.c)
 *     PopThermalStandbyNotify @ 0x140607BF4 (PopThermalStandbyNotify.c)
 *     PopDiagTracePrepareSleep @ 0x14077AD1C (PopDiagTracePrepareSleep.c)
 *     PopCoalescingNotify @ 0x1407CF2D0 (PopCoalescingNotify.c)
 *     PopSetSystemAwayMode @ 0x1407D1390 (PopSetSystemAwayMode.c)
 *     PopDiagTraceDevicesWakeEnd @ 0x1407D3424 (PopDiagTraceDevicesWakeEnd.c)
 *     PopDiagTraceSuspendResumeNotification @ 0x1407D54FC (PopDiagTraceSuspendResumeNotification.c)
 *     PopSuspendApps @ 0x140A39920 (PopSuspendApps.c)
 *     PopResumeApps @ 0x140A39974 (PopResumeApps.c)
 *     PopSuspendServices @ 0x140A39A2C (PopSuspendServices.c)
 *     PopResumeServices @ 0x140A39A90 (PopResumeServices.c)
 *     PopDiagTraceIoCoalescingOff @ 0x140B47D38 (PopDiagTraceIoCoalescingOff.c)
 *     PopDispatchSuperfetchNotification @ 0x140B4EF08 (PopDispatchSuperfetchNotification.c)
 *     PopNotifyCallbacksPreSleep @ 0x140B5BB0C (PopNotifyCallbacksPreSleep.c)
 *     PopDiagTracePrepareSleepEnd @ 0x140B5CAEC (PopDiagTracePrepareSleepEnd.c)
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 *     PopDiagTraceFlushSleepStudyLogger @ 0x140BE957C (PopDiagTraceFlushSleepStudyLogger.c)
 *     PopGracefulShutdown @ 0x140BF9180 (PopGracefulShutdown.c)
 *     PopDiagTraceGracefulShutdown @ 0x140BFDB68 (PopDiagTraceGracefulShutdown.c)
 *     PopDiagTraceZeroHiberFile @ 0x140BFDCD0 (PopDiagTraceZeroHiberFile.c)
 *     PopDiagTraceZeroHiberFileEnd @ 0x140BFDCEC (PopDiagTraceZeroHiberFileEnd.c)
 *     PopTransitionToSleep @ 0x140C04000 (PopTransitionToSleep.c)
 *     PopBuildDeviceNotifyList @ 0x140C04CC8 (PopBuildDeviceNotifyList.c)
 *     PoBroadcastSystemState @ 0x140C05D10 (PoBroadcastSystemState.c)
 *     PopFlushVolumes @ 0x140C06720 (PopFlushVolumes.c)
 *     PopDiagTraceFlushSleepStudyLoggerEnd @ 0x140C0C530 (PopDiagTraceFlushSleepStudyLoggerEnd.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 */

void __fastcall PopDiagTraceEventNoPayload(PCEVENT_DESCRIPTOR EventDescriptor)
{
  if ( byte_140E67628 )
  {
    if ( EtwEventEnabled(*(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16], EventDescriptor) )
      EtwWriteEx(
        *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
        EventDescriptor,
        0LL,
        0,
        0LL,
        0LL,
        0,
        0LL);
  }
}
