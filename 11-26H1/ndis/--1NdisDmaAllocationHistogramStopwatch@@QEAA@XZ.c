/*
 * XREFs of ??1NdisDmaAllocationHistogramStopwatch@@QEAA@XZ @ 0x1401374E0
 * Callers:
 *     NdisAllocateSharedMemory @ 0x1400621F0 (NdisAllocateSharedMemory.c)
 * Callees:
 *     ??1NdisStatisticalStopwatch@@QEAA@XZ @ 0x140022300 (--1NdisStatisticalStopwatch@@QEAA@XZ.c)
 *     ?Stop@NdisStatisticalStopwatch@@QEAA_KXZ @ 0x14005AA00 (-Stop@NdisStatisticalStopwatch@@QEAA_KXZ.c)
 *     ndisDmaAllocationHistogramAddEntry @ 0x140137510 (ndisDmaAllocationHistogramAddEntry.c)
 */

void __fastcall NdisDmaAllocationHistogramStopwatch::~NdisDmaAllocationHistogramStopwatch(
        NdisDmaAllocationHistogramStopwatch *this)
{
  unsigned __int64 v2; // rax

  v2 = NdisStatisticalStopwatch::Stop(this);
  ndisDmaAllocationHistogramAddEntry(v2, (char *)this + 16);
  NdisStatisticalStopwatch::~NdisStatisticalStopwatch(this);
}
