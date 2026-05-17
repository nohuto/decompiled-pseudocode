/*
 * XREFs of RtlSetLastWin32Error @ 0x180056610
 * Callers:
 *     RtlpWnfWalkUserSubscriptionList @ 0x18004FFD4 (RtlpWnfWalkUserSubscriptionList.c)
 *     EtwEventActivityIdControl @ 0x1800564E0 (EtwEventActivityIdControl.c)
 *     EtwNotificationRegister @ 0x1800571C0 (EtwNotificationRegister.c)
 *     EtwpSetProviderTraits @ 0x1800577F0 (EtwpSetProviderTraits.c)
 *     EtwEventRegister @ 0x180057A10 (EtwEventRegister.c)
 *     EtwRegisterTraceGuidsW @ 0x180058E60 (EtwRegisterTraceGuidsW.c)
 *     SbSelectProcedure @ 0x1800631F0 (SbSelectProcedure.c)
 *     SbObtainTraceHandle @ 0x1800647E0 (SbObtainTraceHandle.c)
 *     TppSetTimer @ 0x180069440 (TppSetTimer.c)
 *     EtwNotificationUnregister @ 0x18006D0E0 (EtwNotificationUnregister.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18006D830 (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     EtwUnregisterTraceGuids @ 0x18006DF00 (EtwUnregisterTraceGuids.c)
 *     EtwGetTraceLoggerHandle @ 0x1800E4DF0 (EtwGetTraceLoggerHandle.c)
 *     EtwGetTraceEnableLevel @ 0x1800E4E60 (EtwGetTraceEnableLevel.c)
 *     EtwGetTraceEnableFlags @ 0x1800E4EB0 (EtwGetTraceEnableFlags.c)
 *     EvtIntReportEventWorker @ 0x1800E7270 (EvtIntReportEventWorker.c)
 *     RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x1800FDD90 (RtlSetLastWin32ErrorAndNtStatusFromNtStatus.c)
 *     EtwpTrackProviderBinary @ 0x180117EAC (EtwpTrackProviderBinary.c)
 *     EtwRegisterSecurityProvider @ 0x180158CB0 (EtwRegisterSecurityProvider.c)
 *     EtwpUseDescriptorType @ 0x180158D0C (EtwpUseDescriptorType.c)
 *     EtwCreateTraceInstanceId @ 0x180158E60 (EtwCreateTraceInstanceId.c)
 * Callees:
 *     <none>
 */

struct _TEB *__fastcall RtlSetLastWin32Error(unsigned int a1)
{
  struct _TEB *result; // rax

  result = NtCurrentTeb();
  if ( g_dwLastErrorToBreakOn && a1 == g_dwLastErrorToBreakOn )
    __debugbreak();
  if ( result->LastErrorValue != a1 )
  {
    result->LastErrorValue = a1;
    if ( a1 )
    {
      if ( g_isErrorOriginProviderEnabled )
      {
        if ( a1 != 997 )
          return (struct _TEB *)RtlpLogSetLastWin32ErrorEvent();
      }
    }
  }
  return result;
}
