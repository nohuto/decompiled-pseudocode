/*
 * XREFs of MiPurgeSubsection @ 0x1404199B0
 * Callers:
 *     MmPurgeSection @ 0x14039E9D4 (MmPurgeSection.c)
 *     MiDeleteSubsectionPages @ 0x14048B54C (MiDeleteSubsectionPages.c)
 *     MiDeleteCachedSubsection @ 0x14050A360 (MiDeleteCachedSubsection.c)
 *     MiCreateFileOnlyPfns @ 0x140873544 (MiCreateFileOnlyPfns.c)
 *     MiPurgeImageSection @ 0x140B6CD4C (MiPurgeImageSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140248E20 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14024B4A0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiUnlinkProtoPages @ 0x140296F60 (MiUnlinkProtoPages.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x1402A96FC (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiChargeCommit @ 0x1402D8520 (MiChargeCommit.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCheckProtoPtePageState @ 0x14031DB30 (MiCheckProtoPtePageState.c)
 *     MiRemoveLockedPageCharge @ 0x14031F1B0 (MiRemoveLockedPageCharge.c)
 *     MiDeleteTransitionPte @ 0x140340870 (MiDeleteTransitionPte.c)
 *     MiReleasePageFileSpace @ 0x140340D20 (MiReleasePageFileSpace.c)
 *     MiPurgeCandidate @ 0x1403CBEE0 (MiPurgeCandidate.c)
 *     KeSignalGate @ 0x1403CC9D0 (KeSignalGate.c)
 *     MiInitializePurgeCriteria @ 0x14049DDA4 (MiInitializePurgeCriteria.c)
 *     MiPurgeValidPage @ 0x1404AB41C (MiPurgeValidPage.c)
 *     MiMakeGlobalSubsectionPte @ 0x1404AF2F4 (MiMakeGlobalSubsectionPte.c)
 *     MiMakeSubsectionPte @ 0x1404AF348 (MiMakeSubsectionPte.c)
 *     MiPurgeFileOnlyPfn @ 0x1404C54C4 (MiPurgeFileOnlyPfn.c)
 *     MiDeleteSubsectionLargePages @ 0x14050A96C (MiDeleteSubsectionLargePages.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     bsearch @ 0x140538DA0 (bsearch.c)
 *     MiUnlinkSubsectionWaitBlock @ 0x1406FFA90 (MiUnlinkSubsectionWaitBlock.c)
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
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // r14
  __int64 v12; // rbx
  unsigned int v13; // esi
  int i; // edx
  unsigned int *v15; // rdx
  __int64 *v16; // rax
  int v17; // r14d
  __int64 v18; // rax
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  __int64 v22; // rsi
  unsigned int v23; // edi
  unsigned __int64 ThreadLock; // rcx
  unsigned __int64 v25; // rdx
  int v26; // eax
  unsigned __int64 *v27; // r8
  int v28; // r9d
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  char v32; // r9
  unsigned __int64 SubsectionPte; // rcx
  char v34; // cl
  unsigned __int64 v35; // rax
  unsigned __int64 DemandZeroPte; // rax
  unsigned __int64 v37; // rdx
  unsigned int v38; // r15d
  __int64 v39; // rbx
  __int64 v40; // r14
  volatile LONG *v41; // rdi
  KIRQL v42; // al
  KIRQL v43; // si
  __int64 v44; // r8
  _DWORD *SListFaultAddress; // rbx
  int QuantumTarget; // eax
  unsigned int v47; // eax
  int v48; // ecx
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v52; // [rsp+30h] [rbp-B1h]
  __int128 v53; // [rsp+40h] [rbp-A1h] BYREF
  __int128 v54; // [rsp+50h] [rbp-91h]
  ULONG_PTR BugCheckParameter2a[2]; // [rsp+60h] [rbp-81h]
  __int128 v56; // [rsp+70h] [rbp-71h]
  __int128 v57; // [rsp+80h] [rbp-61h] BYREF
  __int128 v58; // [rsp+90h] [rbp-51h]
  __int128 v59; // [rsp+A0h] [rbp-41h]
  __int64 v60; // [rsp+B0h] [rbp-31h]
  __int128 v61; // [rsp+C0h] [rbp-21h] BYREF
  __int128 v62; // [rsp+D0h] [rbp-11h]
  __int128 v63; // [rsp+E0h] [rbp-1h]
  __int128 *v64; // [rsp+F0h] [rbp+Fh]
  unsigned __int64 v65; // [rsp+148h] [rbp+67h] BYREF
  unsigned __int64 v66; // [rsp+150h] [rbp+6Fh]
  int v67; // [rsp+158h] [rbp+77h]

  v67 = a4;
  v66 = a3;
  v5 = (__int64)a5;
  v6 = a4;
  v60 = 0LL;
  LODWORD(v64) = 0;
  *a5 = 0LL;
  *(_OWORD *)(v5 + 16) = 0LL;
  *(_QWORD *)(v5 + 32) = 0LL;
  v8 = BugCheckParameter2;
  v53 = 0LL;
  v54 = 0LL;
  *(_OWORD *)BugCheckParameter2a = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  MiInitializePurgeCriteria(&v53, BugCheckParameter2, a3, a1, v5, a4);
  v10 = v56;
  v52 = v56;
  LODWORD(a5) = 0;
  if ( v8 >= v66 )
  {
LABEL_132:
    v38 = (unsigned int)a5;
    goto LABEL_133;
  }
  while ( 2 )
  {
    if ( (v8 & 0xFFF) != 0 )
    {
      if ( BYTE12(v53) != 17 )
        goto LABEL_4;
    }
    else if ( BYTE12(v53) != 17 )
    {
      MiUnlockProtoPoolPage(*((__int64 *)&v54 + 1), BYTE12(v53), v9);
    }
    *((_QWORD *)&v54 + 1) = MiCheckProtoPtePageState(v10, v8, (unsigned int)v54, (_BYTE *)&v53 + 12);
    if ( !*((_QWORD *)&v54 + 1) )
    {
      v8 = (v8 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      goto LABEL_72;
    }
LABEL_4:
    if ( (_QWORD)v57 )
    {
      v11 = v56;
      v12 = 0LL;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        v13 = 0;
        if ( _interlockedbittestandset((volatile signed __int32 *)(v56 + 72), 0x1Fu) )
          v13 = ExpWaitForSpinLockExclusiveAndAcquire((int *)(v11 + 72), 0xFFu);
        for ( i = *(_DWORD *)(v11 + 72); (i & 0xBFFFFFFF) != 0x80000000; i = *(_DWORD *)(v11 + 72) )
        {
          if ( (i & 0x40000000) == 0 )
            _InterlockedOr((volatile signed __int32 *)(v11 + 72), 0x40000000u);
          if ( (++v13 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v13);
          }
          else
          {
            _mm_pause();
          }
        }
        v6 = v67;
      }
      else
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented((int *)(v56 + 72), 0xFFu);
      }
      v15 = *(unsigned int **)((*(_QWORD *)(v11 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 48);
      v16 = (__int64 *)bsearch((const void *)v8, v15 + 2, *v15, 8uLL, MiFixupExtentCompare);
      if ( v16 && (*v16 & 1) == 0 )
      {
        v12 = *v16;
        *v16 = v8 | 1;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 72));
      if ( v12 )
      {
        LODWORD(v65) = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v65);
          while ( *(__int64 *)(v12 + 24) < 0 );
        }
        MiRemoveLockedPageCharge(v12);
        MiPurgeFileOnlyPfn(v12, 1LL);
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      v10 = v52;
    }
    v17 = v6 & 4;
    if ( (v6 & 4) == 0 && (BYTE8(v53) & 8) == 0 && !(_QWORD)v57 )
    {
      DWORD2(v53) |= 4u;
      *((_QWORD *)&v62 + 1) = v66;
      *(_QWORD *)&v63 = MiPurgeCandidate;
      *((_QWORD *)&v63 + 1) = MiPurgeFinish;
      v64 = &v53;
      LODWORD(v61) = 1;
      *((_QWORD *)&v61 + 1) = a1;
      *(_QWORD *)&v62 = v8;
      v18 = MiUnlinkProtoPages(&v61);
      *(_QWORD *)v5 += v18;
      DWORD2(v53) &= ~4u;
      if ( v18 && ((**((_QWORD **)&v54 + 1) & 0xFFFFFFFFFFELL) != 0 || KeShouldYieldProcessor()) )
      {
        MiUnlockProtoPoolPage(*((__int64 *)&v54 + 1), BYTE12(v53), v9);
        BYTE12(v53) = 17;
      }
      DWORD2(v53) |= 8u;
      goto LABEL_72;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v19 = *(_QWORD *)v8;
        if ( (*(_QWORD *)v8 & 1) != 0 )
        {
          v20 = *(_QWORD *)v8;
          goto LABEL_51;
        }
        if ( (*(_QWORD *)v8 & 0xC00LL) != 0x800 )
        {
          v25 = *(_QWORD *)v8;
LABEL_117:
          if ( (v25 & 0x400) == 0 )
          {
            if ( (v53 & 2) != 0 )
            {
              v65 = v25;
              if ( (v25 & 8) == 0 )
              {
                v34 = v25;
                v35 = v25;
                v25 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
                if ( (v34 & 4) != 0 )
                  v25 = v35;
              }
              if ( v25 )
                MiReleasePageFileInfo(*((struct _KEVENT **)&v56 + 1), v25, 1LL);
            }
            else if ( (v53 & 4) != 0 )
            {
              DemandZeroPte = MiMakeDemandZeroPte(24);
              if ( v37 != DemandZeroPte )
              {
                MiReleasePageFileSpace(*((struct _KEVENT **)&v56 + 1), v37, 1);
                *(_QWORD *)v8 = MiMakeGlobalSubsectionPte(BugCheckParameter2a[1], v8);
              }
            }
            else if ( (v25 & 0x800) == 0 && v25 )
            {
              KeBugCheckEx(0xDEu, 4uLL, BugCheckParameter2a[1], v8, v25);
            }
          }
LABEL_70:
          v8 += 8LL;
LABEL_71:
          v10 = v52;
          goto LABEL_72;
        }
        if ( !v19 || !qword_140E2D8C0 || (qword_140E2D8C0 & v19) != 0 )
        {
          v20 = *(_QWORD *)v8;
          if ( qword_140E2D8C0 )
          {
            v20 = v19 & 0xFFFFFFFFFFFFFFEFuLL;
            if ( (v19 & 0x10) == 0 )
              v20 = qword_140E2D8C8 & v19;
          }
LABEL_51:
          v21 = (v20 >> 12) & 0xFFFFFFFFFFLL;
          if ( v21 <= qword_140E2D920 && ((*(_QWORD *)(48 * v21 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
            break;
        }
      }
      v22 = 48 * v21 - 0x220000000000LL;
      v23 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v23 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v23);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v22 + 24) < 0 );
      }
      if ( *(_QWORD *)v8 == v19 )
        break;
      v9 = 0x7FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    ThreadLock = stru_140E2ED08.ThreadLock;
    if ( (*(_DWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v22 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x20) != 0 )
      v22 = MiLockSpecialPurposeMemoryCachedPage(v22, 0);
    v25 = *(_QWORD *)v8;
    if ( !v22 )
      goto LABEL_117;
    if ( (v25 & 1) == 0 )
    {
      v26 = MiPurgeCandidate((int *)&v53, v8, *(_QWORD *)v8);
      LODWORD(a5) = v26;
      if ( v26 < 0 )
      {
        if ( BYTE12(v53) != 17 )
          _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v26 == -1073741800 )
        {
          v38 = -1073741800;
          goto LABEL_133;
        }
        if ( v26 != -1073741267 )
          v8 += 8LL;
        LODWORD(a5) = 0;
        goto LABEL_71;
      }
      if ( v17 && (unsigned __int16)*(_DWORD *)(v22 + 32) && (*(_DWORD *)(v22 + 16) & 0x400LL) == 0 )
        MiChargeCommit(*(ULONG **)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v22 + 40) >> 43) & 0x3FFLL)), 1uLL, 4u);
      v27 = (unsigned __int64 *)(v8 + 8);
      v28 = 8;
      v29 = v66;
      if ( v8 + 8 < v66 )
      {
        while ( ((unsigned __int16)v27 & 0xFFF) != 0 )
        {
          v30 = *v27;
          if ( (*v27 & 1) == 0 )
          {
            if ( (*v27 & 0xC00) == 0x800 )
            {
              if ( qword_140E2D8C0 )
              {
                v31 = qword_140E2D8C8 & v30;
                v30 &= ~0x10uLL;
                if ( (*v27 & 0x10) == 0 )
                  v30 = v31;
              }
              if ( ((v30 >> 12) & 0xFFFFFFF0) == (((v22 + 0x220000000000LL) / 48) & 0xFFFFFFF0LL) )
              {
                v32 = 1;
                goto LABEL_97;
              }
            }
            v29 = v66;
          }
          if ( --v28 )
          {
            if ( (unsigned __int64)++v27 < v29 )
              continue;
          }
          break;
        }
      }
      v32 = 0;
LABEL_97:
      if ( (unsigned int)MiDeleteTransitionPte(v8, v22, 0x11u, v32) == 3 && (v67 & 2) != 0 )
        ++*(_QWORD *)(v5 + 32);
      ++*(_QWORD *)v5;
      if ( v17 )
      {
        SubsectionPte = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC1FuLL | (16LL * (a1->QuantumTarget & 0x3E));
        if ( qword_140E2D8C0 )
        {
          if ( (qword_140E2D8C0 & SubsectionPte) != 0 )
            SubsectionPte |= 0x10uLL;
          else
            SubsectionPte |= qword_140E2D8C0;
        }
        if ( HIDWORD(a1->QuantumTarget) )
        {
          v9 = (unsigned int)((__int64)(v8 - (unsigned __int64)a1->Header.WaitListHead.Flink) >> 3) << 24;
          if ( (unsigned int)v9 < ((LODWORD(a1->QuantumTarget) >> 20) | (LODWORD(a1->InitialStack) << 9)) )
            SubsectionPte = MiMakeSubsectionPte(a1);
        }
        *(_QWORD *)v8 = SubsectionPte;
      }
      v10 = v52;
      if ( (*(_DWORD *)(v52 + 56) & 0xA0) == 0x80 && !*(_QWORD *)(v52 + 32) )
        goto LABEL_132;
      v8 += 8LL;
      if ( (*(_BYTE *)v5 & 0xF) == 0 && ((**((_QWORD **)&v54 + 1) & 0xFFFFFFFFFFELL) != 0 || KeShouldYieldProcessor()) )
      {
        MiUnlockProtoPoolPage(*((__int64 *)&v54 + 1), BYTE12(v53), v9);
        BYTE12(v53) = 17;
      }
LABEL_72:
      if ( v8 >= v66 )
        goto LABEL_132;
      v6 = v67;
      continue;
    }
    break;
  }
  if ( (v67 & 2) != 0 )
  {
    MiPurgeValidPage(ThreadLock, v25, v5);
    _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_70;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v38 = -1073741800;
LABEL_133:
  if ( BYTE12(v53) != 17 )
    MiUnlockProtoPoolPage(*((__int64 *)&v54 + 1), BYTE12(v53), v9);
  if ( (BYTE8(v53) & 0x10) != 0 )
  {
    v39 = *(_QWORD *)&a1->Header.Lock;
    v40 = *(_QWORD *)v5;
    v41 = (volatile LONG *)(*(_QWORD *)&a1->Header.Lock + 72LL);
    v42 = ExAcquireSpinLockExclusive(v41);
    DWORD2(v58) &= ~2u;
    v43 = v42;
    MiUnlinkSubsectionWaitBlock(a1, (char *)&v57 + 8, 1LL);
    if ( (BYTE8(v58) & 4) != 0 )
    {
      KeAbPostRelease((unsigned __int64)a1);
      DWORD2(v58) &= ~4u;
    }
    if ( (*(_DWORD *)(v39 + 56) & 0x20) != 0 )
    {
      SListFaultAddress = *(_DWORD **)(v39 + 80);
      goto LABEL_146;
    }
    QuantumTarget = a1->QuantumTarget;
    if ( v40 )
    {
      v47 = QuantumTarget | 0x40000;
      goto LABEL_144;
    }
    if ( HIDWORD(a1->InitialStack) == HIDWORD(a1->StackLimit) )
    {
      v47 = QuantumTarget & 0xFFFBFFFF;
LABEL_144:
      LODWORD(a1->QuantumTarget) = v47;
    }
    SListFaultAddress = a1->SListFaultAddress;
LABEL_146:
    while ( SListFaultAddress )
    {
      if ( SListFaultAddress != (_DWORD *)((char *)&v57 + 8) )
      {
        v48 = SListFaultAddress[2];
        if ( (v48 & 0x3C0) != 0 )
        {
          if ( SListFaultAddress[3] != 2 )
            SListFaultAddress[3] = ((v58 & 0x200) != 0) + 1;
          if ( (v48 & 0x40) == 0 )
            KeSignalGate((__int64)(SListFaultAddress + 6), 1LL, v44);
        }
      }
      SListFaultAddress = *(_DWORD **)SListFaultAddress;
    }
    if ( v43 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v41);
    else
      ExReleaseSpinLockExclusive(v41, v43);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v49);
    DWORD2(v58) &= ~8u;
  }
  v50 = *(_QWORD *)(v5 + 16);
  if ( v50 )
    *(_QWORD *)(v5 + 32) += MiDeleteSubsectionLargePages(a1, v50, *(_QWORD *)(v5 + 24));
  return v38;
}
