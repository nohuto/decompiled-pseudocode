/*
 * XREFs of MiWsleFlush @ 0x14032C540
 * Callers:
 *     MiFreeWsleList @ 0x14032AE80 (MiFreeWsleList.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiFlushSingleTbEntry @ 0x1402845B0 (MiFlushSingleTbEntry.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029B1F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiLockNestedPageTable @ 0x14029E130 (MiLockNestedPageTable.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiPteForTrimmedProto @ 0x1402B3394 (MiPteForTrimmedProto.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402D0080 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiMakeTransitionPte @ 0x1402EFC80 (MiMakeTransitionPte.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14031E2BC (MiWritePteShadow.c)
 *     MiUnlockNestedPageTableWritePte @ 0x140327678 (MiUnlockNestedPageTableWritePte.c)
 *     MiLockVadTree @ 0x140328600 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x140328760 (MiLocateAddress.c)
 *     MiSanitizeShadowPxe @ 0x140344188 (MiSanitizeShadowPxe.c)
 *     MiReservePageFileSpace @ 0x140368E88 (MiReservePageFileSpace.c)
 *     MI_IS_RESET_PTE @ 0x140369B90 (MI_IS_RESET_PTE.c)
 *     MiGetWorkingSetSwapSupport @ 0x14036A16C (MiGetWorkingSetSwapSupport.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiWsleFlush(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r11
  __int64 v5; // r14
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  _KPROCESS *v8; // rax
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rbp
  unsigned int v14; // r15d
  int v15; // r12d
  __int64 v16; // r13
  unsigned int v17; // edi
  __int64 result; // rax
  __int64 v19; // r8
  struct _LIST_ENTRY *Address; // r15
  __int64 Process; // rdx
  volatile signed __int32 *v22; // rcx
  signed __int32 v23; // eax
  signed __int32 v24; // ett
  unsigned __int64 i; // r14
  unsigned int Flink; // eax
  unsigned __int64 v27; // r8
  __int64 v28; // rcx
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // rax
  int v32; // edx
  __int64 *v33; // r9
  unsigned __int64 j; // rcx
  __int64 v35; // r10
  unsigned __int64 v36; // r11
  __int64 PteShadow; // rax
  unsigned __int64 TransitionPte; // rax
  unsigned __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rax
  unsigned __int64 v43; // r8
  char v44; // cl
  _KPROCESS *v45; // r8
  unsigned __int64 v46; // r9
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 v52; // r8
  char v53; // cl
  _KPROCESS *v54; // r8
  unsigned __int64 v55; // r9
  __int64 *v56; // r9
  __int64 v57; // rax
  int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // r9
  unsigned __int64 v62; // r10
  unsigned __int64 v63; // rax
  __int64 v64; // rdx
  unsigned __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // [rsp+20h] [rbp-58h]
  __int64 retaddr; // [rsp+78h] [rbp+0h]
  __int64 v69; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v70; // [rsp+88h] [rbp+10h]
  int v71; // [rsp+90h] [rbp+18h]
  __int64 v72; // [rsp+98h] [rbp+20h]

  v72 = a4;
  v71 = a3;
  v70 = a2;
  v69 = a1;
  v4 = 0xFFFFF68000000000uLL;
  v5 = a1;
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = *(_QWORD *)v6;
  if ( v6 >= 0xFFFFF6FB7DBED000uLL
    && v6 <= 0xFFFFF6FB7DBED7F8uLL
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    v8 = MiPteHasShadow();
    if ( v8 )
    {
      KernelWaitTime = v8[2].KernelWaitTime;
      if ( KernelWaitTime )
      {
        v10 = *(_QWORD *)(KernelWaitTime + 8 * ((v6 >> 3) & 0x1FF));
        if ( (v10 & 0x20) != 0 )
          v7 |= 0x20uLL;
        v11 = v7;
        v7 |= 0x42uLL;
        if ( (v10 & 0x42) == 0 )
          v7 = v11;
      }
    }
  }
  v12 = (v7 >> 12) & 0xFFFFFFFFFFLL;
  v67 = v12;
  v13 = 48 * v12 - 0x220000000000LL;
  if ( (*(_QWORD *)(v13 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && *(__int64 *)(v13 + 40) >= 0 )
    return 0LL;
  v14 = 1;
  if ( (*(_DWORD *)(v5 + 184) & 0xF) != 0 )
  {
    if ( (unsigned __int16)*(_DWORD *)(v13 + 32) > 1u )
      return 0LL;
    v15 = 0;
    v16 = 48 * v12 - 0x220000000000LL;
    v17 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v17 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v17);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v13 + 24) < 0 );
    }
    if ( (*(_QWORD *)(v13 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && *(__int64 *)(v13 + 40) >= 0
      || (unsigned __int16)*(_DWORD *)(v13 + 32) > 1u )
    {
      if ( v13 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        return 0LL;
      }
      return 0LL;
    }
    goto LABEL_67;
  }
  v15 = 0;
  v16 = 0LL;
  if ( *(__int64 *)(v13 + 40) >= 0
    && v6 <= v4 + 0x3FFFFFFF78LL
    && v6 >= v4
    && (v7 & 0x42) != 0
    && (*(_DWORD *)(v5 - 524) & 0x8000) != 0
    && (*(_DWORD *)(v5 - 524) & 0x20) == 0 )
  {
    MiLockVadTree(1u, a2, a3);
    Address = MiLocateAddress(v70);
    Process = (__int64)KeGetCurrentThread()->ApcState.Process;
    v22 = (volatile signed __int32 *)(*(_QWORD *)(Process + 1040) + 1132LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0
      || (Process = (unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
    {
      _InterlockedAnd(v22, 0xBFFFFFFF);
      _InterlockedDecrement(v22);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v22, retaddr);
    }
    if ( Address && ((__int64)Address[3].Flink & 0x180000) == 0x180000 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        _m_prefetchw(&Address[4]);
        v24 = (__int64)Address[4].Flink & 0x7FFFFFFF;
        v23 = _InterlockedCompareExchange((volatile signed __int32 *)&Address[4], v24 + 1, v24);
        if ( v24 != v23 )
        {
          while ( v23 >= 0 )
          {
            Process = (unsigned int)v23;
            v23 = _InterlockedCompareExchange((volatile signed __int32 *)&Address[4], v23 + 1, v23);
            if ( v23 == (_DWORD)Process )
              goto LABEL_50;
          }
          LOBYTE(Process) = -1;
          ExpWaitForSpinLockSharedAndAcquire((signed __int32 *)&Address[4], Process, v19);
        }
      }
      else
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&Address[4], 0xFFu);
      }
LABEL_50:
      for ( i = (unsigned __int64)Address[3].Blink & 0xFFFFFFFFFFFFFFF0uLL; i; i = *(_QWORD *)i )
      {
        if ( (*(_BYTE *)(i + 8) & 4) != 0 )
          break;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        _InterlockedAnd((volatile signed __int32 *)&Address[4], 0xBFFFFFFF);
        _InterlockedDecrement((volatile signed __int32 *)&Address[4]);
      }
      else
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&Address[4], retaddr);
      }
      Flink = (unsigned int)Address[3].Flink;
      v27 = MiVadPageSizes[(Flink >> 17) & 3];
      if ( v27 < 0x200 )
      {
        v28 = 1LL;
        if ( (Flink & 0x200000) != 0 )
          v28 = MiVadPageSizes[(LODWORD(Address[3].Flink) >> 17) & 3];
        v27 = v28;
      }
      v29 = ((v70 >> 12) - (LODWORD(Address[1].Blink) | ((unsigned __int64)LOBYTE(Address[2].Flink) << 32))) / v27;
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(i + 40));
      *(_BYTE *)((v29 >> 3) + *(_QWORD *)(i + 32)) |= 1 << (v29 & 7);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        *(_DWORD *)(i + 40) = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(i + 40), retaddr);
      v5 = v69;
    }
    v14 = 1;
LABEL_67:
    v12 = v67;
    LOBYTE(a3) = v71;
    a2 = v70;
    v4 = 0xFFFFF68000000000uLL;
  }
  v30 = v7 & 0xFFFFFFFFFFFFFFFBuLL;
  if ( *(__int64 *)(v13 + 40) < 0 )
  {
    v31 = MiPteForTrimmedProto(v5, a2, a3);
    goto LABEL_115;
  }
  if ( a2 >= v4 && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    MiLockNestedPageTable(v5, v6);
    if ( (*(_QWORD *)(v13 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    {
      v32 = 0;
      v33 = (__int64 *)v70;
      for ( j = (__int64)(v70 << 25) >> 16; j >= 0xFFFFF68000000000uLL; j = (__int64)(j << 25) >> 16 )
      {
        if ( j > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        ++v32;
      }
      if ( (unsigned int)(v32 - 1) > 1 )
      {
LABEL_83:
        TransitionPte = MiMakeTransitionPte(v67, (*(_DWORD *)(v13 + 16) >> 5) & 0x1F);
        MiUnlockNestedPageTableWritePte(v5, v6, TransitionPte, 0);
LABEL_148:
        if ( v16 )
          _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( *(__int64 *)(v13 + 40) >= 0 && ((*(_QWORD *)(v13 + 40) >> 60) & 7) != 4 )
        {
          v59 = *(_QWORD *)(v13 + 16);
          if ( (v59 & 1) == 0
            && (!v59 || !qword_140E2D8C0 || (v59 & qword_140E2D8C0) != 0)
            && *(_DWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v13 + 40) >> 43) & 0x3FFLL))
                         + 1180LL)
            && (v59 & 4) == 0
            && !MiGetWorkingSetSwapSupport(v5, v59) )
          {
            if ( !(unsigned int)MI_IS_RESET_PTE(v60) || (*(_BYTE *)(v13 + 34) & 0x10) != 0 )
              goto LABEL_166;
            v63 = *(_QWORD *)v6;
            if ( v6 >= v62 && v6 <= 0xFFFFF6FB7DBED7F8uLL )
              LOBYTE(v63) = MiReadPteShadow(v6, *(_QWORD *)v6);
            if ( (v63 & 0x42) != 0 )
            {
LABEL_166:
              if ( v6 <= 0xFFFFF6BFFFFFFF78uLL && v6 >= 0xFFFFF68000000000uLL )
                MiReservePageFileSpace(v61, v6, v5);
            }
          }
        }
        goto LABEL_168;
      }
      v35 = 0x1000000000000081LL;
      v36 = 0xFFFFF6FB7DBED7F8uLL;
      while ( 1 )
      {
        PteShadow = *v33;
        if ( (unsigned __int64)v33 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v33 <= v36 )
          PteShadow = MiReadPteShadow((unsigned __int64)v33, *v33);
        if ( (v35 & PteShadow) == v35 )
          break;
        ++v33;
        if ( (unsigned int)++v15 >= 0x200 )
          goto LABEL_83;
      }
    }
    MiUnlockPageTableInternal(v5, v6);
    if ( v16 )
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  if ( ((*(_QWORD *)(v13 + 40) >> 60) & 7) != 4 || (_UNKNOWN *)v5 != &unk_140E37200 )
  {
    v31 = MiMakeTransitionPte(v12, (*(_DWORD *)(v13 + 16) >> 5) & 0x1F);
LABEL_115:
    v49 = v31;
    v50 = *(_QWORD *)v6;
    if ( v6 < 0xFFFFF6FB7DBED000uLL
      || v6 > 0xFFFFF6FB7DBED7F8uLL
      || (MiFlags & 0x1800000) == 0
      || (CurrentThread = KeGetCurrentThread(),
          v52 = (unsigned __int64)CurrentThread->ApcState.Process,
          *(_BYTE *)(v52 + 352) == 1) )
    {
      CurrentThread = (struct _KTHREAD *)MiFlags;
      v52 = ((unsigned __int64)MiFlags >> 28) & 3;
      if ( v52 > 1 )
      {
        if ( (MiFlags & 0x8000000) != 0 )
          _mm_lfence();
      }
      else if ( v52 )
      {
        CurrentThread = (struct _KTHREAD *)0xFFFFF6FB40000000LL;
        if ( v6 >= 0xFFFFF6FB40000000uLL )
        {
          CurrentThread = (struct _KTHREAD *)0xFFFFF6FB7FFFFFFFLL;
          if ( v6 <= 0xFFFFF6FB7FFFFFFFuLL && (v50 & 0x80u) == 0LL )
            LOBYTE(v50) = v50 | 0x20;
        }
      }
      else
      {
        LOBYTE(v50) = v50 | 0x20;
      }
    }
    else
    {
      LOBYTE(v50) = v50 | 0x20;
    }
    if ( (v50 & 0x20) != 0 )
    {
      v69 = v49;
      if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        v58 = MiSanitizeShadowPxe(CurrentThread, &v69, v52);
        v49 = v69;
        v15 = v58;
      }
      *(_QWORD *)v6 = v49;
      if ( v15 )
        MiWritePteShadow();
    }
    else
    {
      if ( (MiFlags & 0x8000000) != 0 )
        _mm_lfence();
      v53 = _InterlockedExchange64((volatile __int64 *)v6, v49);
      if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x1800000) != 0 )
      {
        v54 = KeGetCurrentThread()->ApcState.Process;
        if ( v54->AddressPolicy != 1 )
        {
          if ( v54 )
          {
            v55 = v54[2].KernelWaitTime;
            if ( v55 )
            {
              v56 = (__int64 *)(v55 + 8 * ((v6 >> 3) & 0x1FF));
              v57 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
              if ( (v49 & 1) != 0 )
                v57 = v49 & 0x7FFFFFFFFFFFFFFFLL;
              *v56 = v57;
            }
          }
        }
      }
      if ( (v53 & 0x20) == 0 )
        v14 = 0;
    }
    goto LABEL_148;
  }
  v39 = MiMapPageInHyperSpaceWorker(v12, 0LL, 0x80000000);
  v40 = *(_QWORD *)v39;
  v30 |= 4uLL;
  *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
  *(_QWORD *)(((v39 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v41 = v40 | 0x400000000000000LL;
  v42 = *(_QWORD *)v6;
  v43 = ((unsigned __int64)MiFlags >> 28) & 3;
  if ( v43 > 1 )
  {
    if ( (MiFlags & 0x8000000) != 0 )
      _mm_lfence();
  }
  else if ( v43 )
  {
    if ( v6 >= 0xFFFFF6FB40000000uLL && v6 <= 0xFFFFF6FB7FFFFFFFuLL && (v42 & 0x80u) == 0LL )
      LOBYTE(v42) = v42 | 0x20;
  }
  else
  {
    LOBYTE(v42) = v42 | 0x20;
  }
  if ( (v42 & 0x20) != 0 )
  {
    *(_QWORD *)v6 = v41;
LABEL_113:
    v70 &= 0xFFFFFFFFFFFFF000uLL;
    MiFlushSingleTbEntry(v70, 1LL);
    v14 = 0;
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_168;
  }
  if ( (MiFlags & 0x8000000) != 0 )
    _mm_lfence();
  v44 = _InterlockedExchange64((volatile __int64 *)v6, v41);
  if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x1800000) != 0 )
  {
    v45 = KeGetCurrentThread()->ApcState.Process;
    if ( v45->AddressPolicy != 1 )
    {
      if ( v45 )
      {
        v46 = v45[2].KernelWaitTime;
        if ( v46 )
        {
          v47 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
          v48 = (v6 >> 3) & 0x1FF;
          if ( (v41 & 1) != 0 )
            v47 = v41 & 0x7FFFFFFFFFFFFFFFLL;
          *(_QWORD *)(v46 + 8 * v48) = v47;
        }
      }
    }
  }
  if ( (v44 & 0x20) != 0 )
    goto LABEL_113;
  v14 = 0;
  _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_168:
  v64 = v72;
  v65 = v70;
  *(_QWORD *)(v72 + 8LL * *(unsigned int *)(v72 + 12376) + 12384) = v30;
  v66 = *(unsigned int *)(v64 + 16488);
  ++*(_DWORD *)(v64 + 12376);
  *(_QWORD *)(v64 + 8 * v66 + 16496) = v65;
  result = v14;
  ++*(_DWORD *)(v64 + 16488);
  return result;
}
