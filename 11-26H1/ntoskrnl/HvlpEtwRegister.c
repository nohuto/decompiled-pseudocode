/*
 * XREFs of HvlpEtwRegister @ 0x1405C1174
 * Callers:
 *     HvlPhase2Initialize @ 0x1405B8B08 (HvlPhase2Initialize.c)
 * Callees:
 *     EtwSetInformation @ 0x1408287B0 (EtwSetInformation.c)
 *     EtwRegister @ 0x14093BDE0 (EtwRegister.c)
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
