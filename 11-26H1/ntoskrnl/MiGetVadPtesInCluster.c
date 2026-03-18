/*
 * XREFs of MiGetVadPtesInCluster @ 0x1404F8D3C
 * Callers:
 *     MiPrepareWriteWatchPacket @ 0x140A8DCD0 (MiPrepareWriteWatchPacket.c)
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
