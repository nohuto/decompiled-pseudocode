/*
 * XREFs of PopFxResumeDeviceAccounting @ 0x1404A8F28
 * Callers:
 *     PopFxStartDeviceAccounting @ 0x1404CF438 (PopFxStartDeviceAccounting.c)
 *     PdcPoCurrentPdcPhase @ 0x1406105F0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxSetGlobalDeviceAccountingEnabled @ 0x1404A90E4 (PopFxSetGlobalDeviceAccountingEnabled.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall PopFxResumeDeviceAccounting(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  LegacyAutoBoost *v5; // rbx
  __int64 v6; // rcx
  KSPIN_LOCK v7; // rbp
  KSPIN_LOCK *i; // rbx
  __int64 v9; // rdi
  KIRQL v10; // r14
  unsigned int j; // esi
  KIRQL v12; // si

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&PopFxBlockingDeviceListLock.Teb, 0LL, 0LL, a4);
  v6 = 17LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxBlockingDeviceListLock.Teb, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&PopFxBlockingDeviceListLock.Teb,
      0,
      v5,
      (struct _KTHREAD *)&PopFxBlockingDeviceListLock.Teb);
  if ( v5 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v5 + 33) |= 2u;
    else
      *((_BYTE *)v5 + 10) = 1;
  }
  v7 = MEMORY[0xFFFFF78000000008];
  for ( i = *(KSPIN_LOCK **)&PopFxBlockingDeviceListLock.ForegroundLossTime;
        i != (KSPIN_LOCK *)&PopFxBlockingDeviceListLock.ForegroundLossTime;
        i = (KSPIN_LOCK *)*i )
  {
    if ( i[6] )
    {
      v12 = KeAcquireSpinLockRaiseToDpc(i + 80);
      if ( *((_DWORD *)i + 164) )
      {
        memset_0(i + 96, 0, 0x60uLL);
        if ( *((_BYTE *)i + 648) )
          i[83] = v7;
      }
      KeReleaseSpinLock(i + 80, v12);
      for ( j = 0; j < *((_DWORD *)i + 217); ++j )
      {
        v9 = *(_QWORD *)(i[109] + 8LL * j) + 200LL;
        v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v9);
        if ( *(_DWORD *)(v9 + 16) )
        {
          memset_0((void *)(v9 + 128), 0, 0x60uLL);
          if ( *(_BYTE *)(v9 + 8) )
            *(_QWORD *)(v9 + 24) = v7;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v9, v10);
      }
    }
  }
  LOBYTE(v6) = 1;
  PopFxSetGlobalDeviceAccountingEnabled(v6);
  PopFxDeviceAccountingPaused = 0;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxBlockingDeviceListLock.Teb, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxBlockingDeviceListLock.Teb);
  KeAbPostRelease((unsigned __int64)&PopFxBlockingDeviceListLock.Teb);
  KeLeaveCriticalRegion();
}
