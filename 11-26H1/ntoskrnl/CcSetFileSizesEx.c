/*
 * XREFs of CcSetFileSizesEx @ 0x1403A0060
 * Callers:
 *     CcSetFileSizes @ 0x1404D92E0 (CcSetFileSizes.c)
 * Callees:
 *     FsRtlIsNtstatusExpected @ 0x1402C4930 (FsRtlIsNtstatusExpected.c)
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     MmFlushSection @ 0x14039C7A0 (MmFlushSection.c)
 *     CcUnmapVacbArray @ 0x14039CC50 (CcUnmapVacbArray.c)
 *     CcPurgeCacheSection @ 0x14039D060 (CcPurgeCacheSection.c)
 *     CcDeleteMbcb @ 0x14039DF64 (CcDeleteMbcb.c)
 *     CcDeleteBcbs @ 0x14039E13C (CcDeleteBcbs.c)
 *     CcDecrementOpenCount @ 0x1403A04AC (CcDecrementOpenCount.c)
 *     CcExtendVacbArray @ 0x1403C07EC (CcExtendVacbArray.c)
 *     CcPurgeAndClearCacheSection @ 0x1404ACF44 (CcPurgeAndClearCacheSection.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MmExtendSection @ 0x140A65600 (MmExtendSection.c)
 */

