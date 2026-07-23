/*
 * XREFs of VrpDecrementSiloCount @ 0x140B296C0
 * Callers:
 *     VrpJobContextDelete @ 0x140B29690 (VrpJobContextDelete.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     CmUnRegisterCallback @ 0x1408568E0 (CmUnRegisterCallback.c)
 */

void __fastcall VrpDecrementSiloCount(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v5; // rax
  void *v6; // rdx
  signed __int8 v7; // cf
  AutoBoost *v8; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&gLoadedDiffHivesLock.StackLimit, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&gLoadedDiffHivesLock.StackLimit, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&gLoadedDiffHivesLock.StackLimit,
      v5,
      (__int64)&gLoadedDiffHivesLock.StackLimit);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v6);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  if ( !--LODWORD(WheapPfaLock.KernelShadowStackBase) )
    CmUnRegisterCallback((LARGE_INTEGER)gLoadedDiffHivesLock.InitialStack);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&gLoadedDiffHivesLock.StackLimit, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&gLoadedDiffHivesLock.StackLimit);
  KeAbPostRelease((unsigned __int64)&gLoadedDiffHivesLock.StackLimit);
  KeLeaveCriticalRegion();
}
