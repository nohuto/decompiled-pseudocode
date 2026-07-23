/*
 * XREFs of CcWorkerThread @ 0x140388380
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExQueueWorkItemToPartition @ 0x140384E80 (ExQueueWorkItemToPartition.c)
 *     CcWriteBehind @ 0x14038513C (CcWriteBehind.c)
 *     CcIsWriteBehindThreadpoolAtLowPriority @ 0x140385398 (CcIsWriteBehindThreadpoolAtLowPriority.c)
 *     CcFreeWorkQueueEntry @ 0x1403853FC (CcFreeWorkQueueEntry.c)
 *     CcFindNextWorkQueueEntry @ 0x1403870A0 (CcFindNextWorkQueueEntry.c)
 *     CcShouldWorkOnThisQueue @ 0x140388AF8 (CcShouldWorkOnThisQueue.c)
 *     CcReferencePartitionAndPrivateVolumeCacheMap @ 0x140388B84 (CcReferencePartitionAndPrivateVolumeCacheMap.c)
 *     CcPerformReadAhead @ 0x140388BC8 (CcPerformReadAhead.c)
 *     CcLazyWriteScanVolume @ 0x14038AA5C (CcLazyWriteScanVolume.c)
 *     CcPerfLogWorkItemEnqueue @ 0x14038B878 (CcPerfLogWorkItemEnqueue.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x14039DEC0 (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     CcPerfLogWorkItemDequeue @ 0x1404B8D3C (CcPerfLogWorkItemDequeue.c)
 *     CcPerfLogWorkItemComplete @ 0x1404BBC30 (CcPerfLogWorkItemComplete.c)
 *     CcLazyWriteScan @ 0x1404F4BD4 (CcLazyWriteScan.c)
 *     CcLogExtraWBThreadAction @ 0x140501E9C (CcLogExtraWBThreadAction.c)
 *     CcOkToAddWriteBehindThread @ 0x14052B07C (CcOkToAddWriteBehindThread.c)
 *     CcReEngageWorkerThreads @ 0x14052DD54 (CcReEngageWorkerThreads.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     CcDebugExceptionFilter @ 0x1405B3524 (CcDebugExceptionFilter.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall CcWorkerThread(__int64 a1)
{
  _QWORD *v1; // r15
  _QWORD *NextWorkQueueEntry; // r14
  int v3; // edx
  __int64 v4; // r13
  __int64 v5; // rdi
  __int64 v6; // r12
  int v7; // ebx
  __int64 v8; // r9
  int v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // rcx
  signed __int64 v12; // rbx
  char v13; // bl
  volatile signed __int32 *v14; // rax
  __int64 v15; // r8
  struct _KTHREAD *CurrentThread; // rax
  int v17; // eax
  struct _KTHREAD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r9
  volatile signed __int32 *v21; // rax
  _QWORD *v22; // rdx
  _QWORD *v23; // rax
  __int64 *v24; // r10
  __int64 v25; // rcx
  _QWORD *v26; // r10
  _QWORD *v27; // rcx
  _QWORD *v28; // r8
  _QWORD *v29; // rax
  __int64 **v30; // r12
  int v31; // eax
  __int64 v32; // rax
  _QWORD *v33; // r10
  _QWORD *v34; // r8
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-E8h]
  __int64 v37; // [rsp+28h] [rbp-E0h]
  __int64 v38; // [rsp+30h] [rbp-D8h]
  __int64 v39; // [rsp+38h] [rbp-D0h]
  __int64 v40; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD *v41; // [rsp+48h] [rbp-C0h]
  int v42; // [rsp+50h] [rbp-B8h]
  _QWORD *v43; // [rsp+58h] [rbp-B0h]
  _QWORD *v44; // [rsp+60h] [rbp-A8h]
  int v45; // [rsp+70h] [rbp-98h]
  _QWORD *v46; // [rsp+78h] [rbp-90h]
  __int64 v47; // [rsp+80h] [rbp-88h]
  __int64 v48; // [rsp+88h] [rbp-80h]
  __int64 v49; // [rsp+90h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+98h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE v51; // [rsp+B0h] [rbp-58h] BYREF
  char v53; // [rsp+118h] [rbp+10h]
  bool v54; // [rsp+120h] [rbp+18h]
  int v55; // [rsp+128h] [rbp+20h]

  v44 = (_QWORD *)a1;
  v1 = 0LL;
  NextWorkQueueEntry = 0LL;
  LOBYTE(v38) = 0;
  v40 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v51, 0, sizeof(v51));
  v41 = 0LL;
  v3 = *(_DWORD *)(a1 + 32);
  v55 = v3;
  v42 = v3;
  if ( (unsigned int)(v3 - 1) > 1 )
    KeBugCheckEx(0x34u, 0x19E0uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v54 = v3 == 2;
  v4 = *(_QWORD *)(a1 + 56);
  v47 = v4;
  v5 = *(_QWORD *)(a1 + 72);
  v48 = v5;
  v6 = *(_QWORD *)(a1 + 64);
  v39 = v6;
  v49 = v6;
  while ( 1 )
  {
    v7 = 0;
    HIDWORD(v38) = 0;
    v53 = 0;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 832), &LockHandle);
    if ( (_BYTE)v38 )
    {
      *(_BYTE *)(v5 + 196) = 0;
      LOBYTE(v38) = 0;
      CcReEngageWorkerThreads(v4, v5, *(unsigned int *)(v5 + 180), *(unsigned int *)(v5 + 184));
    }
    if ( v41 == (_QWORD *)35422 )
    {
      if ( *((_DWORD *)NextWorkQueueEntry + 32) == 2 )
        *(_QWORD *)(NextWorkQueueEntry[2] + 504LL) = NextWorkQueueEntry;
      v29 = (_QWORD *)v1[1];
      if ( (_QWORD *)*v29 != v1 )
        goto LABEL_53;
      *NextWorkQueueEntry = v1;
      NextWorkQueueEntry[1] = v29;
      *v29 = NextWorkQueueEntry;
      v1[1] = NextWorkQueueEntry;
      v41 = 0LL;
    }
    v9 = v55;
    if ( v55 != 2 )
    {
LABEL_7:
      if ( (v7 & 1) != 0 || (v7 |= 1u, v1 = (_QWORD *)(v5 + 72), (_QWORD *)*v1 == v1) )
      {
        if ( (v7 & 2) != 0 )
          goto LABEL_46;
        v7 |= 2u;
        v1 = (_QWORD *)(v5 + 88);
        if ( (_QWORD *)*v1 == v1 )
          goto LABEL_46;
      }
      goto LABEL_11;
    }
    if ( *(_BYTE *)(v5 + 225) )
      break;
    while ( 1 )
    {
      do
      {
        if ( v9 != 2 )
          goto LABEL_7;
LABEL_46:
        if ( (v7 & 4) != 0 )
          goto LABEL_51;
        v7 |= 4u;
        v1 = (_QWORD *)(v5 + 104);
        if ( (_QWORD *)*v1 == v1 )
          goto LABEL_51;
LABEL_11:
        v43 = v1;
        LOBYTE(v8) = v54;
      }
      while ( !(unsigned __int8)CcShouldWorkOnThisQueue(v4, v5, v1, v8) );
      NextWorkQueueEntry = CcFindNextWorkQueueEntry(v11, v10, v1);
      v46 = NextWorkQueueEntry;
      if ( NextWorkQueueEntry )
        break;
      v9 = v55;
    }
    v12 = MEMORY[0xFFFFF78000000014];
    if ( *(_BYTE *)(v5 + 224)
      && MEMORY[0xFFFFF78000000014] >= *(_QWORD *)(v5 + 216) + (unsigned int)CcExtraWBThreadDelay
      && *(_QWORD *)(v5 + 56) == v5 + 56
      && *(_DWORD *)(v4 + 976)
      && *(_QWORD *)(v5 + 104) != v5 + 104 )
    {
      v30 = (__int64 **)(v5 + 136);
      if ( *v30 == (__int64 *)v30 )
        goto LABEL_103;
      v31 = CcOkToAddWriteBehindThread(v4);
      *(_QWORD *)(v5 + 216) = v12;
      if ( *(_DWORD *)(v5 + 152) && v31 == 3 )
        *(_BYTE *)(v5 + 225) = 1;
      if ( v31 != 2 )
      {
LABEL_103:
        v6 = v39;
      }
      else
      {
        v32 = **v30;
        if ( (__int64 **)(*v30)[1] != v30 || *(__int64 **)(v32 + 8) != *v30 )
          goto LABEL_53;
        *v30 = (__int64 *)v32;
        *(_QWORD *)(v32 + 8) = v30;
        ++*(_DWORD *)(v5 + 152);
        v6 = v39;
        CcReferencePartitionAndPrivateVolumeCacheMap(v4, v39);
        *v33 = 0LL;
        ExQueueWorkItemToPartition(v33, 0, *(_DWORD *)(v5 + 24));
        v53 = 1;
      }
    }
    if ( v1 == (_QWORD *)(v5 + 104) )
      *(_QWORD *)(v5 + 208) = v12;
    if ( CcIsWriteBehindThreadpoolAtLowPriority(v4)
      || v12 < *(_QWORD *)(v5 + 208) + (unsigned int)CcExtraWBThreadDelay
      || *(_QWORD *)(v5 + 56) != v5 + 56
      || *(_QWORD *)(v5 + 104) == v5 + 104
      || (v23 = (_QWORD *)(v5 + 136), v24 = *(__int64 **)(v5 + 136), v24 == (__int64 *)(v5 + 136))
      || *(_DWORD *)(v5 + 152) )
    {
      v13 = v53;
    }
    else
    {
      v25 = *v24;
      if ( (_QWORD *)v24[1] != v23 || *(__int64 **)(v25 + 8) != v24 )
        goto LABEL_53;
      *v23 = v25;
      *(_QWORD *)(v25 + 8) = v23;
      ++*(_DWORD *)(v5 + 152);
      CcReferencePartitionAndPrivateVolumeCacheMap(v4, v6);
      *v26 = 0LL;
      ExQueueWorkItemToPartition(v26, 0, *(_DWORD *)(v5 + 24));
      *(_QWORD *)(v5 + 208) = v12;
      v13 = 1;
    }
    if ( v1 == (_QWORD *)(v5 + 104) || (v14 = (volatile signed __int32 *)(v5 + 192), v1 == (_QWORD *)(v5 + 120)) )
      v14 = (volatile signed __int32 *)(v5 + 188);
    _InterlockedIncrement(v14);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( (xmmword_140FC0C10 & 0x20000) != 0 )
    {
      if ( v13 )
        CcLogExtraWBThreadAction(v4, v5, 2LL);
      if ( (xmmword_140FC0C10 & 0x20000) != 0 )
        CcPerfLogWorkItemDequeue(NextWorkQueueEntry);
    }
    switch ( *((_DWORD *)NextWorkQueueEntry + 32) )
    {
      case 1:
        CcPerformReadAhead(NextWorkQueueEntry, NextWorkQueueEntry[2]);
        break;
      case 2:
        CurrentThread = KeGetCurrentThread();
        *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
        do
        {
          v41 = NextWorkQueueEntry;
          CcWriteBehind(NextWorkQueueEntry[2], (__int64)&v40, v5);
          v17 = HIDWORD(v38);
          if ( HIDWORD(v38) >= 0xA )
            break;
          ++HIDWORD(v38);
          v45 = v17 + 1;
        }
        while ( v41 == (_QWORD *)35422 );
        v18 = KeGetCurrentThread();
        *((_DWORD *)&v18[1].SwapListEntry + 3) &= ~2u;
        break;
      case 3:
        v19 = *(_QWORD *)(a1 + 64);
        v20 = *((unsigned int *)NextWorkQueueEntry + 4);
        if ( v19 )
          CcLazyWriteScanVolume(v19, v5, NextWorkQueueEntry, v20);
        else
          CcLazyWriteScan(v4, v5, NextWorkQueueEntry, v20);
        break;
      case 4:
        KeSetEvent((PRKEVENT)NextWorkQueueEntry[2], 0, 0);
        LOBYTE(v38) = 1;
        break;
    }
    if ( v1 == (_QWORD *)(v5 + 104) || (v21 = (volatile signed __int32 *)(v5 + 192), v1 == (_QWORD *)(v5 + 120)) )
      v21 = (volatile signed __int32 *)(v5 + 188);
    _InterlockedDecrement(v21);
    if ( v41 == (_QWORD *)35422 )
    {
      if ( (xmmword_140FC0C10 & 0x20000) != 0 )
      {
        LOBYTE(v15) = 1;
        CcPerfLogWorkItemEnqueue(v1, NextWorkQueueEntry, v15, 0LL, BugCheckParameter4, v37, v38);
      }
    }
    else
    {
      if ( (xmmword_140FC0C10 & 0x20000) != 0 )
        CcPerfLogWorkItemComplete(NextWorkQueueEntry);
      CcFreeWorkQueueEntry((PSLIST_ENTRY)NextWorkQueueEntry);
    }
  }
  *(_BYTE *)(v5 + 225) = 0;
LABEL_51:
  if ( v9 == 2 )
  {
    v27 = *(_QWORD **)(v5 + 144);
    if ( *v27 != v5 + 136 )
LABEL_53:
      __fastfail(3u);
    v28 = v44;
    *v44 = v5 + 136;
    v28[1] = v27;
    *v27 = v28;
    *(_QWORD *)(v5 + 144) = v28;
    --*(_DWORD *)(v5 + 152);
  }
  else
  {
    v22 = *(_QWORD **)(v5 + 64);
    if ( *v22 != v5 + 56 )
      goto LABEL_53;
    v34 = v44;
    *v44 = v5 + 56;
    v34[1] = v22;
    *v22 = v34;
    *(_QWORD *)(v5 + 64) = v34;
    --*(_DWORD *)(v5 + 48);
  }
  if ( *(_BYTE *)(v5 + 224) && !*(_DWORD *)(v5 + 152) && *(_DWORD *)(v5 + 48) <= 1u )
  {
    *(_BYTE *)(v5 + 224) = 0;
    memset_0(*(void **)(v4 + 1136), 0, 8LL * (unsigned int)(*(_DWORD *)(v4 + 864) + 1));
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v6
    && v9 != 2
    && *(_DWORD *)(v5 + 48) <= 1u
    && *(_QWORD *)(v6 + 992) >= (unsigned __int64)*(unsigned int *)(v6 + 1040)
    && MEMORY[0xFFFFF78000000014] >= *(_QWORD *)(v6 + 1600) + 5000000LL )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 768), &v51);
    if ( *(_BYTE *)(v6 + 1173) && *(_BYTE *)(v6 + 1236) )
      KeSetEvent((PRKEVENT)(v6 + 1576), 0, 0);
    KeReleaseInStackQueuedSpinLock(&v51);
  }
  if ( (xmmword_140FC0C10 & 0x20000) != 0 && v9 == 2 )
    CcLogExtraWBThreadAction(v4, v5, 3LL);
  return CcDereferencePartitionAndPrivateVolumeCacheMap(v4, v6);
}
