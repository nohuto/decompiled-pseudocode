/*
 * XREFs of WdipSemMarkNextTimedOutInstanceForDeletion @ 0x140AD90AC
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x140AD8D80 (WdipTimeoutCheckRoutine.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 */

struct _KTHREAD *__fastcall WdipSemMarkNextTimedOutInstanceForDeletion(
        struct _KTHREAD **a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v6; // rsi
  AutoBoost *v7; // rax
  void *v8; // rdx
  signed __int8 v9; // cf
  AutoBoost *v10; // rbx
  unsigned __int64 *v11; // rdx
  struct _KTHREAD *Thread; // rtt
  struct _KTHREAD *v14; // rdx
  struct _KTHREAD *v15; // rcx

  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  --CurrentThread->KernelApcDisable;
  v7 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F03F40.WaitBlock[0].Thread, 0LL, 0LL, a4);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140F03F40.WaitBlockFill11[24], 0LL);
  v10 = v7;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&stru_140F03F40.WaitBlock[0].Thread,
      v7,
      (__int64)&stru_140F03F40.WaitBlock[0].Thread);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v8);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  if ( a1 )
  {
    v14 = *a1;
    while ( v14 != (struct _KTHREAD *)&stru_140F03F40.320 )
    {
      v15 = v14;
      v14 = *(struct _KTHREAD **)&v14->Header.Lock;
      if ( ++LODWORD(v15->InitialStack) >= 0xAu && *(_BYTE *)(v15->QuantumTarget + 1176) && !HIDWORD(v15->InitialStack) )
      {
        HIDWORD(v15->InitialStack) = 1;
        v6 = v15;
        break;
      }
    }
  }
  _m_prefetchw(&stru_140F03F40.WaitBlockFill11[24]);
  v11 = &stru_140F03F40.WaitBlock[0].Thread[-1].Padding[3];
  if ( ((unsigned __int64)stru_140F03F40.WaitBlock[0].Thread & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v11 = 0LL;
  if ( (stru_140F03F40.WaitBlockFill5[24] & 2) != 0
    || (Thread = stru_140F03F40.WaitBlock[0].Thread,
        Thread != (struct _KTHREAD *)_InterlockedCompareExchange64(
                                       (volatile signed __int64 *)&stru_140F03F40.WaitBlock[0].Thread,
                                       (signed __int64)v11,
                                       (signed __int64)stru_140F03F40.WaitBlock[0].Thread)) )
  {
    ExfReleasePushLock(&stru_140F03F40.WaitBlock[0].Thread);
  }
  KeAbPostRelease((unsigned __int64)&stru_140F03F40.WaitBlock[0].Thread);
  KeLeaveCriticalRegion();
  return v6;
}
