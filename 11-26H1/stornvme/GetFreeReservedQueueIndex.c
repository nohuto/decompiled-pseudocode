/*
 * XREFs of GetFreeReservedQueueIndex @ 0x14001AECC
 * Callers:
 *     IoctlCreateReservedQueuePair @ 0x14001AF84 (IoctlCreateReservedQueuePair.c)
 *     NVMeReservedCompletionQueueCreate @ 0x140029A20 (NVMeReservedCompletionQueueCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetFreeReservedQueueIndex(__int64 a1)
{
  unsigned __int16 i; // r8

  for ( i = 0; i < *(_WORD *)(a1 + 982); ++i )
  {
    if ( !*(_WORD *)(((unsigned __int64)i << 6) + *(_QWORD *)(a1 + 960) + 42) )
      return i;
  }
  return 0xFFFFLL;
}
