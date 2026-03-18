/*
 * XREFs of BcdGetElementData @ 0x1409D4B60
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x1406D5E6C (WheaPersistBadPageToBcd.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetBootEntry @ 0x1407DDB8C (PopAdaptiveGetSystemInitiatedRebootTargetBootEntry.c)
 *     PopBcdGetApplicationPathFromResumeObject @ 0x1407E16B4 (PopBcdGetApplicationPathFromResumeObject.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x140816134 (SepSecureBootUpdateBcdDataForRule.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x1408911E4 (BiGetDefaultBootEntryIdentifier.c)
 *     BiUpdateBcdObject @ 0x1409D0B64 (BiUpdateBcdObject.c)
 *     PopBcdReadElement @ 0x1409D37A8 (PopBcdReadElement.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x1409D3C04 (PopBcdSetDefaultResumeObjectElements.c)
 *     BiGetElement @ 0x1409D4A9C (BiGetElement.c)
 *     BiBuildIdentifierList @ 0x1409D4E8C (BiBuildIdentifierList.c)
 *     PopBcdEstablishResumeObject @ 0x140B68C20 (PopBcdEstablishResumeObject.c)
 * Callees:
 *     BcdGetElementDataWithFlags @ 0x1409D4B80 (BcdGetElementDataWithFlags.c)
 */

__int64 __fastcall BcdGetElementData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return BcdGetElementDataWithFlags(a1, a2, a3, a3, a4);
}
