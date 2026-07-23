/*
 * XREFs of CcUpdateTimeOnLogHandles @ 0x1405B3CF4
 * Callers:
 *     CcLazyWriteScanVolume @ 0x14038AA5C (CcLazyWriteScanVolume.c)
 *     CcLazyWriteScan @ 0x1404F4BD4 (CcLazyWriteScan.c)
 * Callees:
 *     KeRcuReadUnlock @ 0x140222040 (KeRcuReadUnlock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402FF300 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeRcuReadLock @ 0x140386340 (KeRcuReadLock.c)
 */

__int64 __fastcall CcUpdateTimeOnLogHandles(__int64 a1)
{
  __int64 v2; // rbx
  unsigned __int64 i; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = MEMORY[0xFFFFF78000000320];
  KeRcuReadLock(a1);
  for ( i = EmpParseLock.KernelWaitTime; (unsigned __int64 *)i != &EmpParseLock.KernelWaitTime; i = *(_QWORD *)i )
  {
    if ( (*(_DWORD *)(i + 168) & 1) != 0 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 768), &LockHandle);
      if ( (*(_DWORD *)(i + 168) & 1) != 0 )
      {
        *(_QWORD *)(i + 160) = v2;
        *(_DWORD *)(i + 168) &= ~1u;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
  }
  return KeRcuReadUnlock();
}
