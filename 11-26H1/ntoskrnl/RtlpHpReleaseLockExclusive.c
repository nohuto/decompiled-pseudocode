/*
 * XREFs of RtlpHpReleaseLockExclusive @ 0x14034F380
 * Callers:
 *     RtlpHpLfhOwnerCompact @ 0x140349990 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x140349F4C (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x14034B2B0 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpSegLockRelease @ 0x14034DF84 (RtlpHpSegLockRelease.c)
 *     RtlpHpLfhSubsegmentDelayFreeListProcess @ 0x14034DFB0 (RtlpHpLfhSubsegmentDelayFreeListProcess.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x14034E5F0 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhSubsegmentAllocateBlockShared @ 0x14034E850 (RtlpHpLfhSubsegmentAllocateBlockShared.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x14034EE40 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpLfhOwnerListCompact @ 0x14034F430 (RtlpHpLfhOwnerListCompact.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x14034F8C0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegPageRangeShrink @ 0x14034FBC0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegMgrCommit @ 0x140350BD0 (RtlpHpSegMgrCommit.c)
 *     RtlpHpVaMgrCtxFree @ 0x140351F7C (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrAlloc @ 0x140352C2C (RtlpHpVaMgrAlloc.c)
 *     RtlpHpLargeLockRelease @ 0x140356624 (RtlpHpLargeLockRelease.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1403FBD90 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x140468900 (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpSegMgrUnlock @ 0x1404C24DC (RtlpHpSegMgrUnlock.c)
 *     RtlpHpFixedVsAllocate @ 0x1404D1C30 (RtlpHpFixedVsAllocate.c)
 *     RtlpHpFixedVsFree @ 0x1404D6ED0 (RtlpHpFixedVsFree.c)
 *     RtlpHpHeapExtendContext @ 0x1404D88AC (RtlpHpHeapExtendContext.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x140513284 (RtlpHpLfhPrivateSlotCreate.c)
 *     RtlpLogHeapFailure @ 0x140524308 (RtlpLogHeapFailure.c)
 *     RtlpHpLfhContextUnlockExtension @ 0x140532FB0 (RtlpHpLfhContextUnlockExtension.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x14063AAF4 (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x14063AE6C (RtlpHpCustomVaCallbacksRegistrarUnregister.c)
 *     RtlpHpVaMgrCtxAllocatorDereference @ 0x14063BC40 (RtlpHpVaMgrCtxAllocatorDereference.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x14063BCCC (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x14063CB34 (RtlpHpLfhPrivateSlotListCompact.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
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
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
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
      && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery((__int64)CurrentThread, v5);
    }
  }
}
