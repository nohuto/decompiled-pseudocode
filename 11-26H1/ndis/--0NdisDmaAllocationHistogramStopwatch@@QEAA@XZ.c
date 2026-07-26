/*
 * XREFs of ??0NdisDmaAllocationHistogramStopwatch@@QEAA@XZ @ 0x140169A30
 * Callers:
 *     NdisAllocateSharedMemory @ 0x1400621F0 (NdisAllocateSharedMemory.c)
 * Callees:
 *     <none>
 */

NdisDmaAllocationHistogramStopwatch *__fastcall NdisDmaAllocationHistogramStopwatch::NdisDmaAllocationHistogramStopwatch(
        NdisDmaAllocationHistogramStopwatch *this)
{
  *(_DWORD *)this = 2;
  *((_QWORD *)this + 1) = 0LL;
  *((LARGE_INTEGER *)this + 1) = KeQueryPerformanceCounter(0LL);
  *((_DWORD *)this + 4) = 0;
  *((_WORD *)this + 10) = 0;
  return this;
}
