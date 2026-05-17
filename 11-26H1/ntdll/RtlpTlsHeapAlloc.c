/*
 * XREFs of RtlpTlsHeapAlloc @ 0x180093918
 * Callers:
 *     RtlTlsSetValue @ 0x180093850 (RtlTlsSetValue.c)
 *     RtlTlsAlloc @ 0x1800939E0 (RtlTlsAlloc.c)
 * Callees:
 *     <none>
 */

__int64 RtlpTlsHeapAlloc()
{
  return RtlpAllocateHeapMetadata(NtCurrentPeb()->ProcessHeap, 0x2000LL);
}
