/*
 * XREFs of MmGetResidentAvailablePages @ 0x14049462C
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x140A5C194 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetResidentAvailablePages(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * a1) + 22528LL);
}
