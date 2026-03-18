/*
 * XREFs of KeModifySystemAllowedCpuSets @ 0x1405F3CC8
 * Callers:
 *     NtSetSystemInformation @ 0x140833840 (NtSetSystemInformation.c)
 *     KiInitializeReservedCpuSets @ 0x140CCB790 (KiInitializeReservedCpuSets.c)
 * Callees:
 *     KiAcquireCpuPartitionLock @ 0x1404D74BC (KiAcquireCpuPartitionLock.c)
 *     KiReleaseCpuPartitionLock @ 0x1404E0640 (KiReleaseCpuPartitionLock.c)
 *     KiModifySystemAllowedCpuSetsWithLock @ 0x1405F4548 (KiModifySystemAllowedCpuSetsWithLock.c)
 */

__int64 __fastcall KeModifySystemAllowedCpuSets(int a1, int a2, __int64 a3, int a4, unsigned __int8 a5)
{
  unsigned int v8; // ebx

  a5 = 0;
  KiAcquireCpuPartitionLock(KiSystemCpuPartition, &a5);
  v8 = KiModifySystemAllowedCpuSetsWithLock(a1, a2, 0, a4, 0);
  KiReleaseCpuPartitionLock(KiSystemCpuPartition, a5);
  return v8;
}
