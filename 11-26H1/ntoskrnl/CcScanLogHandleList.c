/*
 * XREFs of CcScanLogHandleList @ 0x140387D58
 * Callers:
 *     CcLazyWriteScanVolume @ 0x14038AA5C (CcLazyWriteScanVolume.c)
 *     CcLazyWriteScan @ 0x1404F4BD4 (CcLazyWriteScan.c)
 * Callees:
 *     KeRcuReadUnlock @ 0x140222040 (KeRcuReadUnlock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcDecrementVolumeUseCountWithDelete @ 0x1403861F0 (CcDecrementVolumeUseCountWithDelete.c)
 *     KeRcuReadLock @ 0x140386340 (KeRcuReadLock.c)
 *     CcCalculatePagesToWrite @ 0x1403880D0 (CcCalculatePagesToWrite.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall CcScanLogHandleList(__int64 a1, _DWORD *a2, int a3, _QWORD *a4)
{
  unsigned __int64 KernelWaitTime; // rdi
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rcx
  _DWORD *v12; // rsi
  unsigned __int16 v13; // ax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v20; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int16 v22; // [rsp+88h] [rbp+10h] BYREF

  v22 = 0;
  *a2 = 0;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  *a4 = 0x7FFFFFFFFFFFFFFFLL;
  LockHandle.LockQueue = 0LL;
  KeRcuReadLock(a1);
  KernelWaitTime = EmpParseLock.KernelWaitTime;
  while ( (unsigned __int64 *)KernelWaitTime != &EmpParseLock.KernelWaitTime )
  {
    v9 = KernelWaitTime - 24;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(KernelWaitTime - 16)) <= 1 )
      __fastfail(0xEu);
    KeRcuReadUnlock();
    v11 = *(_QWORD *)(v9 + 48);
    if ( v11 )
      guard_dispatch_icall_no_overrides(v11, &v22, v10);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
    if ( *(_QWORD *)(v9 + 48) )
    {
      v12 = (_DWORD *)(v9 + 72);
      if ( *(_QWORD *)(v9 + 72) >= 0xFFFFFFFFuLL )
      {
        ++CcDbgForcedLogPercentFull;
        v13 = 0;
        v22 = 0;
      }
      else
      {
        *(_DWORD *)(v9 + 120) = *v12;
        v13 = v22;
      }
      if ( v13 )
      {
        v14 = 100 * *(_DWORD *)(KernelWaitTime + 96);
        *(_DWORD *)(v9 + 120) = v14;
        v15 = v14 / v22;
        *(_DWORD *)(v9 + 120) = v15;
      }
      else
      {
        v15 = *(_DWORD *)(v9 + 156);
        *(_DWORD *)(KernelWaitTime + 96) = v15;
      }
      *(_QWORD *)(v9 + 112) = v15;
      *(_QWORD *)(v9 + 104) = v15;
      *(_QWORD *)(v9 + 96) = v15;
      *(_DWORD *)(v9 + 120) = (3 * v15) >> 2;
      v16 = CcCalculatePagesToWrite(a1, a3, (int)v9 + 72, (int)v9 + 96, 1);
      v17 = *(_QWORD *)v12;
      *(_QWORD *)(v9 + 80) = *(_QWORD *)v12;
      if ( v16 > v17 >> 3 )
      {
        *a2 += v16;
        ++CcDbgAdditionalPagesQueuedCount;
      }
      else
      {
        v16 = 0;
      }
      *(_DWORD *)(KernelWaitTime + 128) = v16;
      *(_DWORD *)(v9 + 88) = v16;
      if ( *(_QWORD *)(v9 + 40) )
      {
        v20 = *(_QWORD *)(v9 + 184);
        if ( v20 < *a4 )
          *a4 = v20;
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    KeRcuReadLock(v18);
    KernelWaitTime = *(_QWORD *)KernelWaitTime;
    CcDecrementVolumeUseCountWithDelete(v9);
  }
  return KeRcuReadUnlock();
}
