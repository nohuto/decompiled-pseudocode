/*
 * XREFs of RtlSetLastWin32Error @ 0x180040B90
 * Callers:
 *     RtlpWnfWalkUserSubscriptionList @ 0x18003A554 (RtlpWnfWalkUserSubscriptionList.c)
 *     EtwEventActivityIdControl @ 0x180040A60 (EtwEventActivityIdControl.c)
 *     EtwNotificationRegister @ 0x180041740 (EtwNotificationRegister.c)
 *     EtwpSetProviderTraits @ 0x180041D70 (EtwpSetProviderTraits.c)
 *     EtwEventRegister @ 0x180041F90 (EtwEventRegister.c)
 *     EtwRegisterTraceGuidsW @ 0x1800433E0 (EtwRegisterTraceGuidsW.c)
 *     SbSelectProcedure @ 0x180083640 (SbSelectProcedure.c)
 *     SbObtainTraceHandle @ 0x180084C30 (SbObtainTraceHandle.c)
 *     TppSetTimer @ 0x180089890 (TppSetTimer.c)
 *     EtwNotificationUnregister @ 0x18008D530 (EtwNotificationUnregister.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18008DC80 (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     EtwUnregisterTraceGuids @ 0x18008E350 (EtwUnregisterTraceGuids.c)
 *     EtwGetTraceLoggerHandle @ 0x1800E2CA0 (EtwGetTraceLoggerHandle.c)
 *     EtwGetTraceEnableLevel @ 0x1800E2D10 (EtwGetTraceEnableLevel.c)
 *     EtwGetTraceEnableFlags @ 0x1800E2D60 (EtwGetTraceEnableFlags.c)
 *     EvtIntReportEventWorker @ 0x1800E5CD0 (EvtIntReportEventWorker.c)
 *     RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x1800FD4E0 (RtlSetLastWin32ErrorAndNtStatusFromNtStatus.c)
 *     EtwpTrackProviderBinary @ 0x180117C5C (EtwpTrackProviderBinary.c)
 *     EtwRegisterSecurityProvider @ 0x180158B80 (EtwRegisterSecurityProvider.c)
 *     EtwpUseDescriptorType @ 0x180158BDC (EtwpUseDescriptorType.c)
 *     EtwCreateTraceInstanceId @ 0x180158D30 (EtwCreateTraceInstanceId.c)
 * Callees:
 *     <none>
 */

void __cdecl RtlSetLastWin32Error(LONG Win32Error)
{
  struct _TEB *v1; // rax

  v1 = NtCurrentTeb();
  if ( g_dwLastErrorToBreakOn && Win32Error == g_dwLastErrorToBreakOn )
    __debugbreak();
  if ( v1->LastErrorValue != Win32Error )
  {
    v1->LastErrorValue = Win32Error;
    if ( Win32Error )
    {
      if ( g_isErrorOriginProviderEnabled )
      {
        if ( Win32Error != 997 )
          RtlpLogSetLastWin32ErrorEvent();
      }
    }
  }
}
