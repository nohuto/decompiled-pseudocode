/*
 * XREFs of CcLazyWriteScan @ 0x1404F4BD4
 * Callers:
 *     CcWorkerThread @ 0x140388380 (CcWorkerThread.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcScanLogHandleList @ 0x140387D58 (CcScanLogHandleList.c)
 *     CcCalculatePagesToWrite @ 0x1403880D0 (CcCalculatePagesToWrite.c)
 *     CcPostWorkQueue @ 0x1403881A0 (CcPostWorkQueue.c)
 *     CcSetLazyWriteScanQueuedInternal @ 0x14038953C (CcSetLazyWriteScanQueuedInternal.c)
 *     CcAllocateWorkQueueEntry @ 0x140389900 (CcAllocateWorkQueueEntry.c)
 *     CcShouldLazyWriteCacheMap @ 0x14038B260 (CcShouldLazyWriteCacheMap.c)
 *     CcGetNodeForLazyWrite @ 0x14038B3FC (CcGetNodeForLazyWrite.c)
 *     CcIncrementWriteBehindPriority @ 0x14038B454 (CcIncrementWriteBehindPriority.c)
 *     CcPostDeferredWrites @ 0x14039D37C (CcPostDeferredWrites.c)
 *     CcRescheduleLazyWriteScan @ 0x1403E429C (CcRescheduleLazyWriteScan.c)
 *     CcComputeNextScanTime @ 0x1404CF8AC (CcComputeNextScanTime.c)
 *     CcPerfLogLoggedStreamsStats @ 0x1404DA8E0 (CcPerfLogLoggedStreamsStats.c)
 *     CcPerfLogLazyWriteScan @ 0x1404DBBF0 (CcPerfLogLazyWriteScan.c)
 *     CcAdjustThrottleForPartition @ 0x1405B32D4 (CcAdjustThrottleForPartition.c)
 *     CcUpdateTimeOnLogHandles @ 0x1405B3CF4 (CcUpdateTimeOnLogHandles.c)
 */

