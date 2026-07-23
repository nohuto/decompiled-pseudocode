/*
 * XREFs of AlpcpDisconnectPort @ 0x1408F1508
 * Callers:
 *     AlpcpDoPortCleanup @ 0x1408F0B84 (AlpcpDoPortCleanup.c)
 *     NtAlpcDisconnectPort @ 0x140AD1910 (NtAlpcDisconnectPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ObReferenceObjectSafe @ 0x140441D40 (ObReferenceObjectSafe.c)
 *     AlpcpLockBlobExclusive @ 0x1408F10DC (AlpcpLockBlobExclusive.c)
 *     AlpcpUnlockBlobUncachedExclusive @ 0x1408F1140 (AlpcpUnlockBlobUncachedExclusive.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14098FEF0 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockMessage @ 0x140991780 (AlpcpUnlockMessage.c)
 *     AlpcpInsertMessageCanceledQueue @ 0x140A822E0 (AlpcpInsertMessageCanceledQueue.c)
 *     AlpcpSignalPortAndUnlock @ 0x140AFBE60 (AlpcpSignalPortAndUnlock.c)
 *     AlpcpWalkConnectionList @ 0x140AFD7FC (AlpcpWalkConnectionList.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140B73710 (AlpcpCancelMessagesByRequestor.c)
 */

__int64 __fastcall AlpcpDisconnectPort(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 *v4; // rsi
  char v6; // r15
  struct _KLOCK_ENTRIES *v7; // r9
  AutoBoost *v8; // rax
  void *v9; // rdx
  AutoBoost *v10; // rdi
  int v11; // eax
  volatile signed __int64 *v12; // rdi
  __int64 v14; // r13
  signed __int64 *v15; // r15
  int v16; // edi
  int v17; // esi
  int v18; // edi
  __int64 v19; // rdi
  ULONG_PTR v20; // rdi
  struct _KLOCK_ENTRIES *v21; // r9
  LegacyAutoBoost *v22; // r13
  signed __int64 v23; // rdx
  __int128 v24; // [rsp+30h] [rbp-10h] BYREF
  signed __int64 *v25; // [rsp+70h] [rbp+30h]

  v4 = *(__int64 **)(a1 + 16);
  v6 = a2;
  v24 = 0LL;
  AlpcpLockBlobExclusive((__int64)v4, a2, a3, a4);
  v8 = (AutoBoost *)KeAbPreAcquire(a1 + 352, 0LL, 0LL, v7);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 352), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 352), v8, a1 + 352);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v9);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  if ( (v6 & 1) != 0 )
    *(_DWORD *)(a1 + 416) |= 0x80u;
  v11 = *(_DWORD *)(a1 + 416);
  v12 = (volatile signed __int64 *)(a1 + 352);
  if ( (v11 & 0x20) != 0 )
  {
    if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352));
    KeAbPostRelease(a1 + 352);
    AlpcpUnlockBlobUncachedExclusive((__int64)v4);
    return 3221225527LL;
  }
  *(_DWORD *)(a1 + 416) = v11 | 0x20;
  if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352));
  KeAbPostRelease(a1 + 352);
  if ( (*(_DWORD *)(a1 + 416) & 6) == 2 )
    AlpcpWalkConnectionList(a1);
  if ( ((*(_DWORD *)(a1 + 416) >> 1) & 3) == 1 )
  {
    v14 = 0LL;
  }
  else
  {
    if ( ((*(_DWORD *)(a1 + 416) >> 1) & 3) == 2 )
    {
      v14 = *v4;
      v15 = (signed __int64 *)a1;
    }
    else
    {
      v14 = v4[2];
      v15 = (signed __int64 *)*v4;
    }
    v25 = v15;
    if ( v14 )
      v14 &= -(__int64)(ObReferenceObjectSafe(v14) != 0);
    if ( !v15 || ObReferenceObjectSafe((__int64)v15) )
      goto LABEL_28;
  }
  v25 = 0LL;
  v15 = 0LL;
LABEL_28:
  AlpcpUnlockBlobUncachedExclusive((__int64)v4);
  if ( v14 )
  {
    *((_QWORD *)&v24 + 1) = &v24;
    *(_QWORD *)&v24 = &v24;
    do
    {
      v16 = AlpcpCancelMessagesByRequestor(a1, v14, (int)v14 + 144, 1, (__int64)&v24);
      v17 = v16 | AlpcpCancelMessagesByRequestor(a1, v14, (int)v14 + 160, 2, (__int64)&v24);
      v18 = v17 | AlpcpCancelMessagesByRequestor(a1, v14, (int)v14 + 184, 3, (__int64)&v24);
    }
    while ( v18 | (unsigned int)AlpcpCancelMessagesByRequestor(a1, v14, (int)v14 + 208, 4, (__int64)&v24) );
    ObfDereferenceObject((PVOID)v14);
    v15 = v25;
    while ( 1 )
    {
      v19 = v24;
      if ( (__int128 *)v24 == &v24 )
        break;
      *(_QWORD *)&v24 = *(_QWORD *)v24;
      v20 = v19 - 80;
      *(_QWORD *)(v24 + 8) = &v24;
      AlpcpLockForCachedReferenceBlob(v20);
      if ( v25 )
      {
        v22 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(v25 + 44), 0LL, 0LL, v21);
        v23 = 17LL;
        if ( _InterlockedCompareExchange64(v25 + 44, 17LL, 0LL) )
        {
          ExfAcquirePushLockSharedEx(v25 + 44, 0, v22, (struct _KTHREAD *)(v25 + 44));
          v23 = 17LL;
        }
        if ( v22 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v22, (void *)0x11);
          else
            *((_BYTE *)v22 + 10) = 1;
        }
        if ( (v25[52] & 0x40) != 0 )
        {
          --*(_WORD *)(v20 - 30);
          if ( v23 != _InterlockedCompareExchange64(v25 + 44, 0LL, v23) )
            ExfReleasePushLockShared(v25 + 44);
          KeAbPostRelease((unsigned __int64)(v25 + 44));
        }
        else
        {
          *(_DWORD *)(v20 + 72) = _InterlockedIncrement((volatile signed __int32 *)(a1 + 400));
          *(_QWORD *)(v20 + 128) = *(_QWORD *)(a1 + 56);
          *(_QWORD *)(v20 + 56) = a1;
          *(_QWORD *)(v20 + 64) = v25;
          AlpcpInsertMessageCanceledQueue(v25, v20);
          AlpcpSignalPortAndUnlock(v25);
        }
      }
      else
      {
        --*(_WORD *)(v20 - 30);
      }
      AlpcpUnlockMessage(v20);
    }
  }
  if ( v15 )
    ObfDereferenceObject(v15);
  return 0LL;
}
