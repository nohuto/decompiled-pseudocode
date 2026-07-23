/*
 * XREFs of HvlpEtwRegister @ 0x1405C39E4
 * Callers:
 *     HvlPhase2Initialize @ 0x1405BB378 (HvlPhase2Initialize.c)
 * Callees:
 *     EtwSetInformation @ 0x14082E9F0 (EtwSetInformation.c)
 *     EtwRegister @ 0x140917980 (EtwRegister.c)
 */

NTSTATUS HvlpEtwRegister()
{
  EtwRegister(&HvlGlobalSystemEventsGuid, 0LL, 0LL, &HvlGlobalSystemEventsHandle);
  return EtwSetInformation(
           HvlGlobalSystemEventsHandle,
           EventProviderSetTraits,
           &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
           (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
}
