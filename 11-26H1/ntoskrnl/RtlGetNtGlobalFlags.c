/*
 * XREFs of RtlGetNtGlobalFlags @ 0x140B55F60
 * Callers:
 *     RtlpCreateHeap @ 0x1404DCF18 (RtlpCreateHeap.c)
 *     RtlpAllocateHeap @ 0x1405238C8 (RtlpAllocateHeap.c)
 * Callees:
 *     <none>
 */

ULONG RtlGetNtGlobalFlags(void)
{
  return NtGlobalFlag;
}
