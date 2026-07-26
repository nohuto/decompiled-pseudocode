/*
 * XREFs of ?Stop@NdisStatisticalStopwatch@@QEAA_KXZ @ 0x14005AA00
 * Callers:
 *     ??1NdisDmaAllocationHistogramStopwatch@@QEAA@XZ @ 0x1401374E0 (--1NdisDmaAllocationHistogramStopwatch@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall NdisStatisticalStopwatch::Stop(NdisStatisticalStopwatch *this)
{
  LARGE_INTEGER v2; // rax
  unsigned __int64 result; // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  v2 = KeQueryPerformanceCounter(&PerformanceFrequency);
  result = (unsigned __int64)(1000000 * (v2.QuadPart - *((_QWORD *)this + 1))) / PerformanceFrequency.QuadPart;
  _InterlockedAdd64((volatile signed __int64 *)&(&ndisGlobalStatistics)[*(int *)this], result);
  *((_QWORD *)this + 1) = 0LL;
  return result;
}
