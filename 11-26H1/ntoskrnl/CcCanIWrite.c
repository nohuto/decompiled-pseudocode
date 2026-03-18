/*
 * XREFs of CcCanIWrite @ 0x140383700
 * Callers:
 *     FsRtlPrepareMdlWriteDev @ 0x14078DB20 (FsRtlPrepareMdlWriteDev.c)
 *     FsRtlCopyWrite @ 0x140ABE620 (FsRtlCopyWrite.c)
 * Callees:
 *     KeRcuReadUnlock @ 0x1402206B0 (KeRcuReadUnlock.c)
 *     KeDelayExecutionThread @ 0x140244840 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KxWaitForLockOwnerShip @ 0x1402B29C0 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402B4830 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     CcCanIWriteStreamEx @ 0x140383E50 (CcCanIWriteStreamEx.c)
 *     CcDereferencePartition @ 0x1403843F0 (CcDereferencePartition.c)
 *     CcDecrementVolumeUseCountWithDelete @ 0x140384440 (CcDecrementVolumeUseCountWithDelete.c)
 *     KeRcuReadLock @ 0x140384590 (KeRcuReadLock.c)
 *     CcIsFileObjectDirectMapped @ 0x1403845D4 (CcIsFileObjectDirectMapped.c)
 *     CcReferencePartitionFromFileObject @ 0x14038462C (CcReferencePartitionFromFileObject.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1403856E4 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     DbgPrintEx @ 0x140397530 (DbgPrintEx.c)
 *     CcPostDeferredWrites @ 0x14039B61C (CcPostDeferredWrites.c)
 *     ExInterlockedInsertHeadList @ 0x1403DE3D0 (ExInterlockedInsertHeadList.c)
 *     ExInterlockedInsertTailList @ 0x1403DE450 (ExInterlockedInsertTailList.c)
 *     CcScheduleLazyWriteScan @ 0x1403E0640 (CcScheduleLazyWriteScan.c)
 *     CcNotifyWriteBehindInternal @ 0x1403E07DC (CcNotifyWriteBehindInternal.c)
 *     CcNotifyWriteBehindVolume @ 0x1403E0844 (CcNotifyWriteBehindVolume.c)
 *     CcPerfLogCanWriteFail @ 0x140512E00 (CcPerfLogCanWriteFail.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOLEAN __stdcall CcCanIWrite(PFILE_OBJECT FileObject, ULONG BytesToWrite, BOOLEAN Wait, UCHAR Retrying)
{
  __int64 v4; // r8
  int v6; // r13d
  struct _LIST_ENTRY *v7; // r14
  __int64 v8; // r8
  unsigned __int8 CurrentIrql; // bl
  __int64 v10; // rdx
  __int64 v11; // rax
  char v12; // cl
  struct _LIST_ENTRY *v13; // rdx
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rbx
  _QWORD *SharedCacheMap; // rbx
  struct _LIST_ENTRY *v16; // rbx
  char *v17; // rax
  char *v18; // rax
  char IsFileObjectDirectMapped; // r12
  PSECTION_OBJECT_POINTERS v20; // rcx
  _QWORD *v21; // rdx
  PLIST_ENTRY v22; // rax
  __int64 v23; // r12
  char v24; // di
  BOOLEAN v25; // bl
  BOOLEAN CanIWriteStream; // al
  __int64 v27; // rcx
  _QWORD *p_Type; // rax
  struct _LIST_ENTRY *v30; // rcx
  struct _LIST_ENTRY *i; // rax
  struct _LIST_ENTRY *v32; // rcx
  struct _LIST_ENTRY *j; // rax
  KSPIN_LOCK *v34; // r8
  __int64 v35; // rdx
  _BYTE *v36; // rdi
  _BYTE *v37; // rsi
  __int64 v38; // r8
  char v39; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v40; // [rsp+49h] [rbp-BFh]
  __int64 v41; // [rsp+50h] [rbp-B8h]
  PLIST_ENTRY ListHead; // [rsp+58h] [rbp-B0h]
  __int64 v43; // [rsp+60h] [rbp-A8h]
  _BYTE *v44; // [rsp+68h] [rbp-A0h]
  _BYTE *v45; // [rsp+70h] [rbp-98h]
  __int64 Object; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v47[2]; // [rsp+80h] [rbp-88h] BYREF
  LARGE_INTEGER Interval; // [rsp+90h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+98h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE v50; // [rsp+B0h] [rbp-58h] BYREF
  int v51; // [rsp+C8h] [rbp-40h] BYREF
  PFILE_OBJECT v52; // [rsp+D0h] [rbp-38h]
  ULONG v53; // [rsp+D8h] [rbp-30h]
  struct _LIST_ENTRY ListEntry; // [rsp+E0h] [rbp-28h] BYREF
  __int64 *p_Object; // [rsp+F0h] [rbp-18h]
  __int64 v56; // [rsp+110h] [rbp+8h]
  struct _LIST_ENTRY *v57; // [rsp+118h] [rbp+10h]
  char v58; // [rsp+120h] [rbp+18h]
  __int64 v59; // [rsp+128h] [rbp+20h]
  ULONG v60; // [rsp+180h] [rbp+78h]
  UCHAR v62; // [rsp+190h] [rbp+88h]

  v62 = Retrying;
  v60 = BytesToWrite;
  v4 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v50, 0, sizeof(v50));
  v40 = 0;
  v6 = 0;
  v7 = 0LL;
  v41 = 0LL;
  if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0 )
    return 1;
  if ( !FileObject )
  {
    v23 = *((_QWORD *)PspSystemPartition + 1);
    v43 = v23;
    v45 = (_BYTE *)(v23 + 780);
    v22 = (PLIST_ENTRY)(v23 + 1168);
    ListHead = (PLIST_ENTRY)(v23 + 1168);
    v44 = (_BYTE *)(v23 + 1292);
    goto LABEL_31;
  }
  if ( (FileObject->Flags & 0x10) != 0 || (FileObject->Flags & 0x1000000) != 0 )
    return 1;
  KeRcuReadLock();
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = &CcMasterLock;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
  {
    v10 = _InterlockedExchange64((volatile __int64 *)&CcMasterLock, (__int64)&LockHandle);
    if ( v10 )
      KxWaitForLockOwnerShip((volatile signed __int64)&LockHandle, v10, v8);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)&CcMasterLock);
  }
  v11 = CcReferencePartitionFromFileObject(FileObject);
  v12 = CcEnablePerVolumeLazyWriter;
  v13 = (struct _LIST_ENTRY *)v11;
  v43 = v11;
  if ( CcEnablePerVolumeLazyWriter )
  {
    SectionObjectPointer = FileObject->SectionObjectPointer;
    if ( SectionObjectPointer && (SharedCacheMap = SectionObjectPointer->SharedCacheMap) != 0LL )
    {
      v16 = (struct _LIST_ENTRY *)SharedCacheMap[75];
LABEL_16:
      v7 = v16;
      if ( v16 && _InterlockedIncrement64((volatile signed __int64 *)&v16->Blink) <= 1 )
        __fastfail(0xEu);
    }
    else
    {
      p_Type = &FileObject->Type;
      if ( FileObject->Vpb )
        p_Type = &FileObject->Vpb->Type;
      v30 = (struct _LIST_ENTRY *)p_Type[1];
      for ( i = EmpParseLock.GlobalUpdateVpThreadPriorityListEntry.Blink;
            i != (struct _LIST_ENTRY *)&EmpParseLock.InGlobalUpdateVpThreadPriorityList;
            i = i->Flink )
      {
        if ( i[-1].Blink == v30 )
        {
          v32 = i + 12;
          for ( j = i[12].Flink; j != v32; j = j->Flink )
          {
            v16 = j - 37;
            if ( j[-35].Flink == v13 )
              goto LABEL_16;
          }
          break;
        }
      }
      v16 = 0LL;
    }
    v12 = CcEnablePerVolumeLazyWriter;
    if ( CcEnablePerVolumeLazyWriter )
    {
      ListHead = v16 + 69;
      v17 = (char *)&v16[44].Flink + 4;
      goto LABEL_20;
    }
  }
  else
  {
    v16 = 0LL;
  }
  ListHead = v13 + 73;
  v17 = (char *)&v13[48].Blink + 4;
LABEL_20:
  v45 = v17;
  v18 = (char *)&v16[73].Flink + 4;
  if ( !v12 )
    v18 = (char *)&v13[80].Blink + 4;
  v44 = v18;
  HIBYTE(v40) = 1;
  IsFileObjectDirectMapped = CcIsFileObjectDirectMapped(FileObject, v13);
  if ( !BYTE1(EmpParseLock.Timer.DueTime.LowPart) )
  {
    v20 = FileObject->SectionObjectPointer;
    if ( v20 )
    {
      v21 = v20->SharedCacheMap;
      if ( v21 )
      {
        v41 = v21[64];
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v41 + 8)) <= 1 )
          __fastfail(0xEu);
        LOBYTE(v40) = 1;
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  KeRcuReadUnlock();
  if ( !IsFileObjectDirectMapped && (!CcEnablePerVolumeLazyWriter || v16) )
  {
    *(_QWORD *)&BytesToWrite = v60;
    v4 = 0LL;
    Retrying = v62;
    v22 = ListHead;
    v23 = v43;
LABEL_31:
    if ( !CcEnablePerVolumeLazyWriter || FileObject )
    {
      while ( 1 )
      {
        v24 = 0;
        ++v6;
        v25 = 0;
        v39 = 0;
        if ( Retrying
          || v22->Flink == v22
          || CcAzure_LargeWriteSize && BytesToWrite && BytesToWrite >= CcAzure_LargeWriteSize )
        {
          CanIWriteStream = CcCanIWriteStreamEx(v23, (_DWORD)v7, (_DWORD)FileObject, BytesToWrite, 0, 0, (__int64)&v39);
          v24 = v39;
          v25 = CanIWriteStream;
          if ( CanIWriteStream )
          {
            if ( !v39 )
              break;
          }
          if ( v6 == 2 && CanIWriteStream )
            break;
        }
        if ( (xmmword_140FBFC10 & 0x20000) != 0 )
          CcPerfLogCanWriteFail(FileObject, v60, *(_QWORD *)(v23 + 1056), *(_QWORD *)(v23 + 1080));
        LOBYTE(BytesToWrite) = 1;
        CcAdjustWriteBehindThreadPoolIfNeeded(v23, *(_QWORD *)&BytesToWrite, v4);
        if ( Wait )
        {
          Object = 393216LL;
          memset_0(&v51, 0, 0x68uLL);
          v56 = v23;
          v47[1] = v47;
          v47[0] = v47;
          v53 = v60;
          p_Object = &Object;
          v57 = v7;
          v51 = 6816508;
          v52 = FileObject;
          v59 = MEMORY[0xFFFFF78000000320];
          if ( !v25 || (v58 = 1, !v24) )
            v58 = 0;
          v34 = (KSPIN_LOCK *)(v23 + 1216);
          if ( v62 )
            ExInterlockedInsertHeadList(ListHead, &ListEntry, v34);
          else
            ExInterlockedInsertTailList(ListHead, &ListEntry, v34);
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v23 + 768), &v50);
          v35 = 16LL;
          if ( CcEnablePerVolumeLazyWriter )
          {
            if ( !BYTE4(v7[73].Flink) )
              v35 = 4LL;
            CcNotifyWriteBehindVolume(v7, v35);
            if ( !BYTE4(v7[73].Flink) )
              BYTE1(v7[61].Blink) = 1;
          }
          else
          {
            if ( !*(_BYTE *)(v23 + 1292) )
              v35 = 4LL;
            CcNotifyWriteBehindInternal(v23, v35);
            if ( !*(_BYTE *)(v23 + 1292) )
              *(_BYTE *)(v23 + 1049) = 1;
          }
          KeReleaseInStackQueuedSpinLock(&v50);
          CcPostDeferredWrites(v23, v7);
          if ( KeWaitForSingleObject(&Object, Executive, 0, 0, &CcIdleDelay) )
          {
            v36 = v44;
            v37 = v45;
            do
            {
              if ( *v36 || *v37 )
              {
                KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v23 + 768), &v50);
                LOBYTE(v38) = 1;
                CcScheduleLazyWriteScan(v23, v7, v38, 0LL);
                if ( *v37 )
                  *v37 = 0;
                KeReleaseInStackQueuedSpinLock(&v50);
              }
              CcPostDeferredWrites(v23, v7);
            }
            while ( KeWaitForSingleObject(&Object, Executive, 0, 0, &CcIdleDelay) );
          }
          break;
        }
        if ( v6 != 1 )
        {
          v27 = v41;
          if ( v41 )
            ++*(_QWORD *)(v41 + 400);
          goto LABEL_41;
        }
        if ( !v25 )
        {
          v25 = 0;
          goto LABEL_40;
        }
        if ( !v24 )
          break;
        Interval.HighPart = -1;
        Interval.LowPart = -10000 * CcSoftThrottleDelay;
        DbgPrintEx(0x7Fu, 2u, "CcCanIWrite: will delay %lums before retrying async-write\n", CcSoftThrottleDelay);
        if ( v41 )
          ++*(_QWORD *)(v41 + 408);
        KeDelayExecutionThread(0, 0, &Interval);
        v22 = ListHead;
        v4 = 0LL;
        Retrying = v62;
        *(_QWORD *)&BytesToWrite = v60;
      }
    }
  }
  v25 = 1;
LABEL_40:
  v27 = v41;
LABEL_41:
  if ( (_BYTE)v40 )
  {
    ++*(_QWORD *)(v27 + 392);
    CcDecrementVolumeUseCountWithDelete();
  }
  if ( HIBYTE(v40) )
  {
    CcDereferencePartition(v43);
    if ( v7 )
    {
      if ( _InterlockedDecrement64((volatile signed __int64 *)&v7->Blink) <= -1 )
        __fastfail(0xEu);
    }
  }
  return v25;
}
