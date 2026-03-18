/*
 * XREFs of RtlpHpAllocateHeapBackend @ 0x14034B090
 * Callers:
 *     ExAllocateHeapPages @ 0x140346060 (ExAllocateHeapPages.c)
 *     ExAllocateContiguousHeapPool @ 0x14034AA60 (ExAllocateContiguousHeapPool.c)
 *     ExAllocateHeapPool @ 0x1403987D0 (ExAllocateHeapPool.c)
 * Callees:
 *     RtlpHpSegAlloc @ 0x14034B0CC (RtlpHpSegAlloc.c)
 */

__int64 __fastcall RtlpHpAllocateHeapBackend(__int64 a1, int a2, unsigned __int64 a3, int a4)
{
  int v4; // r10d

  v4 = 512;
  if ( a3 <= *(unsigned int *)(a1 + 336) )
    v4 = 320;
  return RtlpHpSegAlloc(v4 + (int)a1, a2, a3, a3, a4);
}
