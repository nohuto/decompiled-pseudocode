/*
 * XREFs of VmSplitMemoryRange @ 0x140B1F750
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     VmpSplitMemoryRange @ 0x1404C2504 (VmpSplitMemoryRange.c)
 *     VmpLogSplitMergeMemoryRange @ 0x140824C30 (VmpLogSplitMergeMemoryRange.c)
 */

__int64 __fastcall VmSplitMemoryRange(unsigned __int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  int v4; // r12d
  struct _LIST_ENTRY *Blink; // rsi
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v9; // rax
  void *v10; // rdx
  AutoBoost *v11; // rdi
  unsigned int v12; // edi
  __int64 v14; // rcx

  v4 = 0;
  Blink = KeGetCurrentThread()->ApcState.Process[3].ProcessListEntry.Blink;
  if ( a2 == -1 || (a1 & 0xFFF) != 0 )
  {
    v12 = -1073741811;
  }
  else if ( Blink )
  {
    CurrentThread = KeGetCurrentThread();
    v4 = 1;
    --CurrentThread->KernelApcDisable;
    v9 = (AutoBoost *)KeAbPreAcquire((__int64)&Blink[8].Blink, 0LL, 0LL, a4);
    v11 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&Blink[8].Blink, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Blink[8].Blink, v9, (__int64)&Blink[8].Blink);
    if ( v11 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v11, v10);
      else
        *((_BYTE *)v11 + 10) = 1;
    }
    v12 = VmpSplitMemoryRange((PEX_SPIN_LOCK)Blink, a1 >> 12, a2);
  }
  else
  {
    v12 = -1073741688;
  }
  if ( stru_140F06A28.InitialStack
    && *(_DWORD *)stru_140F06A28.InitialStack
    && tlgKeywordOn((__int64)stru_140F06A28.InitialStack, 128LL) )
  {
    VmpLogSplitMergeMemoryRange(v14, 1, a1, a2, v12);
  }
  if ( v4 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Blink[8].Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Blink[8].Blink);
    KeAbPostRelease((unsigned __int64)&Blink[8].Blink);
    KeLeaveCriticalRegion();
  }
  return v12;
}
