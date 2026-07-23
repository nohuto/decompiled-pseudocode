/*
 * XREFs of WheaUnregisterErrorSourceOverride @ 0x1406DBFB0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     WheaRemoveErrorSource @ 0x14084DC80 (WheaRemoveErrorSource.c)
 */

void __fastcall WheaUnregisterErrorSourceOverride(
        signed int a1,
        unsigned int a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // r14
  unsigned __int64 *v6; // rdi
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v8; // rax
  volatile unsigned __int8 *v9; // rdx
  AutoBoost *v10; // rsi

  if ( (unsigned int)a1 <= 0x12 )
  {
    v4 = a1;
    v6 = (unsigned __int64 *)((char *)&WheapSourceConfigOverride + 64 * (__int64)a1);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = (AutoBoost *)KeAbPreAcquire((__int64)v6, 0LL, 0LL, a4);
    v10 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
      ExfAcquirePushLockExclusiveEx(v6, v8, (__int64)v6);
    if ( v10 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
      {
        LOBYTE(v9) = 2;
        AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v10 + 33), v9, 1);
      }
      else
      {
        *((_BYTE *)v10 + 10) = 1;
      }
    }
    if ( *((_BYTE *)v6 + 8) )
    {
      WheapOverrideHandler[v4] = 0LL;
      WheaRemoveErrorSource(a2);
      *((_BYTE *)v6 + 8) = 0;
      v6[2] = (unsigned __int64)HalSystemVectorDispatchEntry;
      v6[3] = (unsigned __int64)xHalPciEarlyRestore;
      v6[4] = (unsigned __int64)WheapDefaultErrSrcCreateRecord;
      v6[5] = (unsigned __int64)HalSystemVectorDispatchEntry;
      v6[6] = (unsigned __int64)xHalTimerWatchdogStop;
      v6[7] = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v6);
    KeAbPostRelease((unsigned __int64)v6);
    KeLeaveCriticalRegion();
  }
}
