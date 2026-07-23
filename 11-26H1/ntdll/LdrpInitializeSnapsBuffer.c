/*
 * XREFs of LdrpInitializeSnapsBuffer @ 0x1800FBA70
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 */

__int64 LdrpInitializeSnapsBuffer()
{
  PVOID Heap_0; // rax
  __int64 result; // rax

  Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, 0x1000uLL);
  if ( !Heap_0 )
    return 3221225495LL;
  qword_1801CA848 = Heap_0;
  qword_1801CA838 = (__int64)Heap_0;
  result = 0LL;
  LdrpSnapsUnicodeString = 0x10000000;
  LdrpSnapsUnicodeString2 = 0x10000000;
  return result;
}
