/*
 * XREFs of CcUninitializeCacheMap @ 0x14039E1C0
 * Callers:
 *     CcPurgeCacheSection @ 0x14039D060 (CcPurgeCacheSection.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14021EF64 (IoDiskIoAttributionDereference.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402FF300 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcReferencePrivateVolumeCacheMap @ 0x1403853D0 (CcReferencePrivateVolumeCacheMap.c)
 *     CcFreeWorkQueueEntry @ 0x1403853FC (CcFreeWorkQueueEntry.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x140387494 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     CcPurgeCacheSection @ 0x14039D060 (CcPurgeCacheSection.c)
 *     CcDeleteSharedCacheMap @ 0x14039D950 (CcDeleteSharedCacheMap.c)
 *     CcGetPrivateVolumeCacheMap @ 0x14039DEA0 (CcGetPrivateVolumeCacheMap.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x14039DEC0 (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     CcFreePrivateCacheMapIgnoreNull @ 0x14039E94C (CcFreePrivateCacheMapIgnoreNull.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x14039EDC8 (CcInsertIntoDirtySharedCacheMapList.c)
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
 *     CcScheduleLazyWriteScan @ 0x1403E3830 (CcScheduleLazyWriteScan.c)
 *     CcNotifyWriteBehindInternal @ 0x1403E39CC (CcNotifyWriteBehindInternal.c)
 *     CcNotifyWriteBehindVolume @ 0x1403E3A34 (CcNotifyWriteBehindVolume.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

BOOLEAN __stdcall CcUninitializeCacheMap(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER TruncateSize,
        PCACHE_UNINITIALIZE_EVENT UninitializeEvent)
{
  __int64 v3; // r9
  _KSPIN_LOCK_QUEUE *BugCheckParameter4; // r11
  PCACHE_UNINITIALIZE_EVENT v5; // r12
  LARGE_INTEGER *v6; // r13
  PFILE_OBJECT v7; // r15
  __int64 v8; // rdi
  _BYTE *PrivateVolumeCacheMap; // rsi
  unsigned __int8 CurrentIrql; // bl
  __int64 v11; // rdx
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  PFILE_OBJECT *PrivateCacheMap; // r14
  char *SharedCacheMap; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int8 v17; // r15
  __int64 v18; // rdx
  PFILE_OBJECT **v19; // rdx
  void **v20; // rax
  int v21; // eax
  char v22; // cl
  _BYTE *v23; // rax
  bool v24; // zf
  BOOLEAN v25; // r12
  PSLIST_ENTRY v26; // rbx
  PFILE_OBJECT v28; // rax
  __int64 v29; // rcx
  _QWORD *p_Type; // rdx
  __int64 v31; // rcx
  bool v32; // zf
  bool v33; // [rsp+30h] [rbp-39h]
  struct _KLOCK_QUEUE_HANDLE v34; // [rsp+38h] [rbp-31h] BYREF
  PFILE_OBJECT *v35; // [rsp+50h] [rbp-19h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-11h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+70h] [rbp+7h]
  struct _KLOCK_QUEUE_HANDLE v38; // [rsp+78h] [rbp+Fh] BYREF
  PFILE_OBJECT v39; // [rsp+D0h] [rbp+67h]

  v39 = FileObject;
  BugCheckParameter4 = 0LL;
  *(_QWORD *)&v34.OldIrql = 0LL;
  v5 = UninitializeEvent;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v34.LockQueue.Lock = &CcMasterLock;
  v6 = TruncateSize;
  memset(&v38, 0, sizeof(v38));
  v34.LockQueue.Next = 0LL;
  v7 = FileObject;
  ListEntry = 0LL;
  v33 = 0;
  v8 = 0LL;
  PrivateVolumeCacheMap = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(TruncateSize) = 2;
    LOBYTE(FileObject) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(FileObject, TruncateSize);
    BugCheckParameter4 = 0LL;
  }
  v34.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v11 = _InterlockedExchange64((volatile __int64 *)&CcMasterLock, (__int64)&v34);
    if ( !v11 )
      goto LABEL_7;
    KxWaitForLockOwnerShip((volatile signed __int64)&v34, v11, (__int64)UninitializeEvent);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&v34, (volatile __int64 *)&CcMasterLock);
  }
  BugCheckParameter4 = 0LL;
LABEL_7:
  SectionObjectPointer = v7->SectionObjectPointer;
  PrivateCacheMap = (PFILE_OBJECT *)v7->PrivateCacheMap;
  v35 = PrivateCacheMap;
  SharedCacheMap = (char *)SectionObjectPointer->SharedCacheMap;
  if ( !SharedCacheMap )
    goto LABEL_16;
  v8 = *((_QWORD *)SharedCacheMap + 67);
  PrivateVolumeCacheMap = (_BYTE *)CcGetPrivateVolumeCacheMap((__int64)SectionObjectPointer->SharedCacheMap);
  if ( v15 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 1296), (unsigned int)v15) <= v15 )
    __fastfail(0xEu);
  CcReferencePrivateVolumeCacheMap((__int64)PrivateVolumeCacheMap);
  LockHandle.LockQueue.Next = BugCheckParameter4;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v8 + 768);
  v17 = KeGetCurrentIrql();
  if ( v17 != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags != (_DWORD)BugCheckParameter4 )
  {
    LOBYTE(v16) = v17;
    KiRaiseIrqlProcessIrqlFlags(v16, 2LL);
    BugCheckParameter4 = 0LL;
  }
  LockHandle.OldIrql = v17;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 && !PopHibernateInProgress )
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)(v8 + 768));
LABEL_35:
    BugCheckParameter4 = 0LL;
    goto LABEL_15;
  }
  v18 = _InterlockedExchange64((volatile __int64 *)(v8 + 768), (__int64)&LockHandle);
  if ( v18 )
  {
    KxWaitForLockOwnerShip((volatile signed __int64)&LockHandle, v18, (__int64)UninitializeEvent);
    goto LABEL_35;
  }
LABEL_15:
  PrivateCacheMap = v35;
  v7 = v39;
LABEL_16:
  if ( !PrivateCacheMap )
    goto LABEL_25;
  if ( PrivateCacheMap[1] != v7 )
    KeBugCheckEx(0x34u, 0xBB5uLL, 0xFFFFFFFFC0000420uLL, 0LL, (ULONG_PTR)BugCheckParameter4);
  if ( !v8 )
    KeBugCheckEx(0x34u, 0xBBBuLL, 0xFFFFFFFFC0000420uLL, 0LL, (ULONG_PTR)BugCheckParameter4);
  if ( PrivateCacheMap[14] )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 832), &v38);
    v28 = PrivateCacheMap[14];
    if ( v28 )
    {
      v29 = *(_QWORD *)&v28->Type;
      ++CcDbgNumberOfNoopedReadAheads;
      ListEntry = (PSLIST_ENTRY)v28;
      if ( *(PFILE_OBJECT *)(v29 + 8) != v28 || (p_Type = &v28->DeviceObject->Type, (PFILE_OBJECT)*p_Type != v28) )
LABEL_69:
        __fastfail(3u);
      *p_Type = v29;
      *(_QWORD *)(v29 + 8) = p_Type;
      v28->DeviceObject = 0LL;
      *(_QWORD *)&v28->Type = 0LL;
      if ( (PFILE_OBJECT)v28->Vpb != v7 )
        KeBugCheckEx(0x34u, 0xBDCuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      --*((_DWORD *)SharedCacheMap + 1);
      --*((_DWORD *)SharedCacheMap + 136);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v38);
    BugCheckParameter4 = 0LL;
  }
  --*((_DWORD *)SharedCacheMap + 1);
  v19 = (PFILE_OBJECT **)PrivateCacheMap[12];
  if ( v19[1] != PrivateCacheMap + 12 )
    goto LABEL_69;
  v20 = (void **)PrivateCacheMap[13];
  if ( *v20 != PrivateCacheMap + 12 )
    goto LABEL_69;
  *v20 = v19;
  v19[1] = (PFILE_OBJECT *)v20;
  if ( PrivateCacheMap == (PFILE_OBJECT *)(SharedCacheMap + 384) )
  {
    *(_WORD *)PrivateCacheMap = (_WORD)BugCheckParameter4;
    PrivateCacheMap = (PFILE_OBJECT *)BugCheckParameter4;
  }
  v7->PrivateCacheMap = BugCheckParameter4;
LABEL_25:
  if ( !SharedCacheMap )
  {
    if ( v6
      && (_KSPIN_LOCK_QUEUE *)v6->QuadPart == BugCheckParameter4
      && v7->SectionObjectPointer->DataSectionObject != BugCheckParameter4 )
    {
      if ( v8 )
        KeBugCheckEx(0x34u, 0xD03uLL, 0xFFFFFFFFC0000420uLL, 0LL, (ULONG_PTR)BugCheckParameter4);
      KeReleaseInStackQueuedSpinLock(&v34);
      CcPurgeCacheSection(v7->SectionObjectPointer, v6, 0, 0);
    }
    else
    {
      KeReleaseInStackQueuedSpinLock(&v34);
    }
    if ( v5 )
      KeSetEvent(&v5->Event, 0, 0);
    goto LABEL_53;
  }
  if ( v6 )
  {
    if ( v6->QuadPart || *((_KSPIN_LOCK_QUEUE **)SharedCacheMap + 1) == BugCheckParameter4 )
    {
      if ( *((char **)SharedCacheMap + 29) == SharedCacheMap + 232 )
        *((LARGE_INTEGER *)SharedCacheMap + 1) = *v6;
    }
    else
    {
      *((_DWORD *)SharedCacheMap + 38) |= 0x10u;
    }
  }
  if ( *((_DWORD *)SharedCacheMap + 1) != (_DWORD)BugCheckParameter4 )
  {
    if ( v5 )
    {
      if ( *((char **)SharedCacheMap + 29) == SharedCacheMap + 232 )
      {
        v5->Next = (_CACHE_UNINITIALIZE_EVENT *)*((_QWORD *)SharedCacheMap + 35);
        *((_QWORD *)SharedCacheMap + 35) = v5;
        v33 = (v7->DeviceObject->Characteristics & 0x10) != 0;
      }
      else
      {
        KeSetEvent(&v5->Event, 0, 0);
      }
    }
    goto LABEL_52;
  }
  if ( *((char **)SharedCacheMap + 29) != SharedCacheMap + 232 )
    KeBugCheckEx(0x34u, 0xC58uLL, 0xFFFFFFFFC0000420uLL, 0LL, (ULONG_PTR)BugCheckParameter4);
  if ( v5 )
  {
    v5->Next = (_CACHE_UNINITIALIZE_EVENT *)*((_QWORD *)SharedCacheMap + 35);
    *((_QWORD *)SharedCacheMap + 35) = v5;
    v33 = (v7->DeviceObject->Characteristics & 0x10) != 0;
  }
  v21 = *((_DWORD *)SharedCacheMap + 38);
  if ( (v21 & 4) == 0 && !v5 )
  {
    if ( (v21 & 0x20) != 0 )
      goto LABEL_42;
    goto LABEL_41;
  }
  if ( (v21 & 0x20) != 0 )
  {
LABEL_42:
    v22 = CcEnablePerVolumeLazyWriter;
    if ( CcEnablePerVolumeLazyWriter )
      v23 = (_BYTE *)(*((_QWORD *)SharedCacheMap + 75) + 986LL);
    else
      v23 = (_BYTE *)(*((_QWORD *)SharedCacheMap + 67) + 1050LL);
    *v23 = 1;
    if ( *(_BYTE *)(v8 + 1294) == (_BYTE)BugCheckParameter4 )
    {
      if ( v5 && (*((_DWORD *)SharedCacheMap + 38) & 0x20) == 0 )
      {
        LOBYTE(v3) = 1;
        LOBYTE(UninitializeEvent) = 1;
        CcScheduleLazyWriteScan(v8, PrivateVolumeCacheMap, UninitializeEvent, v3);
        goto LABEL_52;
      }
      if ( v22 )
      {
        if ( PrivateVolumeCacheMap[1172] == (_BYTE)BugCheckParameter4 )
        {
          if ( PrivateVolumeCacheMap[985] == (_BYTE)BugCheckParameter4 )
          {
            if ( PrivateVolumeCacheMap[984] == (_BYTE)BugCheckParameter4 )
              KeBugCheckEx(0x34u, 0x7C9uLL, 0xFFFFFFFFC0000420uLL, 0LL, (ULONG_PTR)BugCheckParameter4);
            KiSetTimerEx((_DWORD)PrivateVolumeCacheMap + 920, CcFirstDelay, 0, 0, (__int64)BugCheckParameter4);
            LOBYTE(BugCheckParameter4) = 0;
          }
          v24 = PrivateVolumeCacheMap[1172] == (unsigned __int8)BugCheckParameter4;
          goto LABEL_50;
        }
LABEL_52:
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        KeReleaseInStackQueuedSpinLock(&v34);
LABEL_53:
        v25 = 0;
        goto LABEL_54;
      }
      if ( *(_BYTE *)(v8 + 1292) != (_BYTE)BugCheckParameter4 )
        goto LABEL_52;
      if ( *(_BYTE *)(v8 + 1049) == (_BYTE)BugCheckParameter4 )
      {
        if ( *(_BYTE *)(v8 + 1048) == (_BYTE)BugCheckParameter4 )
          KeBugCheckEx(0x34u, 0x371uLL, 0xFFFFFFFFC0000420uLL, 0LL, (ULONG_PTR)BugCheckParameter4);
        KiSetTimerEx(v8 + 984, CcFirstDelay, 0, 0, (__int64)BugCheckParameter4);
        LOBYTE(BugCheckParameter4) = 0;
      }
      v32 = *(_BYTE *)(v8 + 1292) == (unsigned __int8)BugCheckParameter4;
    }
    else
    {
      *((_DWORD *)SharedCacheMap + 38) |= 0x10000u;
      if ( v22 )
      {
        CcNotifyWriteBehindVolume(PrivateVolumeCacheMap, 8LL);
        v24 = PrivateVolumeCacheMap[1172] == 0;
LABEL_50:
        if ( v24 )
          PrivateVolumeCacheMap[985] = 1;
        goto LABEL_52;
      }
      CcNotifyWriteBehindInternal(v8, 8LL);
      v32 = *(_BYTE *)(v8 + 1292) == 0;
    }
    if ( v32 )
      *(_BYTE *)(v8 + 1049) = 1;
    goto LABEL_52;
  }
  if ( *((_DWORD *)SharedCacheMap + 28) != (_DWORD)BugCheckParameter4
    || (v21 & 0x400) != 0 && *((_QWORD *)SharedCacheMap + 5) != 0x7FFFFFFFFFFFFFFFLL )
  {
LABEL_41:
    CcInsertIntoDirtySharedCacheMapList(SharedCacheMap);
    goto LABEL_42;
  }
  CcDeleteSharedCacheMap((PSLIST_ENTRY)SharedCacheMap, &v34, &LockHandle, 0, (PFILE_OBJECT)BugCheckParameter4);
  v25 = 1;
  v33 = 0;
LABEL_54:
  CcFreePrivateCacheMapIgnoreNull(PrivateCacheMap);
  if ( v33 )
    CcAdjustWriteBehindThreadPoolIfNeeded(v8, 1);
  v26 = ListEntry;
  if ( ListEntry )
  {
    ObfDereferenceObjectWithTag(v7, 0x746C6644u);
    v31 = *((_QWORD *)&v26[1].Next + 1);
    if ( v31 )
      IoDiskIoAttributionDereference(v31);
    CcFreeWorkQueueEntry(v26);
  }
  if ( v8 )
    CcDereferencePartitionAndPrivateVolumeCacheMap(v8, (__int64)PrivateVolumeCacheMap);
  return v25;
}
