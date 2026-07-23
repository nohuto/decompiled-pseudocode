/*
 * XREFs of MiAcquireCachedPageLocks @ 0x1403A3520
 * Callers:
 *     MmCheckCachedPageStates @ 0x1402C8850 (MmCheckCachedPageStates.c)
 *     MiResolveCachedPageHardFault @ 0x14033BBFC (MiResolveCachedPageHardFault.c)
 *     MiCachedPagesMakeHot @ 0x1406FA5F0 (MiCachedPagesMakeHot.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029B1F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseCachedPageLocks @ 0x1402CBF70 (MiReleaseCachedPageLocks.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402D0080 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiChargePartitionResidentAvailable @ 0x1402D8150 (MiChargePartitionResidentAvailable.c)
 *     MiChargeCommit @ 0x1402D8520 (MiChargeCommit.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 *     MiGetLeafPfnBuddy @ 0x14040AE80 (MiGetLeafPfnBuddy.c)
 *     MiSpinForProtoPoolLock @ 0x14040AEE0 (MiSpinForProtoPoolLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

unsigned __int64 __fastcall MiAcquireCachedPageLocks(__int64 a1, ULONG_PTR a2)
{
  _DWORD *v2; // rbp
  __int64 v3; // r13
  void *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rbx
  unsigned int v7; // r15d
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx
  unsigned int Number; // eax
  unsigned int v11; // eax
  _DWORD *v12; // rdi
  unsigned int v13; // r14d
  unsigned __int8 v14; // si
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  _DWORD *MmInternal; // rcx
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 v19; // rdx
  signed __int64 v20; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  char v22; // al
  unsigned int v23; // ecx
  ULONG *v24; // r8
  _KSPIN_LOCK_QUEUE *volatile *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  _KPROCESS *v28; // rax
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  char v32; // si
  unsigned __int64 v33; // rdi
  unsigned __int32 v34; // edx
  volatile signed __int32 *v35; // rdi
  int v36; // r12d
  bool v37; // zf
  signed __int32 v38; // eax
  unsigned __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // rdx
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rcx
  unsigned __int64 result; // rax
  BOOL v45; // r12d
  unsigned __int64 v46; // r14
  volatile signed __int64 *v47; // r8
  unsigned __int64 v48; // rsi
  unsigned __int64 *v49; // rdx
  unsigned __int64 v50; // rdi
  unsigned __int64 ContainingPageTable; // rdi
  __int64 v52; // rbx
  unsigned __int64 v53; // rax
  int v54; // eax
  __int64 v55; // rcx
  int v56; // edx
  unsigned __int64 v57; // rax
  signed __int64 i; // rcx
  char v59; // si
  __int64 v60; // rax
  ULONG *v61; // rdi
  struct _KPRCB *v62; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v64; // ett
  signed __int64 v65; // rax
  __int64 LeafPfnBuddy; // rax
  int v67; // ecx
  signed __int32 v68; // eax
  _QWORD *v69; // rcx
  int v70; // [rsp+60h] [rbp+0h] BYREF

  v2 = (_DWORD *)((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL);
  v3 = a1;
  *(_QWORD *)(((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
  while ( 1 )
  {
    v4 = &unk_140E3D680;
    v5 = 0x7FFFFFFFF8LL;
    v6 = (*(_QWORD *)v3 >> 9) & 0x7FFFFFFFF8LL;
    *(_QWORD *)(v3 + 40) = &unk_140E3D680;
    v7 = 0;
    v8 = v6 - 0x98000000000LL;
    if ( (dword_140E3D738 & 0xFu) > 5 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v4) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v4);
      }
    }
    else
    {
      v9 = qword_140E3D740;
      Number = KeGetPcr()->Prcb.Number;
      if ( (dword_140E3D738 & 0xF) == 1 )
        v9 = qword_140E37980;
      v11 = (Number >> 1) & 3;
      v12 = (_DWORD *)(v9 + ((unsigned __int64)v11 << 6));
      v13 = v11;
      v14 = KeGetCurrentIrql();
      if ( v14 != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v9) = 2;
        KiRaiseIrqlProcessIrqlFlags(v14, v9);
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        _m_prefetchw(v12);
        v15 = *v12 & 0x7FFFFFFF;
        while ( 1 )
        {
          v16 = v15;
          v15 = _InterlockedCompareExchange(v12, v15 + 1, v15);
          if ( v16 == v15 )
            break;
          if ( v15 < 0 )
          {
            ExpWaitForSpinLockSharedAndAcquire(v12, v14, v5);
            break;
          }
        }
      }
      else
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v12, v14);
      }
      MmInternal = KeGetCurrentPrcb()->MmInternal;
      if ( MmInternal )
        MmInternal[81] = v13;
      CurrentIrql = v14;
    }
    *(_BYTE *)(v3 + 52) = CurrentIrql;
    if ( v8 == 0xFFFFF6FB7DBEDF68uLL )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v22 = dword_140E3D738 & 0xF;
      if ( (dword_140E3D738 & 0xF) != 0 )
      {
        if ( v22 == 7 )
        {
          v23 = 1;
          v24 = &MiState + 2280;
        }
        else
        {
          v23 = 3;
          if ( v22 == 5 )
            v23 = 0;
          v24 = &MiState + 2 * v23 + 2278;
        }
      }
      else
      {
        v23 = 2;
        v24 = (ULONG *)&unk_140E3D730;
      }
      v25 = &CurrentPrcb->SelfmapLockHandle[0].LockQueue.Next + 2 * v23 + v23;
      *((_QWORD *)v25 + 1) = v24;
      *v25 = 0LL;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        v26 = _InterlockedExchange64((volatile __int64 *)v24, (__int64)v25);
        if ( v26 )
          KxWaitForLockOwnerShip((volatile signed __int64)v25, v26, (__int64)v24);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented((__int64)v25, (volatile __int64 *)v24);
      }
    }
    else if ( (dword_140E3D738 & 0xF) != 0
           || v8 < 0xFFFFF6FB7DBED000uLL
           || v8 > 0xFFFFF6FB7DBEDFFFuLL
           || (v27 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
    {
      if ( (dword_140E3D738 & 0xF) != 0 && v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        *v2 = 0;
        v32 = (2 * ((__int64)(v8 + 0x90482413000LL) >> 3)) & 0x1F;
        v33 = ((unsigned __int64)(2 * (unsigned int)((__int64)(v8 + 0x90482413000LL) >> 3)) >> 5) + 1467;
        v34 = *(&MiState + v33);
        v35 = (volatile signed __int32 *)(&MiState + v33);
        v36 = 2 << v32;
        do
        {
          while ( ((v34 >> v32) & 1) != 0 )
          {
            if ( ((v34 >> v32) & 2) != 0 )
            {
              do
              {
                KeYieldProcessorEx((_DWORD *)((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL));
                v34 = *v35;
              }
              while ( (((unsigned __int32)*v35 >> v32) & 1) != 0 );
            }
            else
            {
              v67 = v34 | v36;
              v68 = _InterlockedCompareExchange(v35, v34 | v36, v34);
              v37 = v34 == v68;
              v34 = v68;
              if ( v37 )
                v34 = v67;
            }
          }
          v38 = _InterlockedCompareExchange(v35, ~(2 << v32) & (v34 | (1 << v32)), v34);
          v37 = v34 == v38;
          v34 = v38;
        }
        while ( !v37 );
        v7 = 0;
      }
      else
      {
        v19 = *(_QWORD *)v8;
        *v2 = 0;
        if ( v8 >= 0xFFFFF6FB7DBED000uLL
          && v8 <= 0xFFFFF6FB7DBED7F8uLL
          && (v19 & 1) != 0
          && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
        {
          v28 = MiPteHasShadow();
          if ( v28 )
          {
            KernelWaitTime = v28[2].KernelWaitTime;
            if ( KernelWaitTime )
            {
              v30 = *(_QWORD *)(KernelWaitTime + 8 * ((v8 >> 3) & 0x1FF));
              if ( (v30 & 0x20) != 0 )
                v19 |= 0x20uLL;
              v31 = v19;
              v19 |= 0x42uLL;
              if ( (v30 & 0x42) == 0 )
                v19 = v31;
            }
          }
        }
        while ( (v19 & 1) != 0 )
        {
          if ( (v19 & 0x1000000000000000LL) != 0 )
          {
            if ( ((v19 >> 60) & 2) != 0 )
            {
              do
              {
                KeYieldProcessorEx((_DWORD *)((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL));
                v19 = *(_QWORD *)v8;
              }
              while ( (*(_QWORD *)v8 & 0x1000000000000000LL) != 0 );
            }
            else
            {
              if ( (MiFlags & 0x8000000) != 0 )
                _mm_lfence();
              v65 = _InterlockedCompareExchange64((volatile signed __int64 *)v8, v19 | 0x2000000000000000LL, v19);
              if ( v19 == v65 )
                v19 |= 0x2000000000000000uLL;
              else
                v19 = v65;
            }
          }
          else
          {
            if ( (MiFlags & 0x8000000) != 0 )
              _mm_lfence();
            v20 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)v8,
                    v19 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
                    v19);
            if ( v19 == v20 )
              break;
            v19 = v20;
          }
        }
        v3 = a1;
      }
    }
    else
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v27 + 4 * ((v8 >> 3) & 0x1FF)));
    }
    v39 = (__int64)((*(_QWORD *)v3 << 25) - *(_QWORD *)(((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL) + 8)) >> 16;
    *(_QWORD *)(v3 + 56) = v8;
    v40 = *(_QWORD *)(48 * ((*(_QWORD *)(((v39 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFFLL)
                    - 0x220000000000LL) >> 1;
    LODWORD(v40) = v40 & 0x7FFFFFFF;
    v41 = v40 | ((unsigned __int64)(*(_DWORD *)(48
                                              * ((*(_QWORD *)(((v39 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFFLL)
                                              - 0x220000000000LL
                                              + 36) & 0x3FF0000) << 15);
    if ( v41 )
    {
      if ( (unsigned __int64)(v41 - 0x10000000000LL) <= 1 )
      {
        if ( v41 == 0x10000000001LL && PsInitialSystemProcess )
          v41 = (__int64)PsInitialSystemProcess;
      }
      else
      {
        v41 = qword_140E37D10 + 16 * (v41 - 1);
      }
      if ( v41 )
        v41 += 40 * ((v39 >> 18) & 7);
    }
    else
    {
      v41 = 0LL;
    }
    v42 = *(_QWORD *)(v41 + 24);
    v43 = v42 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v42 & 1) == 0 )
      v43 = v42;
    result = stru_140E2ED08.ThreadLock;
    *(_QWORD *)(v3 + 40) = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(*(_QWORD *)v43 + 60LL) & 0x3FF))
                         + 22592LL;
    if ( !a2 )
      return result;
    v45 = a2 >= 0xFFFF800000000000uLL && *((_BYTE *)&MiState + ((a2 >> 39) & 0x1FF) + 46064) == 4;
    v46 = a2 & 0xFFFFFFFFFFFFLL;
    if ( !v45 )
    {
      v47 = (volatile signed __int64 *)0xFFFFF68000000000LL;
      goto LABEL_72;
    }
    ContainingPageTable = MiGetContainingPageTable(a2);
    v48 = v46 >> 9;
LABEL_92:
    v52 = 48 * ContainingPageTable - 0x220000000000LL;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v52 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v7 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v7);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v52 + 24) < 0 );
    }
    if ( !v45 )
    {
      v47 = (volatile signed __int64 *)0xFFFFF68000000000LL;
      v53 = *(_QWORD *)((v48 & 0x7FFFFFFFFFFFF8LL) - 0x98000000000LL);
      if ( (v53 & 1) == 0 || (v53 & 0x200) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v52 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        *(_QWORD *)(v3 + 32) = 0LL;
        goto LABEL_80;
      }
      if ( ContainingPageTable != ((v53 >> 12) & 0xFFFFFFFFFFLL) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v52 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v7 = 0;
LABEL_72:
        v48 = v46 >> 9;
        v49 = (unsigned __int64 *)(((v46 >> 9) & 0x7FFFFFFFFFFFF8LL) - 0x98000000000LL);
        while ( 1 )
        {
          v50 = *v49;
          if ( (*v49 & 1) == 0 || (v50 & 0x200) != 0 )
            break;
          ContainingPageTable = (v50 >> 12) & 0xFFFFFFFFFFLL;
          if ( ContainingPageTable <= qword_140E2D920
            && (*(_QWORD *)(48 * ContainingPageTable - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
          {
            goto LABEL_92;
          }
        }
        *(_QWORD *)(v3 + 32) = 0LL;
        goto LABEL_80;
      }
      if ( (*(_QWORD *)(v52 + 40) & 0x10000000000LL) != 0 || (*(_QWORD *)(v52 + 40) & 0x20000000000000LL) != 0 )
      {
LABEL_105:
        *(_DWORD *)(v52 + 32) = (*(_DWORD *)(v52 + 32) + 1) ^ ((*(_DWORD *)(v52 + 32) + 1) ^ *(_DWORD *)(v52 + 32)) & 0xFFFF0000;
        goto LABEL_106;
      }
      v54 = *(_DWORD *)(v52 + 32);
      v55 = *(_QWORD *)(v52 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      v56 = 0;
      if ( (_WORD)v54 )
      {
        if ( (_WORD)v54 == 1 )
        {
          if ( v55 || (*(_BYTE *)(v52 + 34) & 8) != 0 )
            v56 = 1;
          if ( !v56 )
            goto LABEL_105;
        }
        else if ( (_WORD)v54 != 2 || !v55 || (*(_BYTE *)(v52 + 34) & 8) == 0 )
        {
          goto LABEL_105;
        }
      }
      v59 = 0;
      if ( *(__int64 *)(v52 + 40) < 0 && (*(_DWORD *)(v52 + 16) & 0x400LL) != 0
        || (*(_QWORD *)(v52 + 8) | 0x8000000000000000uLL) <= 0xFFFFF6BFFFFFFF78uLL
        && (*(_QWORD *)(v52 + 8) | 0x8000000000000000uLL) >= 0xFFFFF68000000000uLL
        && (*(_BYTE *)(v52 + 35) & 0x20) != 0 )
      {
        v59 = 1;
      }
      v60 = (*(_QWORD *)(v52 + 40) >> 43) & 0x3FFLL;
      v61 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8 * v60);
      if ( !v59 || (unsigned int)MiChargeCommit(*(ULONG **)(stru_140E2ED08.ThreadLock + 8 * v60), 1uLL, 4u) )
      {
        if ( v61 == &MiSystemPartition )
        {
          v62 = KeGetCurrentPrcb();
          CachedResidentAvailable = v62->CachedResidentAvailable;
          while ( (unsigned int)(CachedResidentAvailable - 1) <= 0xFFFFFFFD )
          {
            v64 = CachedResidentAvailable;
            CachedResidentAvailable = _InterlockedCompareExchange(
                                        (volatile signed __int32 *)&v62->CachedResidentAvailable,
                                        CachedResidentAvailable - 1,
                                        CachedResidentAvailable);
            if ( v64 == CachedResidentAvailable )
              goto LABEL_105;
          }
        }
        if ( (unsigned int)MiChargePartitionResidentAvailable((__int64)v61, 1uLL, 0xFFFFFFFFLL) )
          goto LABEL_105;
        if ( v59 )
          MiReturnCommit((__int64)v61, 1LL, 0);
      }
    }
LABEL_106:
    memset_0(v2 + 16, 0, 0x40uLL);
    if ( (*(_BYTE *)(v52 + 34) & 0x20) != 0 )
    {
      *(_DWORD *)(((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0;
      LeafPfnBuddy = MiGetLeafPfnBuddy(v52, 1LL);
      if ( LeafPfnBuddy )
      {
        v69 = *(_QWORD **)(LeafPfnBuddy + 8);
        if ( *v69 != LeafPfnBuddy )
          __fastfail(3u);
        *(_QWORD *)(((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v69;
        *(_QWORD *)(((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = LeafPfnBuddy;
        *v69 = v2 + 16;
        *(_QWORD *)(LeafPfnBuddy + 8) = v2 + 16;
      }
      else
      {
        *(_QWORD *)(((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = ((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                             + 64;
        *(_QWORD *)(((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = ((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                             + 64;
        *(_QWORD *)v52 = ((unsigned __int64)(v2 + 16) >> 3) ^ (((unsigned __int64)(v2 + 16) >> 3) ^ *(_QWORD *)v52) & 0xFFFFF00000000001uLL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v52 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiSpinForProtoPoolLock(v2 + 16);
      *v2 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v52 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx((_DWORD *)((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL));
        while ( *(__int64 *)(v52 + 24) < 0 );
      }
    }
    else
    {
      *(_DWORD *)(v52 + 32) |= 0x200000u;
    }
    result = *(_QWORD *)(v52 + 24);
    if ( (result & 0x4000000000000000LL) == 0 )
    {
      result = *(_QWORD *)(v52 + 40);
      if ( (result & 0x10000000000LL) == 0 )
      {
        v57 = (__int64)((*(_QWORD *)(v52 + 8) << 25) - *(_QWORD *)(((unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFC0uLL) + 8)) >> 16;
        if ( v57 < 0xFFFF800000000000uLL
          || (result = ((v57 >> 39) & 0x1FF) - 256, *((_BYTE *)&MiState + result + 46320) != 4) )
        {
          v47 = (volatile signed __int64 *)(*(_QWORD *)(v52 + 8) | 0x8000000000000000uLL);
          result = *v47;
          if ( (*v47 & 0x20) == 0 )
          {
            for ( i = *v47; ; i = result )
            {
              v49 = (unsigned __int64 *)(i | 0x20);
              if ( (MiFlags & 0x8000000) != 0 )
                _mm_lfence();
              result = _InterlockedCompareExchange64(v47, (signed __int64)v49, i);
              if ( i == result )
                break;
            }
          }
        }
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(v52 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *(_QWORD *)(v3 + 32) = v52;
    if ( v52 )
      return result;
LABEL_80:
    MiReleaseCachedPageLocks(v3, (__int64)v49, (__int64)v47);
    MmAccessFault(2uLL, a2);
  }
}