void __fastcall CcLazyWriteScan(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v8; // r15d
  unsigned __int64 v9; // r8
  __int64 *v10; // rsi
  __int64 *v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rax
  _QWORD **v20; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // rdx
  _QWORD *v23; // rdx
  unsigned int v24; // r13d
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // rcx
  unsigned int v28; // esi
  unsigned __int64 v29; // r14
  __int64 v30; // rdi
  __int64 v31; // r12
  __int64 v32; // rax
  __int64 v33; // r15
  __int64 v34; // rax
  __int64 v35; // rcx
  int v36; // eax
  unsigned int v37; // edx
  __int64 v38; // r9
  unsigned int v39; // r8d
  unsigned int v40; // eax
  unsigned int v41; // eax
  __int64 v42; // rcx
  _QWORD *v43; // rax
  unsigned __int64 *v44; // rcx
  int WorkQueueEntry; // eax
  KSPIN_LOCK *v46; // rcx
  unsigned __int64 v47; // rsi
  __int64 v48; // r8
  __int64 v49; // r9
  int v50; // ecx
  bool v51; // zf
  __int64 v52; // rdx
  int v53; // ecx
  __int64 v54; // rdi
  __int64 v55; // rdx
  __int64 v56; // rcx
  _QWORD *v57; // rax
  __int64 v58; // rax
  _QWORD *v59; // rcx
  char v60; // di
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // [rsp+28h] [rbp-51h]
  char v64; // [rsp+60h] [rbp-19h]
  char v65; // [rsp+61h] [rbp-18h]
  char v66; // [rsp+62h] [rbp-17h]
  _QWORD *v67; // [rsp+68h] [rbp-11h] BYREF
  _QWORD **v68; // [rsp+70h] [rbp-9h]
  unsigned __int64 v69; // [rsp+78h] [rbp-1h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp+7h] BYREF
  __int64 v71[7]; // [rsp+98h] [rbp+1Fh] BYREF
  __int64 v72; // [rsp+E0h] [rbp+67h] BYREF
  unsigned int v73; // [rsp+F8h] [rbp+7Fh]

  v73 = a4;
  v64 = 0;
  v71[0] = 0x7FFFFFFFFFFFFFFFLL;
  LOBYTE(v72) = 0;
  LODWORD(v69) = 0;
  v8 = 0;
  v66 = 0;
  v65 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a1 == *((_QWORD *)PspSystemPartition + 1) )
    CcScanLogHandleList(a1, &v69, a4, v71);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
  CcSetLazyWriteScanQueuedInternal((_BYTE *)(a1 + 984), a4, 0);
  v9 = *(unsigned int *)(a1 + 1128);
  v10 = (__int64 *)(a1 + 1056);
  v11 = *(__int64 **)(a1 + 8);
  v12 = *(_QWORD *)(a1 + 1112) / v9;
  *(_QWORD *)(a1 + 1144) = v12;
  v13 = v12;
  v14 = *(_QWORD *)(a1 + 1120) / v9;
  *(_QWORD *)(a1 + 1152) = v14;
  v15 = *v11;
  if ( (unsigned int)v9 <= 1 )
  {
    v18 = *(_QWORD *)(v15 + 22464);
    v19 = *v10;
    v17 = *v10;
  }
  else
  {
    v16 = (unsigned int)(v9 - 1);
    v17 = *v10;
    v18 = *(_QWORD *)(v15 + 22464) + v16 * v13;
    v19 = *v10 + v16 * v14;
  }
  *(_QWORD *)(a1 + 1112) = v18;
  *(_QWORD *)(a1 + 1120) = v19;
  if ( !v17 && !*(_BYTE *)(a1 + 1050) )
  {
    if ( *(_QWORD *)(a1 + 1168) == a1 + 1168 )
    {
      *(_BYTE *)(a1 + 1049) = 0;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return;
    }
    CcRescheduleLazyWriteScan(a1, 0LL);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    goto LABEL_89;
  }
  v68 = &v67;
  v20 = (_QWORD **)(a1 + 848);
  v67 = &v67;
  while ( 1 )
  {
    v21 = *v20;
    if ( *v20 == v20 )
      break;
    if ( (_QWORD **)v21[1] != v20
      || (v22 = (_QWORD *)*v21, *(_QWORD **)(*v21 + 8LL) != v21)
      || (*v20 = v22, v22[1] = v20, v23 = v68, *v68 != &v67) )
    {
LABEL_75:
      __fastfail(3u);
    }
    v21[1] = v68;
    *v21 = &v67;
    *v23 = v21;
    v68 = (_QWORD **)v21;
  }
  *(_BYTE *)(a1 + 1050) = 0;
  v24 = CcCalculatePagesToWrite(a1, a4, a1 + 1056, (unsigned __int64 *)(a1 + 1080), 0);
  CcAdjustThrottleForPartition(a1, a1 + 1056, a1 + 1080, *(unsigned int *)(a1 + 976));
  v26 = *(_QWORD *)(a1 + 1056);
  v27 = *(_QWORD *)(a1 + 1136);
  v28 = v73;
  *(_QWORD *)(a1 + 1064) = v26;
  *(_DWORD *)(a1 + 1072) = v24;
  *(_DWORD *)(a1 + 976) = v24;
  *(_DWORD *)(v27 + 8LL * *(unsigned int *)(a2 + 152)) = v24;
  *(_QWORD *)(a2 + 216) = MEMORY[0xFFFFF78000000014];
  if ( (xmmword_140FC0C10 & 0x20000) != 0 )
    CcPerfLogLazyWriteScan(
      a3,
      v28,
      *(_DWORD *)(a1 + 976),
      *(_QWORD *)(a1 + 1056),
      *(_QWORD *)(**(_QWORD **)(a1 + 8) + 22464LL),
      *(_QWORD *)(a1 + 1080),
      (unsigned int)CcNumberOfMappedVacbs,
      *(_QWORD *)(a1 + 1088),
      *(_QWORD *)(a1 + 1096),
      *(_QWORD *)(a1 + 1144),
      *(_QWORD *)(a1 + 1152),
      *(unsigned int *)(a1 + 776));
  v29 = a1 + 696;
  v30 = *(_QWORD *)(a1 + 696) - 136LL;
  v31 = 0LL;
  while ( v30 != v31 && v30 != a1 + 560 )
  {
    v32 = v30;
    LODWORD(v63) = v28;
    if ( v31 )
      v32 = v31;
    v31 = v32;
    if ( CcShouldLazyWriteCacheMap(v30, a1, 0LL, v24, *(_QWORD *)(v30 + 96) & 0xFFFFFFFFFFFFFFF0uLL, v63) )
    {
      v69 = 0LL;
      v33 = CcGetNodeForLazyWrite(v30);
      if ( _bittest((const signed __int32 *)(v30 + 152), 0x18u) )
      {
        v66 = 1;
        *(_DWORD *)(*(_QWORD *)(v30 + 248) + 144LL) |= 1u;
        v34 = *(_QWORD *)(v30 + 248);
        v35 = *(_QWORD *)(v30 + 264);
        if ( v35 > *(_QWORD *)(v34 + 112) )
        {
          *(_QWORD *)(v34 + 112) = v35;
          if ( (xmmword_140FC0C10 & 0x20000) != 0 )
            *(_QWORD *)(*(_QWORD *)(v30 + 248) + 128LL) = *(_QWORD *)((*(_QWORD *)(v30 + 96) & 0xFFFFFFFFFFFFFFF0uLL)
                                                                    + 0x18);
        }
      }
      v36 = *(_DWORD *)(v30 + 152);
      v37 = *(_DWORD *)(v30 + 112);
      *(_DWORD *)(v30 + 200) = v37;
      if ( (v36 & 0x200) != 0 && v37 >= 0x40 )
      {
        if ( (v36 & 0x1000000) != 0 && (v38 = *(_QWORD *)(v30 + 248), (v39 = *(_DWORD *)(v38 + 104)) != 0) )
        {
          v40 = 0;
          if ( v37 <= v39 )
            v40 = v39 - v37;
          ++CcDbgSkippedReductions;
          *(_DWORD *)(v38 + 104) = v40;
        }
        else
        {
          *(_DWORD *)(v30 + 200) = v37 >> 3;
        }
      }
      if ( !v64 )
      {
        v41 = *(_DWORD *)(v30 + 200);
        if ( v41 < v24 )
        {
          v24 -= v41;
        }
        else
        {
          if ( (*(_DWORD *)(v30 + 152) & 0x200) != 0 || v31 == v30 && (*(_DWORD *)(v30 + 276) & 0xF) == 0 )
          {
            LOBYTE(v72) = 1;
          }
          else
          {
            v42 = *(_QWORD *)v29;
            if ( *(_QWORD *)(*(_QWORD *)v29 + 8LL) != v29 )
              goto LABEL_75;
            v43 = *(_QWORD **)(a1 + 704);
            if ( *v43 != v29 )
              goto LABEL_75;
            *v43 = v42;
            *(_QWORD *)(v42 + 8) = v43;
            v44 = *(unsigned __int64 **)(v30 + 144);
            if ( *v44 != v30 + 136 )
              goto LABEL_75;
            *(_QWORD *)v29 = v30 + 136;
            *(_QWORD *)(a1 + 704) = v44;
            *v44 = v29;
            *(_QWORD *)(v30 + 144) = v29;
          }
          v24 = 0;
          v64 = 1;
        }
      }
      *(_DWORD *)(v30 + 152) |= 0x20u;
      ++*(_DWORD *)(v30 + 112);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      WorkQueueEntry = CcAllocateWorkQueueEntry(a1, 0LL, v33, (PSLIST_ENTRY *)&v69);
      v46 = (KSPIN_LOCK *)(a1 + 768);
      if ( WorkQueueEntry < 0 )
      {
        KeAcquireInStackQueuedSpinLock(v46, &LockHandle);
        *(_DWORD *)(v30 + 152) &= ~0x20u;
        --*(_DWORD *)(v30 + 112);
        break;
      }
      v47 = v69;
      *(_DWORD *)(v69 + 128) = 2;
      *(_QWORD *)(v47 + 16) = v30;
      KeAcquireInStackQueuedSpinLock(v46, &LockHandle);
      v50 = *(_DWORD *)(v30 + 112) - 1;
      v51 = (*(_DWORD *)(v30 + 152) & 0x10000) == 0;
      *(_DWORD *)(v30 + 112) = v50;
      if ( v51 )
      {
        if ( *(_DWORD *)(v30 + 4) || (v52 = v33 + 120, v50) )
          v52 = v33 + 104;
        *(_QWORD *)(v30 + 504) = v47;
      }
      else
      {
        v52 = v33 + 72;
        *(_QWORD *)(v30 + 504) = v47 | 1;
      }
      CcPostWorkQueue((_QWORD *)v47, v52, v48, v49);
      v28 = v73;
      v8 = 0;
      v65 = 1;
    }
    else
    {
      v53 = *(_DWORD *)(v30 + 152);
      v26 = 65568LL;
      if ( (v53 & 0x10020) == 0x10020 )
      {
        CcIncrementWriteBehindPriority(v30);
      }
      else if ( (unsigned int)++v8 >= 0x14 && (v53 & 0x820) == 0 )
      {
        ++*(_DWORD *)(v30 + 112);
        *(_DWORD *)(v30 + 152) = v53 | 0x20;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v8 = 0;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
        *(_DWORD *)(v30 + 152) &= ~0x20u;
        --*(_DWORD *)(v30 + 112);
      }
    }
    v54 = v30 + 136;
    v55 = *(_QWORD *)v54;
    if ( (_BYTE)v72 )
    {
      v56 = *(_QWORD *)v29;
      if ( *(_QWORD *)(*(_QWORD *)v29 + 8LL) != v29 )
        goto LABEL_75;
      v57 = *(_QWORD **)(a1 + 704);
      if ( *v57 != v29 )
        goto LABEL_75;
      *v57 = v56;
      *(_QWORD *)(v56 + 8) = v57;
      v58 = *(_QWORD *)v54;
      if ( *(_QWORD *)(*(_QWORD *)v54 + 8LL) != v54 )
        goto LABEL_75;
      *(_QWORD *)v29 = v58;
      *(_QWORD *)(a1 + 704) = v54;
      *(_QWORD *)(v58 + 8) = v29;
      LOBYTE(v72) = 0;
      *(_QWORD *)v54 = v29;
    }
    v30 = v55 - 136;
  }
  v59 = v67;
  v60 = v65;
  if ( v67 != &v67 )
    v60 = 1;
  while ( v59 != &v67 )
  {
    if ( (_QWORD **)v59[1] != &v67 )
      goto LABEL_75;
    v61 = *v59;
    if ( *(_QWORD **)(*v59 + 8LL) != v59 )
      goto LABEL_75;
    v67 = (_QWORD *)*v59;
    *(_QWORD *)(v61 + 8) = &v67;
    CcPostWorkQueue(v59, v59[19] + 104LL, v26, v25);
    v59 = v67;
  }
  v62 = 0LL;
  v72 = 0LL;
  if ( !(_BYTE)dword_140FBF22C && !v60 && *(_QWORD *)(a1 + 1168) == a1 + 1168 )
  {
    CcComputeNextScanTime(a1, 0LL, v71, &v72);
    v62 = v72;
  }
  if ( v62 == 0x7FFFFFFFFFFFFFFFLL )
  {
    *(_BYTE *)(a1 + 780) = 1;
    *(_BYTE *)(a1 + 1049) = 0;
  }
  else
  {
    CcRescheduleLazyWriteScan(a1, &v72);
    if ( *(_BYTE *)(a1 + 780) )
      *(_BYTE *)(a1 + 780) = 0;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v66 )
    CcUpdateTimeOnLogHandles(a1);
  if ( (xmmword_140FC0C10 & 0x20000) != 0 )
    CcPerfLogLoggedStreamsStats(v28, *(_DWORD *)(a1 + 976));
  if ( *(_QWORD *)(a1 + 1168) != a1 + 1168 )
LABEL_89:
    CcPostDeferredWrites(a1, 0LL);
}
