/*
 * XREFs of LdrpInitializeSnapsBuffer @ 0x1800FC320
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 */

__int64 LdrpInitializeSnapsBuffer()
{
  void *Heap_0; // rax
  __int64 result; // rax

  Heap_0 = (void *)RtlAllocateHeap_0();
  if ( !Heap_0 )
    return 3221225495LL;
  qword_1801CB808 = Heap_0;
  qword_1801CB7F8 = (__int64)Heap_0;
  result = 0LL;
  LdrpSnapsUnicodeString = 0x10000000;
  LdrpSnapsUnicodeString2 = 0x10000000;
  return result;
}
