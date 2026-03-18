/*
 * XREFs of CmFcpManagerSoftwareHiveReady @ 0x1408619C0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     CmFcpSubscribeScmWnfStateChange @ 0x1406E2D6C (CmFcpSubscribeScmWnfStateChange.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x140ABFB10 (CmFcpManagerDrainUsageNotifications.c)
 */

void __fastcall CmFcpManagerSoftwareHiveReady(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v6; // rax
  void *v7; // rdx
  AutoBoost *v8; // rbp

  *(_BYTE *)(a1 + 408) = 1;
  if ( *(_BYTE *)(a1 + 1784) )
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
