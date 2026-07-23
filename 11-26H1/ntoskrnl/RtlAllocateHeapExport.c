/*
 * XREFs of RtlAllocateHeapExport @ 0x14061C6E4
 * Callers:
 *     RtlAllocateHeap @ 0x140518F50 (RtlAllocateHeap.c)
 * Callees:
 *     RtlAllocateHeapFull @ 0x14061C714 (RtlAllocateHeapFull.c)
 */

__int64 __fastcall RtlAllocateHeapExport(void *a1)
{
  return RtlAllocateHeapFull(a1);
}
