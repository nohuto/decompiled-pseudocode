/*
 * XREFs of CcNotifyExternalCachesInternal @ 0x1405007BC
 * Callers:
 *     CcQueueLazyWriteScanThreadForVolume @ 0x140389220 (CcQueueLazyWriteScanThreadForVolume.c)
 *     CcQueueLazyWriteScanThread @ 0x1405B3580 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402FF300 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     CcCalculatePagesToWrite @ 0x1403880D0 (CcCalculatePagesToWrite.c)
 *     CcCalculatePagesToWriteForVolume @ 0x14038BF10 (CcCalculatePagesToWriteForVolume.c)
 *     CcNotifyEnhancedExternalCaches @ 0x140500920 (CcNotifyEnhancedExternalCaches.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall CcNotifyExternalCachesInternal(int a1, __int64 a2, __int64 a3)
{
  KIRQL v6; // r15
  _QWORD *v7; // r14
  $BE885E7414BBCAF50EC3D61D16C96C1B *v8; // rdi
  unsigned int v9; // eax
  unsigned __int64 v10; // rsi
  $BE885E7414BBCAF50EC3D61D16C96C1B *i; // rbx
  void *AutoBoostThreadState; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a3 && (*(_DWORD *)(a3 + 1616) & 0x10) != 0 )
  {
    CcNotifyEnhancedExternalCaches();
  }
  else
  {
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&EmpParseLock.SchedulerAssistYieldCounter);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a2 + 768), &LockHandle);
    if ( CcEnablePerVolumeLazyWriter )
    {
      v7 = (_QWORD *)(a3 + 992);
      v8 = ($BE885E7414BBCAF50EC3D61D16C96C1B *)(a3 + 1248);
      v9 = CcCalculatePagesToWriteForVolume(a3, a1);
    }
    else
    {
      v7 = (_QWORD *)(a2 + 1056);
      v8 = &EmpParseLock.1136;
      v9 = CcCalculatePagesToWrite(a2, a1, a2 + 1056, (unsigned __int64 *)(a2 + 1080), 0);
    }
    if ( v9 == 0xFFFFFFFFLL )
    {
      LODWORD(v10) = 100;
    }
    else if ( *v7 )
    {
      v10 = 100 * (unsigned __int64)v9 / *v7;
    }
    else
    {
      LODWORD(v10) = 0;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( (_DWORD)v10 )
    {
      for ( i = ($BE885E7414BBCAF50EC3D61D16C96C1B *)v8->AutoBoostThreadState;
            i != v8;
            i = ($BE885E7414BBCAF50EC3D61D16C96C1B *)i->AutoBoostThreadState )
      {
        AutoBoostThreadState = i[-3].AutoBoostThreadState;
        if ( AutoBoostThreadState )
          guard_dispatch_icall_no_overrides(&i[-4], (unsigned __int64)AutoBoostThreadState * (unsigned int)v10 / 0x64);
      }
    }
    KeReleaseSpinLock((PKSPIN_LOCK)&EmpParseLock.SchedulerAssistYieldCounter, v6);
  }
}
