/*
 * XREFs of RtlpTlsHeapAlloc @ 0x1800BCC00
 * Callers:
 *     RtlTlsAlloc @ 0x180072BB0 (RtlTlsAlloc.c)
 *     RtlTlsSetValue @ 0x1800BCB60 (RtlTlsSetValue.c)
 * Callees:
 *     <none>
 */

__int64 RtlpTlsHeapAlloc()
{
  return RtlpAllocateHeapMetadata(NtCurrentPeb()->ProcessHeap, 0x2000LL);
}
