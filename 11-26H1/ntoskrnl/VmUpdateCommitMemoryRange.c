/*
 * XREFs of VmUpdateCommitMemoryRange @ 0x14081C1A0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     VmpUpdateCommitStateMemoryRange @ 0x1406C1C10 (VmpUpdateCommitStateMemoryRange.c)
 */

__int64 __fastcall VmUpdateCommitMemoryRange(__int128 *a1, ULONG a2, struct _LIST_ENTRY *a3)
{
  _KPROCESS *Process; // r9
  struct _LIST_ENTRY *Blink; // rbp
  unsigned int updated; // esi
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v10; // rax
  void *v11; // rdx
  AutoBoost *v12; // rsi

  Process = KeGetCurrentThread()->ApcState.Process;
  Blink = Process[3].ProcessListEntry.Blink;
  if ( Blink )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v10 = (AutoBoost *)KeAbPreAcquire((__int64)&Blink[8].Blink, 0LL, 0LL, (struct _KLOCK_ENTRIES *)Process);
    v12 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&Blink[8].Blink, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Blink[8].Blink, v10, (__int64)&Blink[8].Blink);
    if ( v12 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v12, v11);
      else
        *((_BYTE *)v12 + 10) = 1;
    }
    if ( Blink[7].Blink == a3 )
      updated = VmpUpdateCommitStateMemoryRange((volatile LONG *)Blink, a1, a2);
    else
      updated = -1073740007;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Blink[8].Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Blink[8].Blink);
    KeAbPostRelease((unsigned __int64)&Blink[8].Blink);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741688;
  }
  return updated;
}
