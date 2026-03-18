/*
 * XREFs of RtlpHpReleaseLockShared @ 0x14034BE40
 * Callers:
 *     RtlpHpLfhOwnerCompact @ 0x140347910 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentReformatCheck @ 0x140349E18 (RtlpHpLfhSubsegmentReformatCheck.c)
 *     RtlpHpLfhSubsegmentDelayFreeListProcess @ 0x14034BF30 (RtlpHpLfhSubsegmentDelayFreeListProcess.c)
 *     RtlpHpLfhOwnerListCompact @ 0x14034D3B0 (RtlpHpLfhOwnerListCompact.c)
 *     RtlpHpAllocVA @ 0x140364350 (RtlpHpAllocVA.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x140402C90 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLargeLockReleaseShared @ 0x1405311A4 (RtlpHpLargeLockReleaseShared.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036A848 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
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
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
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
    if ( v7 && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery((__int64)CurrentThread, v5);
  }
}
