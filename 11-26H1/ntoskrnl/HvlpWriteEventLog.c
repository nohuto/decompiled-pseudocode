/*
 * XREFs of HvlpWriteEventLog @ 0x1405C1714
 * Callers:
 *     HvlpCheckTscSync @ 0x1404EE8C4 (HvlpCheckTscSync.c)
 *     HvlPhase2Initialize @ 0x1405B8B08 (HvlPhase2Initialize.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x1405C11BC (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogIommuInitStatus @ 0x1405C1454 (HvlpLogIommuInitStatus.c)
 *     HvlpLogProcessorStartupFailure @ 0x1405C164C (HvlpLogProcessorStartupFailure.c)
 * Callees:
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 */

NTSTATUS __fastcall HvlpWriteEventLog(
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  NTSTATUS result; // eax

  result = (int)EventDescriptor;
  if ( HvlGlobalSystemEventsHandle )
    return EtwWriteEx(HvlGlobalSystemEventsHandle, EventDescriptor, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
  return result;
}
