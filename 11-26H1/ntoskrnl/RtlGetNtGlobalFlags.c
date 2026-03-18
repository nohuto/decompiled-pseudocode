/*
 * XREFs of RtlGetNtGlobalFlags @ 0x140B536C0
 * Callers:
 *     RtlpCreateHeap @ 0x1404E3978 (RtlpCreateHeap.c)
 *     RtlpAllocateHeap @ 0x14052125C (RtlpAllocateHeap.c)
 * Callees:
 *     <none>
 */

__int64 RtlGetNtGlobalFlags()
{
  return NtGlobalFlag;
}
