/*
 * XREFs of PopFxStartDeviceAccounting @ 0x1404D5C74
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14042AB54 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxResumeDeviceAccounting @ 0x1404AF898 (PopFxResumeDeviceAccounting.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void __fastcall PopFxStartDeviceAccounting(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  LegacyAutoBoost *v5; // rbx
  __int64 v6; // rbp
  ULONG_PTR i; // rbx
  KIRQL v8; // si
  unsigned int j; // esi
  __int64 v10; // rdi
  KIRQL v11; // r14
  KIRQL v12; // al
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct _KLOCK_ENTRIES *v16; // r9

  if ( LODWORD(stru_140E66FF0.SchedulerAssistLastYieldBoostTime) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&qword_140F123D0, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140F123D0, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140F123D0.Header.Lock, 0, v5, &qword_140F123D0);
    if ( v5 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        *((_BYTE *)v5 + 33) |= 2u;
      else
        *((_BYTE *)v5 + 10) = 1;
    }
    v6 = MEMORY[0xFFFFF78000000008];
    for ( i = qword_140F123E0; (ULONG_PTR *)i != &qword_140F123E0; i = *(_QWORD *)i )
    {
      if ( *(_QWORD *)(i + 48) )
      {
        v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(i + 640));
        if ( *(_DWORD *)(i + 656) )
        {
          memset_0((void *)(i + 672), 0, 0x60uLL);
          memset_0((void *)(i + 768), 0, 0x60uLL);
          if ( *(_BYTE *)(i + 648) )
            *(_QWORD *)(i + 664) = v6;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(i + 640), v8);
        for ( j = 0; j < *(_DWORD *)(i + 868); ++j )
        {
          v10 = *(_QWORD *)(*(_QWORD *)(i + 872) + 8LL * j) + 200LL;
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
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140F123D0, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140F123D0.Header.Lock);
    KeAbPostRelease((unsigned __int64)&qword_140F123D0);
    KeLeaveCriticalRegion();
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140F12420.320);
    stru_140F12420.WaitBlock[2].WaitListEntry.Flink = 0LL;
    stru_140F12420.WaitBlock[2].SparePtr = 0LL;
    *(_OWORD *)&stru_140F12420.WaitBlockFill11[48] = 0uLL;
    *(_OWORD *)&stru_140F12420.WaitBlockFill11[64] = 0LL;
    *(_OWORD *)&stru_140F12420.WaitBlockFill11[80] = 0LL;
    *(_OWORD *)&stru_140F12420.WaitBlockFill11[104] = 0LL;
    *(_OWORD *)&stru_140F12420.WaitBlockFill11[120] = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&stru_140F12420.320, v12);
    if ( LODWORD(stru_140E66FF0.SchedulerAssistLastYieldBoostTime) == 1 )
      PopFxResumeDeviceAccounting(v14, v13, v15, v16);
  }
}
