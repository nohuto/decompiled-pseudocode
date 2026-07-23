/*
 * XREFs of MiLockLowestValidPageTableEx @ 0x1402E2690
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x1402B4660 (MiGetWorkingSetInfoList.c)
 *     MiSharePagesLockPageTable @ 0x1402E932C (MiSharePagesLockPageTable.c)
 *     MiFinishHardFault @ 0x14031F860 (MiFinishHardFault.c)
 *     MiTranslatePageForCopy @ 0x14033ADCC (MiTranslatePageForCopy.c)
 *     MiTrimUnlockedVirtualAddreses @ 0x14035E7E0 (MiTrimUnlockedVirtualAddreses.c)
 *     MiDecommitLockNewPageTable @ 0x140363378 (MiDecommitLockNewPageTable.c)
 *     MiCommitPoolMemory @ 0x140366880 (MiCommitPoolMemory.c)
 *     MiRelockFaultState @ 0x14038DE50 (MiRelockFaultState.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14043ACA8 (MiDeprioritizeVirtualAddresses.c)
 *     MiSetPagesModified @ 0x140455A14 (MiSetPagesModified.c)
 *     MiLockStealUserVm @ 0x140458690 (MiLockStealUserVm.c)
 *     MiLockPoolCommitPageTable @ 0x14045E930 (MiLockPoolCommitPageTable.c)
 *     MiTrimViewLockProcessPte @ 0x140465EA0 (MiTrimViewLockProcessPte.c)
 *     MiUnlockVirtualAddreses @ 0x1404A3C98 (MiUnlockVirtualAddreses.c)
 *     MiConvertAndFlushWsleVas @ 0x1404AC2BC (MiConvertAndFlushWsleVas.c)
 *     MmUpdateUserShadowStackValue @ 0x1404DA2DC (MmUpdateUserShadowStackValue.c)
 *     MiComputeIdealLargePage @ 0x1404F1BFC (MiComputeIdealLargePage.c)
 *     MiSplitReducedCommitClonePage @ 0x14052EFB8 (MiSplitReducedCommitClonePage.c)
 *     MiDeleteBootRange @ 0x1406E827C (MiDeleteBootRange.c)
 *     MiProtectAweRegion @ 0x140706C04 (MiProtectAweRegion.c)
 *     MiScrubLargeMappedPage @ 0x140710CEC (MiScrubLargeMappedPage.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140248E20 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14024B4A0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiLockLowestValidPageTableEx(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, int a4)
{
  ULONG_PTR Process; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r12
  struct _KPRCB *CurrentPrcb; // r8
  char v9; // al
  unsigned int v10; // ecx
  __int64 i; // r15
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r8
  signed __int64 v14; // rbx
  int v15; // r14d
  unsigned __int64 v16; // rsi
  unsigned int v17; // ebp
  __int64 v18; // rax
  volatile signed __int64 v20; // rdx
  __int64 v21; // rbx
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned int v26; // ebx
  signed __int64 v27; // rax
  struct _KPRCB *v28; // r8
  char v29; // al
  unsigned int v30; // ecx
  __int64 HasShadow; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  struct _KPRCB *v36; // rdx
  char v37; // al
  __int64 v38; // rcx
  __int64 v39; // r12
  int v40; // eax
  signed __int64 v41; // rax
  char v42; // si
  volatile signed __int32 *v43; // rbx
  int v44; // r15d
  bool v45; // zf
  unsigned __int32 v46; // eax
  unsigned int v47; // r12d
  signed __int64 v48; // rax
  int v49; // ecx
  signed __int32 v50; // eax
  unsigned __int64 v51; // [rsp+30h] [rbp-68h] BYREF
  __int64 v52; // [rsp+38h] [rbp-60h]
  unsigned __int64 v53; // [rsp+40h] [rbp-58h]
  unsigned __int64 v54; // [rsp+48h] [rbp-50h]
  ULONG_PTR v55; // [rsp+50h] [rbp-48h]
  unsigned __int64 v56; // [rsp+58h] [rbp-40h]
  __int64 retaddr; // [rsp+98h] [rbp+0h]

  *a3 = 0LL;
  v53 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v54 = ((v53 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  Process = (v54 >> 9) & 0x7FFFFFFFF8LL;
  v55 = Process - 0x98000000000LL;
  v6 = (((Process - 0x98000000000LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v56 = v6;
  v7 = 0xFFFFF6FB7DBEDF68uLL;
  if ( !a4 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v9 = *(_DWORD *)(a1 + 184) & 0xF;
    if ( v9 )
    {
      if ( v9 == 7 )
      {
        v10 = 1;
      }
      else
      {
        v10 = 3;
        if ( v9 == 5 )
          v10 = 0;
      }
      v6 = (unsigned __int64)(&MiState + 2 * v10 + 2278);
    }
    else
    {
      v10 = 2;
      v6 = a1 + 176;
    }
    Process = (ULONG_PTR)CurrentPrcb->SelfmapLockHandle + 16 * v10 + 8 * v10;
    *(_QWORD *)(Process + 8) = v6;
    *(_QWORD *)Process = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _InterlockedExchange64((volatile __int64 *)v6, Process) )
        KxWaitForLockOwnerShip(Process);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(Process, v6);
    }
  }
  for ( i = 2LL; ; --i )
  {
    v12 = *(&v53 + i);
    v13 = 0xFFFFF6FB7DBED000uLL;
    v14 = *(_QWORD *)v12;
    v52 = i;
    if ( v12 >= 0xFFFFF6FB7DBED000uLL
      && v12 <= 0xFFFFF6FB7DBED7F8uLL
      && (v14 & 1) != 0
      && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0)
      && (MiFlags & 0x1800000) != 0 )
    {
      Process = (ULONG_PTR)KeGetCurrentThread()->ApcState.Process;
      if ( *(_BYTE *)(Process + 352) != 1 )
      {
        if ( Process )
        {
          v6 = *(_QWORD *)(Process + 1288);
          if ( v6 )
          {
            v18 = *(_QWORD *)(v6 + 8 * ((v12 >> 3) & 0x1FF));
            if ( (v18 & 0x20) != 0 )
              v14 |= 0x20uLL;
            Process = v14;
            v14 |= 0x42uLL;
            if ( (v18 & 0x42) == 0 )
              v14 = Process;
          }
        }
      }
    }
    if ( (v14 & 0x81) != 1 )
      break;
    if ( (v14 & 0x20) != 0 )
      goto LABEL_54;
    v15 = 0;
    v16 = (__int64)(v12 << 25) >> 16;
    if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 && v12 >= 0xFFFFF6FB7DBED000uLL && v12 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      v15 = 1;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        v17 = 0;
        if ( _interlockedbittestandset(&dword_140E36200, 0x1Fu) )
          v17 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140E36200, 0xFFu);
        for ( Process = (unsigned int)dword_140E36200;
              (dword_140E36200 & 0xBFFFFFFF) != 0x80000000;
              Process = (unsigned int)dword_140E36200 )
        {
          if ( (Process & 0x40000000) == 0 )
            _InterlockedOr(&dword_140E36200, 0x40000000u);
          if ( (++v17 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Process, v6, v13) )
          {
            HvlNotifyLongSpinWait(v17);
          }
          else
          {
            _mm_pause();
          }
        }
      }
      else
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140E36200, 0xFFu);
      }
    }
    if ( v16 >= 0xFFFFF68000000000uLL && v16 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      while ( 1 )
      {
        Process = v14 | 0x20;
        if ( (MiFlags & 0x8000000) != 0 )
          _mm_lfence();
        v48 = _InterlockedCompareExchange64((volatile signed __int64 *)v12, Process, v14);
        if ( v14 == v48 )
          break;
        v14 = v48;
      }
      v13 = 0xFFFFF6FB7DBED000uLL;
      goto LABEL_51;
    }
    v20 = *(_QWORD *)v12;
    v21 = v14 | 0x20;
    v13 = 0xFFFFF6FB7DBED000uLL;
    v22 = 0xFFFFF6FB7DBED7F8uLL;
    if ( v12 >= 0xFFFFF6FB7DBED000uLL
      && v12 <= 0xFFFFF6FB7DBED7F8uLL
      && (v20 & 1) != 0
      && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
    {
      HasShadow = MiPteHasShadow(Process, v20, 0xFFFFF6FB7DBED000uLL);
      if ( HasShadow )
      {
        Process = *(_QWORD *)(HasShadow + 1288);
        if ( Process )
        {
          v32 = *(_QWORD *)(Process + 8 * ((v12 >> 3) & 0x1FF));
          if ( (v32 & 0x20) != 0 )
            v20 |= 0x20uLL;
          Process = v20;
          v20 |= 0x42uLL;
          if ( (v32 & 0x42) == 0 )
            v20 = Process;
        }
      }
    }
    v23 = v20 ^ (v20 ^ v21) & 0x80FFFFFFFFFFFFFFuLL;
    v6 = 0LL;
    v51 = v23;
    if ( v12 >= v13 && v12 <= v22 )
    {
      if ( MiPteHasShadow(Process, 0LL, v13) )
      {
        v6 = 1LL;
        if ( !BYTE5(stru_140E2DAB0.Header.WaitListHead.Blink) )
        {
          v33 = v51;
          if ( (v51 & 1) != 0 )
LABEL_153:
            v23 = v33 | 0x8000000000000000uLL;
        }
      }
      else
      {
        Process = (ULONG_PTR)KeGetCurrentThread()->ApcState.Process;
        if ( (*(_DWORD *)(Process + 1532) & 0x1000) != 0 )
        {
          v33 = v51;
          if ( (v51 & 1) != 0 )
            goto LABEL_153;
        }
      }
    }
    *(_QWORD *)v12 = v23;
    if ( (_DWORD)v6 )
    {
      v24 = MiPteHasShadow(Process, v6, v13);
      if ( v24 )
      {
        Process = *(_QWORD *)(v24 + 1288);
        if ( Process )
        {
          v6 = Process + 8 * ((v12 >> 3) & 0x1FF);
          Process = v23 & 0x7FFFFFFFFFFFFFFFLL;
          v25 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
          if ( (v23 & 1) != 0 )
            v25 = v23 & 0x7FFFFFFFFFFFFFFFLL;
          *(_QWORD *)v6 = v25;
        }
      }
    }
LABEL_51:
    if ( v15 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        dword_140E36200 = 0;
      }
      else
      {
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E36200, retaddr);
        v13 = 0xFFFFF6FB7DBED000uLL;
      }
    }
LABEL_54:
    if ( v12 == v7 )
      goto LABEL_82;
    if ( v12 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v28 = KeGetCurrentPrcb();
      v29 = *(_DWORD *)(a1 + 184) & 0xF;
      if ( v29 )
      {
        if ( v29 == 7 )
        {
          v30 = 1;
          v6 = (unsigned __int64)(&MiState + 2280);
        }
        else
        {
          v30 = 3;
          if ( v29 == 5 )
            v30 = 0;
          v6 = (unsigned __int64)(&MiState + 2 * v30 + 2278);
        }
      }
      else
      {
        v30 = 2;
        v6 = a1 + 176;
      }
      Process = (ULONG_PTR)v28->SelfmapLockHandle + 16 * v30 + 8 * v30;
      *(_QWORD *)(Process + 8) = v6;
      *(_QWORD *)Process = 0LL;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        if ( _InterlockedExchange64((volatile __int64 *)v6, Process) )
          KxWaitForLockOwnerShip(Process);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented(Process, v6);
      }
    }
    else if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0
           || v12 < v13
           || v12 > 0xFFFFF6FB7DBEDFFFuLL
           || (v34 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
    {
      if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 && v12 >= v13 && v12 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        LODWORD(v51) = 0;
        v42 = (2 * ((__int64)(v12 - v13) >> 3)) & 0x1F;
        v43 = (volatile signed __int32 *)(&MiState
                                        + ((unsigned __int64)(2 * (unsigned int)((__int64)(v12 - v13) >> 3)) >> 5)
                                        + 1467);
        v44 = 2 << v42;
        LODWORD(v6) = *v43;
        do
        {
          while ( (((unsigned int)v6 >> v42) & 1) != 0 )
          {
            if ( (((unsigned int)v6 >> v42) & 2) != 0 )
            {
              do
              {
                KeYieldProcessorEx(&v51);
                LODWORD(v6) = *v43;
              }
              while ( (((unsigned __int32)*v43 >> v42) & 1) != 0 );
            }
            else
            {
              v49 = v44 | v6;
              v50 = _InterlockedCompareExchange(v43, v44 | v6, v6);
              v45 = (_DWORD)v6 == v50;
              LODWORD(v6) = v50;
              if ( v45 )
                LODWORD(v6) = v49;
            }
          }
          Process = ~(2 << v42) & ((1 << v42) | (unsigned int)v6);
          v46 = _InterlockedCompareExchange(v43, Process, v6);
          v45 = (_DWORD)v6 == v46;
          v6 = v46;
        }
        while ( !v45 );
      }
      else
      {
        Process = *(_QWORD *)v12;
        v26 = 0;
        if ( v12 >= v13
          && v12 <= 0xFFFFF6FB7DBED7F8uLL
          && (Process & 1) != 0
          && ((Process & 0x20) == 0 || (Process & 0x42) == 0)
          && (MiFlags & 0x1800000) != 0 )
        {
          v6 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          if ( *(_BYTE *)(v6 + 352) != 1 )
          {
            if ( v6 )
            {
              v13 = *(_QWORD *)(v6 + 1288);
              if ( v13 )
              {
                v35 = *(_QWORD *)(v13 + 8 * ((v12 >> 3) & 0x1FF));
                if ( (v35 & 0x20) != 0 )
                  Process |= 0x20uLL;
                v6 = Process;
                Process |= 0x42uLL;
                if ( (v35 & 0x42) == 0 )
                  Process = v6;
              }
            }
          }
        }
        while ( (Process & 1) != 0 )
        {
          if ( (Process & 0x1000000000000000LL) != 0 )
          {
            if ( ((Process >> 60) & 2) != 0 )
            {
              do
              {
                if ( (++v26 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Process, v6, v13) )
                {
                  HvlNotifyLongSpinWait(v26);
                }
                else
                {
                  _mm_pause();
                }
                Process = *(_QWORD *)v12;
              }
              while ( (*(_QWORD *)v12 & 0x1000000000000000LL) != 0 );
            }
            else
            {
              v6 = Process | 0x2000000000000000LL;
              if ( (MiFlags & 0x8000000) != 0 )
                _mm_lfence();
              v41 = _InterlockedCompareExchange64((volatile signed __int64 *)v12, v6, Process);
              if ( Process == v41 )
                Process |= 0x2000000000000000uLL;
              else
                Process = v41;
            }
          }
          else
          {
            v6 = Process & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL;
            if ( (MiFlags & 0x8000000) != 0 )
              _mm_lfence();
            v27 = _InterlockedCompareExchange64((volatile signed __int64 *)v12, v6, Process);
            if ( Process == v27 )
              break;
            Process = v27;
          }
        }
      }
      i = v52;
    }
    else
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v34 + 4 * ((v12 >> 3) & 0x1FF)));
    }
    if ( a4 )
    {
      if ( v7 != 0xFFFFF6FB7DBEDF68uLL )
      {
LABEL_75:
        v6 = 0xFFFFF6FB7DBED000uLL;
        if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0
          || v7 < 0xFFFFF6FB7DBED000uLL
          || v7 > 0xFFFFF6FB7DBEDFFFuLL
          || (Process = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
        {
          if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 && v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBEDFFFuLL )
          {
            v47 = 2 * ((__int64)(v7 + 0x90482413000LL) >> 3);
            v6 = (unsigned __int64)v47 >> 5;
            Process = (ULONG_PTR)&MiState;
            _InterlockedAnd(
              (volatile signed __int32 *)&MiState + v6 + 1467,
              ~(2 << (v47 & 0x1F)) & ~(1 << (v47 & 0x1F)));
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)v7, 0xCFFFFFFFFFFFFFFFuLL);
          }
        }
        else
        {
          v39 = (v7 >> 3) & 0x1FF;
          v40 = *(_DWORD *)(Process + 4 * v39);
          Process += 4 * v39;
          if ( (v40 & 0x3FFFFFFF) != 0 )
          {
            if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            {
              _InterlockedAnd((volatile signed __int32 *)Process, 0xBFFFFFFF);
              _InterlockedDecrement((volatile signed __int32 *)Process);
            }
            else
            {
              ExpReleaseSpinLockSharedFromDpcLevelInstrumented(Process, retaddr);
            }
          }
          else
          {
            if ( v40 >= 0 )
              KeBugCheckEx(0x10u, Process, 0x100uLL, 0LL, 0LL);
            if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
              *(_DWORD *)Process = 0;
            else
              ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)Process, retaddr);
          }
        }
      }
    }
    else
    {
      if ( v7 != 0xFFFFF6FB7DBEDF68uLL )
        goto LABEL_75;
      v36 = KeGetCurrentPrcb();
      v37 = *(_DWORD *)(a1 + 184) & 0xF;
      if ( v37 )
      {
        if ( v37 == 7 )
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v36->SelfmapLockHandle[1]);
          goto LABEL_81;
        }
        v38 = 3LL;
        if ( v37 == 5 )
          v38 = 0LL;
      }
      else
      {
        v38 = 2LL;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v36->SelfmapLockHandle[v38]);
    }
LABEL_81:
    v7 = v12;
LABEL_82:
    if ( !i )
    {
      v12 = a2;
      break;
    }
  }
  *a3 = v12;
  return v7;
}
