/*
 * XREFs of RtlpHpReleaseLockExclusive @ 0x14034D300
 * Callers:
 *     RtlpHpLfhOwnerCompact @ 0x140347910 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x140347ECC (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x140349230 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpSegLockRelease @ 0x14034BF04 (RtlpHpSegLockRelease.c)
 *     RtlpHpLfhSubsegmentDelayFreeListProcess @ 0x14034BF30 (RtlpHpLfhSubsegmentDelayFreeListProcess.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x14034C570 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhSubsegmentAllocateBlockShared @ 0x14034C7D0 (RtlpHpLfhSubsegmentAllocateBlockShared.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x14034CDC0 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpLfhOwnerListCompact @ 0x14034D3B0 (RtlpHpLfhOwnerListCompact.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x14034D840 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegPageRangeShrink @ 0x14034DB40 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegMgrCommit @ 0x14034EB50 (RtlpHpSegMgrCommit.c)
 *     RtlpHpVaMgrCtxFree @ 0x14034FEFC (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrAlloc @ 0x140350BAC (RtlpHpVaMgrAlloc.c)
 *     RtlpHpLargeLockRelease @ 0x14035487C (RtlpHpLargeLockRelease.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x140402C90 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x14046F180 (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpSegMgrUnlock @ 0x1404C879C (RtlpHpSegMgrUnlock.c)
 *     RtlpHpFixedVsAllocate @ 0x1404D8460 (RtlpHpFixedVsAllocate.c)
 *     RtlpHpFixedVsFree @ 0x1404DD7F0 (RtlpHpFixedVsFree.c)
 *     RtlpHpHeapExtendContext @ 0x1404DF1CC (RtlpHpHeapExtendContext.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x140519814 (RtlpHpLfhPrivateSlotCreate.c)
 *     RtlpLogHeapFailure @ 0x140521C9C (RtlpLogHeapFailure.c)
 *     RtlpHpLfhContextUnlockExtension @ 0x140530AB0 (RtlpHpLfhContextUnlockExtension.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x140637AF0 (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x140637E68 (RtlpHpCustomVaCallbacksRegistrarUnregister.c)
 *     RtlpHpVaMgrCtxAllocatorDereference @ 0x140638C30 (RtlpHpVaMgrCtxAllocatorDereference.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x140638CBC (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x140639B24 (RtlpHpLfhPrivateSlotListCompact.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void __fastcall RtlpHpReleaseLockExclusive(struct _KTHREAD *a1, int a2, unsigned __int8 a3)
{
  unsigned __int64 v3; // rdi
  __int64 v5; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v3 = a3;
  if ( a2 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      a1->Header.LockNV = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
    __writecr8(v3);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&a1->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&a1->Header.Lock);
    KeAbPostRelease((unsigned __int64)a1);
    CurrentThread = KeGetCurrentThread();
    if ( CurrentThread->SpecialApcDisable++ == -1
      && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery((__int64)CurrentThread, v5);
    }
  }
}
