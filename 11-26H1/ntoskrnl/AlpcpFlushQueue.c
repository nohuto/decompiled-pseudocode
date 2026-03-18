/*
 * XREFs of AlpcpFlushQueue @ 0x140A81A40
 * Callers:
 *     AlpcpFlushMessagesPort @ 0x1408EAD50 (AlpcpFlushMessagesPort.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     AlpcpReferenceBlob @ 0x1409BEEB8 (AlpcpReferenceBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1409BEF10 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockMessage @ 0x1409C07A0 (AlpcpUnlockMessage.c)
 *     AlpcpCancelMessage @ 0x140ACCE1C (AlpcpCancelMessage.c)
 */

void __fastcall AlpcpFlushQueue(unsigned __int64 *a1, ULONG_PTR *a2, int a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v7; // rsi
  AutoBoost *v8; // rax
  void *v9; // rdx
  AutoBoost *v10; // rbx
  ULONG_PTR v11; // rbp
  volatile signed __int64 *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  struct _KLOCK_ENTRIES *v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  struct _KLOCK_ENTRIES *v18; // r9
  struct _KLOCK_ENTRIES *v19; // r9
  unsigned __int64 *v20; // rbp
  AutoBoost *v21; // rax
  void *v22; // rdx
  AutoBoost *v23; // rsi
  int v24; // edi
  int v25; // edi
  volatile signed __int64 *v26; // rdi

  if ( a3 == 1 || a3 == 2 )
  {
    v7 = a1 + 17;
  }
  else if ( a3 == 3 )
  {
    v7 = a1 + 22;
  }
  else
  {
    v7 = a1 + 25;
  }
  v8 = (AutoBoost *)KeAbPreAcquire((__int64)v7, 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, v8, (__int64)v7);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v9);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  while ( 1 )
  {
    v11 = *a2;
    if ( (ULONG_PTR *)*a2 == a2 )
      break;
    AlpcpReferenceBlob(*a2);
    if ( a3 == 1 || a3 == 2 )
    {
      v12 = (volatile signed __int64 *)(a1 + 17);
    }
    else if ( a3 == 3 )
    {
      v12 = (volatile signed __int64 *)(a1 + 22);
    }
    else
    {
      v12 = (volatile signed __int64 *)(a1 + 25);
    }
    if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v12);
    KeAbPostRelease((unsigned __int64)v12);
    AlpcpLockForCachedReferenceBlob(v11, v13, v14, v15);
    --*(_WORD *)(v11 - 30);
    if ( *(unsigned __int64 **)(v11 + 16) == a1 )
      AlpcpCancelMessage(a1, v11, 0x10000LL);
    else
      AlpcpUnlockMessage(v11, v16, v17, v18);
    if ( a3 == 1 || a3 == 2 )
    {
      v20 = a1 + 17;
    }
    else if ( a3 == 3 )
    {
      v20 = a1 + 22;
    }
    else
    {
      v20 = a1 + 25;
    }
    v21 = (AutoBoost *)KeAbPreAcquire((__int64)v20, 0LL, 0LL, v19);
    v23 = v21;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v20, 0LL) )
      ExfAcquirePushLockExclusiveEx(v20, v21, (__int64)v20);
    if ( v23 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v23, v22);
      else
        *((_BYTE *)v23 + 10) = 1;
    }
  }
  v24 = a3 - 1;
  if ( v24 && (v25 = v24 - 1) != 0 )
  {
    if ( v25 == 1 )
      v26 = (volatile signed __int64 *)(a1 + 22);
    else
      v26 = (volatile signed __int64 *)(a1 + 25);
  }
  else
  {
    v26 = (volatile signed __int64 *)(a1 + 17);
  }
  if ( (_InterlockedExchangeAdd64(v26, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v26);
  KeAbPostRelease((unsigned __int64)v26);
}
