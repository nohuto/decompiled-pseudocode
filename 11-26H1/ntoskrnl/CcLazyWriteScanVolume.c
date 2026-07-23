/*
 * XREFs of CcLazyWriteScanVolume @ 0x14038AA5C
 * Callers:
 *     CcWorkerThread @ 0x140388380 (CcWorkerThread.c)
 *     CcQuickLazyWriteScanForVolume @ 0x14038BAD0 (CcQuickLazyWriteScanForVolume.c)
 * Callees:
 *     CcRescheduleLazyWriteScanOnVolume @ 0x140218F44 (CcRescheduleLazyWriteScanOnVolume.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcScanLogHandleList @ 0x140387D58 (CcScanLogHandleList.c)
 *     CcPostWorkQueue @ 0x1403881A0 (CcPostWorkQueue.c)
 *     CcSetLazyWriteScanQueuedInternal @ 0x14038953C (CcSetLazyWriteScanQueuedInternal.c)
 *     CcAllocateWorkQueueEntry @ 0x140389900 (CcAllocateWorkQueueEntry.c)
 *     CcPostWorkQueueAsyncLazywrite @ 0x140389E24 (CcPostWorkQueueAsyncLazywrite.c)
 *     CcIsCacheMapACursorInPrivateVCM @ 0x14038B234 (CcIsCacheMapACursorInPrivateVCM.c)
 *     CcShouldLazyWriteCacheMap @ 0x14038B260 (CcShouldLazyWriteCacheMap.c)
 *     CcGetNodeForLazyWrite @ 0x14038B3FC (CcGetNodeForLazyWrite.c)
 *     CcIncrementWriteBehindPriority @ 0x14038B454 (CcIncrementWriteBehindPriority.c)
 *     CcIsDirtyCachemapListEmptyForVolume @ 0x14038BAA4 (CcIsDirtyCachemapListEmptyForVolume.c)
 *     CcCalculatePagesToWriteForVolume @ 0x14038BF10 (CcCalculatePagesToWriteForVolume.c)
 *     CcAdjustThrottleForVolume @ 0x14038C014 (CcAdjustThrottleForVolume.c)
 *     CcPostDeferredWrites @ 0x14039D37C (CcPostDeferredWrites.c)
 *     CcComputeNextScanTime @ 0x1404CF8AC (CcComputeNextScanTime.c)
 *     CcPerfLogLoggedStreamsStats @ 0x1404DA8E0 (CcPerfLogLoggedStreamsStats.c)
 *     CcPerfLogLazyWriteScan @ 0x1404DBBF0 (CcPerfLogLazyWriteScan.c)
 *     CcUpdateTimeOnLogHandles @ 0x1405B3CF4 (CcUpdateTimeOnLogHandles.c)
 */

