/*
 * XREFs of MmGetAvailablePages @ 0x14048C960
 * Callers:
 *     ExpQueryNumaAvailableMemory @ 0x14083902C (ExpQueryNumaAvailableMemory.c)
 *     ExpQuerySystemPerformanceInformation @ 0x140A69154 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetAvailablePages(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * a1) + 22464LL);
}
