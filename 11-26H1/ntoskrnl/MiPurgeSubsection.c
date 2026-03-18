/*
 * XREFs of MiPurgeSubsection @ 0x140422170
 * Callers:
 *     MmPurgeSection @ 0x14039CC74 (MmPurgeSection.c)
 *     MiDeleteSubsectionPages @ 0x1404919FC (MiDeleteSubsectionPages.c)
 *     MiDeleteCachedSubsection @ 0x1405108F0 (MiDeleteCachedSubsection.c)
 *     MiCreateFileOnlyPfns @ 0x14086D164 (MiCreateFileOnlyPfns.c)
 *     MiPurgeImageSection @ 0x140B69DBC (MiPurgeImageSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402474C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140249B40 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     MiMakeDemandZeroPte @ 0x14028B2D0 (MiMakeDemandZeroPte.c)
 *     MiUnlinkProtoPages @ 0x140297A00 (MiUnlinkProtoPages.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x1402AA2EC (MiLockSpecialPurposeMemoryCachedPage.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402BA1B0 (KiLeaveCriticalRegionUnsafe.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     KeShouldYieldProcessor @ 0x1402D49D0 (KeShouldYieldProcessor.c)
 *     MiReleasePageFileInfo @ 0x1402DAD50 (MiReleasePageFileInfo.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiChargeCommit @ 0x1402F64A0 (MiChargeCommit.c)
 *     MiCheckProtoPtePageState @ 0x14031BB00 (MiCheckProtoPtePageState.c)
 *     MiRemoveLockedPageCharge @ 0x14031D180 (MiRemoveLockedPageCharge.c)
 *     MiDeleteTransitionPte @ 0x14033E7F0 (MiDeleteTransitionPte.c)
 *     MiReleasePageFileSpace @ 0x14033ECA0 (MiReleasePageFileSpace.c)
 *     MiPurgeCandidate @ 0x1403C1FE0 (MiPurgeCandidate.c)
 *     KeSignalGate @ 0x1403C2AD0 (KeSignalGate.c)
 *     MiInitializePurgeCriteria @ 0x1404A4714 (MiInitializePurgeCriteria.c)
 *     MiPurgeValidPage @ 0x1404B1D5C (MiPurgeValidPage.c)
 *     MiMakeGlobalSubsectionPte @ 0x1404B5EA4 (MiMakeGlobalSubsectionPte.c)
 *     MiMakeSubsectionPte @ 0x1404B5EF8 (MiMakeSubsectionPte.c)
 *     MiPurgeFileOnlyPfn @ 0x1404CBA94 (MiPurgeFileOnlyPfn.c)
 *     MiDeleteSubsectionLargePages @ 0x140510EFC (MiDeleteSubsectionLargePages.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     bsearch @ 0x140536920 (bsearch.c)
 *     MiUnlinkSubsectionWaitBlock @ 0x1406FADC0 (MiUnlinkSubsectionWaitBlock.c)
 */

