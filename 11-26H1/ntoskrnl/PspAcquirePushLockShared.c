/*
 * XREFs of PspAcquirePushLockShared @ 0x1404FD828
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x1407F45D0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspNotifyServerSiloCreation @ 0x140801B0C (PspNotifyServerSiloCreation.c)
 *     PspBeginServerSiloShutdown @ 0x140B543B4 (PspBeginServerSiloShutdown.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 */

signed __int64 __fastcall PspAcquirePushLockShared(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  LegacyAutoBoost *v5; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&PspSiloMonitorLock, 0LL, 0LL, a4);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&PspSiloMonitorLock, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)&PspSiloMonitorLock.Header.Lock, 0, v5, &PspSiloMonitorLock);
  if ( v5 )
  {
    result = KiAbpGlobalState;
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v5 + 33) |= 2u;
    else
      *((_BYTE *)v5 + 10) = 1;
  }
  return result;
}
