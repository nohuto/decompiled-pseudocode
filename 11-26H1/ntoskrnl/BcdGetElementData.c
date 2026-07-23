/*
 * XREFs of BcdGetElementData @ 0x1409A5B40
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x1406D9F4C (WheaPersistBadPageToBcd.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetBootEntry @ 0x1407E21BC (PopAdaptiveGetSystemInitiatedRebootTargetBootEntry.c)
 *     PopBcdGetApplicationPathFromResumeObject @ 0x1407E6744 (PopBcdGetApplicationPathFromResumeObject.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x14081C344 (SepSecureBootUpdateBcdDataForRule.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x1408975E0 (BiGetDefaultBootEntryIdentifier.c)
 *     BiUpdateBcdObject @ 0x1409A1B44 (BiUpdateBcdObject.c)
 *     PopBcdReadElement @ 0x1409A4788 (PopBcdReadElement.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x1409A4BE4 (PopBcdSetDefaultResumeObjectElements.c)
 *     BiGetElement @ 0x1409A5A7C (BiGetElement.c)
 *     BiBuildIdentifierList @ 0x1409A5E6C (BiBuildIdentifierList.c)
 *     PopBcdEstablishResumeObject @ 0x140B6BBB0 (PopBcdEstablishResumeObject.c)
 * Callees:
 *     BcdGetElementDataWithFlags @ 0x1409A5B60 (BcdGetElementDataWithFlags.c)
 */

NTSTATUS __cdecl BcdGetElementData(HANDLE BcdObjectHandle, ULONG BcdElement, PVOID Buffer, PULONG BufferSize)
{
  return BcdGetElementDataWithFlags(BcdObjectHandle, BcdElement, (BCD_FLAGS)Buffer, Buffer, BufferSize);
}
