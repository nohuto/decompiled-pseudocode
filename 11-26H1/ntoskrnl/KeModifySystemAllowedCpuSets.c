/*
 * XREFs of KeModifySystemAllowedCpuSets @ 0x1405F6688
 * Callers:
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 *     KiInitializeReservedCpuSets @ 0x140CD18F0 (KiInitializeReservedCpuSets.c)
 * Callees:
 *     KiAcquireCpuPartitionLock @ 0x1404D0C8C (KiAcquireCpuPartitionLock.c)
 *     KiReleaseCpuPartitionLock @ 0x1404D9D20 (KiReleaseCpuPartitionLock.c)
 *     KiModifySystemAllowedCpuSetsWithLock @ 0x1405F6F08 (KiModifySystemAllowedCpuSetsWithLock.c)
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
