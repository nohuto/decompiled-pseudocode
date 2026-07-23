/*
 * XREFs of RtlpHpAcquireQueuedLockExclusive @ 0x14027DED0
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x14024D340 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkFree @ 0x140355330 (RtlpHpVsChunkFree.c)
 *     RtlpHpVsContextMultiAlloc @ 0x1404610A8 (RtlpHpVsContextMultiAlloc.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x14047F8C8 (RtlpHpVsSubsegmentCommitPages.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140248E20 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14024B4A0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall RtlpHpAcquireQueuedLockExclusive(int *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int8 CurrentIrql; // si
  unsigned int v7; // ebp
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v11; // rax
  void *v12; // rdx
  AutoBoost *v13; // rdi

  *(_QWORD *)(a3 + 8) = a1;
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
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v7 = 0;
      if ( _interlockedbittestandset(a1, 0x1Fu) )
        v7 = ExpWaitForSpinLockExclusiveAndAcquire(a1, CurrentIrql);
      v8 = (unsigned int)*a1;
      v9 = v8 & 0xFFFFFFFFBFFFFFFFuLL;
      if ( (v8 & 0xBFFFFFFF) != 0x80000000 )
      {
        do
        {
          if ( (v8 & 0x40000000) == 0 )
            _InterlockedOr(a1, 0x40000000u);
          if ( (++v7 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v9, v8, a3) )
          {
            HvlNotifyLongSpinWait(v7);
          }
          else
          {
            _mm_pause();
          }
          v8 = (unsigned int)*a1;
        }
        while ( (*a1 & 0xBFFFFFFF) != 0x80000000 );
      }
    }
    else
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1, CurrentIrql);
    }
    *(_QWORD *)(a3 + 16) = CurrentIrql;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v11 = (AutoBoost *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, a4);
    v13 = v11;
    if ( _interlockedbittestandset64(a1, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1, v11, (__int64)a1);
    if ( v13 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v13, v12);
      else
        *((_BYTE *)v13 + 10) = 1;
    }
  }
}
