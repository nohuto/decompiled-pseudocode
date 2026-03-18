/*
 * XREFs of ExpWnfAcquireSubscriptionNameInstance @ 0x140948918
 * Callers:
 *     PopEsInStandbyEvaluate @ 0x14094683C (PopEsInStandbyEvaluate.c)
 *     PopWnfAudioCallback @ 0x140946B50 (PopWnfAudioCallback.c)
 *     PopWnfSprActiveSessionChangeCallback @ 0x140947BB0 (PopWnfSprActiveSessionChangeCallback.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x140947CB0 (PopEsWnfSubscriptionOverrideCallback.c)
 *     ExQueryWnfStateData @ 0x1409489F0 (ExQueryWnfStateData.c)
 *     PopWnfFullscreenVideoCallback @ 0x140B486A0 (PopWnfFullscreenVideoCallback.c)
 *     PopAdaptiveWnfCallback @ 0x140B4D470 (PopAdaptiveWnfCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x140B55A60 (VslpConnectedStandbyWnfCallback.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 */

__int64 __fastcall ExpWnfAcquireSubscriptionNameInstance(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v5; // rsi
  signed __int64 *v6; // rbx
  void *v7; // rdx
  LegacyAutoBoost *v8; // rdi
  struct _EX_RUNDOWN_REF *v9; // rcx

  v5 = 0LL;
  v6 = (signed __int64 *)(*(_QWORD *)&PsInitialSystemProcess[3].BasePriority + 80LL);
  v8 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v6, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v6, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v6, 0, v8, (struct _KTHREAD *)v6);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v7);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  v9 = *(struct _EX_RUNDOWN_REF **)(a2 + 48);
  if ( v9 && ExAcquireRundownProtection_0(v9 + 1) )
    v5 = *(_QWORD *)(a2 + 48);
  if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v6);
  KeAbPostRelease((unsigned __int64)v6);
  return v5;
}
