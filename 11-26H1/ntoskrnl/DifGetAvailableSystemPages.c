/*
 * XREFs of DifGetAvailableSystemPages @ 0x14064C72C
 * Callers:
 *     DifRegisterObjectTracking @ 0x14064B1A0 (DifRegisterObjectTracking.c)
 *     VfLwSPEntry @ 0x1406C0680 (VfLwSPEntry.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     MmCreatePartition @ 0x140869D7C (MmCreatePartition.c)
 *     MmManagePartitionMemoryInformation @ 0x140AB9F38 (MmManagePartitionMemoryInformation.c)
 */

__int64 DifGetAvailableSystemPages()
{
  __int64 v0; // rbx

  v0 = 0LL;
  if ( DifIsVolatileMode )
    return *(_QWORD *)(*(_QWORD *)stru_140E2EB88.ThreadLock + 22464LL);
  if ( DifpSystemPartition || (int)MmCreatePartition(&DifpSystemPartition, 1LL) >= 0 && DifpSystemPartition )
  {
    memset_0(&DifpSPMemoryInfo, 0, 0xF8uLL);
    dword_140E282C4 = -1;
    dword_140E282C8 = -1;
    if ( (int)MmManagePartitionMemoryInformation(&DifpSystemPartition, &DifpSPMemoryInfo, 248LL, 0LL) >= 0 )
      return qword_140E282F8;
  }
  return v0;
}
