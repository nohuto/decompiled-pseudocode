/*
 * XREFs of RtlpInitializeLeakDetection @ 0x1800C45C8
 * Callers:
 *     RtlDetectHeapLeaks @ 0x1800C43E0 (RtlDetectHeapLeaks.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlpInitializeMap @ 0x1800C4FD4 (RtlpInitializeMap.c)
 */

char RtlpInitializeLeakDetection()
{
  __int64 Heap_0; // rax
  _QWORD *v1; // rbx
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rcx

  Heap_0 = RtlAllocateHeap_0();
  RtlpProcessMemoryMap = Heap_0;
  v1 = (_QWORD *)Heap_0;
  if ( Heap_0 )
  {
    RtlpInitializeMap(Heap_0, 0LL);
    qword_1801CCE58 = (__int64)&RtlpBusyList;
    RtlpBusyList = (__int64)&RtlpBusyList;
    qword_1801CCE68 = (__int64)&RtlpLeakList;
    RtlpLeakList = (__int64)&RtlpLeakList;
    v2 = 0x100000LL;
    do
    {
      v3 = v2;
      v2 <<= 8;
    }
    while ( v2 >= v3 );
    *v1 = v3;
    v1[2] = -1LL;
    RtlpTempBlocks = (void *)RtlAllocateHeap_0();
    LOBYTE(Heap_0) = RtlpTempBlocks != 0LL;
  }
  return Heap_0;
}
