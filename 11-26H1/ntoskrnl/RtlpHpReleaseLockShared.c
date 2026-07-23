/*
 * XREFs of RtlpHpReleaseLockShared @ 0x14034DEC0
 * Callers:
 *     RtlpHpLfhOwnerCompact @ 0x140349990 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentReformatCheck @ 0x14034BE98 (RtlpHpLfhSubsegmentReformatCheck.c)
 *     RtlpHpLfhSubsegmentDelayFreeListProcess @ 0x14034DFB0 (RtlpHpLfhSubsegmentDelayFreeListProcess.c)
 *     RtlpHpLfhOwnerListCompact @ 0x14034F430 (RtlpHpLfhOwnerListCompact.c)
 *     RtlpHpAllocVA @ 0x1403660F0 (RtlpHpAllocVA.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1403FBD90 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLargeLockReleaseShared @ 0x1405336A4 (RtlpHpLargeLockReleaseShared.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

void __fastcall RtlpHpReleaseLockShared(struct _KTHREAD *a1, int a2, unsigned __int8 a3)
{
  unsigned __int64 v3; // rdi
  __int64 v5; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  bool v7; // zf
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a3;
  if ( a2 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(&a1->Header.Lock, 0xBFFFFFFF);
      _InterlockedDecrement(&a1->Header.Lock);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(a1, retaddr);
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
    __writecr8(v3);
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&a1->Header.Lock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&a1->Header.Lock);
    KeAbPostRelease((unsigned __int64)a1);
    CurrentThread = KeGetCurrentThread();
    v7 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v7 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery((__int64)CurrentThread, v5);
  }
}
