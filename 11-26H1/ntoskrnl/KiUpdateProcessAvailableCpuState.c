/*
 * XREFs of KiUpdateProcessAvailableCpuState @ 0x1405E8528
 * Callers:
 *     KeStartThread @ 0x140201AAC (KeStartThread.c)
 *     KeSetUserAffinityThread @ 0x1403F0B04 (KeSetUserAffinityThread.c)
 *     KeSetAffinityProcess @ 0x140505754 (KeSetAffinityProcess.c)
 *     KeQueryProcessAvailableCpus @ 0x1405E8110 (KeQueryProcessAvailableCpus.c)
 *     KiAvailableCpusPartitionWorkItemCallback @ 0x1405E83B0 (KiAvailableCpusPartitionWorkItemCallback.c)
 *     KeAssignCpuPartitionsToProcess @ 0x1405F5FA0 (KeAssignCpuPartitionsToProcess.c)
 *     KeCpuPartitionMoveCpus @ 0x1405F6240 (KeCpuPartitionMoveCpus.c)
 *     KeRegisterAvailableCpusChangeNotification @ 0x1407BBE24 (KeRegisterAvailableCpusChangeNotification.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     RtlAndAffinityEx @ 0x140253CF4 (RtlAndAffinityEx.c)
 *     KiQueryCpuPartitionAffinityProcess @ 0x14025DAC4 (KiQueryCpuPartitionAffinityProcess.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KeIsForceParkingEnabled @ 0x1404366F0 (KeIsForceParkingEnabled.c)
 *     KiRemoveForceParkedProcessorsFromAffinity @ 0x140452C8C (KiRemoveForceParkedProcessorsFromAffinity.c)
 *     RtlWriteAcquireTickLock @ 0x1404643A4 (RtlWriteAcquireTickLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiUpdateProcessGlobalIdealNode @ 0x1405F75D4 (KiUpdateProcessGlobalIdealNode.c)
 */

__int64 __fastcall KiUpdateProcessAvailableCpuState(__int64 a1, char a2)
{
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // si
  struct _KAFFINITY_EX *v6; // rdx
  _WORD *v7; // rcx
  unsigned __int16 *v8; // rdx
  unsigned __int16 i; // cx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 448);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  if ( !a2 )
    KxAcquireSpinLock(&KiCpuPartitionAssignmentLock);
  RtlWriteAcquireTickLock((signed __int64 *)v2);
  v6 = *(struct _KAFFINITY_EX **)(v2 + 24);
  *(_QWORD *)(v2 + 8) = KiCpuSetSequence;
  KiQueryCpuPartitionAffinityProcess(a1, v6);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  RtlAndAffinityEx(*(unsigned __int16 **)(v2 + 24), *(unsigned __int16 **)(a1 + 80), *(_QWORD *)(v2 + 24));
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( KeIsForceParkingEnabled() )
  {
    v7 = *(_WORD **)(v2 + 24);
    *(_QWORD *)(v2 + 16) = *(_QWORD *)&KiSupervisorXStateFeaturesLock.Timer.Processor;
    KiRemoveForceParkedProcessorsFromAffinity(v7);
  }
  v8 = *(unsigned __int16 **)(v2 + 24);
  for ( i = 0; i < *v8; ++i )
  {
    if ( *(_QWORD *)&v8[4 * i + 4] )
    {
      KiUpdateProcessGlobalIdealNode(a1, v8);
      break;
    }
  }
  ++*(_QWORD *)v2;
  if ( !a2 )
    KxReleaseSpinLock(&KiCpuPartitionAssignmentLock);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