void __fastcall CcLazyWriteScanVolume(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // r15
  unsigned int v5; // r13d
  int v9; // esi
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rtt
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // r8
  _QWORD **v21; // rcx
  _QWORD *v22; // rax
  unsigned int v23; // r12d
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // r14
  __int64 v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // ecx
  _BYTE *v32; // rcx
  __int64 v33; // r13
  int v34; // eax
  unsigned int v35; // edx
  unsigned int v36; // eax
  int WorkQueueEntry; // eax
  KSPIN_LOCK *v38; // rcx
  __int64 v39; // rsi
  __int64 v40; // r8
  __int64 v41; // r9
  int v42; // ecx
  bool v43; // zf
  __int64 v44; // rdx
  _QWORD *v45; // rcx
  __int64 v46; // rdi
  __int64 v47; // rdx
  __int64 v48; // rcx
  _QWORD *v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r9
  unsigned int v54; // r8d
  unsigned int v55; // eax
  __int64 v56; // rcx
  _QWORD *v57; // rax
  __int64 *v58; // rcx
  _QWORD *v59; // rcx
  char v60; // di
  __int64 v61; // rax
  _QWORD *v62; // rdx
  _QWORD *v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // [rsp+28h] [rbp-61h]
  char v67; // [rsp+60h] [rbp-29h]
  char v68; // [rsp+61h] [rbp-28h]
  char v69; // [rsp+62h] [rbp-27h]
  _QWORD *v70; // [rsp+68h] [rbp-21h] BYREF
  _QWORD **v71; // [rsp+70h] [rbp-19h]
  __int64 v72; // [rsp+78h] [rbp-11h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-9h] BYREF
  __int64 v74; // [rsp+98h] [rbp+Fh]
  _QWORD v75[8]; // [rsp+A0h] [rbp+17h] BYREF
  __int64 v76; // [rsp+F0h] [rbp+67h] BYREF
  unsigned int v77; // [rsp+108h] [rbp+7Fh]

  v77 = a4;
  v4 = *(_QWORD *)(a1 + 32);
  v67 = 0;
  LOBYTE(v76) = 0;
  v75[0] = 0x7FFFFFFFFFFFFFFFLL;
  v5 = a4;
  LODWORD(v72) = 0;
  v69 = 0;
  v9 = 0;
  v68 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v4 == *((_QWORD *)PspSystemPartition + 1) )
    CcScanLogHandleList(v4, &v72, a4, v75);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 768), &LockHandle);
  CcSetLazyWriteScanQueuedInternal((_BYTE *)(a1 + 920), v5, 0);
  v10 = *(unsigned int *)(a1 + 1064);
  v11 = *(_QWORD *)(a1 + 1048) / v10;
  *(_QWORD *)(a1 + 1080) = v11;
  v12 = v11;
  v13 = *(_QWORD *)(a1 + 1056);
  *(_QWORD *)(a1 + 1088) = v13 / v10;
  v14 = v13 / v10;
  v15 = **(_QWORD **)(v4 + 8);
  if ( (unsigned int)v10 <= 1 )
  {
    v19 = *(_QWORD *)(v15 + 22464);
    v20 = *(_QWORD *)(a1 + 992);
    v18 = v20;
  }
  else
  {
    v16 = *(_QWORD *)(v15 + 22464);
    v17 = (unsigned int)(v10 - 1);
    v18 = *(_QWORD *)(a1 + 992);
    v19 = v16 + v17 * v12;
    v20 = v18 + v17 * v14;
  }
  *(_QWORD *)(a1 + 1048) = v19;
  *(_QWORD *)(a1 + 1056) = v20;
  if ( !v18 && (unsigned __int8)CcIsDirtyCachemapListEmptyForVolume(a1) && !*(_BYTE *)(a1 + 986) )
  {
    if ( *(_QWORD *)(a1 + 1104) != a1 + 1104 )
    {
      CcRescheduleLazyWriteScanOnVolume(v32, 0LL);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      goto LABEL_23;
    }
    *(_BYTE *)(a1 + 985) = 0;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return;
  }
  v21 = (_QWORD **)(a1 + 784);
  *(_QWORD *)(a1 + 1600) = MEMORY[0xFFFFF78000000014];
  v71 = &v70;
  v70 = &v70;
  while ( 1 )
  {
    v22 = *v21;
    if ( *v21 == v21 )
      break;
    if ( (_QWORD **)v22[1] != v21
      || (v62 = (_QWORD *)*v22, *(_QWORD **)(*v22 + 8LL) != v22)
      || (*v21 = v62, v62[1] = v21, v63 = v71, *v71 != &v70) )
    {
LABEL_43:
      __fastfail(3u);
    }
    v22[1] = v71;
    *v22 = &v70;
    *v63 = v22;
    v71 = (_QWORD **)v22;
  }
  *(_BYTE *)(a1 + 986) = 0;
  v23 = CcCalculatePagesToWriteForVolume(a1, v5);
  CcAdjustThrottleForVolume(a1);
  *(_QWORD *)(a1 + 1000) = *(_QWORD *)(a1 + 992);
  v26 = *(_QWORD *)(a1 + 1072);
  *(_DWORD *)(a1 + 1008) = v23;
  *(_DWORD *)(a1 + 912) = v23;
  *(_DWORD *)(v26 + 8LL * *(unsigned int *)(a2 + 152)) = v23;
  *(_QWORD *)(a2 + 216) = MEMORY[0xFFFFF78000000014];
  if ( (xmmword_140FC0C10 & 0x20000) != 0 )
    CcPerfLogLazyWriteScan(
      a3,
      v5,
      *(_DWORD *)(a1 + 912),
      *(_QWORD *)(a1 + 992),
      *(_QWORD *)(**(_QWORD **)(v4 + 8) + 22464LL),
      *(_QWORD *)(a1 + 1016),
      (unsigned int)CcNumberOfMappedVacbs,
      *(_QWORD *)(a1 + 1024),
      *(_QWORD *)(a1 + 1032),
      *(_QWORD *)(a1 + 1080),
      *(_QWORD *)(a1 + 1088),
      *(unsigned int *)(a1 + 704));
  v27 = a1 + 664;
  v28 = *(_QWORD *)(a1 + 664) - 568LL;
  v29 = 0LL;
  while ( v28 != v29 && v28 != a1 + 96 )
  {
    v30 = v28;
    if ( v29 )
      v30 = v29;
    v74 = v30;
    if ( !(unsigned __int8)CcIsCacheMapACursorInPrivateVCM(a1, v28) )
    {
      LODWORD(v66) = v5;
      if ( (unsigned __int8)CcShouldLazyWriteCacheMap(
                              v28,
                              0,
                              a1,
                              v23,
                              *(_QWORD *)(v28 + 96) & 0xFFFFFFFFFFFFFFF0uLL,
                              v66) )
      {
        v72 = 0LL;
        v33 = CcGetNodeForLazyWrite(v28);
        if ( _bittest((const signed __int32 *)(v28 + 152), 0x18u) )
        {
          v69 = 1;
          *(_DWORD *)(*(_QWORD *)(v28 + 248) + 144LL) |= 1u;
          v51 = *(_QWORD *)(v28 + 264);
          v52 = *(_QWORD *)(v28 + 248);
          if ( v51 > *(_QWORD *)(v52 + 112) )
          {
            *(_QWORD *)(v52 + 112) = v51;
            if ( (xmmword_140FC0C10 & 0x20000) != 0 )
              *(_QWORD *)(*(_QWORD *)(v28 + 248) + 128LL) = *(_QWORD *)((*(_QWORD *)(v28 + 96) & 0xFFFFFFFFFFFFFFF0uLL)
                                                                      + 0x18);
          }
        }
        v34 = *(_DWORD *)(v28 + 152);
        v35 = *(_DWORD *)(v28 + 112);
        *(_DWORD *)(v28 + 200) = v35;
        if ( (v34 & 0x200) != 0 && v35 >= 0x40 )
        {
          if ( (v34 & 0x1000000) != 0 && (v53 = *(_QWORD *)(v28 + 248), (v54 = *(_DWORD *)(v53 + 104)) != 0) )
          {
            v55 = 0;
            if ( v35 <= v54 )
              v55 = v54 - v35;
            ++CcDbgSkippedReductions;
            *(_DWORD *)(v53 + 104) = v55;
          }
          else
          {
            *(_DWORD *)(v28 + 200) = v35 >> 3;
          }
        }
        if ( !v67 )
        {
          v36 = *(_DWORD *)(v28 + 200);
          if ( v36 >= v23 )
          {
            if ( (*(_DWORD *)(v28 + 152) & 0x200) != 0 || v74 == v28 && (*(_DWORD *)(v28 + 276) & 0xF) == 0 )
            {
              LOBYTE(v76) = 1;
            }
            else
            {
              v56 = *(_QWORD *)v27;
              if ( *(_QWORD *)(*(_QWORD *)v27 + 8LL) != v27 )
                goto LABEL_43;
              v57 = *(_QWORD **)(a1 + 672);
              if ( *v57 != v27 )
                goto LABEL_43;
              *v57 = v56;
              *(_QWORD *)(v56 + 8) = v57;
              v58 = *(__int64 **)(v28 + 576);
              if ( *v58 != v28 + 568 )
                goto LABEL_43;
              *(_QWORD *)v27 = v28 + 568;
              *(_QWORD *)(a1 + 672) = v58;
              *v58 = v27;
              *(_QWORD *)(v28 + 576) = v27;
            }
            v23 = 0;
            v67 = 1;
          }
          else
          {
            v23 -= v36;
          }
        }
        *(_DWORD *)(v28 + 152) |= 0x20u;
        ++*(_DWORD *)(v28 + 112);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        WorkQueueEntry = CcAllocateWorkQueueEntry(v4, a1, v33, (PSLIST_ENTRY *)&v72);
        v38 = (KSPIN_LOCK *)(v4 + 768);
        if ( WorkQueueEntry < 0 )
        {
          KeAcquireInStackQueuedSpinLock(v38, &LockHandle);
          *(_DWORD *)(v28 + 152) &= ~0x20u;
          --*(_DWORD *)(v28 + 112);
          v5 = v77;
          break;
        }
        v39 = v72;
        *(_DWORD *)(v72 + 128) = 2;
        *(_QWORD *)(v39 + 16) = v28;
        KeAcquireInStackQueuedSpinLock(v38, &LockHandle);
        v42 = *(_DWORD *)(v28 + 112) - 1;
        v43 = (*(_DWORD *)(v28 + 152) & 0x10000) == 0;
        *(_DWORD *)(v28 + 112) = v42;
        if ( v43 )
        {
          if ( !*(_DWORD *)(v28 + 4) && !v42 )
          {
            *(_QWORD *)(v28 + 504) = v39;
            v44 = v33 + 120;
            goto LABEL_36;
          }
          *(_QWORD *)(v28 + 504) = v39;
          v45 = (_QWORD *)v39;
          if ( (*(_DWORD *)(a1 + 1616) & 1) != 0 )
          {
            *(_DWORD *)(v39 + 128) = 7;
            *(_QWORD *)(v39 + 24) = v28;
            *(_QWORD *)(v39 + 16) = 0LL;
            CcPostWorkQueueAsyncLazywrite(v39, v33 + 312, v40, v41);
            goto LABEL_38;
          }
          v44 = v33 + 104;
        }
        else
        {
          v44 = v33 + 72;
          *(_QWORD *)(v28 + 504) = v39 | 1;
LABEL_36:
          v45 = (_QWORD *)v39;
        }
        CcPostWorkQueue(v45, v44, v40, v41);
LABEL_38:
        v5 = v77;
        v9 = 0;
        v68 = 1;
        goto LABEL_39;
      }
      v31 = *(_DWORD *)(v28 + 152);
      v24 = 65568LL;
      if ( (v31 & 0x10020) == 0x10020 )
      {
        CcIncrementWriteBehindPriority(v28);
      }
      else if ( (unsigned int)++v9 >= 0x14 && (v31 & 0x20) == 0 )
      {
        ++*(_DWORD *)(v28 + 112);
        *(_DWORD *)(v28 + 152) = v31 | 0x20;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v9 = 0;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 768), &LockHandle);
        *(_DWORD *)(v28 + 152) &= ~0x20u;
        --*(_DWORD *)(v28 + 112);
      }
    }
