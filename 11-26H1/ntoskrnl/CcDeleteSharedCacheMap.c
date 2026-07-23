/*
 * XREFs of CcDeleteSharedCacheMap @ 0x14039D950
 * Callers:
 *     CcWriteBehindPostProcess @ 0x140386A84 (CcWriteBehindPostProcess.c)
 *     CcUninitializeCacheMap @ 0x14039E1C0 (CcUninitializeCacheMap.c)
 *     CcInitializeCacheMapInternal @ 0x1403E4420 (CcInitializeCacheMapInternal.c)
 *     CcDeleteSectionsForPartition @ 0x1405B4C80 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     ObFastDereferenceObjectDeferDelete @ 0x140263F90 (ObFastDereferenceObjectDeferDelete.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcReferencePrivateVolumeCacheMap @ 0x1403853D0 (CcReferencePrivateVolumeCacheMap.c)
 *     CcDecrementVolumeUseCountWithDelete @ 0x1403861F0 (CcDecrementVolumeUseCountWithDelete.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     CcUnmapAndPurge @ 0x14039BE28 (CcUnmapAndPurge.c)
 *     CcFreeSharedCacheMapIgnoreNull @ 0x14039DE34 (CcFreeSharedCacheMapIgnoreNull.c)
 *     CcGetPrivateVolumeCacheMap @ 0x14039DEA0 (CcGetPrivateVolumeCacheMap.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x14039DEC0 (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     CcDeleteMbcb @ 0x14039DF64 (CcDeleteMbcb.c)
 *     CcDeleteBcbs @ 0x14039E13C (CcDeleteBcbs.c)
 *     CcPostPVCMForDeleteToPartition @ 0x14039EC94 (CcPostPVCMForDeleteToPartition.c)
 *     CcDecrementPrivateVolumeUseCount @ 0x14039EF10 (CcDecrementPrivateVolumeUseCount.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     FsRtlReleaseFile @ 0x140A64120 (FsRtlReleaseFile.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CcDeleteSharedCacheMap(
        PSLIST_ENTRY ListEntry,
        PKLOCK_QUEUE_HANDLE LockHandle,
        PKLOCK_QUEUE_HANDLE a3,
        int a4,
        PFILE_OBJECT FileObject)
{
  __int64 v5; // r13
  char v8; // r15
  int v11; // r9d
  __int64 PrivateVolumeCacheMap; // rbp
  ULONG_PTR BugCheckParameter4; // r9
  __int64 v14; // r10
  __int64 v15; // rcx
  _SLIST_ENTRY *Next; // rax
  char v17; // r8
  __int64 v18; // rdx
  _SLIST_ENTRY *v19; // rcx
  __int64 v20; // rdx
  _SLIST_ENTRY *v21; // rcx
  __int64 v22; // rdx
  _SLIST_ENTRY *v23; // rcx
  _SLIST_ENTRY *v24; // rcx
  __int64 v25; // rax
  volatile signed __int64 *v26; // rcx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rsi
  KSPIN_LOCK *v31; // rcx
  unsigned __int8 CurrentIrql; // si
  __int64 v33; // rdx
  _SLIST_ENTRY *v34; // rcx
  _SLIST_ENTRY *v35; // rcx
  _SLIST_ENTRY *v36; // rcx
  __int64 v37; // r8
  __int64 v39; // r8
  _QWORD *v40; // rdx
  __int64 v41; // rdx
  _QWORD *v42; // rax
  _QWORD *v43; // rsi
  struct _KEVENT *v44; // rcx
  int v45; // [rsp+80h] [rbp+8h]

  v5 = *((_QWORD *)&ListEntry[33].Next + 1);
  v45 = 0;
  v8 = 0;
  PrivateVolumeCacheMap = CcGetPrivateVolumeCacheMap(ListEntry);
  if ( (unsigned int)(v11 + 1)
     + _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 1296), (unsigned int)(v11 + 1)) <= (unsigned int)(v11 + 1) )
    __fastfail(0xEu);
  CcReferencePrivateVolumeCacheMap(PrivateVolumeCacheMap);
  v15 = *((_QWORD *)&ListEntry[8].Next + 1);
  if ( *(PSLIST_ENTRY *)(v15 + 8) != (PSLIST_ENTRY)(&ListEntry[8].Next + 1) )
    goto LABEL_49;
  Next = ListEntry[9].Next;
  if ( Next->Next != (_SLIST_ENTRY *)(&ListEntry[8].Next + 1) )
    goto LABEL_49;
  v17 = CcEnablePerVolumeLazyWriter;
  Next->Next = (_SLIST_ENTRY *)v15;
  *(_QWORD *)(v15 + 8) = Next;
  if ( v17 )
  {
    v18 = *((_QWORD *)&ListEntry[35].Next + 1);
    if ( *(PSLIST_ENTRY *)(v18 + 8) != (PSLIST_ENTRY)(&ListEntry[35].Next + 1) )
      goto LABEL_49;
    v19 = ListEntry[36].Next;
    if ( v19->Next != (_SLIST_ENTRY *)(&ListEntry[35].Next + 1) )
      goto LABEL_49;
    v19->Next = (_SLIST_ENTRY *)v18;
    *(_QWORD *)(v18 + 8) = v19;
    v8 = v14 & (*(_BYTE *)(PrivateVolumeCacheMap + 1616) >> 3);
  }
  if ( (*(_DWORD *)(&ListEntry[9].Next + 1) & 0x3000000) != 0 )
  {
    v20 = *((_QWORD *)&ListEntry[7].Next + 1);
    if ( *(PSLIST_ENTRY *)(v20 + 8) != (PSLIST_ENTRY)(&ListEntry[7].Next + 1) )
      goto LABEL_49;
    v21 = ListEntry[8].Next;
    if ( v21->Next != (_SLIST_ENTRY *)(&ListEntry[7].Next + 1) )
      goto LABEL_49;
    v21->Next = (_SLIST_ENTRY *)v20;
    *(_QWORD *)(v20 + 8) = v21;
    if ( v17 )
    {
      v22 = *((_QWORD *)&ListEntry[36].Next + 1);
      if ( *(PSLIST_ENTRY *)(v22 + 8) != (PSLIST_ENTRY)(&ListEntry[36].Next + 1) )
        goto LABEL_49;
      v23 = ListEntry[37].Next;
      if ( v23->Next != (_SLIST_ENTRY *)(&ListEntry[36].Next + 1) )
        goto LABEL_49;
      v23->Next = (_SLIST_ENTRY *)v22;
      *(_QWORD *)(v22 + 8) = v23;
    }
  }
  *(_QWORD *)(*(_QWORD *)(((unsigned __int64)ListEntry[6].Next & 0xFFFFFFFFFFFFFFF0uLL) + 0x28) + 8LL) = BugCheckParameter4;
  *((_DWORD *)&ListEntry[9].Next + 2) |= 0x80020u;
  if ( LockHandle )
  {
    CcSectionDeletionSequencePhase1 += v14;
  }
  else if ( *(_BYTE *)(v5 + 1294) == (_BYTE)BugCheckParameter4 )
  {
    KeBugCheckEx(0x34u, 0x10E4uLL, 0xFFFFFFFFC0000420uLL, BugCheckParameter4, BugCheckParameter4);
  }
  if ( *((_QWORD *)&ListEntry[37].Next + 1) )
  {
    v45 = CcDecrementPrivateVolumeUseCount();
    if ( !v45 )
    {
      v39 = *(_QWORD *)(PrivateVolumeCacheMap + 592);
      if ( *(_QWORD *)(v39 + 8) == PrivateVolumeCacheMap + 592 )
      {
        v40 = *(_QWORD **)(PrivateVolumeCacheMap + 600);
        if ( *v40 == PrivateVolumeCacheMap + 592 )
        {
          *v40 = v39;
          *(_QWORD *)(v39 + 8) = v40;
          v41 = *(_QWORD *)(PrivateVolumeCacheMap + 576);
          if ( *(_QWORD *)(v41 + 8) == PrivateVolumeCacheMap + 576 )
          {
            v42 = *(_QWORD **)(PrivateVolumeCacheMap + 584);
            if ( *v42 == PrivateVolumeCacheMap + 576 )
            {
              *v42 = v41;
              *(_QWORD *)(v41 + 8) = v42;
              if ( !v8 )
                KeSetEvent((PRKEVENT)(PrivateVolumeCacheMap + 1176), 0, 0);
              goto LABEL_18;
            }
          }
        }
      }
LABEL_49:
      __fastfail(3u);
    }
  }
LABEL_18:
  KeReleaseInStackQueuedSpinLock(a3);
  if ( LockHandle )
    KeReleaseInStackQueuedSpinLock(LockHandle);
  if ( ListEntry[1].Next != &ListEntry[1] )
    CcDeleteBcbs(ListEntry);
  CcUnmapAndPurge((__int64)ListEntry, *((_QWORD *)&ListEntry->Next + 1) >= 0x100000LL);
  if ( a4 )
  {
    FsRtlReleaseFile(FileObject);
    ObFastDereferenceObjectDeferDelete((signed __int64 *)&ListEntry[6], (ULONG_PTR)FileObject, 0x63536343u);
  }
  v24 = ListEntry[11].Next;
  if ( v24 )
  {
    ObfDereferenceObjectWithTag(v24, 0x746C6644u);
    ListEntry[11].Next = 0LL;
  }
  if ( *((_QWORD *)&ListEntry[10].Next + 1) )
    CcDeleteMbcb(ListEntry);
  CcDecrementVolumeUseCountWithDelete((__int64)ListEntry[32].Next);
  v25 = _InterlockedExchange64((volatile __int64 *)&ListEntry[6], 0LL);
  v26 = (volatile signed __int64 *)(v25 & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (v25 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v27 = v25 & 0xF;
    if ( v27 )
      _InterlockedAdd64(v26 - 6, -v27);
  }
  ObfDereferenceObjectWithTag((PVOID)v26, 0x746C6644u);
  v30 = *((_QWORD *)&ListEntry[17].Next + 1);
  while ( v30 )
  {
    v43 = (_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFEuLL);
    v44 = (struct _KEVENT *)(v43 + 1);
    v30 = *v43;
    KeSetEvent(v44, 0, 0);
  }
  if ( LockHandle )
  {
    v31 = &CcMasterLock;
    LockHandle->LockQueue.Next = 0LL;
    LockHandle->LockQueue.Lock = &CcMasterLock;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v28) = 2;
      LOBYTE(v31) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v31, v28);
    }
    LockHandle->OldIrql = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v33 = _InterlockedExchange64((volatile __int64 *)&CcMasterLock, (__int64)LockHandle);
      if ( v33 )
        KxWaitForLockOwnerShip((volatile signed __int64)LockHandle, v33, v29);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)LockHandle, (volatile __int64 *)&CcMasterLock);
    }
    ++CcSectionDeletionSequencePhase2;
    KeReleaseInStackQueuedSpinLock(LockHandle);
  }
  v34 = (_SLIST_ENTRY *)*((_QWORD *)&ListEntry[5].Next + 1);
  if ( v34 != (_SLIST_ENTRY *)(&ListEntry[3].Next + 1) && v34 )
    ExFreePoolWithTag(v34, 0);
  v35 = (_SLIST_ENTRY *)*((_QWORD *)&ListEntry[11].Next + 1);
  if ( v35 && v35 != &ListEntry[22] )
    ExFreePoolWithTag(v35, 0);
  v36 = ListEntry[12].Next;
  if ( v36 && v36 != &ListEntry[22] )
    ExFreePoolWithTag(v36, 0);
  CcDereferencePartitionAndPrivateVolumeCacheMap(v5, PrivateVolumeCacheMap);
  if ( PrivateVolumeCacheMap && !v45 )
  {
    DbgPrintEx(
      0x7Fu,
      2u,
      "[%04x:%04x]CcDeleteSharedCacheMap: QUEUE-DEL-PVCM SCM:%p, VCM:%p(vid:%2lx), PVCM:%p(vid:%2lx)\n",
      LODWORD(KeGetCurrentThread()[1].CycleTime),
      KeGetCurrentThread()[1].CurrentRunTime,
      ListEntry,
      ListEntry[32].Next,
      HIDWORD(ListEntry[32].Next[13].Next),
      (const void *)PrivateVolumeCacheMap,
      *(_DWORD *)(PrivateVolumeCacheMap + 24));
    LOBYTE(v37) = v8;
    CcPostPVCMForDeleteToPartition(PrivateVolumeCacheMap, 0LL, v37);
  }
  return CcFreeSharedCacheMapIgnoreNull(ListEntry);
}
