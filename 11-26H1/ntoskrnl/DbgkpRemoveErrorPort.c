/*
 * XREFs of DbgkpRemoveErrorPort @ 0x140AF6254
 * Callers:
 *     DbgkFlushErrorPort @ 0x140AF614C (DbgkFlushErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x140B5CE74 (DbgkpSendErrorMessage.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     HalSystemVectorDispatchEntry @ 0x1404B6E40 (HalSystemVectorDispatchEntry.c)
 *     DbgkpDereferenceErrorPort @ 0x140534F5C (DbgkpDereferenceErrorPort.c)
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
    KeLeaveCriticalRegionThread(a1);
    if ( v7 )
    {
      DbgkpDereferenceErrorPort(a3);
      KeResetEvent(*(PRKEVENT *)(a2 + 24));
    }
  }
}
