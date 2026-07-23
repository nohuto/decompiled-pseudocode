/*
 * XREFs of MiInsertPagesInList @ 0x1402AF3C0
 * Callers:
 *     MiInsertProtectedStandbyPage @ 0x1402AEAF8 (MiInsertProtectedStandbyPage.c)
 *     MiEnqueuePageList @ 0x1402AECA0 (MiEnqueuePageList.c)
 *     MiUnlockMdlWritePages @ 0x14031F6AC (MiUnlockMdlWritePages.c)
 *     MiFinishHardFault @ 0x14031F860 (MiFinishHardFault.c)
 *     MmUnmapViewInSystemCache @ 0x1403203B0 (MmUnmapViewInSystemCache.c)
 *     MiAddPageToInsertList @ 0x140320F90 (MiAddPageToInsertList.c)
 * Callees:
 *     MiSufficientAvailablePages @ 0x14028E010 (MiSufficientAvailablePages.c)
 *     MiRebuildStandbyLookasideList @ 0x1402AD184 (MiRebuildStandbyLookasideList.c)
 *     MiExclusiveInsertPfnChainInList @ 0x1402AE1C8 (MiExclusiveInsertPfnChainInList.c)
 *     MiReleaseWriteInProgressCharges @ 0x1402AE9B4 (MiReleaseWriteInProgressCharges.c)
 *     MiSharedInsertPfnChainInList @ 0x1402AFEC0 (MiSharedInsertPfnChainInList.c)
 *     MiSynchronizeFastPageInsert @ 0x1402B0720 (MiSynchronizeFastPageInsert.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiMakeProtoTransition @ 0x1402BE8B0 (MiMakeProtoTransition.c)
 *     MiUpdateLargePageCandidateValue @ 0x1402BF650 (MiUpdateLargePageCandidateValue.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiWakeModifiedPageWriter @ 0x1403E4038 (MiWakeModifiedPageWriter.c)
 *     MiUpdateAvailableEventsAtDpc @ 0x1403E8DF0 (MiUpdateAvailableEventsAtDpc.c)
 *     MiSlabDemotionLowMemoryConditionUpdate @ 0x1403E8E7C (MiSlabDemotionLowMemoryConditionUpdate.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall MiInsertPagesInList(_QWORD *a1)
{
  unsigned __int64 v1; // r13
  _QWORD *v2; // r15
  __int64 v3; // rdx
  unsigned __int64 v4; // rdi
  unsigned int v5; // r8d
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  char v10; // r12
  int v11; // ebx
  int v12; // eax
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r14
  int v15; // r14d
  volatile signed __int64 *v16; // rax
  __int64 v17; // r10
  __int64 v18; // r14
  char v19; // r13
  __int64 v20; // rsi
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rax
  unsigned int v24; // r12d
  __int64 v25; // rbx
  __int64 v26; // rsi
  char v27; // r8
  __int64 v28; // rcx
  _DWORD *v29; // rdx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  __int64 v34; // rsi
  unsigned __int64 v35; // r14
  unsigned __int64 v36; // rbp
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rbx
  int v40; // r12d
  volatile LONG *v41; // r13
  __int64 v42; // rsi
  int v43; // eax
  __int64 v44; // rax
  struct _KEVENT *v45; // rsi
  __int64 v46; // r10
  unsigned int v47; // r8d
  unsigned __int64 v48; // r9
  unsigned __int64 v49; // rax
  signed __int32 v50[8]; // [rsp+0h] [rbp-128h] BYREF
  __int64 v51; // [rsp+20h] [rbp-108h]
  char v52; // [rsp+30h] [rbp-F8h]
  __int64 v53; // [rsp+38h] [rbp-F0h]
  unsigned int v54; // [rsp+40h] [rbp-E8h]
  unsigned int v55; // [rsp+44h] [rbp-E4h]
  unsigned int v56; // [rsp+48h] [rbp-E0h]
  _DWORD *v57; // [rsp+50h] [rbp-D8h]
  unsigned __int64 v58; // [rsp+58h] [rbp-D0h]
  _QWORD *v59; // [rsp+60h] [rbp-C8h]
  __int64 v60; // [rsp+68h] [rbp-C0h]
  __int64 v61; // [rsp+70h] [rbp-B8h]
  _BYTE v62[2]; // [rsp+80h] [rbp-A8h] BYREF
  unsigned __int8 v63; // [rsp+82h] [rbp-A6h]
  __int64 v64; // [rsp+90h] [rbp-98h]
  char v65; // [rsp+98h] [rbp-90h]
  __int64 v66; // [rsp+A8h] [rbp-80h]
  char v67; // [rsp+B0h] [rbp-78h]
  __int64 v68; // [rsp+C0h] [rbp-68h]
  char v69; // [rsp+C8h] [rbp-60h]
  __int64 v70; // [rsp+D8h] [rbp-50h]
  char v71; // [rsp+E0h] [rbp-48h]

  v1 = a1[2];
  v2 = a1;
  v59 = a1;
  v58 = v1;
  if ( !v1 )
    return;
  v61 = a1[11];
  v3 = 48LL * *a1;
  v4 = v3 - 0x220000000000LL;
  v5 = *(_DWORD *)(v3 - 0x220000000000LL + 32);
  v6 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v3 - 0x220000000000LL + 40) >> 43) & 0x3FFLL));
  v7 = *(_QWORD *)(v3 - 0x220000000000LL + 40);
  v53 = v6;
  if ( (v7 & 0x20000000000000LL) != 0 )
    goto LABEL_75;
  if ( (*(_DWORD *)(v4 + 32) & 0x8000000) == 0 )
  {
LABEL_4:
    v56 = HIBYTE(v5) & 7;
    goto LABEL_5;
  }
  if ( v4 < 0xFFFFDE0000000000uLL
    || v4 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
    || (v33 = (__int64)((unsigned __int128)(v3 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3,
        (unsigned int)MiIsDecayPfn(v33 + (v33 >> 63))) )
  {
LABEL_75:
    v56 = 5;
  }
  else
  {
    if ( (v5 & 0x70000) == 0x60000 || (unsigned int)MiGetPfnSlabType(v4) != 9 )
      goto LABEL_4;
    v56 = 5;
  }
LABEL_5:
  v8 = 23232LL;
  v9 = *(_QWORD *)(v4 + 40) >> 53;
  v10 = *(_BYTE *)(v4 + 34) & 0x10;
  v52 = v10;
  if ( !v10 )
    v8 = 3520LL;
  v60 = v6 + v8;
  v11 = v9 & 1;
  if ( v11 )
  {
    v12 = 0;
    v55 = 0;
  }
  else
  {
    _InterlockedOr(v50, 0);
    v12 = KiTbFlushTimeStamp;
    v55 = KiTbFlushTimeStamp;
    if ( !v10 )
    {
      if ( v1 == 1 )
      {
        v13 = _InterlockedIncrement64((volatile signed __int64 *)(v6 + 22464));
        if ( v13 <= 0x420 )
        {
          if ( v13 == 50 )
          {
            v44 = 16616LL;
          }
          else if ( v13 == 1056 )
          {
            v44 = 16648LL;
          }
          else
          {
            if ( v13 != 34 )
            {
              if ( v13 == 288 )
                MiSlabDemotionLowMemoryConditionUpdate(v6, 1LL);
              goto LABEL_11;
            }
            v44 = 16584LL;
          }
          v45 = (struct _KEVENT *)(v44 + v6);
          ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v6 + 16576));
          KeSetEvent(v45, 0, 0);
          ++v45[1].Header.LockNV;
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 16576));
        }
LABEL_11:
        v14 = v13 - 1;
        if ( v14 == *(_QWORD *)(v6 + 17024) || v14 == *(_QWORD *)(v6 + 17032) )
          MiUpdateAvailableEventsAtDpc(v6);
        v15 = *((_DWORD *)v2 + 28);
        LODWORD(v53) = v15;
        v57 = v2 + 14;
        goto LABEL_14;
      }
      v34 = v53;
      v35 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v53 + 22464), v1);
      v36 = v1 + v35;
      if ( v35 >= 0x420 )
        goto LABEL_69;
      v40 = 4;
      if ( v36 < 0x420 )
        v40 = 0;
      if ( v35 < 0x32 )
      {
        v43 = v40 | 2;
        if ( v36 < 0x32 )
          v43 = v40;
        v40 = v43;
        if ( v35 < 0x22 && v36 >= 0x22 )
          v40 = v43 | 1;
      }
      else if ( v35 >= 0x120 )
      {
LABEL_96:
        if ( v40 )
        {
          v41 = (volatile LONG *)(v34 + 16576);
          ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v34 + 16576));
          if ( (v40 & 1) != 0 )
          {
            KeSetEvent((PRKEVENT)(v34 + 16584), 0, 0);
            ++*(_DWORD *)(v34 + 16608);
          }
          if ( (v40 & 2) != 0 )
          {
            KeSetEvent((PRKEVENT)(v34 + 16616), 0, 0);
            ++*(_DWORD *)(v34 + 16640);
          }
          if ( (v40 & 4) != 0 )
          {
            v42 = v53;
            KeSetEvent((PRKEVENT)(v53 + 16648), 0, 0);
            ++*(_DWORD *)(v42 + 16672);
          }
          ExReleaseSpinLockExclusiveFromDpcLevel(v41);
          v1 = v58;
          v34 = v53;
        }
        v10 = v52;
LABEL_69:
        v37 = *(_QWORD *)(v34 + 17032);
        if ( v35 <= v37 && v36 > v37 || (v38 = *(_QWORD *)(v34 + 17024), v35 <= v38) && v36 > v38 )
        {
          v6 = v53;
          MiUpdateAvailableEventsAtDpc(v53);
          v15 = *((_DWORD *)v2 + 28);
          LODWORD(v53) = v15;
          v57 = v2 + 14;
          goto LABEL_14;
        }
        v12 = v55;
        v6 = v53;
        goto LABEL_72;
      }
      if ( v36 >= 0x120 )
        MiSlabDemotionLowMemoryConditionUpdate(v34, 1LL);
      goto LABEL_96;
    }
  }
LABEL_72:
  v15 = *((_DWORD *)v2 + 28);
  LODWORD(v53) = v15;
  v57 = v2 + 14;
  if ( !v10 )
  {
    v55 = v12;
    v57 = v2 + 14;
    LODWORD(v53) = v15;
    if ( v11 )
    {
LABEL_17:
      v54 = 0;
      goto LABEL_18;
    }
  }
LABEL_14:
  if ( *(__int64 *)(v4 + 40) >= 0 )
    v16 = (volatile signed __int64 *)(v6 + 16704);
  else
    v16 = (volatile signed __int64 *)(v6 + 7616);
  _InterlockedAdd64(v16, v1);
  if ( !v10 )
    goto LABEL_17;
  v54 = *(_DWORD *)(v6 + 1124);
LABEL_18:
  if ( v15 )
  {
    if ( v15 == 1 )
      MiReleaseWriteInProgressCharges(v6, v1, 1);
  }
  else
  {
    v4 = 48LL * *v2 - 0x220000000000LL;
    MiMakeProtoTransition(v4, v1);
  }
  v17 = *v2;
  if ( *v2 != 0x3FFFFFFFFFLL )
  {
    v18 = v55;
    v19 = v54;
    do
    {
      v4 = 48 * v17 - 0x220000000000LL;
      v20 = *(_QWORD *)v4 & 0xFFFFFFFFFFLL;
      if ( !v11 )
      {
        v21 = *(_QWORD *)(v4 + 24);
        v51 = 0LL;
        *(_QWORD *)(v4 + 24) = (v18 << 59) ^ (v21 ^ (v18 << 59)) & 0xC7FFFFFFFFFFFFFFuLL;
        MiUpdateLargePageCandidateValue(v6, v17, 3LL, 3LL, v51);
      }
      v22 = *(_DWORD *)(v4 + 32);
      if ( v10 )
      {
        *(_DWORD *)(v4 + 32) = v22 & 0xFFF8FFFF | 0x30000;
        *(_BYTE *)(v4 + 36) ^= (v19 ^ *(_BYTE *)(v4 + 36)) & 0xF;
      }
      else
      {
        *(_DWORD *)(v4 + 32) = v22 & 0xFFF8FFFF | 0x20000;
      }
      v17 = v20;
    }
    while ( v20 != 0x3FFFFFFFFFLL );
    v2 = v59;
    v1 = v58;
    v15 = v53;
  }
  memset_0(v62, 0, 0x68uLL);
  if ( v10 )
  {
    if ( v1 == 1 )
      _InterlockedIncrement64((volatile signed __int64 *)(v6 + 23248));
    else
      _InterlockedAdd64((volatile signed __int64 *)(v6 + 23248), v1);
    _InterlockedAdd((volatile signed __int32 *)&KeGetCurrentThread()->ApcState.Process[2].AvailableCpuState, v1);
    v26 = v6 + 88LL * v54 + 6016;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v26 + 32));
    if ( v62[0] )
    {
LABEL_33:
      MiSharedInsertPfnChainInList(v2, v62);
      goto LABEL_34;
    }
LABEL_57:
    MiExclusiveInsertPfnChainInList(v2, (__int64 *)v26);
LABEL_34:
    v27 = 1;
    if ( v1 == 1 )
      _InterlockedIncrement64((volatile signed __int64 *)(v26 + 16));
    else
      _InterlockedAdd64((volatile signed __int64 *)(v26 + 16), v1);
    goto LABEL_36;
  }
  if ( !v11 )
  {
    v23 = v56;
    v24 = 5;
    v25 = v61;
    if ( v61 )
      v23 = 5LL;
    v26 = v6 + 88 * v23 + 3648;
    MiSynchronizeFastPageInsert(v6, v6 + 88 * v23 + 3648, v4, 9, v61, (__int64)v62);
    if ( v62[0] )
      goto LABEL_33;
    if ( v25 )
    {
      if ( (*(_DWORD *)(v25 + 32) & 0x8000000) == 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v26 + 32));
        v2[11] = 0LL;
        v46 = 48LL * *v2;
        v47 = *(_DWORD *)(v46 - 0x220000000000LL + 32);
        v48 = v46 - 0x220000000000LL;
        if ( (*(_QWORD *)(v46 - 0x220000000000LL + 40) & 0x20000000000000LL) == 0
          && ((*(_DWORD *)(v48 + 32) & 0x8000000) == 0
           || v48 >= 0xFFFFDE0000000000uLL
           && v48 < 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
           && !(unsigned int)MiIsDecayPfn(v46 / 48)
           && ((v47 & 0x70000) == 0x60000 || (unsigned int)MiGetPfnSlabType(v48) != 9)) )
        {
          v24 = HIBYTE(v47) & 7;
        }
        v6 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v48 + 40) >> 43) & 0x3FFLL));
        v26 = 88LL * v24 + v6 + 3648;
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v26 + 32));
        MiExclusiveInsertPfnChainInList(v2, (__int64 *)v26);
        goto LABEL_34;
      }
    }
    else if ( v63 != 3 )
    {
      MiRebuildStandbyLookasideList(v4, v63, v62[1]);
    }
    goto LABEL_57;
  }
  v26 = v60;
  v27 = 0;
LABEL_36:
  if ( v15 != 3 )
  {
    v31 = *v2;
    do
    {
      v32 = 48 * v31;
      v31 = *(_QWORD *)(48 * v31 - 0x220000000000LL) & 0xFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v32 - 0x220000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
      --v1;
    }
    while ( v1 );
    v2 = v59;
  }
  if ( v27 )
  {
    if ( v62[0] )
    {
      if ( v65 )
        _InterlockedAnd64((volatile signed __int64 *)(v64 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v67 )
        _InterlockedAnd64((volatile signed __int64 *)(v66 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v69 )
        _InterlockedAnd64((volatile signed __int64 *)(v68 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v71 )
        _InterlockedAnd64((volatile signed __int64 *)(v70 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v26 + 32));
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v26 + 32));
      if ( v15 != 3 && !(unsigned int)MiSufficientAvailablePages(v6, 0x420uLL) )
      {
        v39 = *(_QWORD *)(v6 + 23456);
        if ( v39 >= 0x10 )
          MiWakeModifiedPageWriter(v6, -1LL);
        v49 = *(_QWORD *)(v6 + 23248);
        if ( v49 > v39 && v49 - v39 >= 0x10 )
          KeSetEvent((PRKEVENT)(v6 + 920), 0, 0);
      }
    }
  }
  v28 = v2[11];
  v29 = v57;
  v30 = *v57;
  v2[2] = 0LL;
  *((_DWORD *)v2 + 7) = 0;
  *v2 = 0x3FFFFFFFFFLL;
  v2[1] = 0x3FFFFFFFFFLL;
  *((_DWORD *)v2 + 8) = 0;
  *v29 = v30;
  v2[11] = v28;
}
