/*
 * XREFs of DifGetAvailableSystemPages @ 0x14065030C
 * Callers:
 *     DifRegisterObjectTracking @ 0x14064ED80 (DifRegisterObjectTracking.c)
 *     VfLwSPEntry @ 0x1406C4260 (VfLwSPEntry.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MmCreatePartition @ 0x14087015C (MmCreatePartition.c)
 *     MmManagePartitionMemoryInformation @ 0x140ABB3FC (MmManagePartitionMemoryInformation.c)
 */

__int64 DifGetAvailableSystemPages()
{
  __int64 v0; // rbx

  v0 = 0LL;
  if ( DifIsVolatileMode )
    return *(_QWORD *)(*(_QWORD *)stru_140E2ED08.ThreadLock + 22464LL);
  if ( DifpSystemPartition || (int)MmCreatePartition(&DifpSystemPartition, 1LL) >= 0 && DifpSystemPartition )
  {
    memset_0(&DifpSPMemoryInfo, 0, 0xF8uLL);
    dword_140E28424 = -1;
    dword_140E28428 = -1;
    if ( (int)MmManagePartitionMemoryInformation(&DifpSystemPartition, &DifpSPMemoryInfo, 248LL, 0LL) >= 0 )
      return qword_140E28458;
  }
  return v0;
}
