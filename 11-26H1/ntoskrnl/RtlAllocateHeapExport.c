/*
 * XREFs of RtlAllocateHeapExport @ 0x140619688
 * Callers:
 *     RtlAllocateHeap @ 0x14051C360 (RtlAllocateHeap.c)
 * Callees:
 *     RtlAllocateHeapFull @ 0x1406196B8 (RtlAllocateHeapFull.c)
 */

__int64 __fastcall RtlAllocateHeapExport(void *a1)
{
  return RtlAllocateHeapFull(a1);
}
