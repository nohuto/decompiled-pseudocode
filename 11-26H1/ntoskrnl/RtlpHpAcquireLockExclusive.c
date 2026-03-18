/*
 * XREFs of RtlpHpAcquireLockExclusive @ 0x14027E170
 * Callers:
 *     RtlpHpLfhPrivateSlotShutdown @ 0x140347ECC (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x140349230 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhSubsegmentDelayFreeListProcess @ 0x14034BF30 (RtlpHpLfhSubsegmentDelayFreeListProcess.c)
 *     RtlpHpLfhSubsegmentAllocateBlockShared @ 0x14034C7D0 (RtlpHpLfhSubsegmentAllocateBlockShared.c)
 *     RtlpHpLfhOwnerListCompact @ 0x14034D3B0 (RtlpHpLfhOwnerListCompact.c)
 *     RtlpHpVaMgrCtxFree @ 0x14034FEFC (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrAlloc @ 0x140350BAC (RtlpHpVaMgrAlloc.c)
 *     RtlpHpLargeLockAcquire @ 0x140354858 (RtlpHpLargeLockAcquire.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x140402C90 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpSegMgrLock @ 0x1404C457C (RtlpHpSegMgrLock.c)
 *     RtlpHpFixedVsAllocate @ 0x1404D8460 (RtlpHpFixedVsAllocate.c)
 *     RtlpHpFixedVsFree @ 0x1404DD7F0 (RtlpHpFixedVsFree.c)
 *     RtlpHpHeapExtendContext @ 0x1404DF1CC (RtlpHpHeapExtendContext.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x140519814 (RtlpHpLfhPrivateSlotCreate.c)
 *     RtlpLogHeapFailure @ 0x140521C9C (RtlpLogHeapFailure.c)
 *     RtlpHpLfhContextLockExtension @ 0x14053148C (RtlpHpLfhContextLockExtension.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x140637AF0 (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x140637E68 (RtlpHpCustomVaCallbacksRegistrarUnregister.c)
 *     RtlpHpVaMgrCtxAllocatorDereference @ 0x140638C30 (RtlpHpVaMgrCtxAllocatorDereference.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x140638CBC (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x140639B24 (RtlpHpLfhPrivateSlotListCompact.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402474C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140249B40 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall RtlpHpAcquireLockExclusive(int *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v6; // rax
  void *v7; // rdx
  AutoBoost *v8; // rdi
  unsigned __int8 CurrentIrql; // di
  unsigned int v11; // esi
  int v12; // eax
  __int64 v13; // rcx

  if ( (_DWORD)a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    {
      v11 = 0;
      if ( _interlockedbittestandset(a1, 0x1Fu) )
        v11 = ExpWaitForSpinLockExclusiveAndAcquire(a1, CurrentIrql);
      v12 = *a1;
      v13 = (unsigned int)*a1;
      for ( LODWORD(v13) = v13 & 0xBFFFFFFF; (_DWORD)v13 != 0x80000000; LODWORD(v13) = v13 & 0xBFFFFFFF )
      {
        if ( (v12 & 0x40000000) == 0 )
          _InterlockedOr(a1, 0x40000000u);
        if ( (++v11 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v13, a2, a3) )
        {
          HvlNotifyLongSpinWait(v11);
        }
        else
        {
          _mm_pause();
        }
        v12 = *a1;
        v13 = (unsigned int)*a1;
      }
    }
    else
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1, CurrentIrql);
    }
    return CurrentIrql;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v6 = (AutoBoost *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, a4);
    v8 = v6;
    if ( _interlockedbittestandset64(a1, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1, v6, (__int64)a1);
    if ( !v8 )
      return -1;
    if ( (KiAbpGlobalState & 1) == 0 )
    {
      *((_BYTE *)v8 + 10) = 1;
      return -1;
    }
    AutoBoost::KiAbpPostAcquire(v8, v7);
    return -1;
  }
}
