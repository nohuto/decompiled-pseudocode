/*
 * XREFs of VmSplitMemoryRange @ 0x140B1D5D0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     VmpSplitMemoryRange @ 0x1404C8B68 (VmpSplitMemoryRange.c)
 *     VmpLogSplitMergeMemoryRange @ 0x14081EA20 (VmpLogSplitMergeMemoryRange.c)
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
  if ( stru_140F066E8.QuantumTarget
    && *(_DWORD *)stru_140F066E8.QuantumTarget
    && tlgKeywordOn(stru_140F066E8.QuantumTarget, 128LL) )
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
