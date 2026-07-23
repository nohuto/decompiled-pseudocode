/*
 * XREFs of MiGetVadLargePageIndex @ 0x1404D00FC
 * Callers:
 *     MiCommitVadPreparePacket @ 0x140998470 (MiCommitVadPreparePacket.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVadLargePageIndex(unsigned __int64 a1)
{
  return (unsigned int)MiVadPageIndices[(a1 >> 17) & 3];
}
