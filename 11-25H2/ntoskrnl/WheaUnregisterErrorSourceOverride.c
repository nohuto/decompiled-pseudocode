/*
 * XREFs of WheaUnregisterErrorSourceOverride @ 0x140652C70
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     WheaRemoveErrorSource @ 0x1407B7430 (WheaRemoveErrorSource.c)
 */

void __fastcall WheaUnregisterErrorSourceOverride(signed int a1, unsigned int a2)
{
  __int64 v2; // r14
  unsigned __int64 *v4; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v6; // rax
  __int64 *v7; // rsi

  if ( (unsigned int)a1 <= 0x12 )
  {
    v2 = a1;
    v4 = (unsigned __int64 *)((char *)&WheapSourceConfigOverride + 64 * (__int64)a1);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = KeAbPreAcquire((__int64)v4, 0LL);
    v7 = v6;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
      ExfAcquirePushLockExclusiveEx(v4, v6, (__int64)v4);
    if ( v7 )
      *((_BYTE *)v7 + 10) = 1;
    if ( *((_BYTE *)v4 + 8) )
    {
      WheapOverrideHandler[v2] = 0LL;
      WheaRemoveErrorSource(a2);
      *((_BYTE *)v4 + 8) = 0;
      v4[2] = (unsigned __int64)PdcCreateWatchdogAroundClientCall;
      v4[3] = (unsigned __int64)xHalPciEarlyRestore;
      v4[4] = (unsigned __int64)WheapDefaultErrSrcCreateRecord;
      v4[5] = (unsigned __int64)PdcCreateWatchdogAroundClientCall;
      v4[6] = (unsigned __int64)xHalTimerWatchdogStop;
      v4[7] = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v4);
    KeAbPostRelease((ULONG_PTR)v4);
    KeLeaveCriticalRegion();
  }
}
