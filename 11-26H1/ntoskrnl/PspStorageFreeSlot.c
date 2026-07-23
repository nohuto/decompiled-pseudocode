/*
 * XREFs of PspStorageFreeSlot @ 0x140805524
 * Callers:
 *     PsFreeSiloContextSlot @ 0x1407F4180 (PsFreeSiloContextSlot.c)
 *     PsUnregisterSiloMonitor @ 0x1408018B0 (PsUnregisterSiloMonitor.c)
 *     PspInitializeSiloStructures @ 0x140CDF024 (PspInitializeSiloStructures.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspStorageFreeSlot(unsigned int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v4; // edi
  void **p_StackBase; // r14
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v7; // rax
  void *v8; // rdx
  signed __int8 v9; // cf
  AutoBoost *v10; // rbp
  unsigned int v11; // esi

  v4 = a1;
  if ( a1 >= 0x20 )
  {
    p_StackBase = &KiSystemServiceTraceCallbackLock.StackBase;
    v4 = a1 - 32;
    if ( a1 - 32 >= 0x100 )
      return 3221225485LL;
  }
  else
  {
    p_StackBase = &KiSystemServiceTraceCallbackLock.InitialStack;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = (AutoBoost *)KeAbPreAcquire((__int64)&PspSiloMonitorLock.UserAffinity, 0LL, 0LL, a4);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&PspSiloMonitorLock.UserAffinity, 0LL);
  v10 = v7;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&PspSiloMonitorLock.UserAffinity,
      v7,
      (__int64)&PspSiloMonitorLock.UserAffinity);
  v11 = 0;
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v8);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  if ( _bittest64((const signed __int64 *)p_StackBase[1], v4) )
    *((_BYTE *)p_StackBase[1] + ((unsigned __int64)v4 >> 3)) &= ~(1 << (v4 & 7));
  else
    v11 = -1073741811;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspSiloMonitorLock.UserAffinity, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspSiloMonitorLock.UserAffinity);
  KeAbPostRelease((unsigned __int64)&PspSiloMonitorLock.UserAffinity);
  KeLeaveCriticalRegion();
  return v11;
}
