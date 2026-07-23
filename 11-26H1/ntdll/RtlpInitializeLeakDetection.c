/*
 * XREFs of RtlpInitializeLeakDetection @ 0x1800C1D88
 * Callers:
 *     RtlDetectHeapLeaks @ 0x1800C1BA0 (RtlDetectHeapLeaks.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlpInitializeMap @ 0x1800C2794 (RtlpInitializeMap.c)
 */

char RtlpInitializeLeakDetection()
{
  unsigned __int64 *Heap_0; // rax
  unsigned __int64 *v1; // rbx
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rcx
  PVOID v4; // rcx

  Heap_0 = (unsigned __int64 *)RtlAllocateHeap_0(RtlpLeakHeap, 0, 0x840uLL);
  RtlpProcessMemoryMap = (__int64)Heap_0;
  v1 = Heap_0;
  if ( Heap_0 )
  {
    RtlpInitializeMap(Heap_0, 0LL);
    qword_1801CBE88 = (__int64)&RtlpBusyList;
    RtlpBusyList = (__int64)&RtlpBusyList;
    qword_1801CBEA8 = (__int64)&RtlpLeakList;
    RtlpLeakList = (__int64)&RtlpLeakList;
    v2 = 0x100000LL;
    do
    {
      v3 = v2;
      v2 <<= 8;
    }
    while ( v2 >= v3 );
    *v1 = v3;
    v4 = RtlpLeakHeap;
    v1[2] = -1LL;
    RtlpTempBlocks = RtlAllocateHeap_0(v4, 0, 0x28000uLL);
    LOBYTE(Heap_0) = RtlpTempBlocks != 0LL;
  }
  return (char)Heap_0;
}
