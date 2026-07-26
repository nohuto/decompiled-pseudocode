/*
 * XREFs of ??1NdisStatisticalStopwatch@@QEAA@XZ @ 0x140022300
 * Callers:
 *     NdisMFreeSharedMemory @ 0x140022170 (NdisMFreeSharedMemory.c)
 *     ndisFreeSharedMemoryInternal @ 0x140022370 (ndisFreeSharedMemoryInternal.c)
 *     NdisFreeSharedMemory @ 0x1400653E0 (NdisFreeSharedMemory.c)
 *     ??1NdisDmaAllocationHistogramStopwatch@@QEAA@XZ @ 0x1401374E0 (--1NdisDmaAllocationHistogramStopwatch@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall NdisStatisticalStopwatch::~NdisStatisticalStopwatch(NdisStatisticalStopwatch *this)
{
  LARGE_INTEGER v2; // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 1) )
  {
    PerformanceFrequency.QuadPart = 0LL;
    v2 = KeQueryPerformanceCounter(&PerformanceFrequency);
    _InterlockedAdd64(
      (volatile signed __int64 *)&(&ndisGlobalStatistics)[*(int *)this],
      (unsigned __int64)(1000000 * (v2.QuadPart - *((_QWORD *)this + 1))) / PerformanceFrequency.QuadPart);
    *((_QWORD *)this + 1) = 0LL;
  }
}
