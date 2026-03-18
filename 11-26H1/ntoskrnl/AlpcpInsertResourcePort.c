/*
 * XREFs of AlpcpInsertResourcePort @ 0x140A66404
 * Callers:
 *     AlpcpCreateSection @ 0x1409BB8D8 (AlpcpCreateSection.c)
 *     AlpcpCreateReserve @ 0x1409BC024 (AlpcpCreateReserve.c)
 *     AlpcpCreateSecurityContext @ 0x1409BC550 (AlpcpCreateSecurityContext.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x140A662E8 (AlpcpMapLegacyPortRemoteView.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void __fastcall AlpcpInsertResourcePort(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v4; // rbx
  _QWORD *v6; // rsi
  AutoBoost *v7; // rax
  void *v8; // rdx
  AutoBoost *v9; // rdi
  _QWORD *v10; // rcx

  v4 = (unsigned __int64 *)(a1 + 328);
  v6 = (_QWORD *)(a2 - 48);
  v7 = (AutoBoost *)KeAbPreAcquire(a1 + 328, 0LL, 0LL, a4);
  v9 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v7, (__int64)v4);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v8);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  v10 = *(_QWORD **)(a1 + 344);
  if ( *v10 != a1 + 336 )
    __fastfail(3u);
  *v6 = a1 + 336;
  v6[1] = v10;
  *v10 = v6;
  *(_QWORD *)(a1 + 344) = v6;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((unsigned __int64)v4);
}
