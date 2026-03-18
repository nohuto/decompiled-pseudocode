/*
 * XREFs of KiUpdateProcessAvailableCpuState @ 0x1405E5BB8
 * Callers:
 *     KeStartThread @ 0x140201AAC (KeStartThread.c)
 *     KeSetUserAffinityThread @ 0x1403F7154 (KeSetUserAffinityThread.c)
 *     KeSetAffinityProcess @ 0x14050BCE4 (KeSetAffinityProcess.c)
 *     KeQueryProcessAvailableCpus @ 0x1405E57A0 (KeQueryProcessAvailableCpus.c)
 *     KiAvailableCpusPartitionWorkItemCallback @ 0x1405E5A40 (KiAvailableCpusPartitionWorkItemCallback.c)
 *     KeAssignCpuPartitionsToProcess @ 0x1405F35E0 (KeAssignCpuPartitionsToProcess.c)
 *     KeCpuPartitionMoveCpus @ 0x1405F3880 (KeCpuPartitionMoveCpus.c)
 *     KeRegisterAvailableCpusChangeNotification @ 0x1407B8DC4 (KeRegisterAvailableCpusChangeNotification.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     RtlAndAffinityEx @ 0x140252394 (RtlAndAffinityEx.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402DC6D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402EDFB0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     KiRemoveForceParkedProcessorsFromAffinity @ 0x1403EE15C (KiRemoveForceParkedProcessorsFromAffinity.c)
 *     KeIsForceParkingEnabled @ 0x14043DBE0 (KeIsForceParkingEnabled.c)
 *     RtlWriteAcquireTickLock @ 0x14046AC24 (RtlWriteAcquireTickLock.c)
 *     KiQueryCpuPartitionAffinityProcess @ 0x1404D5808 (KiQueryCpuPartitionAffinityProcess.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiUpdateProcessGlobalIdealNode @ 0x1405F4C14 (KiUpdateProcessGlobalIdealNode.c)
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
    *(_QWORD *)(v2 + 16) = KiSupervisorXStateFeaturesLock.WaitBlock[0].Thread;
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
