/*
 * XREFs of MiQueryAddressState @ 0x1402E7200
 * Callers:
 *     MiSetProtectionOnSection @ 0x1402E6E60 (MiSetProtectionOnSection.c)
 *     MiQueryAddressSpan @ 0x1402E6FF0 (MiQueryAddressSpan.c)
 *     MiComparePteProtections @ 0x1402E8A6C (MiComparePteProtections.c)
 *     MiAllowProtectionChange @ 0x1402E8CA4 (MiAllowProtectionChange.c)
 *     MiObtainRotateProtectionRanges @ 0x1404D0AD0 (MiObtainRotateProtectionRanges.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402C7E40 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiFastLockLeafPageTable @ 0x1402CF2D0 (MiFastLockLeafPageTable.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiQueryVadForVaAttributes @ 0x1402E7CD4 (MiQueryVadForVaAttributes.c)
 *     MiGetPageProtection @ 0x1402E8264 (MiGetPageProtection.c)
 *     MiFaultInPagedPool @ 0x1402E8708 (MiFaultInPagedPool.c)
 *     MiPageTableLockIsContended @ 0x1402E88A0 (MiPageTableLockIsContended.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiWalkPageTables @ 0x140328AB0 (MiWalkPageTables.c)
 *     MiGetAnyMultiplexedVm @ 0x14044F0E0 (MiGetAnyMultiplexedVm.c)
 *     MiIsLazyStampedPte @ 0x140482EE8 (MiIsLazyStampedPte.c)
 *     MiQueryVaLargePage @ 0x1405286D4 (MiQueryVaLargePage.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall MiQueryAddressState(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int8 a3,
        ULONG_PTR a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int8 v6; // r12
  ULONG_PTR v9; // r14
  __int64 v10; // r13
  __int64 v11; // r15
  int v12; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 p_Blink; // rdx
  int v15; // ebx
  __int64 v16; // r8
  __int16 v17; // si
  char v18; // r10
  __int64 v19; // r9
  int PageProtection; // r11d
  ULONG_PTR v21; // rdx
  unsigned __int64 v22; // rsi
  unsigned __int8 v23; // r12
  ULONG_PTR v24; // r14
  unsigned __int64 v25; // rcx
  __int64 v26; // rsi
  struct _LIST_ENTRY **AnyMultiplexedVm; // r15
  int v28; // eax
  unsigned int v29; // r9d
  unsigned __int64 v30; // rcx
  char v31; // r8
  volatile signed __int64 *v32; // rdx
  ULONG_PTR v33; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  char v35; // cl
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdx
  int v39; // eax
  unsigned __int8 v40; // cl
  __int64 *v41; // rax
  __int64 v42; // rdx
  _DWORD *MmInternal; // rcx
  unsigned int v44; // eax
  __int64 v45; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int8 v46; // [rsp+28h] [rbp-D8h]
  volatile signed __int64 *v47; // [rsp+30h] [rbp-D0h]
  ULONG_PTR v48; // [rsp+38h] [rbp-C8h]
  __int64 v49; // [rsp+40h] [rbp-C0h]
  ULONG_PTR v50; // [rsp+48h] [rbp-B8h]
  __int64 v51; // [rsp+50h] [rbp-B0h]
  ULONG_PTR v52; // [rsp+58h] [rbp-A8h]
  ULONG_PTR v53; // [rsp+60h] [rbp-A0h]
  ULONG_PTR v54; // [rsp+68h] [rbp-98h]
  unsigned __int64 v55; // [rsp+70h] [rbp-90h]
  __int64 v56; // [rsp+78h] [rbp-88h]
  char v57; // [rsp+80h] [rbp-80h]
  char v58; // [rsp+81h] [rbp-7Fh]
  char v59; // [rsp+82h] [rbp-7Eh]
  __int64 v60; // [rsp+88h] [rbp-78h]
  __int128 v61; // [rsp+90h] [rbp-70h] BYREF
  __int64 v62; // [rsp+A0h] [rbp-60h]
  __int128 v63; // [rsp+A8h] [rbp-58h] BYREF
  int v64; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v65; // [rsp+C4h] [rbp-3Ch] BYREF
  unsigned __int8 v66; // [rsp+C9h] [rbp-37h]
  struct _LIST_ENTRY **v67; // [rsp+E0h] [rbp-20h]
  ULONG_PTR v68; // [rsp+E8h] [rbp-18h]
  __int64 v69; // [rsp+F0h] [rbp-10h]
  __int64 (__fastcall *v70)(); // [rsp+170h] [rbp+70h]
  __int128 *v71; // [rsp+178h] [rbp+78h]
  __int16 v72; // [rsp+1D0h] [rbp+D0h]

  v6 = a3;
  v9 = a4;
  memset_0(&v45, 0, 0x70uLL);
  v10 = a6;
  v11 = a5;
  v12 = 0;
  v62 = 0LL;
  *(_OWORD *)a6 = 0LL;
  *(_QWORD *)(a6 + 16) = 0LL;
  v61 = 0LL;
  CurrentThread = KeGetCurrentThread();
  p_Blink = (__int64)&CurrentThread->ApcState.Process[2].ReadyListHead.Blink;
  LOWORD(CurrentThread) = **(_WORD **)(stru_140E2ED08.ThreadLock
                                     + 8LL * HIWORD(CurrentThread->ApcState.Process[2].ProcessListEntry.Blink));
  v45 = p_Blink;
  v72 = (__int16)CurrentThread;
  v60 = a5;
  v46 = v6;
  v48 = v9;
  v53 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v49 = a1;
  v55 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v15 = *(_DWORD *)(v9 + 48);
  v50 = v53;
LABEL_2:
  v16 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  while ( 1 )
  {
    v57 = 0;
    if ( !v47 )
      break;
LABEL_4:
    v17 = v72;
    v18 = 0;
    WORD2(v61) = v72;
    LODWORD(v61) = 0x2000;
    v19 = 0x2000LL;
    DWORD2(v61) = 0;
    PageProtection = 0;
    v59 = 0;
    if ( !v51 )
      goto LABEL_5;
    if ( (v15 & 0x1C) == 0xC && (v15 & 0x880000) != 0x880000 )
    {
      if ( (unsigned int)MiIsLazyStampedPte(v51, v51, v16) )
        v38 = v16;
      v51 = v38;
    }
    if ( !v51 )
    {
LABEL_5:
      MiQueryVadForVaAttributes(&v45, &v61, v16, v19);
      PageProtection = DWORD2(v61);
      LODWORD(v19) = v61;
LABEL_6:
      v16 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      v17 = WORD2(v61);
      v18 = v59;
      goto LABEL_7;
    }
    if ( (v51 & 0x3E0) != 0x200
      || (v51 & 1) != 0
      || (v51 & 0x400) != 0 && (v51 & 0x3FFFFFFFFFF000LL) != 0x3FFFFFFFFFF000LL )
    {
      LODWORD(v61) = 4096;
      PageProtection = MiGetPageProtection(v9, v50);
      LODWORD(v19) = v61;
      DWORD2(v61) = PageProtection;
      if ( !PageProtection )
        LODWORD(v19) = 0x2000;
      LODWORD(v61) = v19;
      goto LABEL_6;
    }
LABEL_7:
    if ( v50 == v53 )
    {
      if ( v11
        && ((_DWORD)v19 != *(_DWORD *)v11 || PageProtection != *(_DWORD *)(v11 + 8) || v17 != *(_WORD *)(v11 + 4)) )
      {
        v18 = 1;
        v59 = 1;
        v52 = v50;
      }
      *(_DWORD *)v10 = v19;
      *(_WORD *)(v10 + 4) = v17;
      *(_DWORD *)(v10 + 8) = PageProtection;
    }
    else
    {
      if ( (_DWORD)v19 != *(_DWORD *)v10 || PageProtection != *(_DWORD *)(v10 + 8) || v17 != *(_WORD *)(v10 + 4) )
      {
        v52 = v50;
        v59 = 1;
LABEL_34:
        if ( v47 )
        {
          if ( v47 != (volatile signed __int64 *)0xFFFFF6FB7DBEDF68LL )
          {
            if ( (*(_DWORD *)(v45 + 184) & 0xF) != 0
              || (unsigned __int64)v47 < 0xFFFFF6FB7DBED000uLL
              || (unsigned __int64)v47 > 0xFFFFF6FB7DBEDFFFuLL
              || (v37 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
            {
              if ( (*(_DWORD *)(v45 + 184) & 0xF) != 0
                && (unsigned __int64)v47 >= 0xFFFFF6FB7DBED000uLL
                && (unsigned __int64)v47 <= 0xFFFFF6FB7DBEDFFFuLL )
              {
                _InterlockedAnd(
                  (volatile signed __int32 *)&MiState
                + ((unsigned __int64)(2 * (unsigned int)((__int64)(v47 + 0x12090482600LL) >> 3)) >> 5)
                + 1467,
                  ~(2 << ((2 * ((__int64)(v47 + 0x12090482600LL) >> 3)) & 0x1F)) & ~(1 << ((2
                                                                                          * ((__int64)(v47 + 0x12090482600LL) >> 3)) & 0x1F)));
              }
              else
              {
                _InterlockedAnd64(v47, 0xCFFFFFFFFFFFFFFFuLL);
              }
            }
            else
            {
              ExReleaseSpinLockRegardlessFromDpcLevel((volatile signed __int32 *)(v37
                                                                                + 4
                                                                                * (((unsigned __int64)v47 >> 3) & 0x1FF)));
            }
            goto LABEL_42;
          }
          CurrentPrcb = KeGetCurrentPrcb();
          v35 = *(_DWORD *)(v45 + 184) & 0xF;
          if ( !v35 )
          {
            v36 = 2LL;
            goto LABEL_70;
          }
          if ( v35 == 7 )
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[1]);
          }
          else
          {
            v36 = 3LL;
            if ( v35 == 5 )
              v36 = 0LL;
LABEL_70:
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[v36]);
          }
        }
LABEL_42:
        *(_QWORD *)(v10 + 16) = (__int64)(v52 << 25) >> 16;
        return;
      }
      if ( !v56 )
      {
        if ( v18 )
          goto LABEL_34;
        if ( (++v12 & 0x3F) != 0 )
          goto LABEL_14;
        if ( v47 && (unsigned int)MiPageTableLockIsContended(v45, v47, v16)
          || ((v40 = *(_DWORD *)(v45 + 184) & 0xF, v40 == 5) || v40 <= 4u)
          && ((*(_DWORD *)(v45 + 184) & 0xF) != 1 ? (v41 = (__int64 *)(v45 + 192)) : (v41 = &qword_140E37980),
              (v42 = *v41, (MmInternal = KeGetCurrentPrcb()->MmInternal) == 0LL) ? (v44 = 0) : (v44 = MmInternal[81]),
              (*(_DWORD *)(((unsigned __int64)v44 << 6) + v42) & 0x40000000) != 0) )
        {
          v18 = 1;
          v59 = 1;
        }
        else if ( v6 < 2u && KeShouldYieldProcessor() )
        {
          v18 = 1;
          v59 = 1;
        }
        else
        {
          v18 = v59;
          if ( !v59 )
          {
            v16 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
            goto LABEL_110;
          }
        }
        v16 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        v52 = v50 + 8;
      }
    }
    if ( v18 )
      goto LABEL_34;
LABEL_110:
    if ( v56 )
      goto LABEL_34;
LABEL_14:
    v21 = v50 + 8;
    if ( v52 != v50 + 8 || v52 > v54 )
      goto LABEL_34;
    v50 += 8LL;
    v52 += 8LL;
    v49 = (__int64)(v21 << 25) >> 16;
    if ( v58 )
    {
      v51 = *(_QWORD *)v21;
      goto LABEL_2;
    }
  }
  v22 = v55;
  v23 = v46;
  v51 = v16;
  v54 = v55;
  v63 = 0LL;
  memset_0(&v65, 0, 0xBCuLL);
  v24 = (__int64)(v50 << 25) >> 16;
  v25 = v24;
  v26 = (__int64)(v22 << 25) >> 16;
  v64 = 4145;
  if ( v24 >= 0xFFFFF68000000000uLL )
  {
    do
    {
      if ( v25 > 0xFFFFF6FFFFFFFFFFuLL )
        break;
      v25 = (__int64)(v25 << 25) >> 16;
    }
    while ( v25 >= 0xFFFFF68000000000uLL );
    v10 = a6;
  }
  if ( v25 < 0xFFFF800000000000uLL || v25 >= qword_140E2DFC0 && v25 <= qword_140E2DFD0 )
    AnyMultiplexedVm = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  else
    AnyMultiplexedVm = (struct _LIST_ENTRY **)MiGetAnyMultiplexedVm(2LL, 0LL);
  v64 = 4149;
  v28 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v24, 0);
  if ( v28 )
  {
    v29 = v28 - 1;
    LODWORD(v63) = v28 - 1;
    v30 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v63 + 1) = v30;
  }
  else
  {
    v30 = *((_QWORD *)&v63 + 1);
    v29 = v63;
  }
  if ( !v30 )
  {
    v67 = AnyMultiplexedVm;
    v71 = &v63;
    v66 = v23;
    v68 = v24;
    v65 = v65 & 0xFFFFFE3F | 0x40;
    v70 = MiGetNextPageTableTail;
    v69 = v26;
    MiWalkPageTables(&v64);
    v30 = *((_QWORD *)&v63 + 1);
    v29 = v63;
  }
  v52 = v30;
  if ( !v30 )
  {
    v52 = v54 + 8;
    goto LABEL_62;
  }
  v31 = 1;
  v32 = (volatile signed __int64 *)(((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v47 = v32;
  if ( !v29 )
    goto LABEL_55;
  v39 = MiQueryVaLargePage(&v45, v29, v10);
  if ( v39 < 0 )
  {
    if ( v39 != -1073741819 )
    {
      v30 = v52;
      v31 = 0;
      v32 = v47;
LABEL_55:
      if ( v50 == v30 && v31 )
      {
        v51 = *(_QWORD *)v50;
        v58 = 1;
        v52 = v50 + 8;
        if ( !v51 )
          v57 = 1;
        v33 = (v50 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      }
      else
      {
        MiUnlockPageTableInternal(v45, (unsigned __int64)v32);
        v47 = 0LL;
        v33 = (v52 & 0xFFFFFFFFFFFFF000uLL) - 8;
      }
      v54 = v33;
      if ( v33 > v55 )
        v54 = v55;
    }
LABEL_62:
    v6 = a3;
    v11 = a5;
    v9 = a4;
    v16 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    goto LABEL_4;
  }
  MiUnlockPageTableInternal(v45, (unsigned __int64)v47);
}
