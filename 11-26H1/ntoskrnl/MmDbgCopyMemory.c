/*
 * XREFs of MmDbgCopyMemory @ 0x140703BF4
 * Callers:
 *     KiTpWriteMemory @ 0x1405FF1C4 (KiTpWriteMemory.c)
 *     KdpReadPhysicalMemory @ 0x140C1A5BC (KdpReadPhysicalMemory.c)
 *     KdpSearchMemory @ 0x140C1ACE4 (KdpSearchMemory.c)
 *     KdpSearchPhysicalPage @ 0x140C1AEE0 (KdpSearchPhysicalPage.c)
 *     KdpCopyMemoryChunks @ 0x140C1D780 (KdpCopyMemoryChunks.c)
 * Callees:
 *     MiDbgCopyMemory @ 0x140702400 (MiDbgCopyMemory.c)
 */

__int64 __fastcall MmDbgCopyMemory(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned int v6; // edi
  __int64 result; // rax
  unsigned int v10; // esi

  v6 = a3;
  if ( (a5 & 0x40) != 0 )
  {
    if ( (a5 & 2) == 0 && (a5 & 1) != 0 && (a5 & 4) != 0 )
      goto LABEL_5;
    return 3221225714LL;
  }
  if ( (a5 & 4) == 0 && KeGetCurrentIrql() > 1u )
    return 3221225714LL;
LABEL_5:
  if ( a4 > 2 && a4 != 4 && a4 != 8 )
    return 2147483650LL;
  result = 0LL;
  if ( a3 )
  {
    do
    {
      v10 = v6;
      if ( 4096 - (unsigned int)(a1 & 0xFFF) <= v6 )
        v10 = 4096 - (a1 & 0xFFF);
      result = MiDbgCopyMemory(a1, a2, v10, a4, a5);
      if ( (int)result < 0 )
        break;
      a1 += v10;
      a2 += v10;
      v6 -= v10;
    }
    while ( v6 );
  }
  return result;
}