NTSTATUS __stdcall CcSetFileSizesEx(PFILE_OBJECT FileObject, PCC_FILE_SIZES FileSizes)
{
  __int64 v2; // r8
  LARGE_INTEGER FileSize; // rbx
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // r13
  _LARGE_INTEGER AllocationSize; // rdi
  _LARGE_INTEGER ValidDataLength; // rsi
  unsigned __int8 CurrentIrql; // r14
  __int64 v8; // rdx
  __int64 SharedCacheMap; // r14
  unsigned __int64 *v10; // r15
  unsigned __int8 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int8 v16; // di
  __int64 v17; // rdx
  LARGE_INTEGER v18; // rax
  NTSTATUS v19; // edi
  NTSTATUS result; // eax
  NTSTATUS v21; // eax
  unsigned int v22; // edx
  NTSTATUS v23; // eax
  NTSTATUS v24; // r12d
  NTSTATUS v25; // edi
  __int128 v26; // [rsp+30h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v28; // [rsp+58h] [rbp-18h] BYREF
  char v29; // [rsp+B0h] [rbp+40h]
  LARGE_INTEGER FileOffset; // [rsp+B8h] [rbp+48h] BYREF
  unsigned __int64 v31; // [rsp+C0h] [rbp+50h] BYREF

  FileSize = FileSizes->FileSize;
  SectionObjectPointer = FileObject->SectionObjectPointer;
  AllocationSize = FileSizes->AllocationSize;
  ValidDataLength = FileSizes->ValidDataLength;
  v28.LockQueue.Lock = &CcMasterLock;
  v28.LockQueue.Next = 0LL;
  v26 = 0LL;
  *(_QWORD *)&v28.OldIrql = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  FileOffset = FileSize;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(FileSizes) = 2;
    LOBYTE(FileObject) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(FileObject, FileSizes);
  }
  v28.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v8 = _InterlockedExchange64((volatile __int64 *)&CcMasterLock, (__int64)&v28);
    if ( v8 )
      KxWaitForLockOwnerShip((volatile signed __int64)&v28, v8, v2);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&v28, (volatile __int64 *)&CcMasterLock);
  }
  SharedCacheMap = (__int64)SectionObjectPointer->SharedCacheMap;
  v29 = 1;
  if ( SharedCacheMap && *(_QWORD *)(SharedCacheMap + 176) )
  {
    v10 = (unsigned __int64 *)(*(_QWORD *)(SharedCacheMap + 536) + 768LL);
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = v10;
    v11 = KeGetCurrentIrql();
    if ( v11 != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(FileObject) = v11;
      KiRaiseIrqlProcessIrqlFlags(FileObject, 2LL);
    }
    LockHandle.OldIrql = v11;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v12 = _InterlockedExchange64((volatile __int64 *)v10, (__int64)&LockHandle);
      if ( v12 )
        KxWaitForLockOwnerShip((volatile signed __int64)&LockHandle, v12, v2);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)v10);
    }
    if ( AllocationSize.QuadPart <= *(_QWORD *)(SharedCacheMap + 32) )
      goto LABEL_18;
    ++*(_DWORD *)(SharedCacheMap + 4);
    ++*(_DWORD *)(SharedCacheMap + 544);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    KeReleaseInStackQueuedSpinLock(&v28);
    v22 = *(_DWORD *)(SharedCacheMap + 608);
    v29 = 0;
    v31 = (~(v22 - 1) | 0xFFFFFFFF00000000uLL) & (v22 - 1 + AllocationSize.QuadPart);
    if ( v22 < 0x400000 )
      *(_DWORD *)(SharedCacheMap + 608) = 2 * v22;
    v23 = MmExtendSection(*(_QWORD *)(SharedCacheMap + 176), &v31, 1LL);
    v24 = v23;
    if ( v23 < 0 )
    {
      v25 = -1073741588;
      if ( FsRtlIsNtstatusExpected(v23) )
        v25 = v24;
    }
    else
    {
      v25 = CcExtendVacbArray(SharedCacheMap, v31);
    }
    KeAcquireInStackQueuedSpinLock(v10, &LockHandle);
    CcDecrementOpenCount(SharedCacheMap);
    if ( v25 < 0 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      RtlRaiseStatus(v25);
    }
    SharedCacheMap = (__int64)SectionObjectPointer->SharedCacheMap;
    if ( SharedCacheMap )
    {
LABEL_18:
      ++*(_DWORD *)(SharedCacheMap + 4);
      ++*(_DWORD *)(SharedCacheMap + 544);
      if ( v29 )
      {
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        KeReleaseInStackQueuedSpinLock(&v28);
        LockHandle.LockQueue.Lock = v10;
        LockHandle.LockQueue.Next = 0LL;
        v16 = KeGetCurrentIrql();
        if ( v16 != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v13) = 2;
          LOBYTE(v14) = v16;
          KiRaiseIrqlProcessIrqlFlags(v14, v13);
        }
        LockHandle.OldIrql = v16;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          v17 = _InterlockedExchange64((volatile __int64 *)v10, (__int64)&LockHandle);
          if ( v17 )
            KxWaitForLockOwnerShip((volatile signed __int64)&LockHandle, v17, v15);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)v10);
        }
      }
      v18 = *(LARGE_INTEGER *)(SharedCacheMap + 40);
      if ( v18.QuadPart != 0x7FFFFFFFFFFFFFFFLL )
      {
        if ( FileSize.QuadPart < v18.QuadPart )
          *(LARGE_INTEGER *)(SharedCacheMap + 40) = FileSize;
        *(_LARGE_INTEGER *)(SharedCacheMap + 48) = ValidDataLength;
      }
      v19 = 0;
      if ( FileSize.QuadPart < *(_QWORD *)(SharedCacheMap + 8) && (*(_DWORD *)(SharedCacheMap + 152) & 4) == 0 )
      {
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        if ( CcUnmapVacbArray(SharedCacheMap, (__int64 *)&FileOffset, 0, 0LL, 0, 0) )
        {
          if ( !FileSize.QuadPart )
          {
            if ( *(_QWORD *)(SharedCacheMap + 168) )
              CcDeleteMbcb(SharedCacheMap);
            if ( *(_QWORD *)(SharedCacheMap + 16) != SharedCacheMap + 16 )
              CcDeleteBcbs(SharedCacheMap);
          }
          v21 = CcPurgeAndClearCacheSection(SharedCacheMap, &FileOffset);
          FileSize = FileOffset;
          v19 = v21;
        }
        KeAcquireInStackQueuedSpinLock(v10, &LockHandle);
      }
      *(LARGE_INTEGER *)(SharedCacheMap + 8) = FileSize;
      CcDecrementOpenCount(SharedCacheMap);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return v19;
    }
    else
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return 0;
    }
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&v28);
    if ( (FileSize.LowPart & 0xFFF) == 0 )
      return CcPurgeCacheSection(SectionObjectPointer, &FileOffset, 0, 0) == 0 ? 0xC0000435 : 0;
    MmFlushSection((__int64)SectionObjectPointer, (struct _KTHREAD **)&FileOffset, 1LL, 0LL, &v26, 0);
    result = v26;
    if ( (int)v26 >= 0 )
      return CcPurgeCacheSection(SectionObjectPointer, &FileOffset, 0, 0) == 0 ? 0xC0000435 : 0;
  }
  return result;
}
