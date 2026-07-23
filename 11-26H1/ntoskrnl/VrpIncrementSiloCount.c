/*
 * XREFs of VrpIncrementSiloCount @ 0x140A4B7F0
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140A4B46C (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     CmRegisterInternalCallback @ 0x1409F0768 (CmRegisterInternalCallback.c)
 */

__int64 __fastcall VrpIncrementSiloCount(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // esi
  AutoBoost *v6; // rax
  void *v7; // rdx
  __int64 v8; // rcx
  signed __int8 v9; // cf
  AutoBoost *v10; // rdi
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  --CurrentThread->KernelApcDisable;
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&gLoadedDiffHivesLock.StackLimit, 0LL, 0LL, a4);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&gLoadedDiffHivesLock.StackLimit, 0LL);
  v10 = v6;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&gLoadedDiffHivesLock.StackLimit,
      v6,
      (__int64)&gLoadedDiffHivesLock.StackLimit);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v7);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  if ( LODWORD(WheapPfaLock.KernelShadowStackBase)
    || (v12[0] = 917516LL, v12[1] = L"189900", v5 = CmRegisterInternalCallback(v8, (int)v12), v5 >= 0) )
  {
    ++LODWORD(WheapPfaLock.KernelShadowStackBase);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&gLoadedDiffHivesLock.StackLimit, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&gLoadedDiffHivesLock.StackLimit);
  KeAbPostRelease((unsigned __int64)&gLoadedDiffHivesLock.StackLimit);
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
