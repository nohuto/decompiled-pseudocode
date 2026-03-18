/*
 * XREFs of RtlCreateHeap @ 0x140B3E7E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateHeap @ 0x1404E3978 (RtlpCreateHeap.c)
 */

PVOID __stdcall RtlCreateHeap(
        ULONG Flags,
        PVOID HeapBase,
        SIZE_T ReserveSize,
        SIZE_T CommitSize,
        PVOID Lock,
        PRTL_HEAP_PARAMETERS Parameters)
{
  return RtlpCreateHeap(Flags, (char *)HeapBase, (void *)ReserveSize, CommitSize, (__int64)Lock, (__int128 *)Parameters);
}
