/*
 * XREFs of MmGetHighestPhysicalPage @ 0x1404BD3D0
 * Callers:
 *     PopPreallocateHibernateMemory @ 0x1407D356C (PopPreallocateHibernateMemory.c)
 *     PopEnableHiberFile @ 0x1409BEEB4 (PopEnableHiberFile.c)
 *     PfpCopyUserPfnPrioRequest @ 0x140A5C958 (PfpCopyUserPfnPrioRequest.c)
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 *     PopBuildMemoryImageHeader @ 0x140BFFC6C (PopBuildMemoryImageHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetHighestPhysicalPage(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * a1) + 22280LL);
}
