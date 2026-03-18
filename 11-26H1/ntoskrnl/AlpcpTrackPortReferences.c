/*
 * XREFs of AlpcpTrackPortReferences @ 0x140A7A860
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14037CC40 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void __fastcall AlpcpTrackPortReferences(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  signed __int32 v5; // ebx
  unsigned __int64 *v6; // rsi
  AutoBoost *v7; // rax
  void *v8; // rdx
  AutoBoost *v9; // rbp
  struct _KEVENT *v10; // rcx

  v5 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 404));
  if ( *(_QWORD *)(a1 + 408) )
  {
    v6 = (unsigned __int64 *)(a1 + 352);
    v7 = (AutoBoost *)KeAbPreAcquire(a1 + 352, 0LL, 0LL, a4);
    v9 = v7;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
      ExfAcquirePushLockExclusiveEx(v6, v7, (__int64)v6);
    if ( v9 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v9, v8);
      else
        *((_BYTE *)v9 + 10) = 1;
    }
    v10 = *(struct _KEVENT **)(a1 + 408);
    if ( v10 && v5 == v10[1].Header.LockNV )
      KeSetEvent(v10, 0, 0);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v6);
    KeAbPostRelease((unsigned __int64)v6);
  }
}
