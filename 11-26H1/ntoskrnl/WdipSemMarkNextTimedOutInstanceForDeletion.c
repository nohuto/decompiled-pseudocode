/*
 * XREFs of WdipSemMarkNextTimedOutInstanceForDeletion @ 0x140AD5B5C
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x140AD5830 (WdipTimeoutCheckRoutine.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
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
  char *v11; // rdx
  void *volatile StackLimit; // rtt
  struct _KTHREAD *v14; // rdx
  struct _KTHREAD *v15; // rcx

  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  --CurrentThread->KernelApcDisable;
  v7 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F049E8.StackLimit, 0LL, 0LL, a4);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140F049E8.StackLimit, 0LL);
  v10 = v7;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&stru_140F049E8.StackLimit,
      v7,
      (__int64)&stru_140F049E8.StackLimit);
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
    while ( v14 != (struct _KTHREAD *)&stru_140F049E8.SListFaultAddress )
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
  _m_prefetchw((const void *)&stru_140F049E8.StackLimit);
  v11 = (char *)stru_140F049E8.StackLimit - 16;
  if ( ((unsigned __int64)stru_140F049E8.StackLimit & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v11 = 0LL;
  if ( ((__int64)stru_140F049E8.StackLimit & 2) != 0
    || (StackLimit = stru_140F049E8.StackLimit,
        StackLimit != (void *volatile)_InterlockedCompareExchange64(
                                        (volatile signed __int64 *)&stru_140F049E8.StackLimit,
                                        (signed __int64)v11,
                                        (signed __int64)stru_140F049E8.StackLimit)) )
  {
    ExfReleasePushLock(&stru_140F049E8.StackLimit);
  }
  KeAbPostRelease((unsigned __int64)&stru_140F049E8.StackLimit);
  KeLeaveCriticalRegion();
  return v6;
}
