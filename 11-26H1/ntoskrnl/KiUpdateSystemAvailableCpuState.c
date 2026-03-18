/*
 * XREFs of KiUpdateSystemAvailableCpuState @ 0x1405E5CF4
 * Callers:
 *     KeTransitionProcessorParkState @ 0x14042C1D0 (KeTransitionProcessorParkState.c)
 *     KeCpuPartitionMoveCpus @ 0x1405F3880 (KeCpuPartitionMoveCpus.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRemoveForceParkedProcessorsFromAffinity @ 0x1403EE15C (KiRemoveForceParkedProcessorsFromAffinity.c)
 *     KeIsForceParkingEnabled @ 0x14043DBE0 (KeIsForceParkingEnabled.c)
 *     RtlWriteAcquireTickLock @ 0x14046AC24 (RtlWriteAcquireTickLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeQueryCpuPartitionAffinityEx @ 0x14052B518 (KeQueryCpuPartitionAffinityEx.c)
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
  RtlWriteAcquireTickLock((signed __int64 *)&KiSupervisorXStateFeaturesLock.CycleTime);
  KeQueryCpuPartitionAffinityEx(
    (struct _KAFFINITY_EX **)KiSystemCpuPartition,
    (struct _KAFFINITY_EX *)&KiSupervisorXStateFeaturesLock.CurrentRunTime);
  if ( KeIsForceParkingEnabled() )
    KiRemoveForceParkedProcessorsFromAffinity(&KiSupervisorXStateFeaturesLock.CurrentRunTime);
  ++KiSupervisorXStateFeaturesLock.CycleTime;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
