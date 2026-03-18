/*
 * XREFs of MiGetControlAreaImageStartBit @ 0x1404CE2A0
 * Callers:
 *     MiCommitVadMetadataBits @ 0x1409C6E14 (MiCommitVadMetadataBits.c)
 *     MiUpdateImageSystemWideBitmaps @ 0x1409CA3E4 (MiUpdateImageSystemWideBitmaps.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetControlAreaImageStartBit(__int64 a1)
{
  return *(unsigned int *)(a1 + 88);
}
