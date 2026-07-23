/*
 * XREFs of CcNotifyOfMappedWrite @ 0x14038B5FC
 * Callers:
 *     MiGatherMappedPages @ 0x140490828 (MiGatherMappedPages.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcCanIWriteStreamEx @ 0x140385C00 (CcCanIWriteStreamEx.c)
 *     CcPostWorkQueue @ 0x1403881A0 (CcPostWorkQueue.c)
 *     CcAllocateWorkQueueEntry @ 0x140389900 (CcAllocateWorkQueueEntry.c)
 *     CcGetNodeForLazyWrite @ 0x14038B3FC (CcGetNodeForLazyWrite.c)
 *     CcGetPrivateVolumeCacheMap @ 0x14039DEA0 (CcGetPrivateVolumeCacheMap.c)
 *     CcDecrementOpenCount @ 0x1403A04AC (CcDecrementOpenCount.c)
 *     CcScheduleLazyWriteScan @ 0x1403E3830 (CcScheduleLazyWriteScan.c)
 *     CcAcquireByteRangeForWrite @ 0x1403E5550 (CcAcquireByteRangeForWrite.c)
 *     CcIncrementOpenCount @ 0x140494A80 (CcIncrementOpenCount.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall CcNotifyOfMappedWrite(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v5; // r15
  __int64 v6; // rdi
  _DWORD *v7; // rsi
  __int64 PrivateVolumeCacheMap; // r13
  __int64 v9; // rcx
  _BYTE *v10; // r12
  __int64 v11; // r14
  __int64 v12; // rdx
  unsigned __int64 v13; // r8
  unsigned int v14; // r14d
  __int64 v16; // rax
  unsigned int v17; // ecx
  unsigned int v18; // r12d
  int v19; // eax
  int WorkQueueEntry; // eax
  KSPIN_LOCK *v21; // rcx
  unsigned __int64 v22; // r14
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rdx
  unsigned __int64 v27; // [rsp+50h] [rbp-29h] BYREF
  __int64 v28; // [rsp+58h] [rbp-21h]
  __int64 v29; // [rsp+60h] [rbp-19h] BYREF
  __int64 v30; // [rsp+68h] [rbp-11h] BYREF
  struct _KLOCK_QUEUE_HANDLE v31; // [rsp+70h] [rbp-9h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp+Fh] BYREF
  unsigned int v33; // [rsp+E0h] [rbp+67h] BYREF
  unsigned int v34; // [rsp+F0h] [rbp+77h]
  __int64 v35; // [rsp+F8h] [rbp+7Fh] BYREF

  v34 = a3;
  v27 = 0LL;
  v35 = 0LL;
  v30 = 0LL;
  v5 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v31, 0, sizeof(v31));
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = (_DWORD *)(v6 + 152);
  if ( !v6 || (*v7 & 0x100) != 0 )
  {
    v14 = 1;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    goto LABEL_13;
  }
  v5 = *(_QWORD *)(v6 + 536);
  PrivateVolumeCacheMap = CcGetPrivateVolumeCacheMap(v6);
  v10 = (_BYTE *)(PrivateVolumeCacheMap + 1172);
  v11 = CcGetNodeForLazyWrite(v9);
  v28 = v11;
  if ( !CcEnablePerVolumeLazyWriter )
    v10 = (_BYTE *)(v5 + 1292);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 768), &v31);
  ++*(_DWORD *)(v6 + 4);
  ++*(_DWORD *)(v6 + 544);
  KeReleaseInStackQueuedSpinLock(&v31);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 768), &v31);
  CcDecrementOpenCount(v6);
  if ( (*v7 & 0x20) != 0 || *(_DWORD *)(v6 + 524) )
  {
LABEL_16:
    v14 = 0;
    goto LABEL_13;
  }
  if ( !*(_DWORD *)(v6 + 112) )
  {
LABEL_21:
    v14 = 2;
    goto LABEL_13;
  }
  v13 = *(_QWORD *)(v6 + 96) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (*(_DWORD *)(v13 + 0x50) & 0x8000) != 0
    || !CcCanIWriteStreamEx(v5, PrivateVolumeCacheMap, v13, 0x1000000u, 0, 8, 0LL) )
  {
    v16 = *(_QWORD *)(v6 + 40);
    if ( a2 > v16 && *(_QWORD *)(v6 + 48) > v16 )
    {
      v19 = *(_DWORD *)(v6 + 112);
      *(_DWORD *)(v6 + 200) = v19;
      *(_DWORD *)(v5 + 976) += v19;
      *(_DWORD *)(v5 + 1072) += *(_DWORD *)(v6 + 200);
      *v7 |= 0x20u;
      ++*(_DWORD *)(v6 + 112);
      KeReleaseInStackQueuedSpinLock(&v31);
      WorkQueueEntry = CcAllocateWorkQueueEntry(v5, PrivateVolumeCacheMap, v11, (PSLIST_ENTRY *)&v27);
      v21 = (KSPIN_LOCK *)(v5 + 768);
      if ( WorkQueueEntry >= 0 )
      {
        v22 = v27;
        *(_DWORD *)(v27 + 128) = 2;
        *(_QWORD *)(v22 + 16) = v6;
        KeAcquireInStackQueuedSpinLock(v21, &v31);
        --*(_DWORD *)(v6 + 112);
        v25 = v28;
        if ( (*v7 & 0x10000) != 0 )
        {
          *(_QWORD *)(v6 + 504) = v22 | 1;
          v26 = v25 + 72;
        }
        else
        {
          *(_QWORD *)(v6 + 504) = v22;
          v26 = v25 + 104;
        }
        CcPostWorkQueue((_QWORD *)v22, v26, v23, v24);
        goto LABEL_16;
      }
      KeAcquireInStackQueuedSpinLock(v21, &v31);
      *v7 &= ~0x20u;
      --*(_DWORD *)(v6 + 112);
    }
    goto LABEL_21;
  }
  v14 = 0;
  if ( *v10 )
  {
    LOBYTE(v13) = 1;
    CcScheduleLazyWriteScan(v5, PrivateVolumeCacheMap, v13, 0LL);
  }
LABEL_13:
  if ( v34 || v14 != 2 )
  {
    if ( v14 >= 2 )
    {
      *v7 |= 0x400400u;
      LOBYTE(v13) = 1;
      CcIncrementOpenCount(v6, v12, v13);
      ++*(_DWORD *)(v6 + 524);
      KeReleaseInStackQueuedSpinLock(&v31);
      v17 = v34;
      v29 = a2;
      v33 = v34;
      if ( v34 )
      {
        v18 = v34;
        do
        {
          if ( !*(_QWORD *)(v6 + 8) && (*v7 & 4) == 0 )
            break;
          if ( !(unsigned __int8)CcAcquireByteRangeForWrite(
                                   v6,
                                   (unsigned int)&v29,
                                   v17,
                                   0,
                                   (__int64)&v35,
                                   (__int64)&v33,
                                   (__int64)&v30,
                                   0,
                                   0LL) )
            break;
          v35 += v33;
          v17 = v18 + a2 - v35;
          v29 = v35;
          v33 = v17;
        }
        while ( v17 );
      }
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 768), &v31);
      if ( !*(_DWORD *)(v6 + 4) )
        KeBugCheckEx(0x34u, 0x1467uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      *(_DWORD *)(v6 + 152) &= ~0x400000u;
      goto LABEL_18;
    }
  }
  else
  {
    v14 = 1;
  }
  if ( v5 )
LABEL_18:
    KeReleaseInStackQueuedSpinLock(&v31);
  return v14;
}
