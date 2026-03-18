/*
 * XREFs of CcNotifyExternalCachesInternal @ 0x140506DEC
 * Callers:
 *     CcQueueLazyWriteScanThreadForVolume @ 0x140387470 (CcQueueLazyWriteScanThreadForVolume.c)
 *     CcQueueLazyWriteScanThread @ 0x1405B0D70 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402B4630 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402B9F90 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     CcCalculatePagesToWrite @ 0x140386320 (CcCalculatePagesToWrite.c)
 *     CcCalculatePagesToWriteForVolume @ 0x14038A160 (CcCalculatePagesToWriteForVolume.c)
 *     CcNotifyEnhancedExternalCaches @ 0x140506F50 (CcNotifyEnhancedExternalCaches.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall CcNotifyExternalCachesInternal(int a1, __int64 a2, __int64 a3)
{
  KIRQL v6; // r15
  _QWORD *v7; // r14
  void **p_IptSaveArea; // rdi
  unsigned int v9; // eax
  unsigned __int64 v10; // rsi
  void **i; // rbx
  __int64 v12; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a3 && (*(_DWORD *)(a3 + 1616) & 0x10) != 0 )
  {
    CcNotifyEnhancedExternalCaches();
  }
  else
  {
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&EmpParseLock.SchedulerSharedSwappablePage);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a2 + 768), &LockHandle);
    if ( CcEnablePerVolumeLazyWriter )
    {
      v7 = (_QWORD *)(a3 + 992);
      p_IptSaveArea = (void **)(a3 + 1248);
      v9 = CcCalculatePagesToWriteForVolume(a3, a1);
    }
    else
    {
      v7 = (_QWORD *)(a2 + 1056);
      p_IptSaveArea = &EmpParseLock.IptSaveArea;
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
      for ( i = (void **)*p_IptSaveArea; i != p_IptSaveArea; i = (void **)*i )
      {
        v12 = (__int64)*(i - 3);
        if ( v12 )
          guard_dispatch_icall_no_overrides(i - 4, v12 * (unsigned __int64)(unsigned int)v10 / 0x64);
      }
    }
    KeReleaseSpinLock((PKSPIN_LOCK)&EmpParseLock.SchedulerSharedSwappablePage, v6);
  }
}
