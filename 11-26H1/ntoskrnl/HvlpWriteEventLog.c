/*
 * XREFs of HvlpWriteEventLog @ 0x1405C3F84
 * Callers:
 *     HvlpCheckTscSync @ 0x1404E7EA4 (HvlpCheckTscSync.c)
 *     HvlPhase2Initialize @ 0x1405BB378 (HvlPhase2Initialize.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x1405C3A2C (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogIommuInitStatus @ 0x1405C3CC4 (HvlpLogIommuInitStatus.c)
 *     HvlpLogProcessorStartupFailure @ 0x1405C3EBC (HvlpLogProcessorStartupFailure.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
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
