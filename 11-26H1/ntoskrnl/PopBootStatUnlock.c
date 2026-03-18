/*
 * XREFs of PopBootStatUnlock @ 0x140770008
 * Callers:
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     RtlUnlockBootStatusData @ 0x140ACBD70 (RtlUnlockBootStatusData.c)
 */

__int64 __fastcall PopBootStatUnlock(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v5; // rax
  void *v6; // rdx
  signed __int8 v7; // cf
  AutoBoost *v8; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&PopModernStandbyStateNotify.AbWaitObject, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&PopModernStandbyStateNotify.AbWaitObject, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&PopModernStandbyStateNotify.AbWaitObject,
      v5,
      (__int64)&PopModernStandbyStateNotify.AbWaitObject);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v6);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  RtlUnlockBootStatusData(0LL);
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&PopModernStandbyStateNotify.AbWaitObject,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopModernStandbyStateNotify.AbWaitObject);
  KeAbPostRelease((unsigned __int64)&PopModernStandbyStateNotify.AbWaitObject);
  KeLeaveCriticalRegion();
  return 0LL;
}