LABEL_39:
    v46 = v28 + 568;
    v47 = *(_QWORD *)v46;
    if ( (_BYTE)v76 )
    {
      v48 = *(_QWORD *)v27;
      if ( *(_QWORD *)(*(_QWORD *)v27 + 8LL) != v27 )
        goto LABEL_43;
      v49 = *(_QWORD **)(a1 + 672);
      if ( *v49 != v27 )
        goto LABEL_43;
      *v49 = v48;
      *(_QWORD *)(v48 + 8) = v49;
      v50 = *(_QWORD *)v46;
      if ( *(_QWORD *)(*(_QWORD *)v46 + 8LL) != v46 )
        goto LABEL_43;
      *(_QWORD *)v27 = v50;
      *(_QWORD *)(a1 + 672) = v46;
      *(_QWORD *)(v50 + 8) = v27;
      LOBYTE(v76) = 0;
      *(_QWORD *)v46 = v27;
    }
    v29 = v74;
    v28 = v47 - 568;
  }
  v59 = v70;
  v60 = v68;
  if ( v70 != &v70 )
    v60 = 1;
  while ( v59 != &v70 )
  {
    if ( (_QWORD **)v59[1] != &v70 )
      goto LABEL_43;
    v64 = *v59;
    if ( *(_QWORD **)(*v59 + 8LL) != v59 )
      goto LABEL_43;
    v70 = (_QWORD *)*v59;
    *(_QWORD *)(v64 + 8) = &v70;
    v65 = v59[19];
    if ( (*(_DWORD *)(a1 + 1616) & 2) != 0 )
      CcPostWorkQueueAsyncLazywrite((__int64)v59, v65 + 312, v24, v25);
    else
      CcPostWorkQueue(v59, v65 + 104, v24, v25);
    v59 = v70;
  }
  v61 = 0LL;
  v76 = 0LL;
  if ( !(_BYTE)dword_140FBF22C && !v60 && *(_QWORD *)(a1 + 1104) == a1 + 1104 )
  {
    CcComputeNextScanTime(v4, a1, v75, &v76);
    v61 = v76;
  }
  if ( v61 == 0x7FFFFFFFFFFFFFFFLL )
  {
    *(_BYTE *)(a1 + 708) = 1;
    *(_BYTE *)(a1 + 985) = 0;
  }
  else
  {
    CcRescheduleLazyWriteScanOnVolume((_BYTE *)a1, &v76);
    if ( *(_BYTE *)(a1 + 708) )
      *(_BYTE *)(a1 + 708) = 0;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v69 )
    CcUpdateTimeOnLogHandles(v4);
  if ( (xmmword_140FC0C10 & 0x20000) != 0 )
    CcPerfLogLoggedStreamsStats(v5, *(unsigned int *)(v4 + 976));
  if ( *(_QWORD *)(a1 + 1104) != a1 + 1104 )
LABEL_23:
    CcPostDeferredWrites(v4, a1);
}
