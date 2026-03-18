/*
 * XREFs of IoUnregisterIoTracking @ 0x140797CB0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     IopIrpExtensionControl @ 0x1405CAA44 (IopIrpExtensionControl.c)
 *     IoPerfReset @ 0x1405CBD6C (IoPerfReset.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall IoUnregisterIoTracking(_QWORD *P)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KLOCK_ENTRIES *v3; // r9
  AutoBoost *v4; // rax
  void *v5; // rdx
  signed __int8 v6; // cf
  AutoBoost *v7; // rsi
  _QWORD *v8; // rdx
  PVOID *v9; // rax
  __int64 v10; // rdx
  struct _KTHREAD *v11; // rcx
  bool v12; // zf

  IoPerfReset(2);
  IopIrpExtensionControl(2, 0);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v4 = (AutoBoost *)KeAbPreAcquire((__int64)&IopSessionNotificationLock.Timer.DueTime, 0LL, 0LL, v3);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&IopSessionNotificationLock.Timer.DueTime, 0LL);
  v7 = v4;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(
      &IopSessionNotificationLock.Timer.DueTime.QuadPart,
      v4,
      (__int64)&IopSessionNotificationLock.Timer.DueTime);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v7, v5);
    else
      *((_BYTE *)v7 + 10) = 1;
  }
  v8 = (_QWORD *)*P;
  if ( *(_QWORD **)(*P + 8LL) != P || (v9 = (PVOID *)P[1], *v9 != P) )
    __fastfail(3u);
  *v9 = v8;
  v8[1] = v9;
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&IopSessionNotificationLock.Timer.DueTime.QuadPart,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&IopSessionNotificationLock.Timer.DueTime);
  KeAbPostRelease((unsigned __int64)&IopSessionNotificationLock.Timer.DueTime);
  v11 = KeGetCurrentThread();
  v12 = v11->SpecialApcDisable++ == -1;
  if ( v12 && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
    KiCheckForKernelApcDelivery((__int64)v11, v10);
  ExFreePoolWithTag(P, 0x72546F49u);
}
