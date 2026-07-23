/*
 * XREFs of VfDeadlockAcquireResource @ 0x140C4D324
 * Callers:
 *     ViDeadlockExAcquireFastMutexUnsafe_Exit @ 0x140C3D670 (ViDeadlockExAcquireFastMutexUnsafe_Exit.c)
 *     ViDeadlockExAcquireFastMutex_Exit @ 0x140C3D6B0 (ViDeadlockExAcquireFastMutex_Exit.c)
 *     ViDeadlockExAcquireSharedStarveExclusive_Exit @ 0x140C3D6F0 (ViDeadlockExAcquireSharedStarveExclusive_Exit.c)
 *     ViDeadlockExEnterCriticalRegionAndAcquireResourceExclusive_Exit @ 0x140C3D730 (ViDeadlockExEnterCriticalRegionAndAcquireResourceExclusive_Exit.c)
 *     ViDeadlockExTryToAcquireFastMutex_Exit @ 0x140C3D7D0 (ViDeadlockExTryToAcquireFastMutex_Exit.c)
 *     ViDeadlockKeAcquireInStackQueuedSpinLockRaiseToSynch_Exit @ 0x140C3D970 (ViDeadlockKeAcquireInStackQueuedSpinLockRaiseToSynch_Exit.c)
 *     ViDeadlockKeInitializeMutant_Exit @ 0x140C3D9B0 (ViDeadlockKeInitializeMutant_Exit.c)
 *     ViDeadlockKeTryToAcquireSpinLockAtDpcLevel_Exit @ 0x140C3DAF0 (ViDeadlockKeTryToAcquireSpinLockAtDpcLevel_Exit.c)
 *     ViDeadlockObjectAcquired @ 0x140C3DCF0 (ViDeadlockObjectAcquired.c)
 *     ViDeadlockKeAcquireSpinLockRaiseToDpc_Exit @ 0x140C4D2F0 (ViDeadlockKeAcquireSpinLockRaiseToDpc_Exit.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140260E90 (RtlCaptureStackBackTrace.c)
 *     VfReportIssueWithOptions @ 0x140649138 (VfReportIssueWithOptions.c)
 *     ViLowerIrql @ 0x14064AF6C (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x14064AFA4 (ViRaiseIrqlToDpcLevel.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ViDeadlockAddResource @ 0x140C3CB00 (ViDeadlockAddResource.c)
 *     ViDeadlockAddThread @ 0x140C3CD4C (ViDeadlockAddThread.c)
 *     ViDeadlockAllocate @ 0x140C3CE0C (ViDeadlockAllocate.c)
 *     ViDeadlockAnalyze @ 0x140C3CE68 (ViDeadlockAnalyze.c)
 *     ViDeadlockCheckDuplicatesAmongChildren @ 0x140C3D2E4 (ViDeadlockCheckDuplicatesAmongChildren.c)
 *     ViDeadlockCheckDuplicatesAmongRoots @ 0x140C3D364 (ViDeadlockCheckDuplicatesAmongRoots.c)
 *     ViDeadlockDetectionLock @ 0x140C3D470 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x140C3D4A8 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockFree @ 0x140C3D920 (ViDeadlockFree.c)
 *     ViDeadlockPreprocessOptions @ 0x140C3DDD0 (ViDeadlockPreprocessOptions.c)
 *     ViDeadlockRemoveThread @ 0x140C3E1A8 (ViDeadlockRemoveThread.c)
 *     ViDeadlockSearchResource @ 0x140C3E2F8 (ViDeadlockSearchResource.c)
 *     ViDeadlockSearchThread @ 0x140C3E3DC (ViDeadlockSearchThread.c)
 *     ViDeadlockSimilarNode @ 0x140C3E474 (ViDeadlockSimilarNode.c)
 *     ViDeadlockUpdateChildrenCount @ 0x140C3E4C0 (ViDeadlockUpdateChildrenCount.c)
 *     ViIsThreadInsidePagingCodePaths @ 0x140C3E500 (ViIsThreadInsidePagingCodePaths.c)
 *     ViDeadlockCanProceed @ 0x140C4B470 (ViDeadlockCanProceed.c)
 */

