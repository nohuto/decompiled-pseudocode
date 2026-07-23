/*
 * XREFs of AlpcpDoPortCleanup @ 0x1408F0B84
 * Callers:
 *     AlpcpClosePort @ 0x1408F0B10 (AlpcpClosePort.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KeReleaseSemaphore @ 0x1403BBA30 (KeReleaseSemaphore.c)
 *     KeReleaseSemaphoreEx @ 0x14042BF80 (KeReleaseSemaphoreEx.c)
 *     AlpcpFlushResourcesPort @ 0x1408F1178 (AlpcpFlushResourcesPort.c)
 *     AlpcpFlushMessagesPort @ 0x1408F1310 (AlpcpFlushMessagesPort.c)
 *     AlpcpDisconnectPort @ 0x1408F1508 (AlpcpDisconnectPort.c)
 *     AlpcpFreeCompletionList @ 0x140B25D2C (AlpcpFreeCompletionList.c)
 */

void __fastcall AlpcpDoPortCleanup(__int64 a1)
{
  volatile signed __int64 *v2; // rdi
  struct _KLOCK_ENTRIES *v3; // r9
  AutoBoost *v4; // rax
  void *v5; // rdx
  AutoBoost *v6; // rbx
  void *v7; // rcx
  __int64 v8; // rax
  struct _KLOCK_ENTRIES *v9; // r9
  AutoBoost *v10; // rax
  void *v11; // rdx
  struct _KLOCK_ENTRIES *v12; // r9
  AutoBoost *v13; // rbp
  _QWORD **v14; // r14
  unsigned __int64 *v15; // rsi
  AutoBoost *v16; // rax
  void *v17; // rdx
  __int64 v18; // r9
  AutoBoost *v19; // rbp
  _QWORD *v20; // rcx
  __int64 v21; // rdx
  _QWORD *v22; // rax

  AlpcpDisconnectPort(a1, 0LL);
  v2 = (volatile signed __int64 *)(a1 + 352);
  v4 = (AutoBoost *)KeAbPreAcquire(a1 + 352, 0LL, 0LL, v3);
  v6 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 352), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 352), v4, a1 + 352);
  if ( v6 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v6, v5);
    else
      *((_BYTE *)v6 + 10) = 1;
  }
  if ( *(_QWORD *)(a1 + 360) )
    AlpcpFreeCompletionList(a1);
  v7 = *(void **)(a1 + 24);
  v8 = 0LL;
  if ( ((unsigned __int8)v7 & 1) == 0 )
    v8 = *(_QWORD *)(a1 + 24);
  if ( v8 )
  {
    ObfDereferenceObjectWithTag(v7, 0x63706C41u);
    *(_QWORD *)(a1 + 24) |= 1uLL;
  }
  *(_DWORD *)(a1 + 416) |= 0x40u;
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352));
  KeAbPostRelease(a1 + 352);
  AlpcpFlushMessagesPort(a1);
  AlpcpFlushResourcesPort(a1);
  v10 = (AutoBoost *)KeAbPreAcquire(a1 + 352, 0LL, 0LL, v9);
  v13 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 352), v10, a1 + 352);
  if ( v13 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v13, v11);
    else
      *((_BYTE *)v13 + 10) = 1;
  }
  if ( (*(_DWORD *)(a1 + 416) & 0x200) != 0 )
  {
    KeReleaseSemaphore(*(PRKSEMAPHORE *)(a1 + 248), 1, 0x1000000, 0);
  }
  else
  {
    v14 = (_QWORD **)(a1 + 232);
    if ( *v14 != v14 )
    {
      v15 = (unsigned __int64 *)(a1 + 224);
      v16 = (AutoBoost *)KeAbPreAcquire((__int64)v15, 0LL, 0LL, v12);
      v19 = v16;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v15, 0LL) )
        ExfAcquirePushLockExclusiveEx(v15, v16, (__int64)v15);
      if ( v19 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v19, v17);
        else
          *((_BYTE *)v19 + 10) = 1;
      }
      while ( 1 )
      {
        v20 = *v14;
        if ( *v14 == v14 )
          break;
        *(v20 - 1) = 0LL;
        v21 = *v20;
        if ( *(_QWORD **)(*v20 + 8LL) != v20 || (v22 = (_QWORD *)v20[1], (_QWORD *)*v22 != v20) )
          __fastfail(3u);
        *v22 = v21;
        *(_QWORD *)(v21 + 8) = v22;
        *v20 = 0LL;
        KeReleaseSemaphoreEx((__int64)(v20 - 22), 1LL, 1LL, v18, 0, 0LL);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v15);
      KeAbPostRelease((unsigned __int64)v15);
    }
  }
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  KeAbPostRelease((unsigned __int64)v2);
}
