/*
 * XREFs of AlpcpReferenceMessageByWaitingThreadPort @ 0x1407C4154
 * Callers:
 *     AlpcpReferenceMessageByWaitingThread @ 0x140AEDC60 (AlpcpReferenceMessageByWaitingThread.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     AlpcpReferenceMessageByWaitingThreadPortQueue @ 0x140AD9BE8 (AlpcpReferenceMessageByWaitingThreadPortQueue.c)
 */

__int64 __fastcall AlpcpReferenceMessageByWaitingThreadPort(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  signed __int64 *v4; // rbp
  void *v7; // rdx
  LegacyAutoBoost *v8; // rbx
  struct _KLOCK_ENTRIES *v9; // r9
  volatile signed __int64 *v10; // rdi
  AutoBoost *v11; // rax
  void *v12; // rdx
  AutoBoost *v13; // rbx
  __int64 v14; // rsi
  struct _KLOCK_ENTRIES *v15; // r9
  AutoBoost *v16; // rax
  void *v17; // rdx
  AutoBoost *v18; // rsi
  struct _KLOCK_ENTRIES *v19; // r9
  AutoBoost *v20; // rax
  void *v21; // rdx
  AutoBoost *v22; // rsi

  v4 = (signed __int64 *)(a2 + 352);
  v8 = (LegacyAutoBoost *)KeAbPreAcquire(a2 + 352, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0, v8, (struct _KTHREAD *)v4);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v7);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  if ( (*(_DWORD *)(a2 + 416) & 0x41) != 1 )
  {
    v14 = 0LL;
    goto LABEL_38;
  }
  v10 = (volatile signed __int64 *)(a2 + 136);
  v11 = (AutoBoost *)KeAbPreAcquire(a2 + 136, 0LL, 0LL, v9);
  v13 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 136), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 136), v11, a2 + 136);
  if ( v13 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v13, v12);
    else
      *((_BYTE *)v13 + 10) = 1;
  }
  v14 = AlpcpReferenceMessageByWaitingThreadPortQueue(a1, a2 + 144);
  if ( v14 )
    goto LABEL_15;
  v14 = AlpcpReferenceMessageByWaitingThreadPortQueue(a1, a2 + 160);
  if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 136));
  KeAbPostRelease(a2 + 136);
  if ( !v14 )
  {
    v16 = (AutoBoost *)KeAbPreAcquire(a2 + 176, 0LL, 0LL, v15);
    v18 = v16;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 176), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 176), v16, a2 + 176);
    if ( v18 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v18, v17);
      else
        *((_BYTE *)v18 + 10) = 1;
    }
    v14 = AlpcpReferenceMessageByWaitingThreadPortQueue(a1, a2 + 184);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 176));
    KeAbPostRelease(a2 + 176);
    if ( !v14 )
    {
      v10 = (volatile signed __int64 *)(a2 + 200);
      v20 = (AutoBoost *)KeAbPreAcquire(a2 + 200, 0LL, 0LL, v19);
      v22 = v20;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 200), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 200), v20, a2 + 200);
      if ( v22 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v22, v21);
        else
          *((_BYTE *)v22 + 10) = 1;
      }
      v14 = AlpcpReferenceMessageByWaitingThreadPortQueue(a1, a2 + 208);
LABEL_15:
      if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v10);
      KeAbPostRelease((unsigned __int64)v10);
    }
  }
LABEL_38:
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((unsigned __int64)v4);
  return v14;
}
