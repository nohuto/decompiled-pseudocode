/*
 * XREFs of AlpcpReceiveDirectMessagePort @ 0x1407C3910
 * Callers:
 *     AlpcpReceiveMessage @ 0x140927FFC (AlpcpReceiveMessage.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     AlpcpRemoveMessageFromDirectQueue @ 0x1407C3C0C (AlpcpRemoveMessageFromDirectQueue.c)
 *     AlpcpLookupMessage @ 0x14098FA50 (AlpcpLookupMessage.c)
 *     AlpcpUnlockMessage @ 0x140991780 (AlpcpUnlockMessage.c)
 *     AlpcpInsertMessagePendingQueue @ 0x140A53330 (AlpcpInsertMessagePendingQueue.c)
 *     AlpcpRemoveMessageCanceledQueue @ 0x140A9F750 (AlpcpRemoveMessageCanceledQueue.c)
 *     AlpcpLogReceiveMessage @ 0x140B4A2DC (AlpcpLogReceiveMessage.c)
 */

__int64 __fastcall AlpcpReceiveDirectMessagePort(__int64 *a1, int a2, int a3, ULONG_PTR *a4, int a5)
{
  __int64 result; // rax
  __int64 v7; // r14
  struct _KLOCK_ENTRIES *v8; // r9
  ULONG_PTR v9; // rdi
  __int64 v10; // rax
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // esi
  volatile signed __int64 *v14; // rbp
  void *v15; // rdx
  LegacyAutoBoost *v16; // rbx
  struct _KLOCK_ENTRIES *v17; // r9
  int v18; // ecx
  volatile signed __int64 *v19; // rsi
  AutoBoost *v20; // rax
  void *v21; // rdx
  AutoBoost *v22; // rbx
  AutoBoost *v23; // rax
  void *v24; // rdx
  AutoBoost *v25; // rbx
  unsigned int v26; // edx
  int v27; // ecx
  ULONG_PTR BugCheckParameter2[5]; // [rsp+30h] [rbp-28h] BYREF

  BugCheckParameter2[0] = 0LL;
  if ( !a2 )
    return 3221225485LL;
  v7 = *a1;
  result = AlpcpLookupMessage(*a1, a2, a3, (_DWORD)a4, (__int64)BugCheckParameter2);
  if ( (int)result >= 0 )
  {
    v9 = BugCheckParameter2[0];
    v10 = *(_QWORD *)(BugCheckParameter2[0] + 16);
    if ( !v10 )
    {
      AlpcpUnlockMessage(BugCheckParameter2[0]);
      return 3221227266LL;
    }
    if ( v7 != v10 )
    {
      v11 = -1073740030;
LABEL_14:
      AlpcpUnlockMessage(BugCheckParameter2[0]);
      return v11;
    }
    v12 = *(_DWORD *)(BugCheckParameter2[0] + 40);
    if ( (v12 & 0x20000) == 0 || (v13 = 1, v7 != *(_QWORD *)(BugCheckParameter2[0] + 64)) )
      v13 = 0;
    if ( (v12 & 7) != 4 && !v13 )
    {
      v11 = -1073741811;
      goto LABEL_14;
    }
    v14 = (volatile signed __int64 *)(v7 + 352);
    v16 = (LegacyAutoBoost *)KeAbPreAcquire(v7 + 352, 0LL, 0LL, v8);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 352), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)(v7 + 352), 0, v16, (struct _KTHREAD *)(v7 + 352));
    if ( v16 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v16, v15);
      else
        *((_BYTE *)v16 + 10) = 1;
    }
    v18 = *(_DWORD *)(v7 + 416);
    if ( (v18 & 0x40) != 0 )
    {
      AlpcpUnlockMessage(v9);
      if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v7 + 352));
      v11 = -1073740032;
LABEL_30:
      KeAbPostRelease(v7 + 352);
      return v11;
    }
    if ( (v18 & 0x10) != 0 )
    {
      AlpcpUnlockMessage(v9);
      if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v7 + 352));
      v11 = -1073741759;
      goto LABEL_30;
    }
    if ( v13 )
    {
      v19 = (volatile signed __int64 *)(v7 + 136);
      v20 = (AutoBoost *)KeAbPreAcquire(v7 + 136, 0LL, 0LL, v17);
      v22 = v20;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 136), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v7 + 136), v20, v7 + 136);
      if ( v22 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v22, v21);
        else
          *((_BYTE *)v22 + 10) = 1;
      }
      AlpcpRemoveMessageCanceledQueue(v7, v9);
    }
    else
    {
      v19 = (volatile signed __int64 *)(v7 + 200);
      v23 = (AutoBoost *)KeAbPreAcquire(v7 + 200, 0LL, 0LL, v17);
      v25 = v23;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 200), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v7 + 200), v23, v7 + 200);
      if ( v25 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v25, v24);
        else
          *((_BYTE *)v25 + 10) = 1;
      }
      AlpcpRemoveMessageFromDirectQueue(v7, v9);
      v26 = (*(_QWORD *)(v9 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
      if ( !*(_QWORD *)(v9 + 144) )
        v26 = *(_QWORD *)(v9 + 136) != 0LL ? 0x80000000 : 0;
      v27 = v26 | 0x10000000;
      if ( !*(_QWORD *)(v9 + 152) )
        v27 = v26;
      if ( (v27 & a5) != 0 )
      {
        *(_WORD *)(v9 + 244) |= 0x2000u;
        AlpcpInsertMessagePendingQueue(v7, v9);
LABEL_53:
        if ( (_InterlockedExchangeAdd64(v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v19);
        KeAbPostRelease((unsigned __int64)v19);
        if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v7 + 352));
        KeAbPostRelease(v7 + 352);
        if ( LOBYTE(stru_140E66D40.CycleTime) )
          AlpcpLogReceiveMessage(v9);
        *a4 = v9;
        return 0LL;
      }
      *(_WORD *)(v9 + 244) &= ~0x2000u;
    }
    --*(_WORD *)(v9 - 30);
    goto LABEL_53;
  }
  return result;
}
