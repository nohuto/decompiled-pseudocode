/*
 * XREFs of CcPurgeCacheSection @ 0x14039D060
 * Callers:
 *     CcZeroEndOfLastPage @ 0x1403110A8 (CcZeroEndOfLastPage.c)
 *     CcUnmapAndPurge @ 0x14039BE28 (CcUnmapAndPurge.c)
 *     CcUninitializeCacheMap @ 0x14039E1C0 (CcUninitializeCacheMap.c)
 *     CcSetFileSizesEx @ 0x1403A0060 (CcSetFileSizesEx.c)
 *     CcCoherencyFlushAndPurgeCache @ 0x14045DD80 (CcCoherencyFlushAndPurgeCache.c)
 *     CcPurgeAndClearCacheSection @ 0x1404ACF44 (CcPurgeAndClearCacheSection.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcUnmapVacbArray @ 0x14039CC50 (CcUnmapVacbArray.c)
 *     CcUninitializeCacheMap @ 0x14039E1C0 (CcUninitializeCacheMap.c)
 *     MmPurgeSection @ 0x14039E9D4 (MmPurgeSection.c)
 *     CcGetPartitionForSectionObject @ 0x14039EF50 (CcGetPartitionForSectionObject.c)
 *     CcDecrementOpenCount @ 0x1403A04AC (CcDecrementOpenCount.c)
 *     MmTrimSection @ 0x14045DEB0 (MmTrimSection.c)
 *     MmCanFileBeTruncated @ 0x1404A5420 (MmCanFileBeTruncated.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOLEAN __stdcall CcPurgeCacheSection(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG Flags)
{
  int v4; // r15d
  __int64 v5; // r12
  __int64 v6; // r13
  PSECTION_OBJECT_POINTERS v7; // rsi
  KSPIN_LOCK *v8; // rcx
  char v9; // r14
  PLARGE_INTEGER v10; // rdi
  unsigned __int8 CurrentIrql; // bl
  __int64 v12; // rdx
  __int64 SharedCacheMap; // rbx
  int v14; // r15d
  int v15; // eax
  int v16; // esi
  BOOLEAN v17; // r14
  __int64 v18; // rbx
  __int64 v19; // r13
  LARGE_INTEGER v21; // rax
  _QWORD *i; // rsi
  char v23[4]; // [rsp+30h] [rbp-50h] BYREF
  int v24; // [rsp+34h] [rbp-4Ch]
  __int64 v25; // [rsp+38h] [rbp-48h]
  __int64 v26; // [rsp+40h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE v27; // [rsp+48h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-20h] BYREF
  PSECTION_OBJECT_POINTERS SectionPointera; // [rsp+C0h] [rbp+40h]
  char v31; // [rsp+D8h] [rbp+58h]

  v31 = Flags;
  v4 = 0;
  v5 = Length;
  v6 = 0LL;
  v23[0] = 0;
  v24 = 0;
  v7 = SectionObjectPointer;
  *(_QWORD *)&v27.OldIrql = 0LL;
  v27.LockQueue.Next = 0LL;
  v8 = &CcMasterLock;
  v27.LockQueue.Lock = &CcMasterLock;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v25 = 0LL;
  v9 = Flags;
  v10 = FileOffset;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(FileOffset) = 2;
    LOBYTE(v8) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v8, FileOffset);
  }
  v27.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v12 = _InterlockedExchange64((volatile __int64 *)&CcMasterLock, (__int64)&v27);
    if ( v12 )
      KxWaitForLockOwnerShip((volatile signed __int64)&v27, v12, *(__int64 *)&Length);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&v27, (volatile __int64 *)&CcMasterLock);
  }
  SharedCacheMap = (__int64)v7->SharedCacheMap;
  v26 = SharedCacheMap;
  if ( SharedCacheMap )
  {
    v6 = *(_QWORD *)(SharedCacheMap + 536);
    v25 = v6;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 768), &LockHandle);
    ++*(_DWORD *)(SharedCacheMap + 4);
    ++*(_DWORD *)(SharedCacheMap + 544);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  KeReleaseInStackQueuedSpinLock(&v27);
  if ( SharedCacheMap )
  {
    if ( v6 != CcGetPartitionForSectionObject(v7) )
      KeBugCheckEx(0x34u, 0x14DCuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( (v9 & 1) != 0 )
    {
      for ( i = (_QWORD *)(SharedCacheMap + 232);
            (_QWORD *)*i != i;
            CcUninitializeCacheMap(*(PFILE_OBJECT *)(*i - 88LL), 0LL, 0LL) )
      {
        ;
      }
      v7 = SectionObjectPointer;
    }
    if ( (v9 & 8) != 0 )
    {
      if ( (int)MmTrimSection(v7, v10, v5, 0LL) < 0 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 768), &LockHandle);
        CcDecrementOpenCount(SharedCacheMap);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        return 0;
      }
    }
    else
    {
      CcUnmapVacbArray(SharedCacheMap, (__int64 *)v10, v5, 0LL, 1, 0);
    }
    if ( v10 )
    {
      v4 = 1;
      v24 = 1;
    }
  }
  v14 = v4 | 2;
  if ( (v9 & 4) == 0 )
    v14 = v24;
  v15 = v5;
  v16 = (v9 & 4) != 0 ? 5 : -1;
  do
  {
    v17 = MmPurgeSection((_DWORD)SectionObjectPointer, (_DWORD)v10, v15, v14, (__int64)v23);
    if ( v17 )
      break;
    if ( (_DWORD)v5 )
      break;
    if ( !MmCanFileBeTruncated(SectionObjectPointer, v10) )
      break;
    if ( (v31 & 2) != 0 )
      break;
    KeDelayExecutionThread(0, 0, &CcCollisionDelay);
    v15 = 0;
    --v16;
  }
  while ( v16 );
  v18 = v26;
  v19 = v25;
  if ( v26 )
  {
    if ( !(_DWORD)v5 )
    {
      if ( v10 )
      {
        v21 = *v10;
        if ( v10->QuadPart < *(_QWORD *)(v26 + 376) )
        {
          SectionPointera = (PSECTION_OBJECT_POINTERS)(v21.QuadPart + 0x3FFFF);
          LODWORD(SectionPointera) = (v21.LowPart + 0x3FFFF) & 0xFFFC0000;
          *(_QWORD *)(v26 + 376) = (char *)SectionPointera + 0x40000;
        }
      }
      else
      {
        *(_QWORD *)(v26 + 376) = 0LL;
      }
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v19 + 768), &LockHandle);
    CcDecrementOpenCount(v18);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  return v17;
}
