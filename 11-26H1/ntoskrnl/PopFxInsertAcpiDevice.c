/*
 * XREFs of PopFxInsertAcpiDevice @ 0x140607B34
 * Callers:
 *     PopFxAcpiRegisterDevice @ 0x140615144 (PopFxAcpiRegisterDevice.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

void __fastcall PopFxInsertAcpiDevice(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v6; // rax
  void *v7; // rdx
  signed __int8 v8; // cf
  AutoBoost *v9; // rdi
  unsigned int ***v10; // rcx
  unsigned int **v11; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&PopFxBlockingDeviceListLock.Teb, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&PopFxBlockingDeviceListLock.Teb, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&PopFxBlockingDeviceListLock.Teb,
      v6,
      (__int64)&PopFxBlockingDeviceListLock.Teb);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v7);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  v10 = *(unsigned int ****)&PopFxBlockingDeviceListLock.AbCompletedIoQoSBoostCount;
  v11 = (unsigned int **)(a3 + 200);
  if ( **(struct _KTHREAD ***)&PopFxBlockingDeviceListLock.AbCompletedIoQoSBoostCount != (struct _KTHREAD *)&PopFxBlockingDeviceListLock.PriorityFloorSummary )
    __fastfail(3u);
  *v11 = &PopFxBlockingDeviceListLock.PriorityFloorSummary;
  *(_QWORD *)(a3 + 208) = v10;
  *v10 = v11;
  *(_QWORD *)&PopFxBlockingDeviceListLock.AbCompletedIoQoSBoostCount = a3 + 200;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxBlockingDeviceListLock.Teb, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxBlockingDeviceListLock.Teb);
  KeAbPostRelease((unsigned __int64)&PopFxBlockingDeviceListLock.Teb);
  KeLeaveCriticalRegion();
}
