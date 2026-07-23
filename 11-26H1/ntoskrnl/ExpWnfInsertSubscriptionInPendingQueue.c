/*
 * XREFs of ExpWnfInsertSubscriptionInPendingQueue @ 0x1409C39B8
 * Callers:
 *     ExpWnfNotifySubscription @ 0x1409C38A8 (ExpWnfNotifySubscription.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall ExpWnfInsertSubscriptionInPendingQueue(__int64 a1, int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rax
  unsigned int v5; // esi
  __int64 v8; // r15
  volatile signed __int64 *v9; // rbx
  AutoBoost *v10; // rax
  void *v11; // rdx
  AutoBoost *v12; // r14
  int v13; // edi
  int v14; // eax
  _QWORD *v15; // rdx
  _QWORD *v16; // rax
  __int64 v18; // rax

  v4 = *(_QWORD *)(a1 + 40);
  v5 = 0;
  if ( !v4 )
    return 0LL;
  v8 = *(_QWORD *)(v4 + 1512);
  v9 = (volatile signed __int64 *)(v8 + 104);
  v10 = (AutoBoost *)KeAbPreAcquire(v8 + 104, 0LL, 0LL, a4);
  v12 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 104), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v8 + 104), v10, v8 + 104);
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v12, v11);
    else
      *((_BYTE *)v12 + 10) = 1;
  }
  v13 = *(_DWORD *)(a1 + 100) & a2;
  if ( (v13 & 8) != 0 )
  {
    v18 = *(_QWORD *)(a1 + 48);
    if ( v18 )
    {
      if ( *(_DWORD *)(v18 + 164) )
        v13 &= ~8u;
    }
  }
  if ( !v13 )
  {
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 104));
    KeAbPostRelease(v8 + 104);
    return 0LL;
  }
  v14 = *(_DWORD *)(a1 + 120);
  if ( v14 )
  {
    if ( v14 != 3 )
      goto LABEL_16;
  }
  else
  {
    v15 = *(_QWORD **)(v8 + 120);
    v16 = (_QWORD *)(a1 + 104);
    if ( *v15 != v8 + 112 )
      __fastfail(3u);
    *v16 = v8 + 112;
    *(_QWORD *)(a1 + 112) = v15;
    *v15 = v16;
    *(_QWORD *)(v8 + 120) = v16;
  }
  v5 = 1;
  *(_DWORD *)(a1 + 120) = 1;
LABEL_16:
  if ( ((*(_BYTE *)(a1 + 124) | *(_BYTE *)(a1 + 128)) & 1) == 0 && (v13 & 1) != 0 )
  {
    _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(a1 + 48) + 164LL), 1u);
    v13 &= ~8u;
  }
  *(_DWORD *)(a1 + 124) = *(_DWORD *)(a1 + 100) & (*(_DWORD *)(a1 + 124) | v13);
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 104));
  KeAbPostRelease(v8 + 104);
  return v5;
}
