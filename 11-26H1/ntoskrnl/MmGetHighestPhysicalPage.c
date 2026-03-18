/*
 * XREFs of MmGetHighestPhysicalPage @ 0x1404C3B80
 * Callers:
 *     PopPreallocateHibernateMemory @ 0x1407D04CC (PopPreallocateHibernateMemory.c)
 *     PopEnableHiberFile @ 0x14094353C (PopEnableHiberFile.c)
 *     PfpCopyUserPfnPrioRequest @ 0x140A53668 (PfpCopyUserPfnPrioRequest.c)
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 *     PopBuildMemoryImageHeader @ 0x140BF9C6C (PopBuildMemoryImageHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetHighestPhysicalPage(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * a1) + 22280LL);
}
