/*
 * XREFs of MmGetPeakCommitment @ 0x14048B3A0
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x140A69154 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetPeakCommitment(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * a1) + 17216LL);
}
