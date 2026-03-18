/*
 * XREFs of MiLockLowestValidPageTableEx @ 0x140300610
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x1402D28A0 (MiGetWorkingSetInfoList.c)
 *     MiSharePagesLockPageTable @ 0x1403072AC (MiSharePagesLockPageTable.c)
 *     MiFinishHardFault @ 0x14031D830 (MiFinishHardFault.c)
 *     MiTranslatePageForCopy @ 0x140338D4C (MiTranslatePageForCopy.c)
 *     MiTrimUnlockedVirtualAddreses @ 0x14035CA40 (MiTrimUnlockedVirtualAddreses.c)
 *     MiDecommitLockNewPageTable @ 0x1403615D8 (MiDecommitLockNewPageTable.c)
 *     MiCommitPoolMemory @ 0x140364AE0 (MiCommitPoolMemory.c)
 *     MiRelockFaultState @ 0x14038C0A0 (MiRelockFaultState.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140442198 (MiDeprioritizeVirtualAddresses.c)
 *     MiSetPagesModified @ 0x14045BE6C (MiSetPagesModified.c)
 *     MiLockStealUserVm @ 0x14045EF90 (MiLockStealUserVm.c)
 *     MiLockPoolCommitPageTable @ 0x140465970 (MiLockPoolCommitPageTable.c)
 *     MiTrimViewLockProcessPte @ 0x14046C720 (MiTrimViewLockProcessPte.c)
 *     MiUnlockVirtualAddreses @ 0x1404AA608 (MiUnlockVirtualAddreses.c)
 *     MiConvertAndFlushWsleVas @ 0x1404B2C40 (MiConvertAndFlushWsleVas.c)
 *     MmUpdateUserShadowStackValue @ 0x1404E0BFC (MmUpdateUserShadowStackValue.c)
 *     MiComputeIdealLargePage @ 0x1404F85EC (MiComputeIdealLargePage.c)
 *     MiSplitReducedCommitClonePage @ 0x14052CA98 (MiSplitReducedCommitClonePage.c)
 *     MiDeleteBootRange @ 0x1406E35D0 (MiDeleteBootRange.c)
 *     MiProtectAweRegion @ 0x140701F34 (MiProtectAweRegion.c)
 *     MiScrubLargeMappedPage @ 0x14070C03C (MiScrubLargeMappedPage.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402474C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140249B40 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     KxWaitForLockOwnerShip @ 0x1402B29C0 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402B4830 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402B9F90 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiPteHasShadow @ 0x1403011E0 (MiPteHasShadow.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036A848 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiLockLowestValidPageTableEx(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, int a4)
{
  volatile unsigned __int64 Process; // rcx
  unsigned __int64 v6; // r12
  struct _KPRCB *CurrentPrcb; // r8
  char v8; // al
  unsigned int v9; // ecx
  volatile __int64 *v10; // rdx
  __int64 v11; // rax
  __int64 i; // r15
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // r8
  signed __int64 v15; // rbx
  int v16; // r14d
  unsigned __int64 v17; // rsi
  unsigned int v18; // ebp
  __int64 v19; // rdx
  __int64 v20; // rax
  volatile signed __int64 v22; // rdx
  __int64 v23; // rbx
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 *v28; // rdx
  __int64 v29; // rax
  unsigned int v30; // ebx
  signed __int64 v31; // rax
  struct _KPRCB *v32; // r8
  char v33; // al
  unsigned int v34; // ecx
  ULONG *v35; // rdx
  __int64 v36; // rax
  __int64 HasShadow; // rax
  __int64 v38; // rax
  unsigned __int64 v39; // rax
  __int64 v40; // rcx
  _KPROCESS *v41; // rdx
  unsigned __int64 KernelWaitTime; // r8
  __int64 v43; // rax
  volatile unsigned __int64 v44; // rdx
  struct _KPRCB *v45; // rdx
  char v46; // al
  __int64 v47; // rcx
  __int64 v48; // r12
  int v49; // eax
  signed __int64 v50; // rax
  char v51; // si
  volatile signed __int32 *v52; // rbx
  int v53; // r15d
  unsigned __int32 v54; // edx
  bool v55; // zf
  signed __int32 v56; // eax
  signed __int64 v57; // rax
  int v58; // ecx
  signed __int32 v59; // eax
  unsigned __int64 v60; // [rsp+30h] [rbp-68h] BYREF
  __int64 v61; // [rsp+38h] [rbp-60h]
  unsigned __int64 v62; // [rsp+40h] [rbp-58h]
  unsigned __int64 v63; // [rsp+48h] [rbp-50h]
  unsigned __int64 v64; // [rsp+50h] [rbp-48h]
  unsigned __int64 v65; // [rsp+58h] [rbp-40h]
  __int64 retaddr; // [rsp+98h] [rbp+0h]

  *a3 = 0LL;
  v62 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v63 = ((v62 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  Process = (v63 >> 9) & 0x7FFFFFFFF8LL;
  v64 = Process - 0x98000000000LL;
  v65 = (((Process - 0x98000000000LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = 0xFFFFF6FB7DBEDF68uLL;
  if ( !a4 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v8 = *(_DWORD *)(a1 + 184) & 0xF;
    if ( v8 )
    {
      if ( v8 == 7 )
      {
        v9 = 1;
      }
      else
      {
        v9 = 3;
        if ( v8 == 5 )
          v9 = 0;
      }
      v10 = (volatile __int64 *)(&MiState + 2 * v9 + 2278);
    }
    else
    {
      v9 = 2;
      v10 = (volatile __int64 *)(a1 + 176);
    }
    Process = (unsigned __int64)CurrentPrcb->SelfmapLockHandle + 16 * v9 + 8 * v9;
    *(_QWORD *)(Process + 8) = v10;
    *(_QWORD *)Process = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    {
      v11 = _InterlockedExchange64(v10, Process);
      if ( v11 )
        KxWaitForLockOwnerShip(Process, v11, (__int64)CurrentPrcb);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(Process, v10);
    }
  }
  for ( i = 2LL; ; --i )
  {
    v13 = *(&v62 + i);
    v14 = 0xFFFFF6FB7DBED000uLL;
    v15 = *(_QWORD *)v13;
    v61 = i;
    if ( v13 >= 0xFFFFF6FB7DBED000uLL
      && v13 <= 0xFFFFF6FB7DBED7F8uLL
      && (v15 & 1) != 0
      && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0)
      && (MiFlags & 0x1800000) != 0 )
    {
      Process = (volatile unsigned __int64)KeGetCurrentThread()->ApcState.Process;
      if ( *(_BYTE *)(Process + 352) != 1 )
      {
        if ( Process )
        {
          v19 = *(_QWORD *)(Process + 1288);
          if ( v19 )
          {
            v20 = *(_QWORD *)(v19 + 8 * ((v13 >> 3) & 0x1FF));
            if ( (v20 & 0x20) != 0 )
              v15 |= 0x20uLL;
            Process = v15;
            v15 |= 0x42uLL;
            if ( (v20 & 0x42) == 0 )
              v15 = Process;
          }
        }
      }
    }
    if ( (v15 & 0x81) != 1 )
      break;
    if ( (v15 & 0x20) != 0 )
      goto LABEL_54;
    v16 = 0;
    v17 = (__int64)(v13 << 25) >> 16;
    if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 && v13 >= 0xFFFFF6FB7DBED000uLL && v13 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      v16 = 1;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      {
        v18 = 0;
        if ( _interlockedbittestandset(&dword_140E36080, 0x1Fu) )
          v18 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140E36080, 0xFFu);
        for ( Process = (unsigned int)dword_140E36080;
              (dword_140E36080 & 0xBFFFFFFF) != 0x80000000;
              Process = (unsigned int)dword_140E36080 )
        {
          if ( (Process & 0x40000000) == 0 )
            _InterlockedOr(&dword_140E36080, 0x40000000u);
          if ( (++v18 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v18);
          }
          else
          {
            _mm_pause();
          }
        }
      }
      else
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140E36080, 0xFFu);
      }
    }
    if ( v17 >= 0xFFFFF68000000000uLL && v17 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      while ( 1 )
      {
        Process = v15 | 0x20;
        if ( (MiFlags & 0x8000000) != 0 )
          _mm_lfence();
        v57 = _InterlockedCompareExchange64((volatile signed __int64 *)v13, Process, v15);
        if ( v15 == v57 )
          break;
        v15 = v57;
      }
      v14 = 0xFFFFF6FB7DBED000uLL;
      goto LABEL_51;
    }
    v22 = *(_QWORD *)v13;
    v23 = v15 | 0x20;
    v14 = 0xFFFFF6FB7DBED000uLL;
    v24 = 0xFFFFF6FB7DBED7F8uLL;
    if ( v13 >= 0xFFFFF6FB7DBED000uLL
      && v13 <= 0xFFFFF6FB7DBED7F8uLL
      && (v22 & 1) != 0
      && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
    {
      HasShadow = MiPteHasShadow(Process, v22, 0xFFFFF6FB7DBED000uLL);
      if ( HasShadow )
      {
        Process = *(_QWORD *)(HasShadow + 1288);
        if ( Process )
        {
          v38 = *(_QWORD *)(Process + 8 * ((v13 >> 3) & 0x1FF));
          if ( (v38 & 0x20) != 0 )
            v22 |= 0x20uLL;
          Process = v22;
          v22 |= 0x42uLL;
          if ( (v38 & 0x42) == 0 )
            v22 = Process;
        }
      }
    }
    v25 = v22 ^ (v22 ^ v23) & 0x80FFFFFFFFFFFFFFuLL;
    v26 = 0LL;
    v60 = v25;
    if ( v13 >= v14 && v13 <= v24 )
    {
      if ( MiPteHasShadow(Process, 0LL, v14) )
      {
        v26 = 1LL;
        if ( !BYTE5(stru_140E2D930.Header.WaitListHead.Blink) )
        {
          v39 = v60;
          if ( (v60 & 1) != 0 )
LABEL_153:
            v25 = v39 | 0x8000000000000000uLL;
        }
      }
      else
      {
        Process = (volatile unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        if ( (*(_DWORD *)(Process + 1532) & 0x1000) != 0 )
        {
          v39 = v60;
          if ( (v60 & 1) != 0 )
            goto LABEL_153;
        }
      }
    }
    *(_QWORD *)v13 = v25;
    if ( (_DWORD)v26 )
    {
      v27 = MiPteHasShadow(Process, v26, v14);
      if ( v27 )
      {
        Process = *(_QWORD *)(v27 + 1288);
        if ( Process )
        {
          v28 = (__int64 *)(Process + 8 * ((v13 >> 3) & 0x1FF));
          Process = v25 & 0x7FFFFFFFFFFFFFFFLL;
          v29 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
          if ( (v25 & 1) != 0 )
            v29 = v25 & 0x7FFFFFFFFFFFFFFFLL;
          *v28 = v29;
        }
      }
    }
LABEL_51:
    if ( v16 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      {
        dword_140E36080 = 0;
      }
      else
      {
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E36080, retaddr);
        v14 = 0xFFFFF6FB7DBED000uLL;
      }
    }
LABEL_54:
    if ( v13 == v6 )
      goto LABEL_82;
    if ( v13 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v32 = KeGetCurrentPrcb();
      v33 = *(_DWORD *)(a1 + 184) & 0xF;
      if ( v33 )
      {
        if ( v33 == 7 )
        {
          v34 = 1;
          v35 = &MiState + 2280;
        }
        else
        {
          v34 = 3;
          if ( v33 == 5 )
            v34 = 0;
          v35 = &MiState + 2 * v34 + 2278;
        }
      }
      else
      {
        v34 = 2;
        v35 = (ULONG *)(a1 + 176);
      }
      Process = (unsigned __int64)v32->SelfmapLockHandle + 16 * v34 + 8 * v34;
      *(_QWORD *)(Process + 8) = v35;
      *(_QWORD *)Process = 0LL;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      {
        v36 = _InterlockedExchange64((volatile __int64 *)v35, Process);
        if ( v36 )
          KxWaitForLockOwnerShip(Process, v36, (__int64)v32);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented(Process, (volatile __int64 *)v35);
      }
    }
    else if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0
           || v13 < v14
           || v13 > 0xFFFFF6FB7DBEDFFFuLL
           || (v40 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
    {
      if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 && v13 >= v14 && v13 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        LODWORD(v60) = 0;
        v51 = (2 * ((__int64)(v13 - v14) >> 3)) & 0x1F;
        v52 = (volatile signed __int32 *)(&MiState
                                        + ((unsigned __int64)(2 * (unsigned int)((__int64)(v13 - v14) >> 3)) >> 5)
                                        + 1467);
        v53 = 2 << v51;
        v54 = *v52;
        do
        {
          while ( ((v54 >> v51) & 1) != 0 )
          {
            if ( ((v54 >> v51) & 2) != 0 )
            {
              do
              {
                KeYieldProcessorEx(&v60);
                v54 = *v52;
              }
              while ( (((unsigned __int32)*v52 >> v51) & 1) != 0 );
            }
            else
            {
              v58 = v53 | v54;
              v59 = _InterlockedCompareExchange(v52, v53 | v54, v54);
              v55 = v54 == v59;
              v54 = v59;
              if ( v55 )
                v54 = v58;
            }
          }
          Process = ~(2 << v51) & ((1 << v51) | v54);
          v56 = _InterlockedCompareExchange(v52, Process, v54);
          v55 = v54 == v56;
          v54 = v56;
        }
        while ( !v55 );
      }
      else
      {
        Process = *(_QWORD *)v13;
        v30 = 0;
        if ( v13 >= v14
          && v13 <= 0xFFFFF6FB7DBED7F8uLL
          && (Process & 1) != 0
          && ((Process & 0x20) == 0 || (Process & 0x42) == 0)
          && (MiFlags & 0x1800000) != 0 )
        {
          v41 = KeGetCurrentThread()->ApcState.Process;
          if ( v41->AddressPolicy != 1 )
          {
            if ( v41 )
            {
              KernelWaitTime = v41[2].KernelWaitTime;
              if ( KernelWaitTime )
              {
                v43 = *(_QWORD *)(KernelWaitTime + 8 * ((v13 >> 3) & 0x1FF));
                if ( (v43 & 0x20) != 0 )
                  Process |= 0x20uLL;
                v44 = Process;
                Process |= 0x42uLL;
                if ( (v43 & 0x42) == 0 )
                  Process = v44;
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
                if ( (++v30 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && KiCheckVpBackingLongSpinWaitHypercall() )
                {
                  HvlNotifyLongSpinWait(v30);
                }
                else
                {
                  _mm_pause();
                }
                Process = *(_QWORD *)v13;
              }
              while ( (*(_QWORD *)v13 & 0x1000000000000000LL) != 0 );
            }
            else
            {
              if ( (MiFlags & 0x8000000) != 0 )
                _mm_lfence();
              v50 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)v13,
                      Process | 0x2000000000000000LL,
                      Process);
              if ( Process == v50 )
                Process |= 0x2000000000000000uLL;
              else
                Process = v50;
            }
          }
          else
          {
            if ( (MiFlags & 0x8000000) != 0 )
              _mm_lfence();
            v31 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)v13,
                    Process & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
                    Process);
            if ( Process == v31 )
              break;
            Process = v31;
          }
        }
      }
      i = v61;
    }
    else
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v40 + 4 * ((v13 >> 3) & 0x1FF)));
    }
    if ( a4 )
    {
      if ( v6 != 0xFFFFF6FB7DBEDF68uLL )
      {
LABEL_75:
        if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0
          || v6 < 0xFFFFF6FB7DBED000uLL
          || v6 > 0xFFFFF6FB7DBEDFFFuLL
          || (Process = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
        {
          if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 && v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBEDFFFuLL )
          {
            Process = (volatile unsigned __int64)&MiState;
            _InterlockedAnd(
              (volatile signed __int32 *)&MiState
            + ((unsigned __int64)(2 * (unsigned int)((__int64)(v6 + 0x90482413000LL) >> 3)) >> 5)
            + 1467,
              ~(2 << ((2 * ((__int64)(v6 + 0x90482413000LL) >> 3)) & 0x1F)) & ~(1 << ((2
                                                                                     * ((__int64)(v6 + 0x90482413000LL) >> 3)) & 0x1F)));
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)v6, 0xCFFFFFFFFFFFFFFFuLL);
          }
        }
        else
        {
          v48 = (v6 >> 3) & 0x1FF;
          v49 = *(_DWORD *)(Process + 4 * v48);
          Process += 4 * v48;
          if ( (v49 & 0x3FFFFFFF) != 0 )
          {
            if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
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
            if ( v49 >= 0 )
              KeBugCheckEx(0x10u, Process, 0x100uLL, 0LL, 0LL);
            if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
              *(_DWORD *)Process = 0;
            else
              ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)Process, retaddr);
          }
        }
      }
    }
    else
    {
      if ( v6 != 0xFFFFF6FB7DBEDF68uLL )
        goto LABEL_75;
      v45 = KeGetCurrentPrcb();
      v46 = *(_DWORD *)(a1 + 184) & 0xF;
      if ( v46 )
      {
        if ( v46 == 7 )
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v45->SelfmapLockHandle[1]);
          goto LABEL_81;
        }
        v47 = 3LL;
        if ( v46 == 5 )
          v47 = 0LL;
      }
      else
      {
        v47 = 2LL;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v45->SelfmapLockHandle[v47]);
    }
LABEL_81:
    v6 = v13;
LABEL_82:
    if ( !i )
    {
      v13 = a2;
      break;
    }
  }
  *a3 = v13;
  return v6;
}
