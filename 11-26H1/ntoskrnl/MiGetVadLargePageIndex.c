/*
 * XREFs of MiGetVadLargePageIndex @ 0x1404D692C
 * Callers:
 *     MiCommitVadPreparePacket @ 0x1409C7490 (MiCommitVadPreparePacket.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVadLargePageIndex(unsigned __int64 a1)
{
  return (unsigned int)MiVadPageIndices[(a1 >> 17) & 3];
}
