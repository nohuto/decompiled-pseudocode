/*
 * XREFs of CcGetFlushedValidData @ 0x14039E120
 * Callers:
 *     CcWriteBehindPostProcess @ 0x140384CD4 (CcWriteBehindPostProcess.c)
 * Callees:
 *     KeRcuReadUnlock @ 0x1402206B0 (KeRcuReadUnlock.c)
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeRcuReadLock @ 0x140384590 (KeRcuReadLock.c)
 *     CcGetPartitionForSectionObject @ 0x14039D1F0 (CcGetPartitionForSectionObject.c)
 *     CcDecrementOpenCount @ 0x14039E74C (CcDecrementOpenCount.c)
 *     CcFindBitmapRangeToClean @ 0x1403E3204 (CcFindBitmapRangeToClean.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

LARGE_INTEGER __stdcall CcGetFlushedValidData(PSECTION_OBJECT_POINTERS SectionObjectPointer, BOOLEAN BcbListHeld)
{
  char *SharedCacheMap; // rdi
  __int64 v5; // rsi
  LARGE_INTEGER v6; // rbx
  __int64 v8; // rcx
  __int64 BitmapRangeToClean; // rax
  __int64 i; // rcx
  char *v11; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v13; // [rsp+48h] [rbp-20h] BYREF

  memset(&v13, 0, sizeof(v13));
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( BcbListHeld )
  {
    SharedCacheMap = (char *)SectionObjectPointer->SharedCacheMap;
  }
  else
  {
    KeRcuReadLock((__int64)SectionObjectPointer);
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v13);
    SharedCacheMap = (char *)SectionObjectPointer->SharedCacheMap;
    if ( !SharedCacheMap )
    {
      KeReleaseInStackQueuedSpinLock(&v13);
      KeRcuReadUnlock();
      return (LARGE_INTEGER)0x7FFFFFFFFFFFFFFFLL;
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*((_QWORD *)SharedCacheMap + 67) + 768LL), &LockHandle);
    ++*((_DWORD *)SharedCacheMap + 1);
    ++*((_DWORD *)SharedCacheMap + 136);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    KeReleaseInStackQueuedSpinLock(&v13);
    KeRcuReadUnlock();
    ExAcquireFastMutex((PKGUARDED_MUTEX)(SharedCacheMap + 288));
  }
  v5 = *((_QWORD *)SharedCacheMap + 67);
  if ( CcGetPartitionForSectionObject() != v5 )
    KeBugCheckEx(0x34u, 0x2452uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v6 = *(LARGE_INTEGER *)(SharedCacheMap + 48);
  if ( *((_DWORD *)SharedCacheMap + 28) )
  {
    v8 = *((_QWORD *)SharedCacheMap + 21);
    if ( v8 && *(_DWORD *)(v8 + 8) )
    {
      BitmapRangeToClean = CcFindBitmapRangeToClean(v8, 0LL);
      v6.QuadPart = (*(_QWORD *)(BitmapRangeToClean + 16) + *(unsigned int *)(BitmapRangeToClean + 24)) << 12;
    }
    for ( i = *((_QWORD *)SharedCacheMap + 2); ; i = *((_QWORD *)v11 + 2) )
    {
      v11 = (char *)(i - 16);
      if ( v11 == SharedCacheMap || *(_WORD *)v11 == 765 && v11[2] )
        break;
    }
    if ( v11 + 16 != SharedCacheMap + 16 && *((_QWORD *)v11 + 1) < v6.QuadPart )
      v6 = *(LARGE_INTEGER *)(v11 + 8);
  }
  if ( !BcbListHeld )
  {
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(SharedCacheMap + 288));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 768), &LockHandle);
    CcDecrementOpenCount(SharedCacheMap);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  return v6;
}
