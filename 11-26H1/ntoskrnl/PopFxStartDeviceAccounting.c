/*
 * XREFs of PopFxStartDeviceAccounting @ 0x1404CF438
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140421FC8 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxResumeDeviceAccounting @ 0x1404A8F28 (PopFxResumeDeviceAccounting.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall PopFxStartDeviceAccounting(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  LegacyAutoBoost *v5; // rbx
  KSPIN_LOCK v6; // rbp
  KSPIN_LOCK *i; // rbx
  KIRQL v8; // si
  unsigned int j; // esi
  __int64 v10; // rdi
  KIRQL v11; // r14
  KIRQL v12; // al
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct _KLOCK_ENTRIES *v16; // r9

  if ( dword_140E676E0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&PopFxBlockingDeviceListLock.Teb, 0LL, 0LL, a4);
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
    v6 = MEMORY[0xFFFFF78000000008];
    for ( i = *(KSPIN_LOCK **)&PopFxBlockingDeviceListLock.ForegroundLossTime;
          i != (KSPIN_LOCK *)&PopFxBlockingDeviceListLock.ForegroundLossTime;
          i = (KSPIN_LOCK *)*i )
    {
      if ( i[6] )
      {
        v8 = KeAcquireSpinLockRaiseToDpc(i + 80);
        if ( *((_DWORD *)i + 164) )
        {
          memset_0(i + 84, 0, 0x60uLL);
          memset_0(i + 96, 0, 0x60uLL);
          if ( *((_BYTE *)i + 648) )
            i[83] = v6;
        }
        KeReleaseSpinLock(i + 80, v8);
        for ( j = 0; j < *((_DWORD *)i + 217); ++j )
        {
          v10 = *(_QWORD *)(i[109] + 8LL * j) + 200LL;
          v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v10);
          if ( *(_DWORD *)(v10 + 16) )
          {
            memset_0((void *)(v10 + 32), 0, 0x60uLL);
            memset_0((void *)(v10 + 128), 0, 0x60uLL);
            if ( *(_BYTE *)(v10 + 8) )
              *(_QWORD *)(v10 + 24) = v6;
          }
          KeReleaseSpinLock((PKSPIN_LOCK)v10, v11);
        }
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxBlockingDeviceListLock.Teb, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxBlockingDeviceListLock.Teb);
    KeAbPostRelease((unsigned __int64)&PopFxBlockingDeviceListLock.Teb);
    KeLeaveCriticalRegion();
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PopFxBlockingDeviceListLock.Timer.Header.WaitListHead);
    PopFxBlockingDeviceListLock.SchedulerApc.ApcListEntry.Flink = 0LL;
    PopFxBlockingDeviceListLock.SchedulerApc.NormalContext = 0LL;
    *(_OWORD *)&PopFxBlockingDeviceListLock.SavedApcStateFill[16] = 0uLL;
    *(_OWORD *)&PopFxBlockingDeviceListLock.SavedApcStateFill[32] = 0LL;
    *(_OWORD *)&PopFxBlockingDeviceListLock.SchedulerApc.Type = 0LL;
    *(_OWORD *)&PopFxBlockingDeviceListLock.SchedulerApcFill5[24] = 0LL;
    *(_OWORD *)&PopFxBlockingDeviceListLock.SchedulerApcFill5[40] = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&PopFxBlockingDeviceListLock.Timer.Header.WaitListHead, v12);
    if ( dword_140E676E0 == 1 )
      PopFxResumeDeviceAccounting(v14, v13, v15, v16);
  }
}
