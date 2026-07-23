/*
 * XREFs of KeRemoveCallbackRegistrationEntry @ 0x1407BC090
 * Callers:
 *     KeUnregisterAvailableCpusChangeNotification @ 0x1407BC158 (KeUnregisterAvailableCpusChangeNotification.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 */

void __fastcall KeRemoveCallbackRegistrationEntry(
        PRTL_BALANCED_NODE Node,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v6; // rax
  void *v7; // rdx
  signed __int8 v8; // cf
  AutoBoost *v9; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&KiSupervisorXStateFeaturesLock.320, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&KiSupervisorXStateFeaturesLock.320, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&KiSupervisorXStateFeaturesLock.320,
      v6,
      (__int64)&KiSupervisorXStateFeaturesLock.320);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v7);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  RtlRbRemoveNode((PRTL_RB_TREE)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[16], Node);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KiSupervisorXStateFeaturesLock.320, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KiSupervisorXStateFeaturesLock.320);
  KeAbPostRelease((unsigned __int64)&KiSupervisorXStateFeaturesLock.320);
  KeLeaveGuardedRegion();
}
