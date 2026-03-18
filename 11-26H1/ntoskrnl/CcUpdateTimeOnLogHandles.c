/*
 * XREFs of CcUpdateTimeOnLogHandles @ 0x1405B14E4
 * Callers:
 *     CcLazyWriteScanVolume @ 0x140388CAC (CcLazyWriteScanVolume.c)
 *     CcLazyWriteScan @ 0x1404FB788 (CcLazyWriteScan.c)
 * Callees:
 *     KeRcuReadUnlock @ 0x1402206B0 (KeRcuReadUnlock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402B4630 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402B9F90 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeRcuReadLock @ 0x140384590 (KeRcuReadLock.c)
 */

__int64 __fastcall CcUpdateTimeOnLogHandles(__int64 a1)
{
  struct _LIST_ENTRY *v2; // rbx
  struct _LIST_ENTRY *i; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
  KeRcuReadLock(a1);
  for ( i = EmpParseLock.GlobalUpdateVpThreadPriorityListEntry.Blink;
        i != (struct _LIST_ENTRY *)&EmpParseLock.InGlobalUpdateVpThreadPriorityList;
        i = i->Flink )
  {
    if ( ((__int64)i[10].Blink & 1) != 0 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 768), &LockHandle);
      if ( ((__int64)i[10].Blink & 1) != 0 )
      {
        i[10].Flink = v2;
        LODWORD(i[10].Blink) &= ~1u;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
  }
  return KeRcuReadUnlock();
}
