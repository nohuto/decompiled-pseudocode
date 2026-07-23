/*
 * XREFs of ExpWnfNotifyNameSubscribers @ 0x1409C81A0
 * Callers:
 *     NtDeleteWnfStateName @ 0x1409C4FD0 (NtDeleteWnfStateName.c)
 *     ExpWnfDeliverThreadNotifications @ 0x1409C5DB8 (ExpWnfDeliverThreadNotifications.c)
 *     ExpNtUpdateWnfStateData @ 0x1409C6210 (ExpNtUpdateWnfStateData.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x1409C7984 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1409C7D10 (ExpWnfDispatchKernelSubscription.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1409C81A0 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfSubscribeNameInstance @ 0x1409C8720 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfDeleteProcessContext @ 0x1409FD874 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteSubscription @ 0x1409FDBC0 (ExpWnfDeleteSubscription.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1409C7D10 (ExpWnfDispatchKernelSubscription.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1409C81A0 (ExpWnfNotifyNameSubscribers.c)
 */

void __fastcall ExpWnfNotifyNameSubscribers(__int64 a1, int a2, int a3, struct _KLOCK_ENTRIES *a4)
{
  signed __int64 *v4; // r14
  __int64 v5; // rsi
  unsigned int v6; // edi
  unsigned int v7; // r13d
  int v8; // r12d
  int v9; // ebp
  void *v10; // rdx
  LegacyAutoBoost *v11; // rbx
  struct _KLOCK_ENTRIES *v12; // r9
  __int64 *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r13
  AutoBoost *v16; // rax
  void *v17; // rdx
  AutoBoost *v18; // rdi
  int v19; // edx
  int v20; // eax
  _QWORD *v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  struct _KLOCK_ENTRIES *v25; // r9
  int v26; // edi
  __int64 v27; // rax
  struct _KEVENT *v28; // rcx
  __int64 v29; // rax
  unsigned int v33; // [rsp+98h] [rbp+20h]

  v33 = (unsigned int)a4;
  v4 = (signed __int64 *)(a1 + 112);
  v5 = a1;
  v6 = 0;
  v7 = (unsigned int)a4;
  v8 = 0;
  v9 = 1;
  v11 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 112, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0, v11, (struct _KTHREAD *)v4);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v10);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  v13 = *(__int64 **)(v5 + 120);
  if ( v13 != (__int64 *)(v5 + 120) )
  {
    do
    {
      if ( v9 && (*((_BYTE *)v13 + 36) & 1) != 0 )
        v9 = 0;
      v14 = *(v13 - 3);
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 1512);
        v16 = (AutoBoost *)KeAbPreAcquire(v15 + 104, 0LL, 0LL, v12);
        v18 = v16;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 104), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v15 + 104), v16, v15 + 104);
        if ( v18 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v18, v17);
          else
            *((_BYTE *)v18 + 10) = 1;
        }
        v19 = *((_DWORD *)v13 + 9) & a2;
        if ( (*((_BYTE *)v13 + 36) & (unsigned __int8)a2 & 8) != 0 )
        {
          v29 = *(v13 - 2);
          if ( v29 )
          {
            if ( *(_DWORD *)(v29 + 164) )
              v19 &= ~8u;
          }
        }
        if ( v19 )
        {
          v20 = *((_DWORD *)v13 + 14);
          if ( v20 )
          {
            if ( v20 == 3 )
            {
              *((_DWORD *)v13 + 14) = 1;
              v26 = 1;
            }
            else
            {
              v26 = 0;
            }
          }
          else
          {
            v21 = *(_QWORD **)(v15 + 120);
            if ( *v21 != v15 + 112 )
              __fastfail(3u);
            v13[6] = (__int64)v21;
            v13[5] = v15 + 112;
            v26 = 1;
            *v21 = v13 + 5;
            *(_QWORD *)(v15 + 120) = v13 + 5;
            *((_DWORD *)v13 + 14) = 1;
          }
          if ( ((*((_BYTE *)v13 + 60) | *((_BYTE *)v13 + 64)) & 1) == 0 && (v19 & 1) != 0 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(*(v13 - 2) + 164));
            v19 &= ~8u;
          }
          *((_DWORD *)v13 + 15) = *((_DWORD *)v13 + 9) & (*((_DWORD *)v13 + 15) | v19);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v15 + 104));
          KeAbPostRelease(v15 + 104);
          v27 = *(v13 - 3);
          if ( v26 )
          {
            if ( (PEPROCESS)v27 == PsInitialSystemProcess )
            {
              v8 = 1;
            }
            else
            {
              v28 = *(struct _KEVENT **)(*(_QWORD *)(v27 + 1512) + 128LL);
              if ( v28 )
                KeSetEvent(v28, 1, 0);
            }
          }
        }
        else
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v15 + 104));
          KeAbPostRelease(v15 + 104);
        }
        v6 = 0;
      }
      v13 = (__int64 *)*v13;
    }
    while ( v13 != (__int64 *)(v5 + 120) );
    v5 = a1;
    v7 = v33;
  }
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((unsigned __int64)v4);
  if ( v9 && (a2 & 1) != 0 )
  {
    if ( !v8 && a3 )
      v6 = 1;
    ExpWnfNotifyNameSubscribers(v5, 8LL, v6, v7);
  }
  if ( v8 && a3 )
  {
    if ( v7 )
    {
      ExpWnfDispatchKernelSubscription(v23, v22, v24, v25);
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)PspSiloMonitorLock.StackLimit + 10, 2u);
      if ( _InterlockedCompareExchange((volatile signed __int32 *)PspSiloMonitorLock.StackLimit + 10, 3, 2) == 2 )
        ExQueueWorkItem((PWORK_QUEUE_ITEM)((char *)PspSiloMonitorLock.StackLimit + 8), DelayedWorkQueue);
    }
  }
}
