/*
 * XREFs of PopFxPrepareDevicesForShutdown @ 0x140522284
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     PopFxActivateDevicesForSx @ 0x1404D5164 (PopFxActivateDevicesForSx.c)
 */

void __fastcall PopFxPrepareDevicesForShutdown(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v5; // rax
  signed __int8 v6; // cf
  AutoBoost *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&qword_140F123D0, 0LL, 0LL, a4);
  v6 = _interlockedbittestandset64(&qword_140F123D0.Header.Lock, 0LL);
  v7 = v5;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&qword_140F123D0, v5, (__int64)&qword_140F123D0);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v7 + 33) |= 2u;
    else
      *((_BYTE *)v7 + 10) = 1;
  }
  LOBYTE(stru_140E66FF0.SchedulerAssistYieldCounter) = 1;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140F123D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140F123D0.Header.Lock);
  KeAbPostRelease((unsigned __int64)&qword_140F123D0);
  KeLeaveCriticalRegion();
  PopFxActivateDevicesForSx(4u, v8, v9, v10);
}
