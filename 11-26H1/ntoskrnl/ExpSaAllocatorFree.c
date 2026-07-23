/*
 * XREFs of ExpSaAllocatorFree @ 0x14027D8B0
 * Callers:
 *     ExpCleanupAutoExpandPushLock @ 0x14027D830 (ExpCleanupAutoExpandPushLock.c)
 *     ExSaFree @ 0x14045C8AC (ExSaFree.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExpSaAllocatorOptimizeList @ 0x1404936B4 (ExpSaAllocatorOptimizeList.c)
 *     ExpSaPageGroupFreeMemory @ 0x1404BBD00 (ExpSaPageGroupFreeMemory.c)
 */

void __fastcall ExpSaAllocatorFree(struct _KTHREAD *a1, __int64 *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v5; // r12d
  bool v8; // r15
  LegacyAutoBoost *v9; // rbp
  signed __int32 ThreadLock; // eax
  AutoBoost *v11; // rax
  void *v12; // rdx
  AutoBoost *v13; // rbp
  __int64 *v14; // rax
  __int64 **v15; // rcx
  struct _LIST_ENTRY *Blink; // rcx

  v5 = (unsigned int)a4;
  if ( *((_DWORD *)a2 + 10) == 1 )
  {
    v8 = 1;
    v11 = (AutoBoost *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, a4);
    v13 = v11;
    if ( _interlockedbittestandset64(&a1->Header.Lock, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1, v11, (__int64)a1);
    if ( v13 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v13, v12);
      else
        *((_BYTE *)v13 + 10) = 1;
    }
    *((_DWORD *)a2 + 10) = 0;
    v14 = (__int64 *)*a2;
    if ( *(__int64 **)(*a2 + 8) != a2
      || (v15 = (__int64 **)a2[1], *v15 != a2)
      || (*v15 = v14,
          v14[1] = (__int64)v15,
          Blink = a1->Header.WaitListHead.Blink,
          Blink->Flink != &a1->Header.WaitListHead) )
    {
      __fastfail(3u);
    }
    *a2 = (__int64)&a1->Header.WaitListHead;
    a2[1] = (__int64)Blink;
    Blink->Flink = (struct _LIST_ENTRY *)a2;
    a1->Header.WaitListHead.Blink = (struct _LIST_ENTRY *)a2;
  }
  else
  {
    v8 = 0;
    v9 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&a1->Header.Lock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&a1->Header.Lock, 0, v9, a1);
    if ( v9 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        *((_BYTE *)v9 + 33) |= 2u;
      else
        *((_BYTE *)v9 + 10) = 1;
    }
  }
  if ( (unsigned __int8)ExpSaPageGroupFreeMemory(a2, a3, v5) )
  {
    _m_prefetchw(&a1->ThreadLock);
    ThreadLock = _InterlockedOr((volatile signed __int32 *)&a1->ThreadLock, 2u) | 2;
  }
  else
  {
    ThreadLock = a1->ThreadLock;
  }
  if ( (ThreadLock & 2) != 0 )
  {
    if ( v8 )
      goto LABEL_15;
    v8 = _InterlockedCompareExchange64((volatile signed __int64 *)&a1->Header.Lock, 1LL, 17LL) == 17;
  }
  if ( !v8 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&a1->Header.Lock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&a1->Header.Lock);
    goto LABEL_17;
  }
LABEL_15:
  ExpSaAllocatorOptimizeList(a1);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&a1->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1);
LABEL_17:
  KeAbPostRelease((unsigned __int64)a1);
}
