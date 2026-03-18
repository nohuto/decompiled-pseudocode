/*
 * XREFs of WheapPfaReset @ 0x14084A2CC
 * Callers:
 *     WheaRegChangeNotifyCallback @ 0x140849930 (WheaRegChangeNotifyCallback.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall WheapPfaReset(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v5; // rax
  void *v6; // rdx
  signed __int8 v7; // cf
  AutoBoost *v8; // rdi
  struct _KTHREAD *Blink; // rdi
  struct _KTHREAD *v10; // rcx
  struct _LIST_ENTRY *Flink; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&WheapPfaLock, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64(&WheapPfaLock.Header.Lock, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&WheapPfaLock, v5, (__int64)&WheapPfaLock);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v6);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  Blink = (struct _KTHREAD *)WheapPfaLock.Header.WaitListHead.Blink;
  while ( Blink != (struct _KTHREAD *)&WheapPfaLock.Header.WaitListHead.Blink )
  {
    v10 = Blink;
    Blink = *(struct _KTHREAD **)&Blink->Header.Lock;
    if ( (struct _KTHREAD *)Blink->Header.WaitListHead.Flink != v10
      || (Flink = v10->Header.WaitListHead.Flink, (struct _KTHREAD *)Flink->Flink != v10) )
    {
      __fastfail(3u);
    }
    Flink->Flink = (struct _LIST_ENTRY *)Blink;
    Blink->Header.WaitListHead.Flink = Flink;
    ExFreePoolWithTag(v10, 0x61656857u);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapPfaLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapPfaLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&WheapPfaLock);
  KeLeaveCriticalRegion();
}
