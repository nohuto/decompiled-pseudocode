/*
 * XREFs of RtlpHpSegLockAcquire @ 0x14027F770
 * Callers:
 *     RtlpHpSegContextCompact @ 0x14034742C (RtlpHpSegContextCompact.c)
 *     RtlpHpSegPageRangeAllocate @ 0x14034B898 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x14034D840 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegPageRangeShrink @ 0x14034DB40 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegSuballocatorFree @ 0x1404DC6E0 (RtlpHpSegSuballocatorFree.c)
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

char __fastcall RtlpHpSegLockAcquire(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  int *v4; // rbx
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v6; // rax
  void *v7; // rdx
  AutoBoost *v8; // rdi
  unsigned __int8 CurrentIrql; // di
  unsigned int v11; // esi
  int v12; // eax
  __int64 v13; // rcx

  v4 = (int *)(a1 + 64);
  if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
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
      if ( _interlockedbittestandset(v4, 0x1Fu) )
        v11 = ExpWaitForSpinLockExclusiveAndAcquire(v4, CurrentIrql);
      v12 = *v4;
      v13 = (unsigned int)*v4;
      for ( LODWORD(v13) = v13 & 0xBFFFFFFF; (_DWORD)v13 != 0x80000000; LODWORD(v13) = v13 & 0xBFFFFFFF )
      {
        if ( (v12 & 0x40000000) == 0 )
          _InterlockedOr(v4, 0x40000000u);
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
        v12 = *v4;
        v13 = (unsigned int)*v4;
      }
    }
    else
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v4, CurrentIrql);
    }
    return CurrentIrql;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v6 = (AutoBoost *)KeAbPreAcquire(a1 + 64, 0LL, 0LL, a4);
    v8 = v6;
    if ( _interlockedbittestandset64(v4, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v4, v6, (__int64)v4);
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
