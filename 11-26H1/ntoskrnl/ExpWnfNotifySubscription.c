/*
 * XREFs of ExpWnfNotifySubscription @ 0x1409C38A8
 * Callers:
 *     ExpWnfSubscribeWnfStateChange @ 0x1409C46A4 (ExpWnfSubscribeWnfStateChange.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExpWnfStartKernelDispatcher @ 0x1409C2020 (ExpWnfStartKernelDispatcher.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x1409C39B8 (ExpWnfInsertSubscriptionInPendingQueue.c)
 */

void __fastcall ExpWnfNotifySubscription(__int64 a1, __int64 a2, unsigned int a3, struct _KLOCK_ENTRIES *a4)
{
  signed __int64 *v4; // rbx
  int v7; // r14d
  __int64 v8; // rdi
  void *v9; // rdx
  LegacyAutoBoost *v10; // rsi
  struct _KEVENT *v11; // rcx

  v4 = (signed __int64 *)(a1 + 112);
  v7 = (int)a4;
  v8 = 0LL;
  v10 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 112, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0, v10, (struct _KTHREAD *)v4);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v9);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  if ( *(_QWORD *)(a2 + 48) && (unsigned int)ExpWnfInsertSubscriptionInPendingQueue(a2, a3) )
    v8 = *(_QWORD *)(a2 + 40);
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((unsigned __int64)v4);
  if ( v8 )
  {
    if ( PsInitialSystemProcess == (PEPROCESS)v8 )
    {
      ExpWnfStartKernelDispatcher(v7);
    }
    else
    {
      v11 = *(struct _KEVENT **)(*(_QWORD *)(v8 + 1512) + 128LL);
      if ( v11 )
        KeSetEvent(v11, 1, 0);
    }
  }
}
