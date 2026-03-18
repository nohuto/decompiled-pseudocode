/*
 * XREFs of PspStorageFreeSlot @ 0x1407FFAF4
 * Callers:
 *     PsFreeSiloContextSlot @ 0x1407EE620 (PsFreeSiloContextSlot.c)
 *     PsUnregisterSiloMonitor @ 0x1407FBE80 (PsUnregisterSiloMonitor.c)
 *     PspInitializeSiloStructures @ 0x140CD8CA4 (PspInitializeSiloStructures.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspStorageFreeSlot(unsigned int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v4; // edi
  void **p_InitialStack; // r14
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v7; // rax
  void *v8; // rdx
  signed __int8 v9; // cf
  AutoBoost *v10; // rbp
  unsigned int v11; // esi

  v4 = a1;
  if ( a1 >= 0x20 )
  {
    p_InitialStack = &KiSystemServiceTraceCallbackLock.InitialStack;
    v4 = a1 - 32;
    if ( a1 - 32 >= 0x100 )
      return 3221225485LL;
  }
  else
  {
    p_InitialStack = &KiSystemServiceTraceCallbackLock.StackBase;
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
  if ( _bittest64((const signed __int64 *)p_InitialStack[1], v4) )
    *((_BYTE *)p_InitialStack[1] + ((unsigned __int64)v4 >> 3)) &= ~(1 << (v4 & 7));
  else
    v11 = -1073741811;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspSiloMonitorLock.UserAffinity, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspSiloMonitorLock.UserAffinity);
  KeAbPostRelease((unsigned __int64)&PspSiloMonitorLock.UserAffinity);
  KeLeaveCriticalRegion();
  return v11;
}
