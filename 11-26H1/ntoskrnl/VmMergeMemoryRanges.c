/*
 * XREFs of VmMergeMemoryRanges @ 0x140B23B80
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     VmpMergeMemoryRanges @ 0x140513450 (VmpMergeMemoryRanges.c)
 *     VmpLogSplitMergeMemoryRange @ 0x140824C30 (VmpLogSplitMergeMemoryRange.c)
 */

__int64 __fastcall VmMergeMemoryRanges(unsigned __int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  int v4; // esi
  struct _LIST_ENTRY *Blink; // rbp
  unsigned int v8; // edi
  __int64 v10; // rcx
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v12; // rax
  void *v13; // rdx
  AutoBoost *v14; // rdi

  v4 = 0;
  Blink = KeGetCurrentThread()->ApcState.Process[3].ProcessListEntry.Blink;
  if ( a2 == -1 || (a1 & 0xFFF) != 0 )
  {
    v8 = -1073741811;
  }
  else if ( Blink )
  {
    CurrentThread = KeGetCurrentThread();
    v4 = 1;
    --CurrentThread->KernelApcDisable;
    v12 = (AutoBoost *)KeAbPreAcquire((__int64)&Blink[8].Blink, 0LL, 0LL, a4);
    v14 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&Blink[8].Blink, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Blink[8].Blink, v12, (__int64)&Blink[8].Blink);
    if ( v14 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v14, v13);
      else
        *((_BYTE *)v14 + 10) = 1;
    }
    v8 = VmpMergeMemoryRanges((__int64)Blink, a1 >> 12, a2);
  }
  else
  {
    v8 = -1073741688;
  }
  if ( stru_140F06A28.InitialStack )
  {
    if ( *(_DWORD *)stru_140F06A28.InitialStack )
    {
      if ( *((char *)stru_140F06A28.InitialStack + 16) < 0 )
      {
        v10 = *((_QWORD *)stru_140F06A28.InitialStack + 3);
        if ( (v10 & 0x80) == v10 )
          VmpLogSplitMergeMemoryRange(v10, 0, a1, a2, v8);
      }
    }
  }
  if ( v4 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Blink[8].Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Blink[8].Blink);
    KeAbPostRelease((unsigned __int64)&Blink[8].Blink);
    KeLeaveCriticalRegion();
  }
  return v8;
}
