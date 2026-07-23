/*
 * XREFs of MiGetControlAreaImageStartBit @ 0x1404C7CD0
 * Callers:
 *     MiCommitVadMetadataBits @ 0x140997DF4 (MiCommitVadMetadataBits.c)
 *     MiUpdateImageSystemWideBitmaps @ 0x14099B3C4 (MiUpdateImageSystemWideBitmaps.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetControlAreaImageStartBit(__int64 a1)
{
  return *(unsigned int *)(a1 + 88);
}
