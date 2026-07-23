/*
 * XREFs of AlpcpSignalPortAndUnlock @ 0x140AFBE60
 * Callers:
 *     AlpcpDisconnectPort @ 0x1408F1508 (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessage @ 0x140ACF05C (AlpcpCancelMessage.c)
 * Callees:
 *     AlpcpQueueIoCompletionPort @ 0x140267FE0 (AlpcpQueueIoCompletionPort.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KeReleaseSemaphoreEx @ 0x14042BF80 (KeReleaseSemaphoreEx.c)
 */

void __fastcall AlpcpSignalPortAndUnlock(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 v5; // rdi
  __int64 v6; // r9
  __int64 v7; // rcx
  _QWORD **v8; // rsi
  unsigned __int64 *v9; // rdi
  AutoBoost *v10; // rax
  void *v11; // rdx
  AutoBoost *v12; // rbp
  _QWORD *v13; // rax
  _QWORD *v14; // rsi
  __int64 v15; // rdx
  _QWORD *v16; // rcx

  if ( *(_QWORD *)(a1 + 32) )
  {
    LOBYTE(a3) = 1;
    AlpcpQueueIoCompletionPort(a1, 0, a3, 0, 0);
    return;
  }
  if ( (*(_DWORD *)(a1 + 416) & 0x200) != 0 )
  {
    v5 = a1 + 352;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
    KeAbPostRelease(v5);
    v7 = *(_QWORD *)(a1 + 248);
LABEL_8:
    KeReleaseSemaphoreEx(v7, 1LL, 1LL, v6, 0, 0LL);
    return;
  }
  v8 = (_QWORD **)(a1 + 232);
  if ( *v8 != v8 )
  {
    v9 = (unsigned __int64 *)(a1 + 224);
    v10 = (AutoBoost *)KeAbPreAcquire(a1 + 224, 0LL, 0LL, a4);
    v12 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, v10, (__int64)v9);
    if ( v12 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v12, v11);
      else
        *((_BYTE *)v12 + 10) = 1;
    }
    v13 = *v8;
    if ( *v8 == v8 )
    {
      v14 = 0LL;
    }
    else
    {
      v14 = v13 - 185;
      *(v13 - 1) = 0LL;
      v15 = *v13;
      if ( *(_QWORD **)(*v13 + 8LL) != v13 || (v16 = (_QWORD *)v13[1], (_QWORD *)*v16 != v13) )
        __fastfail(3u);
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      *v13 = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v9);
    KeAbPostRelease((unsigned __int64)v9);
    if ( v14 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
      KeAbPostRelease(a1 + 352);
      v7 = (__int64)(v14 + 163);
      goto LABEL_8;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
  KeAbPostRelease(a1 + 352);
}
