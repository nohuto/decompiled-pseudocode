/*
 * XREFs of RtlpHpAllocateHeapBackend @ 0x1800DD904
 * Callers:
 *     RtlpHpAllocateHeap @ 0x180091890 (RtlpHpAllocateHeap.c)
 * Callees:
 *     RtlpHpSegAlloc @ 0x1800DD93C (RtlpHpSegAlloc.c)
 */

__int64 __fastcall RtlpHpAllocateHeapBackend(__int64 a1, int a2, unsigned __int64 a3, int a4)
{
  return RtlpHpSegAlloc((*(unsigned int *)(a1 + 336) < a3 ? 512 : 320) + (int)a1, a2, a3, a3, a4);
}
