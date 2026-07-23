/*
 * XREFs of MiZeroCfgSystemWideBitmapWorker @ 0x1403413D0
 * Callers:
 *     MiZeroCfgSystemWideBitmap @ 0x140341378 (MiZeroCfgSystemWideBitmap.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     MiTransferSoftwarePte @ 0x140296D90 (MiTransferSoftwarePte.c)
 *     MiDetermineModifiedPageListHead @ 0x140297EF0 (MiDetermineModifiedPageListHead.c)
 *     MiLockLeafPage @ 0x140298370 (MiLockLeafPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiBadShareCount @ 0x1402BE4D0 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x1402BE530 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x1402BFA00 (MiInsertPageInList.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiLockProtoPoolPage @ 0x1402D7150 (MiLockProtoPoolPage.c)
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031CE60 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileSpace @ 0x140340D20 (MiReleasePageFileSpace.c)
 *     MiLocatePagefileSubsection @ 0x140342390 (MiLocatePagefileSubsection.c)
 *     MiDiscardTransitionPfnEx @ 0x14036BD80 (MiDiscardTransitionPfnEx.c)
 *     KeZeroSinglePage @ 0x140735370 (KeZeroSinglePage.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

char __fastcall MiZeroCfgSystemWideBitmapWorker(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r8
  __int64 v6; // r12
  __int64 v7; // r9
  __int64 v8; // r15
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r13
  __int64 v13; // rcx
  ULONG_PTR v14; // r14
  unsigned __int64 v15; // r8
  unsigned int v16; // r9d
  __int64 v17; // rcx
  ULONG_PTR v18; // rdi
  __int64 v19; // r12
  __int64 v20; // rsi
  unsigned __int64 v21; // rdi
  ULONG_PTR v22; // r15
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rdi
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r8
  unsigned __int64 v28; // rax
  __int64 v29; // rsi
  char v30; // r9
  unsigned __int64 v31; // r8
  __int64 v32; // rdx
  unsigned __int64 v33; // rbx
  __int64 v34; // rcx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rbx
  size_t v37; // r8
  void *v38; // rcx
  bool v39; // zf
  char v40; // al
  ULONG_PTR v41; // rcx
  __int64 v42; // rax
  __int64 PteShadow; // rax
  __int64 v44; // r12
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rsi
  size_t v47; // r8
  void *v48; // rcx
  unsigned __int64 v49; // r10
  unsigned __int64 v50; // r9
  volatile signed __int32 *v51; // r8
  unsigned int v52; // eax
  unsigned __int64 v53; // r10
  unsigned __int64 v54; // r9
  volatile signed __int32 *v55; // r8
  unsigned int v56; // eax
  unsigned __int64 v57; // r8
  int v58; // edi
  int v59; // edi
  unsigned __int64 v61; // [rsp+20h] [rbp-58h]
  unsigned __int64 v62; // [rsp+28h] [rbp-50h] BYREF
  struct _KEVENT *v63; // [rsp+30h] [rbp-48h]
  ULONG_PTR v64; // [rsp+38h] [rbp-40h]
  __int64 v65; // [rsp+40h] [rbp-38h]
  __int64 v66; // [rsp+48h] [rbp-30h]
  __int64 v67; // [rsp+50h] [rbp-28h]
  unsigned __int64 v68; // [rsp+58h] [rbp-20h] BYREF
  __int64 v69; // [rsp+60h] [rbp-18h]
  __int64 v70; // [rsp+C0h] [rbp+48h] BYREF
  unsigned int v71; // [rsp+C8h] [rbp+50h]
  unsigned int v72; // [rsp+D0h] [rbp+58h]
  int v73; // [rsp+D8h] [rbp+60h] BYREF

  v3 = a2 >> 3;
  v4 = a3 >> 3;
  v6 = (a2 >> 3) & 0xFFF;
  v7 = *(_DWORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF;
  v72 = (a2 >> 3) & 0xFFF;
  v63 = *(struct _KEVENT **)(stru_140E2ED08.ThreadLock + 8 * v7);
  v71 = (v4 + (a2 >> 3)) & 0xFFF;
  v68 = ((a2 >> 3) + v4 - 1) >> 12;
  v8 = MiLocatePagefileSubsection(a1, &v68);
  v69 = v8;
  v70 = v3 >> 12;
  v9 = *(_QWORD *)(v8 + 8) + 8 * v68;
  v10 = MiLocatePagefileSubsection(a1, &v70);
  v11 = v70;
  v12 = v10;
  while ( 1 )
  {
    v13 = *(_QWORD *)(v12 + 8);
    if ( v13 )
      break;
    if ( v12 == v8 )
      return v10;
    v12 = *(_QWORD *)(v12 + 16);
    v11 = 0LL;
  }
  v14 = v13 + 8 * v11;
  if ( v12 == v8 )
    v15 = v9;
  else
    v15 = v13 + 8LL * *(unsigned int *)(v12 + 44);
  v16 = v71;
  v61 = v15;
  LOBYTE(v11) = 17;
  v64 = 0LL;
  LOBYTE(v70) = 17;
  v17 = 0LL;
  v66 = v14 & -(__int64)((_DWORD)v6 != 0);
  v18 = 0LL;
  v67 = 0LL;
  LODWORD(v10) = -v71;
  v19 = v9 & -(__int64)(v71 != 0);
  v20 = v66;
  v65 = v19;
  while ( v14 < v15 )
  {
LABEL_7:
    if ( (v18 & 0xFFFFFFFFFFFFF000uLL) == (v14 & 0xFFFFFFFFFFFFF000uLL) || !v18 )
    {
      if ( v17 )
        goto LABEL_9;
    }
    else
    {
      MiUnlockProtoPoolPage(v17, v11, v15);
      v18 = 0LL;
      v64 = 0LL;
    }
    v10 = MiLockProtoPoolPage(v14, &v70);
    v67 = v10;
    v17 = v10;
    if ( v10 )
    {
      v64 = v14;
LABEL_9:
      v10 = MiLockLeafPage((unsigned __int64 *)v14, 0);
      v21 = *(_QWORD *)v14;
      v22 = v10;
      if ( (*(_QWORD *)v14 & 1) != 0 )
      {
        v35 = MiMapPageInHyperSpaceWorker((v21 >> 12) & 0xFFFFFFFFFFLL, 0LL, 0x80000000);
        v36 = v35;
        if ( v14 == v20 )
        {
          v37 = 4096 - v72;
          v38 = (void *)(v35 + v72);
          goto LABEL_44;
        }
        v38 = (void *)v35;
        if ( v14 == v19 )
        {
          v37 = v71;
LABEL_44:
          memset_0(v38, 0, v37);
        }
        else
        {
          KeZeroSinglePage(v35);
        }
        *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
        *(_QWORD *)(((v36 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        v10 = MiCaptureDirtyBitToPfn(v22);
        _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v10 )
          LOBYTE(v10) = MiReleasePageFileInfo(
                          *(struct _KEVENT **)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v22 + 40) >> 43) & 0x3FFLL)),
                          v10,
                          1LL);
        goto LABEL_41;
      }
      if ( (v21 & 0x400) != 0 )
        goto LABEL_41;
      if ( (v21 & 0x800) != 0 )
      {
        if ( qword_140E2D8C0 )
        {
          if ( (v21 & 0x10) != 0 )
            v21 &= ~0x10uLL;
          else
            v21 &= qword_140E2D8C8;
        }
        v23 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        v24 = (v21 >> 12) & 0xFFFFFFFFFFLL;
        if ( !(unsigned __int16)*(_DWORD *)(v10 + 32) )
        {
          if ( v14 != v19 && v14 != v20 )
          {
            if ( (MiUnlinkPageFromListEx(v10, 0) & 3) != 0 )
            {
              v41 = v22;
LABEL_56:
              MiDiscardTransitionPfnEx(v41, 0LL, v25, v26);
              LOBYTE(v10) = -1;
              _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              goto LABEL_41;
            }
            v62 = *(_QWORD *)(v22 + 16);
            if ( (v62 & 8) != 0 )
            {
              PteShadow = v62;
              if ( (unsigned __int64)&v62 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v62 <= 0xFFFFF6FB7DBED7F8uLL )
                PteShadow = MiReadPteShadow((unsigned __int64)&v62, v62);
              v62 = PteShadow & 0xFFFFFFFFFFFFFFFBuLL;
              v23 = PteShadow & 0xFFFFFFFFFFFFFFFBuLL;
            }
            else
            {
              v23 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
            }
            v27 = *(_QWORD *)(v22 + 16);
            if ( (v27 & 4) != 0 )
            {
              if ( qword_140E2D8C0 && (v27 & 0x10) == 0 )
                HIDWORD(v27) &= HIDWORD(qword_140E2D8C8);
              v28 = MiTransferSoftwarePte(
                      *(_QWORD *)(v22 + 16),
                      *((_QWORD *)&v63[929].Header.WaitListHead.Flink + ((unsigned __int16)v27 >> 12)),
                      HIDWORD(v27),
                      2);
            }
            else
            {
              v28 = MiTransferSoftwarePte(*(_QWORD *)(v22 + 16), 0LL, 0, 0);
            }
            v29 = 48 * (*(_QWORD *)(v22 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
            *(_QWORD *)v14 = v28;
            v73 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v73);
              while ( *(__int64 *)(v29 + 24) < 0 );
            }
            v19 = v65;
            if ( (*(_BYTE *)(v29 + 34) & 7) != 6 )
              MiBadShareCount(v29);
            v34 = (*(_QWORD *)(v29 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
            *(_QWORD *)(v29 + 24) = v34 ^ (v34 ^ *(_QWORD *)(v29 + 24)) & 0xC000000000000000uLL;
            if ( !v34 )
              MiPfnShareCountIsZero(v29, 0LL);
            _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            MiInsertPageInFreeOrZeroedList(v24);
            goto LABEL_38;
          }
          v39 = (*(_BYTE *)(v10 + 34) & 0x10) == 0;
          v73 = 0;
          if ( v39 )
          {
            v73 = 1;
            v40 = MiUnlinkPageFromListEx(v10, 0);
            v41 = v22;
            if ( (v40 & 3) != 0 )
              goto LABEL_56;
            v23 = MiCaptureDirtyBitToPfn(v22);
            v44 = 0LL;
          }
          else
          {
            v44 = MiDetermineModifiedPageListHead(v10, (__int64)v63, 0);
            ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v44 + 32));
          }
          v45 = MiMapPageInHyperSpaceWorker(v24, 0LL, 0x80000000);
          v46 = v45;
          if ( v14 == v66 )
          {
            v47 = 4096 - v72;
            v48 = (void *)(v45 + v72);
          }
          else
          {
            v47 = v71;
            v48 = (void *)v45;
          }
          memset_0(v48, 0, v47);
          *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
          *(_QWORD *)(((v46 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
          if ( LODWORD(stru_140E2ED08.Timer.TimerListEntry.Flink) == 1 )
          {
            v53 = v24 & 0x1F;
            LOBYTE(v54) = 1;
            v55 = &stru_140E2ED08.WaitBlock[1].Thread->Header.Lock + (v24 >> 5);
            if ( v53 + 1 > 0x20 )
            {
              if ( (v24 & 0x1F) != 0 )
              {
                v59 = v24 & 0x1F;
                v11 = (unsigned int)(32 - v59);
                _InterlockedOr(v55, ((1 << (32 - v59)) - 1) << v53);
                v54 = 1 - v11;
                ++v55;
                if ( (unsigned __int64)(1 - v11) >= 0x20 )
                {
                  v11 = v54 >> 5;
                  v54 += -32LL * (v54 >> 5);
                  do
                  {
                    *v55++ = -1;
                    --v11;
                  }
                  while ( v11 );
                }
                if ( !v54 )
                  goto LABEL_78;
              }
              v56 = (1 << v54) - 1;
            }
            else
            {
              v56 = 1 << v53;
            }
            _InterlockedOr(v55, v56);
            goto LABEL_78;
          }
          if ( LODWORD(stru_140E2ED08.Timer.TimerListEntry.Flink) == 3 )
          {
            v49 = v24 & 0x1F;
            LOBYTE(v50) = 1;
            v51 = &stru_140E2ED08.WaitBlock[1].Thread->Header.Lock + (v24 >> 5);
            if ( v49 + 1 <= 0x20 )
            {
              v52 = ~(1 << v49);
              goto LABEL_77;
            }
            if ( (v24 & 0x1F) == 0 )
              goto LABEL_101;
            v58 = v24 & 0x1F;
            v11 = (unsigned int)(32 - v58);
            _InterlockedAnd(v51, ~(((1 << (32 - v58)) - 1) << v49));
            v50 = 1 - v11;
            ++v51;
            if ( (unsigned __int64)(1 - v11) >= 0x20 )
            {
              v11 = v50 >> 5;
              v50 += -32LL * (v50 >> 5);
              do
              {
                *v51++ = 0;
                --v11;
              }
              while ( v11 );
            }
            if ( v50 )
            {
LABEL_101:
              v52 = -1 << v50;
LABEL_77:
              _InterlockedAnd(v51, v52);
            }
          }
LABEL_78:
          if ( v44 )
            ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v44 + 32));
          if ( v73 )
            MiInsertPageInList(v22, 8u);
          v19 = v65;
        }
LABEL_38:
        LOBYTE(v10) = -1;
        _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v23 )
          LOBYTE(v10) = MiReleasePageFileInfo(v63, v23, 1LL);
        v20 = v66;
        goto LABEL_41;
      }
      if ( v21 && v14 != v20 && v14 != v19 )
      {
        if ( (v21 & 4) != 0 )
        {
          v57 = *(_QWORD *)v14;
          v32 = *((_QWORD *)&v63[929].Header.WaitListHead.Flink + ((unsigned __int16)v21 >> 12));
          if ( qword_140E2D8C0 )
          {
            if ( (v21 & 0x10) != 0 )
              v57 = v21 & 0xFFFFFFFFFFFFFFEFuLL;
            else
              v57 = v21 & qword_140E2D8C8;
          }
          v31 = HIDWORD(v57);
          v30 = 2;
        }
        else
        {
          v30 = 0;
          LODWORD(v31) = 0;
          v32 = 0LL;
        }
        v33 = MiTransferSoftwarePte(*(_QWORD *)v14, v32, v31, v30);
        LOBYTE(v10) = MiReleasePageFileSpace(v63, v21, 0);
        *(_QWORD *)v14 = v33;
      }
LABEL_41:
      v17 = v67;
      v14 += 8LL;
      LOBYTE(v11) = v70;
      v8 = v69;
      v15 = v61;
      v16 = v71;
      v18 = v64;
    }
    else
    {
      LOBYTE(v11) = v70;
      v14 = (v14 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      v15 = v61;
      v16 = v71;
    }
  }
  while ( v12 != v8 )
  {
    v12 = *(_QWORD *)(v12 + 16);
    v14 = *(_QWORD *)(v12 + 8);
    if ( v14 )
    {
      if ( v12 == v8 )
      {
        v42 = *(_QWORD *)(v8 + 8);
        v15 = v42 + 8 * v68;
        if ( v16 )
          v19 = v42 + 8 * v68;
        v65 = v19;
      }
      else
      {
        v15 = v14 + 8LL * *(unsigned int *)(v12 + 44);
      }
      v61 = v15;
      goto LABEL_7;
    }
  }
  if ( v17 )
    LOBYTE(v10) = MiUnlockProtoPoolPage(v17, v11, v15);
  return v10;
}
