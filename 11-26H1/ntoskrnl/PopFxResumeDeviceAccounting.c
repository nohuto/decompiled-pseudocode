/*
 * XREFs of PopFxResumeDeviceAccounting @ 0x1404AF898
 * Callers:
 *     PopFxStartDeviceAccounting @ 0x1404D5C74 (PopFxStartDeviceAccounting.c)
 *     PdcPoCurrentPdcPhase @ 0x14060D4E0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxSetGlobalDeviceAccountingEnabled @ 0x1404AFA54 (PopFxSetGlobalDeviceAccountingEnabled.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void __fastcall PopFxResumeDeviceAccounting(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  LegacyAutoBoost *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rbp
  ULONG_PTR i; // rbx
  __int64 v9; // rdi
  KIRQL v10; // r14
  unsigned int j; // esi
  KIRQL v12; // si

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&qword_140F123D0, 0LL, 0LL, a4);
  v6 = 17LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140F123D0, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140F123D0.Header.Lock, 0, v5, &qword_140F123D0);
  if ( v5 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v5 + 33) |= 2u;
    else
      *((_BYTE *)v5 + 10) = 1;
  }
  v7 = MEMORY[0xFFFFF78000000008];
  for ( i = qword_140F123E0; (ULONG_PTR *)i != &qword_140F123E0; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 48) )
    {
      v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(i + 640));
      if ( *(_DWORD *)(i + 656) )
      {
        memset_0((void *)(i + 768), 0, 0x60uLL);
        if ( *(_BYTE *)(i + 648) )
          *(_QWORD *)(i + 664) = v7;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(i + 640), v12);
      for ( j = 0; j < *(_DWORD *)(i + 868); ++j )
      {
        v9 = *(_QWORD *)(*(_QWORD *)(i + 872) + 8LL * j) + 200LL;
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
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140F123D0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140F123D0.Header.Lock);
  KeAbPostRelease((unsigned __int64)&qword_140F123D0);
  KeLeaveCriticalRegion();
}
