/*
 * XREFs of AlpcpFlushMessagesByRequestor @ 0x140AAC030
 * Callers:
 *     AlpcpFlushMessagesPort @ 0x1408F1310 (AlpcpFlushMessagesPort.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     AlpcpReferenceBlob @ 0x14098FE98 (AlpcpReferenceBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14098FEF0 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockMessage @ 0x140991780 (AlpcpUnlockMessage.c)
 *     AlpcpCancelMessage @ 0x140ACF05C (AlpcpCancelMessage.c)
 */

void __fastcall AlpcpFlushMessagesByRequestor(
        __int64 a1,
        unsigned __int64 *a2,
        ULONG_PTR *a3,
        struct _KLOCK_ENTRIES *a4)
{
  int v4; // esi
  unsigned __int64 *v8; // rdi
  AutoBoost *v9; // rax
  void *v10; // rdx
  AutoBoost *v11; // rbx
  ULONG_PTR i; // rdi
  volatile signed __int64 *v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // r8
  struct _KLOCK_ENTRIES *v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  struct _KLOCK_ENTRIES *v19; // r9
  struct _KLOCK_ENTRIES *v20; // r9
  unsigned __int64 *v21; // rbp
  AutoBoost *v22; // rax
  void *v23; // rdx
  AutoBoost *v24; // rdi
  int v25; // esi
  int v26; // esi
  volatile signed __int64 *v27; // rdi

  v4 = (int)a4;
  if ( (_DWORD)a4 == 1 || (_DWORD)a4 == 2 )
  {
    v8 = a2 + 17;
  }
  else if ( (_DWORD)a4 == 3 )
  {
    v8 = a2 + 22;
  }
  else
  {
    v8 = a2 + 25;
  }
  v9 = (AutoBoost *)KeAbPreAcquire((__int64)v8, 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
    ExfAcquirePushLockExclusiveEx(v8, v9, (__int64)v8);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v10);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
LABEL_40:
  for ( i = *a3; (ULONG_PTR *)i != a3; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 24) == a1 || (*(_DWORD *)(i + 40) & 0x10000) != 0 )
    {
      AlpcpReferenceBlob(i);
      if ( v4 == 1 || v4 == 2 )
      {
        v13 = (volatile signed __int64 *)(a2 + 17);
      }
      else if ( v4 == 3 )
      {
        v13 = (volatile signed __int64 *)(a2 + 22);
      }
      else
      {
        v13 = (volatile signed __int64 *)(a2 + 25);
      }
      if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v13);
      KeAbPostRelease((unsigned __int64)v13);
      AlpcpLockForCachedReferenceBlob(i, v14, v15, v16);
      --*(_WORD *)(i - 30);
      if ( *(_QWORD *)(i + 24) == a1 )
        AlpcpCancelMessage(a2, i, 0x10000LL);
      else
        AlpcpUnlockMessage(i, v17, v18, v19);
      if ( v4 == 1 || v4 == 2 )
      {
        v21 = a2 + 17;
      }
      else if ( v4 == 3 )
      {
        v21 = a2 + 22;
      }
      else
      {
        v21 = a2 + 25;
      }
      v22 = (AutoBoost *)KeAbPreAcquire((__int64)v21, 0LL, 0LL, v20);
      v24 = v22;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v21, 0LL) )
        ExfAcquirePushLockExclusiveEx(v21, v22, (__int64)v21);
      if ( v24 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v24, v23);
        else
          *((_BYTE *)v24 + 10) = 1;
      }
      goto LABEL_40;
    }
  }
  v25 = v4 - 1;
  if ( v25 && (v26 = v25 - 1) != 0 )
  {
    if ( v26 == 1 )
      v27 = (volatile signed __int64 *)(a2 + 22);
    else
      v27 = (volatile signed __int64 *)(a2 + 25);
  }
  else
  {
    v27 = (volatile signed __int64 *)(a2 + 17);
  }
  if ( (_InterlockedExchangeAdd64(v27, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v27);
  KeAbPostRelease((unsigned __int64)v27);
}