void __fastcall VfDeadlockAcquireResource(LONG *a1, int a2, unsigned __int64 a3, int a4, void *a5)
{
  ULONG_PTR v6; // rdi
  void *v8; // r15
  _QWORD *v9; // r14
  USHORT v10; // ax
  int v11; // ecx
  __int64 v12; // rbx
  __int64 v13; // rax
  unsigned int v14; // r10d
  int v15; // edi
  _QWORD *v16; // rsi
  void *v17; // rsi
  __int64 v18; // rcx
  ULONG_PTR v19; // r13
  _QWORD *v20; // rax
  unsigned __int16 v21; // ax
  int v22; // edx
  __int64 v23; // r15
  __int64 v24; // r9
  char *v25; // rdi
  int v26; // eax
  int v27; // r11d
  _QWORD *v28; // r9
  _QWORD *v29; // r10
  _QWORD *v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  _QWORD *v33; // rax
  int v34; // eax
  _OWORD *v35; // rax
  __int64 v36; // rax
  __int128 v37; // xmm3
  __int128 v38; // xmm2
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  void *v41; // rbx
  unsigned __int8 v42; // [rsp+34h] [rbp-7Dh]
  PVOID v43; // [rsp+38h] [rbp-79h]
  PVOID v44; // [rsp+40h] [rbp-71h]
  PVOID Entry; // [rsp+48h] [rbp-69h] BYREF
  int v46; // [rsp+50h] [rbp-61h]
  int v47; // [rsp+54h] [rbp-5Dh]
  PVOID v48; // [rsp+58h] [rbp-59h]
  int v49; // [rsp+60h] [rbp-51h]
  int v50; // [rsp+64h] [rbp-4Dh]
  PVOID v51; // [rsp+68h] [rbp-49h]
  PVOID v52; // [rsp+70h] [rbp-41h] BYREF
  __int64 v53; // [rsp+78h] [rbp-39h]
  PVOID BackTrace[2]; // [rsp+80h] [rbp-31h] BYREF
  __int128 v55; // [rsp+90h] [rbp-21h]
  __int128 v56; // [rsp+A0h] [rbp-11h]
  __int128 v57; // [rsp+B0h] [rbp-1h]

  v6 = a2;
  v46 = a4;
  v50 = a2;
  v53 = (__int64)a5;
  memset_0(BackTrace, 0, 0x40uLL);
  v47 = 0;
  v8 = 0LL;
  v52 = 0LL;
  Entry = 0LL;
  if ( (_DWORD)v6 == 8
    && (!VfWin32kDllBase
     || VfWin32kDllBase > (unsigned __int64)a5
     || VfWin32kDllBase + (unsigned __int64)(unsigned int)VfWin32kSizeOfImage <= (unsigned __int64)a5)
    || !ViDeadlockCanProceed(a1)
    || ViIsThreadInsidePagingCodePaths()
    || *((_DWORD *)ViDeadlockGlobals + 8196)
    || *((int *)ViDeadlockGlobals + 8282) > 1024 )
  {
    return;
  }
  v48 = 0LL;
  v9 = 0LL;
  v49 = ViDeadlockResourceTypeInfo[v6];
  v43 = ViDeadlockAllocate(3);
  v51 = ViDeadlockAllocate(2);
  v44 = ViDeadlockAllocate(1);
  v10 = RtlCaptureStackBackTrace(2u, 8u, BackTrace, 0LL);
  v11 = v10;
  if ( !v10 )
  {
    BackTrace[0] = a5;
    v11 = 1;
LABEL_12:
    BackTrace[v11] = 0LL;
    goto LABEL_13;
  }
  if ( v10 < 8u )
    goto LABEL_12;
LABEL_13:
  v42 = ViRaiseIrqlToDpcLevel();
  ViDeadlockDetectionLock(1);
  v12 = MEMORY[0xFFFFF78000000320];
  if ( !ViDeadlockDetectionEnabled || (v48 = v51, v51 = 0LL, !v48) )
  {
    v15 = 0;
LABEL_78:
    v14 = 1;
LABEL_79:
    v17 = v44;
    goto LABEL_80;
  }
  v9 = ViDeadlockSearchThread(a3);
  if ( v9 )
  {
    v14 = 1;
LABEL_19:
    if ( (_DWORD)v6 == 8 )
    {
      *((_BYTE *)v9 + 48) = 1;
      goto LABEL_21;
    }
    v16 = ViDeadlockSearchResource((unsigned __int64)a1, &Entry);
    if ( !v16 )
    {
      v17 = v44;
      if ( !(unsigned int)ViDeadlockAddResource(
                            (ULONG_PTR)a1,
                            v6,
                            (__int64)v44,
                            BackTrace,
                            (__int64 *)&v52,
                            (__int64)&Entry) )
      {
        if ( (_DWORD)v8 )
        {
          v15 = 1;
          ViDeadlockRemoveThread((ULONG_PTR)v9, 0);
        }
        else
        {
          v15 = 0;
        }
        v14 = 1;
LABEL_80:
        v8 = v43;
        goto LABEL_81;
      }
      v44 = 0LL;
      v16 = ViDeadlockSearchResource((unsigned __int64)a1, &Entry);
    }
    v18 = *(int *)v16;
    v14 = 1;
    if ( (_DWORD)v18 != (_DWORD)v6 )
    {
      if ( ((unsigned int)(v6 - 3) > 1 || (unsigned int)(v18 - 3) > 1)
        && ((_DWORD)v18 != 7 || (unsigned int)(v6 - 5) > 1) )
      {
        ViDeadlockPreprocessOptions(
          byte_140E0EB54,
          "Acquiring lock 0x%p using mismatched API for this lock type.",
          4104LL,
          (__int64)a1,
          v18,
          v6);
        VfReportIssueWithOptions(0xC4u, 0x1008uLL, (ULONG_PTR)a1, *(int *)v16, v6, byte_140E0EB54);
LABEL_38:
        v15 = 0;
        goto LABEL_78;
      }
      *(_DWORD *)v16 = v6;
    }
    if ( (unsigned int)(v6 - 5) <= 1 )
      v19 = v9[1];
    else
      v19 = v9[2];
    v20 = (_QWORD *)v16[2];
    if ( v20 && v20 != v9 )
      *((_WORD *)v16 + 3) = 0;
    v21 = *((_WORD *)v16 + 3) + 1;
    v16[2] = v9;
    *((_WORD *)v16 + 3) = v21;
    if ( v19 )
    {
      if ( v21 > 1u )
      {
        if ( (v49 & 1) != 0 )
          goto LABEL_21;
        ViDeadlockPreprocessOptions(
          &dword_140E0EB58,
          "Lock 0x%p doesn't support recursive acquire.",
          4096LL,
          (__int64)a1,
          (__int64)v16,
          (__int64)v9);
        VfReportIssueWithOptions(0xC4u, 0x1000uLL, (ULONG_PTR)a1, (ULONG_PTR)v16, (ULONG_PTR)v9, &dword_140E0EB58);
        goto LABEL_38;
      }
      v22 = v46;
      v23 = v19 + 8;
      v24 = *(_QWORD *)(v19 + 8);
      while ( v24 != v23 )
      {
        v25 = (char *)(v24 - 24);
        if ( ViDeadlockSimilarNode((__int64)a1, v22, v24 - 24) )
        {
          ViDeadlockCheckDuplicatesAmongChildren(v19, (__int64)v25, (__int64)&Entry);
          goto LABEL_60;
        }
      }
      if ( *((_WORD *)v16 + 2) )
      {
        if ( !v22 )
        {
          v26 = ViDeadlockAnalyze((ULONG_PTR)a1, v19, v14, 0, v53);
          v14 = 1;
          if ( v26 )
            goto LABEL_21;
        }
      }
      LOBYTE(v27) = v46;
      v28 = v16 + 3;
    }
    else
    {
      v27 = v46;
      v28 = v16 + 3;
      v29 = (_QWORD *)v16[3];
      while ( v29 != v28 )
      {
        v25 = (char *)(v29 - 5);
        v29 = (_QWORD *)*v29;
        if ( !*(_QWORD *)v25 && ViDeadlockSimilarNode((__int64)a1, v27, (__int64)v25) )
        {
          ViDeadlockCheckDuplicatesAmongRoots((__int64)v25, (__int64)&Entry);
LABEL_60:
          v14 = 1;
          if ( !v25 )
          {
            v15 = 0;
            goto LABEL_79;
          }
LABEL_70:
          v34 = v50;
          *((_DWORD *)v25 + 18) |= v14;
          *((_QWORD *)v25 + 8) = v9;
          if ( v34 - 5 <= v14 )
            v9[1] = v25;
          else
            v9[2] = v25;
          *((_DWORD *)v9 + 10) += v14;
          v35 = *(_OWORD **)v25;
          if ( *(_QWORD *)v25 )
          {
            *((_OWORD *)v25 + 9) = v35[5];
            *((_OWORD *)v25 + 10) = v35[6];
            *((_OWORD *)v25 + 11) = v35[7];
            *((_OWORD *)v25 + 12) = v35[8];
          }
          v36 = *((_QWORD *)v25 + 7);
          v37 = *(_OWORD *)BackTrace;
          v38 = v55;
          v39 = v56;
          v40 = v57;
          *((_OWORD *)v25 + 5) = *(_OWORD *)BackTrace;
          *((_OWORD *)v25 + 6) = v38;
          *((_OWORD *)v25 + 7) = v39;
          *((_OWORD *)v25 + 8) = v40;
          *(_OWORD *)(v36 + 120) = v37;
          *(_OWORD *)(v36 + 136) = v38;
          *(_OWORD *)(v36 + 152) = v39;
          *(_OWORD *)(v36 + 168) = v40;
LABEL_21:
          v15 = 0;
          goto LABEL_79;
        }
      }
      v14 = 1;
      v23 = 8LL;
      v47 = 1;
    }
    v25 = (char *)v48;
    v48 = 0LL;
    *((_QWORD *)v25 + 10) = 0LL;
    *((_QWORD *)v25 + 18) = 0LL;
    v30 = v25 + 24;
    *((_QWORD *)v25 + 9) = 0LL;
    *((_QWORD *)v25 + 8) = 0LL;
    *(_QWORD *)v25 = v19;
    *((_QWORD *)v25 + 7) = v16;
    *((_DWORD *)v25 + 18) = 8 * *((_DWORD *)ViDeadlockGlobals + 8201);
    *((_QWORD *)v25 + 2) = v25 + 8;
    *((_QWORD *)v25 + 1) = v25 + 8;
    *((_QWORD *)v25 + 4) = v25 + 24;
    *((_QWORD *)v25 + 3) = v25 + 24;
    *((_DWORD *)v25 + 18) ^= ((unsigned __int8)*((_DWORD *)v25 + 18) ^ (unsigned __int8)(2 * v27)) & 2;
    if ( !v47 )
    {
      v31 = *(_QWORD *)v23;
      if ( *(_QWORD *)(*(_QWORD *)v23 + 8LL) != v23 )
        goto LABEL_67;
      *v30 = v31;
      *((_QWORD *)v25 + 4) = v23;
      *(_QWORD *)(v31 + 8) = v30;
      *(_QWORD *)v23 = v30;
      ViDeadlockUpdateChildrenCount((__int64 **)v19, v14);
    }
    v32 = *v28;
    v33 = v25 + 40;
    if ( *(_QWORD **)(*v28 + 8LL) == v28 )
    {
      *v33 = v32;
      *((_QWORD *)v25 + 6) = v28;
      *(_QWORD *)(v32 + 8) = v33;
      *v28 = v33;
      *((_WORD *)v16 + 2) += v14;
      if ( (unsigned __int16)*((_DWORD *)v16 + 1) > 0xFFF0u )
        ViDeadlockState |= 0x20u;
      goto LABEL_70;
    }
LABEL_67:
    __fastfail(3u);
  }
  v13 = ViDeadlockAddThread(a3, (__int64)v43);
  v43 = 0LL;
  v9 = (_QWORD *)v13;
  v14 = 1;
  if ( v13 )
  {
    LODWORD(v8) = 1;
    goto LABEL_19;
  }
  v17 = v44;
  v15 = 0;
LABEL_81:
  if ( MEMORY[0xFFFFF78000000320] - v12 > *(_QWORD *)ViDeadlockGlobals )
    *(_QWORD *)ViDeadlockGlobals = MEMORY[0xFFFFF78000000320] - v12;
  ViDeadlockDetectionUnlock(v14);
  ViLowerIrql(v42);
  if ( Entry )
  {
    do
    {
      v41 = *(void **)Entry;
      ViDeadlockFree(Entry, 2);
      Entry = v41;
    }
    while ( v41 );
  }
  if ( v52 )
    ViDeadlockFree(v52, 1);
  if ( v15 )
    ViDeadlockFree(v9, 3);
  if ( v48 )
    ViDeadlockFree(v48, 2);
  if ( v17 )
    ViDeadlockFree(v17, 1);
  if ( v51 )
    ViDeadlockFree(v51, 2);
  if ( v8 )
    ViDeadlockFree(v8, 3);
}
