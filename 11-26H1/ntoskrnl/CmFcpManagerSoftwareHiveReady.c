/*
 * XREFs of CmFcpManagerSoftwareHiveReady @ 0x140867DA0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     CmFcpSubscribeScmWnfStateChange @ 0x1406E704C (CmFcpSubscribeScmWnfStateChange.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x140AC1BB0 (CmFcpManagerDrainUsageNotifications.c)
 */

void __fastcall CmFcpManagerSoftwareHiveReady(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v6; // rax
  void *v7; // rdx
  AutoBoost *v8; // rbp

  *(_BYTE *)(a1 + 408) = 1;
  if ( *(_BYTE *)(a1 + 1856) )
    CmFcpSubscribeScmWnfStateChange(a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (AutoBoost *)KeAbPreAcquire(a1 + 400, 0LL, 0LL, a4);
  v8 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 400), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 400), v6, a1 + 400);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v7);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  CmFcpManagerDrainUsageNotifications(a1, 0LL);
  CmFcpManagerDrainUsageNotifications(a1, 0LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 400), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 400));
  KeAbPostRelease(a1 + 400);
  KeLeaveCriticalRegion();
}
