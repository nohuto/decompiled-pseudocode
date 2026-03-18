/*
 * XREFs of MmGetPeakCommitment @ 0x140491850
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x140A5C194 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetPeakCommitment(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * a1) + 17216LL);
}