__int64 __fastcall MiPurgeSubsection(
        struct _KTHREAD *a1,
        ULONG_PTR BugCheckParameter2,
        unsigned __int64 a3,
        int a4,
        _OWORD *a5)
{
  __int64 v5; // r12
  char v6; // si
  ULONG_PTR v8; // r15
  __int64 v9; // rdi
  __int64 v10; // r14
  __int64 v11; // rbx
  unsigned int v12; // esi
  int i; // edx
  unsigned int *v14; // rdx
  __int64 *v15; // rax
  int v16; // r14d
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  __int64 v21; // rsi
  unsigned int v22; // edi
  unsigned __int64 ThreadLock; // rcx
  unsigned __int64 v24; // rdx
  int v25; // eax
  unsigned __int64 *v26; // r8
  int v27; // r9d
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  char v31; // r9
  unsigned __int64 SubsectionPte; // rcx
  char v33; // cl
  unsigned __int64 v34; // rax
  unsigned __int64 DemandZeroPte; // rax
  unsigned __int64 v36; // rdx
  unsigned int v37; // r15d
  __int64 v38; // rbx
  __int64 v39; // r14
  volatile LONG *v40; // rdi
  KIRQL v41; // al
  KIRQL v42; // si
  __int64 v43; // r8
  _DWORD *SListFaultAddress; // rbx
  int QuantumTarget; // eax
  unsigned int v46; // eax
  int v47; // ecx
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v51; // [rsp+30h] [rbp-B1h]
  __int128 v52; // [rsp+40h] [rbp-A1h] BYREF
  __int128 v53; // [rsp+50h] [rbp-91h]
  ULONG_PTR BugCheckParameter2a[2]; // [rsp+60h] [rbp-81h]
  __int128 v55; // [rsp+70h] [rbp-71h]
  __int128 v56; // [rsp+80h] [rbp-61h] BYREF
  __int128 v57; // [rsp+90h] [rbp-51h]
  __int128 v58; // [rsp+A0h] [rbp-41h]
  __int64 v59; // [rsp+B0h] [rbp-31h]
  __int128 v60; // [rsp+C0h] [rbp-21h] BYREF
  __int128 v61; // [rsp+D0h] [rbp-11h]
  __int128 v62; // [rsp+E0h] [rbp-1h]
  __int128 *v63; // [rsp+F0h] [rbp+Fh]
  unsigned __int64 v64; // [rsp+148h] [rbp+67h] BYREF
  unsigned __int64 v65; // [rsp+150h] [rbp+6Fh]
  int v66; // [rsp+158h] [rbp+77h]

  v66 = a4;
  v65 = a3;
  v5 = (__int64)a5;
  v6 = a4;
  v59 = 0LL;
  LODWORD(v63) = 0;
  *a5 = 0LL;
  *(_OWORD *)(v5 + 16) = 0LL;
  *(_QWORD *)(v5 + 32) = 0LL;
  v8 = BugCheckParameter2;
  v52 = 0LL;
  v53 = 0LL;
  *(_OWORD *)BugCheckParameter2a = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  MiInitializePurgeCriteria(&v52, BugCheckParameter2, a3, a1, v5, a4);
  v9 = v55;
  v51 = v55;
  LODWORD(a5) = 0;
  if ( v8 >= v65 )
  {
LABEL_132:
    v37 = (unsigned int)a5;
    goto LABEL_133;
  }
  while ( 2 )
  {
    if ( (v8 & 0xFFF) != 0 )
    {
      if ( BYTE12(v52) != 17 )
        goto LABEL_4;
    }
    else if ( BYTE12(v52) != 17 )
    {
      MiUnlockProtoPoolPage(*((__int64 *)&v53 + 1), BYTE12(v52));
    }
    *((_QWORD *)&v53 + 1) = MiCheckProtoPtePageState(v9, v8, v53, (_BYTE *)&v52 + 12);
    if ( !*((_QWORD *)&v53 + 1) )
    {
      v8 = (v8 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      goto LABEL_72;
    }
LABEL_4:
    if ( (_QWORD)v56 )
    {
      v10 = v55;
      v11 = 0LL;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      {
        v12 = 0;
        if ( _interlockedbittestandset((volatile signed __int32 *)(v55 + 72), 0x1Fu) )
          v12 = ExpWaitForSpinLockExclusiveAndAcquire((int *)(v10 + 72), 0xFFu);
        for ( i = *(_DWORD *)(v10 + 72); (i & 0xBFFFFFFF) != 0x80000000; i = *(_DWORD *)(v10 + 72) )
        {
          if ( (i & 0x40000000) == 0 )
            _InterlockedOr((volatile signed __int32 *)(v10 + 72), 0x40000000u);
          if ( (++v12 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v12);
          }
          else
          {
            _mm_pause();
          }
        }
        v6 = v66;
      }
      else
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented((int *)(v55 + 72), 0xFFu);
      }
      v14 = *(unsigned int **)((*(_QWORD *)(v10 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 48);
      v15 = (__int64 *)bsearch((const void *)v8, v14 + 2, *v14, 8uLL, MiFixupExtentCompare);
      if ( v15 && (*v15 & 1) == 0 )
      {
        v11 = *v15;
        *v15 = v8 | 1;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v10 + 72));
      if ( v11 )
      {
        LODWORD(v64) = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v64);
          while ( *(__int64 *)(v11 + 24) < 0 );
        }
        MiRemoveLockedPageCharge(v11);
        MiPurgeFileOnlyPfn(v11, 1LL);
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      v9 = v51;
    }
    v16 = v6 & 4;
    if ( (v6 & 4) == 0 && (BYTE8(v52) & 8) == 0 && !(_QWORD)v56 )
    {
      DWORD2(v52) |= 4u;
      *((_QWORD *)&v61 + 1) = v65;
      *(_QWORD *)&v62 = MiPurgeCandidate;
      *((_QWORD *)&v62 + 1) = MiPurgeFinish;
      v63 = &v52;
      LODWORD(v60) = 1;
      *((_QWORD *)&v60 + 1) = a1;
      *(_QWORD *)&v61 = v8;
      v17 = MiUnlinkProtoPages(&v60);
      *(_QWORD *)v5 += v17;
      DWORD2(v52) &= ~4u;
      if ( v17 && ((**((_QWORD **)&v53 + 1) & 0xFFFFFFFFFFELL) != 0 || KeShouldYieldProcessor()) )
      {
        MiUnlockProtoPoolPage(*((__int64 *)&v53 + 1), BYTE12(v52));
        BYTE12(v52) = 17;
      }
      DWORD2(v52) |= 8u;
      goto LABEL_72;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v18 = *(_QWORD *)v8;
        if ( (*(_QWORD *)v8 & 1) != 0 )
        {
          v19 = *(_QWORD *)v8;
          goto LABEL_51;
        }
        if ( (*(_QWORD *)v8 & 0xC00LL) != 0x800 )
        {
          v24 = *(_QWORD *)v8;
LABEL_117:
          if ( (v24 & 0x400) == 0 )
          {
            if ( (v52 & 2) != 0 )
            {
              v64 = v24;
              if ( (v24 & 8) == 0 )
              {
                v33 = v24;
                v34 = v24;
                v24 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
                if ( (v33 & 4) != 0 )
                  v24 = v34;
              }
              if ( v24 )
                MiReleasePageFileInfo(*((struct _KEVENT **)&v55 + 1), v24, 1);
            }
            else if ( (v52 & 4) != 0 )
            {
              DemandZeroPte = MiMakeDemandZeroPte(24);
              if ( v36 != DemandZeroPte )
              {
                MiReleasePageFileSpace(*((struct _KEVENT **)&v55 + 1), v36, 1);
                *(_QWORD *)v8 = MiMakeGlobalSubsectionPte(BugCheckParameter2a[1], v8);
              }
            }
            else if ( (v24 & 0x800) == 0 && v24 )
            {
              KeBugCheckEx(0xDEu, 4uLL, BugCheckParameter2a[1], v8, v24);
            }
          }
LABEL_70:
          v8 += 8LL;
LABEL_71:
          v9 = v51;
          goto LABEL_72;
        }
        if ( !v18 || !qword_140E2D740 || (qword_140E2D740 & v18) != 0 )
        {
          v19 = *(_QWORD *)v8;
          if ( qword_140E2D740 )
          {
            v19 = v18 & 0xFFFFFFFFFFFFFFEFuLL;
            if ( (v18 & 0x10) == 0 )
              v19 = qword_140E2D748 & v18;
          }
LABEL_51:
          v20 = (v19 >> 12) & 0xFFFFFFFFFFLL;
          if ( v20 <= qword_140E2D7A0 && ((*(_QWORD *)(48 * v20 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
            break;
        }
      }
      v21 = 48 * v20 - 0x220000000000LL;
      v22 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v22 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v22);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v21 + 24) < 0 );
      }
      if ( *(_QWORD *)v8 == v18 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    ThreadLock = stru_140E2EB88.ThreadLock;
    if ( (*(_DWORD *)(*(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(v21 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x20) != 0 )
      v21 = MiLockSpecialPurposeMemoryCachedPage(v21, 0);
    v24 = *(_QWORD *)v8;
    if ( !v21 )
      goto LABEL_117;
    if ( (v24 & 1) == 0 )
    {
      v25 = MiPurgeCandidate((int *)&v52, v8, *(_QWORD *)v8);
      LODWORD(a5) = v25;
      if ( v25 < 0 )
      {
        if ( BYTE12(v52) != 17 )
          _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v25 == -1073741800 )
        {
          v37 = -1073741800;
          goto LABEL_133;
        }
        if ( v25 != -1073741267 )
          v8 += 8LL;
        LODWORD(a5) = 0;
        goto LABEL_71;
      }
      if ( v16 && (unsigned __int16)*(_DWORD *)(v21 + 32) && (*(_DWORD *)(v21 + 16) & 0x400LL) == 0 )
        MiChargeCommit(*(ULONG **)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(v21 + 40) >> 43) & 0x3FFLL)), 1uLL, 4u);
      v26 = (unsigned __int64 *)(v8 + 8);
      v27 = 8;
      v28 = v65;
      if ( v8 + 8 < v65 )
      {
        while ( ((unsigned __int16)v26 & 0xFFF) != 0 )
        {
          v29 = *v26;
          if ( (*v26 & 1) == 0 )
          {
            if ( (*v26 & 0xC00) == 0x800 )
            {
              if ( qword_140E2D740 )
              {
                v30 = qword_140E2D748 & v29;
                v29 &= ~0x10uLL;
                if ( (*v26 & 0x10) == 0 )
                  v29 = v30;
              }
              if ( ((v29 >> 12) & 0xFFFFFFF0) == (((v21 + 0x220000000000LL) / 48) & 0xFFFFFFF0LL) )
              {
                v31 = 1;
                goto LABEL_97;
              }
            }
            v28 = v65;
          }
          if ( --v27 )
          {
            if ( (unsigned __int64)++v26 < v28 )
              continue;
          }
          break;
        }
      }
      v31 = 0;
LABEL_97:
      if ( (unsigned int)MiDeleteTransitionPte(v8, v21, 0x11u, v31) == 3 && (v66 & 2) != 0 )
        ++*(_QWORD *)(v5 + 32);
      ++*(_QWORD *)v5;
      if ( v16 )
      {
        SubsectionPte = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC1FuLL | (16LL * (a1->QuantumTarget & 0x3E));
        if ( qword_140E2D740 )
        {
          if ( (qword_140E2D740 & SubsectionPte) != 0 )
            SubsectionPte |= 0x10uLL;
          else
            SubsectionPte |= qword_140E2D740;
        }
        if ( HIDWORD(a1->QuantumTarget)
          && (unsigned int)((__int64)(v8 - (unsigned __int64)a1->Header.WaitListHead.Flink) >> 3) << 24 < ((LODWORD(a1->QuantumTarget) >> 20) | (LODWORD(a1->InitialStack) << 9)) )
        {
          SubsectionPte = MiMakeSubsectionPte(a1);
        }
        *(_QWORD *)v8 = SubsectionPte;
      }
      v9 = v51;
      if ( (*(_DWORD *)(v51 + 56) & 0xA0) == 0x80 && !*(_QWORD *)(v51 + 32) )
        goto LABEL_132;
      v8 += 8LL;
      if ( (*(_BYTE *)v5 & 0xF) == 0 && ((**((_QWORD **)&v53 + 1) & 0xFFFFFFFFFFELL) != 0 || KeShouldYieldProcessor()) )
      {
        MiUnlockProtoPoolPage(*((__int64 *)&v53 + 1), BYTE12(v52));
        BYTE12(v52) = 17;
      }
LABEL_72:
      if ( v8 >= v65 )
        goto LABEL_132;
      v6 = v66;
      continue;
    }
    break;
  }
  if ( (v66 & 2) != 0 )
  {
    MiPurgeValidPage(ThreadLock, v24, v5);
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_70;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v37 = -1073741800;
LABEL_133:
  if ( BYTE12(v52) != 17 )
    MiUnlockProtoPoolPage(*((__int64 *)&v53 + 1), BYTE12(v52));
  if ( (BYTE8(v52) & 0x10) != 0 )
  {
    v38 = *(_QWORD *)&a1->Header.Lock;
    v39 = *(_QWORD *)v5;
    v40 = (volatile LONG *)(*(_QWORD *)&a1->Header.Lock + 72LL);
    v41 = ExAcquireSpinLockExclusive(v40);
    DWORD2(v57) &= ~2u;
    v42 = v41;
    MiUnlinkSubsectionWaitBlock(a1, (char *)&v56 + 8, 1LL);
    if ( (BYTE8(v57) & 4) != 0 )
    {
      KeAbPostRelease((unsigned __int64)a1);
      DWORD2(v57) &= ~4u;
    }
    if ( (*(_DWORD *)(v38 + 56) & 0x20) != 0 )
    {
      SListFaultAddress = *(_DWORD **)(v38 + 80);
      goto LABEL_146;
    }
    QuantumTarget = a1->QuantumTarget;
    if ( v39 )
    {
      v46 = QuantumTarget | 0x40000;
      goto LABEL_144;
    }
    if ( HIDWORD(a1->InitialStack) == HIDWORD(a1->StackLimit) )
    {
      v46 = QuantumTarget & 0xFFFBFFFF;
LABEL_144:
      LODWORD(a1->QuantumTarget) = v46;
    }
    SListFaultAddress = a1->SListFaultAddress;
LABEL_146:
    while ( SListFaultAddress )
    {
      if ( SListFaultAddress != (_DWORD *)((char *)&v56 + 8) )
      {
        v47 = SListFaultAddress[2];
        if ( (v47 & 0x3C0) != 0 )
        {
          if ( SListFaultAddress[3] != 2 )
            SListFaultAddress[3] = ((v57 & 0x200) != 0) + 1;
          if ( (v47 & 0x40) == 0 )
            KeSignalGate((__int64)(SListFaultAddress + 6), 1LL, v43);
        }
      }
      SListFaultAddress = *(_DWORD **)SListFaultAddress;
    }
    if ( v42 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v40);
    else
      ExReleaseSpinLockExclusive(v40, v42);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v48);
    DWORD2(v57) &= ~8u;
  }
  v49 = *(_QWORD *)(v5 + 16);
  if ( v49 )
    *(_QWORD *)(v5 + 32) += MiDeleteSubsectionLargePages(a1, v49, *(_QWORD *)(v5 + 24));
  return v37;
}
