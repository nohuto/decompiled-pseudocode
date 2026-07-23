/*
 * XREFs of RtlpFindDynamicEHContinuationTarget @ 0x140A95000
 * Callers:
 *     RtlVerifyUserUnwindTarget @ 0x140A94E18 (RtlVerifyUserUnwindTarget.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlpDynamicEHContinuationTargetsTreeCompare @ 0x140A950DC (RtlpDynamicEHContinuationTargetsTreeCompare.c)
 */

bool __fastcall RtlpFindDynamicEHContinuationTarget(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  _KPROCESS *Process; // rsi
  struct _KTHREAD *CurrentThread; // rax
  void *v7; // rdx
  LegacyAutoBoost *v8; // rbx
  _QWORD *v9; // rbx
  int v10; // eax

  Process = KeGetCurrentThread()->ApcState.Process;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&Process[4].ReadyListHead, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[4].ReadyListHead, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&Process[4].ReadyListHead,
      0,
      v8,
      (struct _KTHREAD *)&Process[4].ReadyListHead);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v7);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  v9 = *(_QWORD **)&Process[4].AutoBoostState.TreeCount;
  while ( v9 )
  {
    v10 = RtlpDynamicEHContinuationTargetsTreeCompare(a1, v9);
    if ( v10 < 0 )
    {
      v9 = (_QWORD *)*v9;
    }
    else
    {
      if ( v10 <= 0 )
        break;
      v9 = (_QWORD *)v9[1];
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[4].ReadyListHead, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&Process[4].ReadyListHead);
  KeAbPostRelease((unsigned __int64)&Process[4].ReadyListHead);
  KeLeaveCriticalRegion();
  return v9 != 0LL;
}
