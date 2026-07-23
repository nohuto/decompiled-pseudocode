/*
 * XREFs of PopFxDisableBasicAccountingWorker @ 0x140607880
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     PopFxReinitializeAccountingInstance @ 0x1404DBA80 (PopFxReinitializeAccountingInstance.c)
 */

void __fastcall PopFxDisableBasicAccountingWorker(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile unsigned __int8 *v5; // rdx
  _BYTE *v6; // rbx
  unsigned int *i; // rbx
  unsigned int j; // edi
  __int64 v9; // rsi
  KIRQL v10; // bp

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (_BYTE *)KeAbPreAcquire((__int64)&PopFxBlockingDeviceListLock.Teb, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxBlockingDeviceListLock.Teb, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&PopFxBlockingDeviceListLock.Teb,
      0,
      (LegacyAutoBoost *)v6,
      (struct _KTHREAD *)&PopFxBlockingDeviceListLock.Teb);
  if ( v6 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v5) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v6 + 33), v5, 1);
    }
    else
    {
      v6[10] = 1;
    }
  }
  for ( i = *(unsigned int **)&PopFxBlockingDeviceListLock.ForegroundLossTime;
        i != &PopFxBlockingDeviceListLock.ForegroundLossTime;
        i = *(unsigned int **)i )
  {
    for ( j = 0; j < i[217]; ++j )
    {
      v9 = *(_QWORD *)(*((_QWORD *)i + 109) + 8LL * j) + 200LL;
      v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v9);
      if ( *(_DWORD *)(v9 + 16) == 1 )
        PopFxReinitializeAccountingInstance(v9, 0);
      KeReleaseSpinLock((PKSPIN_LOCK)v9, v10);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxBlockingDeviceListLock.Teb, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxBlockingDeviceListLock.Teb);
  KeAbPostRelease((unsigned __int64)&PopFxBlockingDeviceListLock.Teb);
  KeLeaveCriticalRegion();
}
