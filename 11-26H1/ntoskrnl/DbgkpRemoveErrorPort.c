/*
 * XREFs of DbgkpRemoveErrorPort @ 0x140B3A9A0
 * Callers:
 *     DbgkpSendErrorMessage @ 0x140954DF4 (DbgkpSendErrorMessage.c)
 *     DbgkFlushErrorPort @ 0x140A43A48 (DbgkFlushErrorPort.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216B70 (PsGetServerSiloGlobals.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 *     HalSystemVectorDispatchEntry @ 0x1404BD660 (HalSystemVectorDispatchEntry.c)
 *     DbgkpDereferenceErrorPort @ 0x140532ABC (DbgkpDereferenceErrorPort.c)
 */

void __fastcall DbgkpRemoveErrorPort(
        __int64 a1,
        unsigned __int64 a2,
        volatile signed __int32 *a3,
        struct _KLOCK_ENTRIES *a4)
{
  int v7; // r15d
  AutoBoost *v8; // rax
  void *v9; // rdx
  AutoBoost *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8

  if ( !_interlockedbittestandset(a3 + 1, 0) )
  {
    --*(_WORD *)(a1 + 484);
    v7 = 0;
    v8 = (AutoBoost *)KeAbPreAcquire(a2, 0LL, 0LL, a4);
    v10 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)a2, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a2, v8, a2);
    if ( v10 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v10, v9);
      else
        *((_BYTE *)v10 + 10) = 1;
    }
    if ( *(volatile signed __int32 **)(a2 + 8) == a3 )
    {
      *(_QWORD *)(a2 + 16) = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
      v7 = 1;
      v11 = HalSystemVectorDispatchEntry();
      if ( (void *)a2 == (char *)PsGetServerSiloGlobals(v11) + 936 )
        _interlockedbittestandreset((volatile signed __int32 *)(MmWriteableSharedUserData + 752), 0);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)a2);
    KeAbPostRelease(a2);
    KeLeaveCriticalRegionThread(a1, v12, v13);
    if ( v7 )
    {
      DbgkpDereferenceErrorPort(a3);
      KeResetEvent(*(PRKEVENT *)(a2 + 24));
    }
  }
}
