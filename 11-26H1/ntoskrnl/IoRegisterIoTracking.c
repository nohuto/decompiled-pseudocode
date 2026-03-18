/*
 * XREFs of IoRegisterIoTracking @ 0x140797B40
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     IoPerfInit @ 0x14050EB0C (IoPerfInit.c)
 *     IopIrpExtensionControl @ 0x1405CAA44 (IopIrpExtensionControl.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall IoRegisterIoTracking(__int64 a1, _KDPC **a2)
{
  __int64 Pool2; // rax
  struct _KLOCK_ENTRIES *v5; // r9
  _KDPC *v6; // rdi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v9; // rax
  void *v10; // rdx
  signed __int8 v11; // cf
  AutoBoost *v12; // rsi
  _KDPC *Dpc; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _KTHREAD *v16; // r8

  *a2 = 0LL;
  Pool2 = ExAllocatePool2(0x40uLL);
  v6 = (_KDPC *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_QWORD *)(Pool2 + 16) = *(_QWORD *)(a1 + 8);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v9 = (AutoBoost *)KeAbPreAcquire((__int64)&IopSessionNotificationLock.Timer.DueTime, 0LL, 0LL, v5);
  v11 = _interlockedbittestandset64((volatile signed __int32 *)&IopSessionNotificationLock.Timer.DueTime, 0LL);
  v12 = v9;
  if ( v11 )
    ExfAcquirePushLockExclusiveEx(
      &IopSessionNotificationLock.Timer.DueTime.QuadPart,
      v9,
      (__int64)&IopSessionNotificationLock.Timer.DueTime);
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v12, v10);
    else
      *((_BYTE *)v12 + 10) = 1;
  }
  Dpc = IopSessionNotificationLock.Timer.Dpc;
  if ( *(struct _KTHREAD **)IopSessionNotificationLock.Timer.Dpc != (struct _KTHREAD *)&IopSessionNotificationLock.Timer.TimerListEntry.Blink )
    __fastfail(3u);
  *(_QWORD *)&v6->TargetInfoAsUlong = &IopSessionNotificationLock.Timer.TimerListEntry.Blink;
  v6->DpcListEntry.Next = (struct _SINGLE_LIST_ENTRY *)Dpc;
  *(_QWORD *)&Dpc->TargetInfoAsUlong = v6;
  IopSessionNotificationLock.Timer.Dpc = v6;
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&IopSessionNotificationLock.Timer.DueTime.QuadPart,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&IopSessionNotificationLock.Timer.DueTime);
  KeAbPostRelease((unsigned __int64)&IopSessionNotificationLock.Timer.DueTime);
  v16 = KeGetCurrentThread();
  if ( v16->SpecialApcDisable++ == -1
    && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
  {
    KiCheckForKernelApcDelivery(v15, v14);
  }
  IopIrpExtensionControl(2, 1);
  IoPerfInit(2);
  result = 0LL;
  *a2 = v6;
  return result;
}
