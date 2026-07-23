/*
 * XREFs of MiGetVadPtesInCluster @ 0x1404F234C
 * Callers:
 *     MiPrepareWriteWatchPacket @ 0x140A929A0 (MiPrepareWriteWatchPacket.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVadPtesInCluster(unsigned __int64 a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( MiVadPageSizes[(a1 >> 17) & 3] == 16 )
    return 16LL;
  return result;
}
