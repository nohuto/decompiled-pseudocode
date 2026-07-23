/*
 * XREFs of KiUpdateSystemAvailableCpuState @ 0x1405E8664
 * Callers:
 *     KeTransitionProcessorParkState @ 0x1404208A0 (KeTransitionProcessorParkState.c)
 *     KeCpuPartitionMoveCpus @ 0x1405F6240 (KeCpuPartitionMoveCpus.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeIsForceParkingEnabled @ 0x1404366F0 (KeIsForceParkingEnabled.c)
 *     KiRemoveForceParkedProcessorsFromAffinity @ 0x140452C8C (KiRemoveForceParkedProcessorsFromAffinity.c)
 *     RtlWriteAcquireTickLock @ 0x1404643A4 (RtlWriteAcquireTickLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeQueryCpuPartitionAffinityEx @ 0x14052DA38 (KeQueryCpuPartitionAffinityEx.c)
 */

__int64 KiUpdateSystemAvailableCpuState()
{
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  RtlWriteAcquireTickLock((signed __int64 *)&KiSupervisorXStateFeaturesLock.WaitBlock[1].WaitListEntry.Blink);
  KeQueryCpuPartitionAffinityEx(
    (struct _KAFFINITY_EX **)KiSystemCpuPartition,
    (struct _KAFFINITY_EX *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[64]);
  if ( KeIsForceParkingEnabled() )
    KiRemoveForceParkedProcessorsFromAffinity(&KiSupervisorXStateFeaturesLock.WaitBlockFill11[64]);
  ++KiSupervisorXStateFeaturesLock.WaitBlock[1].WaitListEntry.Blink;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
