/*
 * XREFs of DbgkFlushErrorPort @ 0x140AF614C
 * Callers:
 *     PspExitProcess @ 0x1409FE380 (PspExitProcess.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     PsGetProcessServerSilo @ 0x140470370 (PsGetProcessServerSilo.c)
 *     DbgkpDereferenceErrorPort @ 0x140534F5C (DbgkpDereferenceErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x140AF6254 (DbgkpRemoveErrorPort.c)
 */

__int64 __fastcall DbgkFlushErrorPort(__int64 a1)
{
  __int64 ProcessServerSilo; // rax
  __int64 result; // rax
  struct _KLOCK_ENTRIES *v4; // r9
  signed __int64 *v5; // rbx
  struct _KTHREAD *CurrentThread; // r14
  volatile signed __int32 *v7; // rdi
  void *v8; // rdx
  LegacyAutoBoost *v9; // rsi

  ProcessServerSilo = PsGetProcessServerSilo(a1);
  result = (__int64)PsGetServerSiloGlobals(ProcessServerSilo);
  v5 = (signed __int64 *)(result + 936);
  if ( a1 == *(_QWORD *)(result + 952) )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = 0LL;
    --CurrentThread->KernelApcDisable;
    v9 = (LegacyAutoBoost *)KeAbPreAcquire(result + 936, 0LL, 0LL, v4);
    if ( _InterlockedCompareExchange64(v5, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v5, 0, v9, (struct _KTHREAD *)v5);
    if ( v9 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v9, v8);
      else
        *((_BYTE *)v9 + 10) = 1;
    }
    if ( a1 == v5[2] )
    {
      v7 = (volatile signed __int32 *)v5[1];
      _InterlockedIncrement(v7);
    }
    if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v5);
    KeAbPostRelease((unsigned __int64)v5);
    result = KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( v7 )
    {
      DbgkpRemoveErrorPort(CurrentThread, v5, v7);
      return DbgkpDereferenceErrorPort(v7);
    }
  }
  return result;
}
