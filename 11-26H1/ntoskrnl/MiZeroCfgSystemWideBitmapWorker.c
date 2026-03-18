/*
 * XREFs of MiZeroCfgSystemWideBitmapWorker @ 0x14033F350
 * Callers:
 *     MiZeroCfgSystemWideBitmap @ 0x14033F2F8 (MiZeroCfgSystemWideBitmap.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287EE0 (MiMapPageInHyperSpaceWorker.c)
 *     MiTransferSoftwarePte @ 0x140297830 (MiTransferSoftwarePte.c)
 *     MiDetermineModifiedPageListHead @ 0x140298990 (MiDetermineModifiedPageListHead.c)
 *     MiLockLeafPage @ 0x140298E10 (MiLockLeafPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     MiReleasePageFileInfo @ 0x1402DAD50 (MiReleasePageFileInfo.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402DC6D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiBadShareCount @ 0x1402DC710 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x1402DC770 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402DCDD0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x1402DDC40 (MiInsertPageInList.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402EDFB0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiLockProtoPoolPage @ 0x1402F50D0 (MiLockProtoPoolPage.c)
 *     MiUnlinkPageFromListEx @ 0x1402F7250 (MiUnlinkPageFromListEx.c)
 *     MiReadPteShadow @ 0x140314FF0 (MiReadPteShadow.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031AE30 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileSpace @ 0x14033ECA0 (MiReleasePageFileSpace.c)
 *     MiLocatePagefileSubsection @ 0x140340310 (MiLocatePagefileSubsection.c)
 *     MiDiscardTransitionPfnEx @ 0x140369FE0 (MiDiscardTransitionPfnEx.c)
 *     KeZeroSinglePage @ 0x1407307A0 (KeZeroSinglePage.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
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
  unsigned __int64 v11; // rdx
  __int64 v12; // r13
  __int64 v13; // rcx
  ULONG_PTR v14; // r14
  ULONG_PTR v15; // r8
  unsigned int v16; // r9d
  unsigned __int8 v17; // dl
  __int64 v18; // rcx
  ULONG_PTR v19; // rdi
  __int64 v20; // r12
  __int64 v21; // rsi
  unsigned __int64 v22; // rdi
  ULONG_PTR v23; // r15
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rdi
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r8
  unsigned __int64 v29; // rax
  __int64 v30; // rsi
  char v31; // r9
  unsigned __int64 v32; // r8
  __int64 v33; // rdx
  unsigned __int64 v34; // rbx
  __int64 v35; // rcx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rbx
  size_t v38; // r8
  void *v39; // rcx
  bool v40; // zf
  char v41; // al
  ULONG_PTR v42; // rcx
  __int64 v43; // rax
  ULONG_PTR v44; // r8
  __int64 PteShadow; // rax
  __int64 v46; // r12
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rsi
  size_t v49; // r8
  void *v50; // rcx
  unsigned __int64 v51; // r10
  unsigned __int64 v52; // r9
  volatile signed __int32 *v53; // r8
  unsigned int v54; // eax
  unsigned __int64 v55; // r10
  unsigned __int64 v56; // r9
  volatile signed __int32 *v57; // r8
  unsigned int v58; // eax
  unsigned __int64 v59; // r8
  int v60; // edi
  unsigned __int64 v61; // rdx
  int v62; // edi
  unsigned __int64 v63; // rdx
  ULONG_PTR v65; // [rsp+20h] [rbp-58h]
  unsigned __int64 v66; // [rsp+28h] [rbp-50h] BYREF
  struct _KEVENT *v67; // [rsp+30h] [rbp-48h]
  ULONG_PTR v68; // [rsp+38h] [rbp-40h]
  __int64 v69; // [rsp+40h] [rbp-38h]
  __int64 v70; // [rsp+48h] [rbp-30h]
  __int64 v71; // [rsp+50h] [rbp-28h]
  unsigned __int64 v72; // [rsp+58h] [rbp-20h] BYREF
  __int64 v73; // [rsp+60h] [rbp-18h]
  unsigned __int64 v74; // [rsp+C0h] [rbp+48h] BYREF
  unsigned int v75; // [rsp+C8h] [rbp+50h]
  unsigned int v76; // [rsp+D0h] [rbp+58h]
  int v77; // [rsp+D8h] [rbp+60h] BYREF

  v3 = a2 >> 3;
  v4 = a3 >> 3;
  v6 = (a2 >> 3) & 0xFFF;
  v7 = *(_DWORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF;
  v76 = (a2 >> 3) & 0xFFF;
  v67 = *(struct _KEVENT **)(stru_140E2EB88.ThreadLock + 8 * v7);
  v75 = (v4 + (a2 >> 3)) & 0xFFF;
  v72 = ((a2 >> 3) + v4 - 1) >> 12;
  v8 = MiLocatePagefileSubsection(a1, &v72);
  v73 = v8;
  v74 = v3 >> 12;
  v9 = *(_QWORD *)(v8 + 8) + 8 * v72;
  v10 = MiLocatePagefileSubsection(a1, &v74);
  v11 = v74;
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
  v16 = v75;
  v65 = v15;
  v17 = 17;
  v68 = 0LL;
  LOBYTE(v74) = 17;
  v18 = 0LL;
  v70 = v14 & -(__int64)((_DWORD)v6 != 0);
  v19 = 0LL;
  v71 = 0LL;
  LODWORD(v10) = -v75;
  v20 = v9 & -(__int64)(v75 != 0);
  v21 = v70;
  v69 = v20;
  while ( v14 < v15 )
  {
LABEL_7:
    if ( (v19 & 0xFFFFFFFFFFFFF000uLL) == (v14 & 0xFFFFFFFFFFFFF000uLL) || !v19 )
    {
      if ( v18 )
        goto LABEL_9;
    }
    else
    {
      MiUnlockProtoPoolPage(v18, v17);
      v19 = 0LL;
      v68 = 0LL;
    }
    v10 = MiLockProtoPoolPage(v14, &v74);
    v71 = v10;
    v18 = v10;
    if ( v10 )
    {
      v68 = v14;
LABEL_9:
      v10 = MiLockLeafPage((unsigned __int64 *)v14, 0);
      v22 = *(_QWORD *)v14;
      v23 = v10;
      if ( (*(_QWORD *)v14 & 1) != 0 )
      {
        v36 = MiMapPageInHyperSpaceWorker((v22 >> 12) & 0xFFFFFFFFFFLL, 0LL, 0x80000000);
        v37 = v36;
        if ( v14 == v21 )
        {
          v38 = 4096 - v76;
          v39 = (void *)(v36 + v76);
          goto LABEL_44;
        }
        v39 = (void *)v36;
        if ( v14 == v20 )
        {
          v38 = v75;
LABEL_44:
          memset_0(v39, 0, v38);
        }
        else
        {
          KeZeroSinglePage(v36);
        }
        *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
        *(_QWORD *)(((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        v10 = MiCaptureDirtyBitToPfn(v23);
        _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v10 )
          LOBYTE(v10) = MiReleasePageFileInfo(
                          *(struct _KEVENT **)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(v23 + 40) >> 43) & 0x3FFLL)),
                          v10,
                          1);
        goto LABEL_41;
      }
      if ( (v22 & 0x400) != 0 )
        goto LABEL_41;
      if ( (v22 & 0x800) != 0 )
      {
        if ( qword_140E2D740 )
        {
          if ( (v22 & 0x10) != 0 )
            v22 &= ~0x10uLL;
          else
            v22 &= qword_140E2D748;
        }
        v24 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        v25 = (v22 >> 12) & 0xFFFFFFFFFFLL;
        if ( !(unsigned __int16)*(_DWORD *)(v10 + 32) )
        {
          if ( v14 != v20 && v14 != v21 )
          {
            if ( (MiUnlinkPageFromListEx(v10, 0) & 3) != 0 )
            {
              v42 = v23;
LABEL_56:
              MiDiscardTransitionPfnEx(v42, 0LL, v26, v27);
              LOBYTE(v10) = -1;
              _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              goto LABEL_41;
            }
            v66 = *(_QWORD *)(v23 + 16);
            if ( (v66 & 8) != 0 )
            {
              PteShadow = v66;
              if ( (unsigned __int64)&v66 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v66 <= 0xFFFFF6FB7DBED7F8uLL )
                PteShadow = MiReadPteShadow((unsigned __int64)&v66, v66);
              v66 = PteShadow & 0xFFFFFFFFFFFFFFFBuLL;
              v24 = PteShadow & 0xFFFFFFFFFFFFFFFBuLL;
            }
            else
            {
              v24 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
            }
            v28 = *(_QWORD *)(v23 + 16);
            if ( (v28 & 4) != 0 )
            {
              if ( qword_140E2D740 && (v28 & 0x10) == 0 )
                HIDWORD(v28) &= HIDWORD(qword_140E2D748);
              v29 = MiTransferSoftwarePte(
                      *(_QWORD *)(v23 + 16),
                      *((_QWORD *)&v67[929].Header.WaitListHead.Flink + ((unsigned __int16)v28 >> 12)),
                      HIDWORD(v28),
                      2);
            }
            else
            {
              v29 = MiTransferSoftwarePte(*(_QWORD *)(v23 + 16), 0LL, 0, 0);
            }
            v30 = 48 * (*(_QWORD *)(v23 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
            *(_QWORD *)v14 = v29;
            v77 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v77);
              while ( *(__int64 *)(v30 + 24) < 0 );
            }
            v20 = v69;
            if ( (*(_BYTE *)(v30 + 34) & 7) != 6 )
              MiBadShareCount(v30);
            v35 = (*(_QWORD *)(v30 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
            *(_QWORD *)(v30 + 24) = v35 ^ (v35 ^ *(_QWORD *)(v30 + 24)) & 0xC000000000000000uLL;
            if ( !v35 )
              MiPfnShareCountIsZero(v30, 0LL);
            _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            MiInsertPageInFreeOrZeroedList(v25);
            goto LABEL_38;
          }
          v40 = (*(_BYTE *)(v10 + 34) & 0x10) == 0;
          v77 = 0;
          if ( v40 )
          {
            v77 = 1;
            v41 = MiUnlinkPageFromListEx(v10, 0);
            v42 = v23;
            if ( (v41 & 3) != 0 )
              goto LABEL_56;
            v24 = MiCaptureDirtyBitToPfn(v23);
            v46 = 0LL;
          }
          else
          {
            v46 = MiDetermineModifiedPageListHead(v10, (__int64)v67, 0);
            ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v46 + 32));
          }
          v47 = MiMapPageInHyperSpaceWorker(v25, 0LL, 0x80000000);
          v48 = v47;
          if ( v14 == v70 )
          {
            v49 = 4096 - v76;
            v50 = (void *)(v47 + v76);
          }
          else
          {
            v49 = v75;
            v50 = (void *)v47;
          }
          memset_0(v50, 0, v49);
          *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
          *(_QWORD *)(((v48 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
          if ( LODWORD(stru_140E2EB88.Timer.TimerListEntry.Flink) == 1 )
          {
            v55 = v25 & 0x1F;
            LOBYTE(v56) = 1;
            v57 = &stru_140E2EB88.WaitBlock[1].Thread->Header.Lock + (v25 >> 5);
            if ( v55 + 1 > 0x20 )
            {
              if ( (v25 & 0x1F) != 0 )
              {
                v62 = v25 & 0x1F;
                _InterlockedOr(v57, ((1 << (32 - v62)) - 1) << v55);
                v56 = 1LL - (unsigned int)(32 - v62);
                ++v57;
                if ( v56 >= 0x20 )
                {
                  v63 = v56 >> 5;
                  v56 += -32LL * (v56 >> 5);
                  do
                  {
                    *v57++ = -1;
                    --v63;
                  }
                  while ( v63 );
                }
                if ( !v56 )
                  goto LABEL_78;
              }
              v58 = (1 << v56) - 1;
            }
            else
            {
              v58 = 1 << v55;
            }
            _InterlockedOr(v57, v58);
            goto LABEL_78;
          }
          if ( LODWORD(stru_140E2EB88.Timer.TimerListEntry.Flink) == 3 )
          {
            v51 = v25 & 0x1F;
            LOBYTE(v52) = 1;
            v53 = &stru_140E2EB88.WaitBlock[1].Thread->Header.Lock + (v25 >> 5);
            if ( v51 + 1 <= 0x20 )
            {
              v54 = ~(1 << v51);
              goto LABEL_77;
            }
            if ( (v25 & 0x1F) == 0 )
              goto LABEL_101;
            v60 = v25 & 0x1F;
            _InterlockedAnd(v53, ~(((1 << (32 - v60)) - 1) << v51));
            v52 = 1LL - (unsigned int)(32 - v60);
            ++v53;
            if ( v52 >= 0x20 )
            {
              v61 = v52 >> 5;
              v52 += -32LL * (v52 >> 5);
              do
              {
                *v53++ = 0;
                --v61;
              }
              while ( v61 );
            }
            if ( v52 )
            {
LABEL_101:
              v54 = -1 << v52;
LABEL_77:
              _InterlockedAnd(v53, v54);
            }
          }
LABEL_78:
          if ( v46 )
            ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v46 + 32));
          if ( v77 )
            MiInsertPageInList(v23, 8u);
          v20 = v69;
        }
LABEL_38:
        LOBYTE(v10) = -1;
        _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v24 )
          LOBYTE(v10) = MiReleasePageFileInfo(v67, v24, 1);
        v21 = v70;
        goto LABEL_41;
      }
      if ( v22 && v14 != v21 && v14 != v20 )
      {
        if ( (v22 & 4) != 0 )
        {
          v59 = *(_QWORD *)v14;
          v33 = *((_QWORD *)&v67[929].Header.WaitListHead.Flink + ((unsigned __int16)v22 >> 12));
          if ( qword_140E2D740 )
          {
            if ( (v22 & 0x10) != 0 )
              v59 = v22 & 0xFFFFFFFFFFFFFFEFuLL;
            else
              v59 = v22 & qword_140E2D748;
          }
          v32 = HIDWORD(v59);
          v31 = 2;
        }
        else
        {
          v31 = 0;
          LODWORD(v32) = 0;
          v33 = 0LL;
        }
        v34 = MiTransferSoftwarePte(*(_QWORD *)v14, v33, v32, v31);
        LOBYTE(v10) = MiReleasePageFileSpace(v67, v22, 0);
        *(_QWORD *)v14 = v34;
      }
LABEL_41:
      v18 = v71;
      v14 += 8LL;
      v17 = v74;
      v8 = v73;
      v15 = v65;
      v16 = v75;
      v19 = v68;
    }
    else
    {
      v17 = v74;
      v14 = (v14 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      v15 = v65;
      v16 = v75;
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
        v43 = *(_QWORD *)(v8 + 8);
        v44 = v43 + 8 * v72;
        if ( v16 )
          v20 = v43 + 8 * v72;
        v69 = v20;
      }
      else
      {
        v44 = v14 + 8LL * *(unsigned int *)(v12 + 44);
      }
      v65 = v44;
      goto LABEL_7;
    }
  }
  if ( v18 )
    LOBYTE(v10) = MiUnlockProtoPoolPage(v18, v17);
  return v10;
}
