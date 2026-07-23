/*
 * XREFs of MiReacquireWalkLocks @ 0x1402E32A0
 * Callers:
 *     MiWalkPageTables @ 0x140328AB0 (MiWalkPageTables.c)
 *     MiQueryVpabAccessedState @ 0x14045D66C (MiQueryVpabAccessedState.c)
 *     MiProtectDriverSectionPte @ 0x1406EAA00 (MiProtectDriverSectionPte.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140248E20 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14024B4A0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029B1F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402C7E40 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402D0080 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiReacquireWalkLocks(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // r13
  __int64 v5; // r14
  int v6; // eax
  __int64 *v7; // rdx
  unsigned int v8; // eax
  _DWORD *v9; // rbx
  unsigned int v10; // esi
  unsigned __int8 v11; // di
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  _DWORD *v14; // rcx
  __int64 result; // rax
  __int64 *v16; // rdx
  __int64 v17; // rbx
  _DWORD *MmInternal; // rcx
  unsigned __int64 v19; // r15
  struct _KPRCB *CurrentPrcb; // r8
  char v21; // al
  volatile __int64 *v22; // rdx
  unsigned int v23; // ecx
  unsigned int v24; // ebp
  __int64 Process; // rcx
  __int64 v26; // r14
  __int64 v27; // r13
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // rdi
  signed __int64 v30; // rbx
  int v31; // r12d
  unsigned __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rax
  volatile signed __int64 v36; // rdx
  __int64 v37; // rbx
  unsigned __int64 v38; // r9
  unsigned __int64 v39; // r10
  unsigned __int64 v40; // r8
  int v41; // edx
  _KPROCESS *v42; // rax
  __int64 v43; // r8
  __int64 *v44; // rdx
  __int64 v45; // rax
  unsigned __int64 v46; // rdx
  unsigned int v47; // ebx
  signed __int64 v48; // rax
  struct _KPRCB *v49; // r8
  char v50; // al
  unsigned int v51; // ecx
  volatile __int64 *v52; // rdx
  _KPROCESS *v53; // rax
  __int64 v54; // rax
  char v55; // si
  int v56; // r13d
  volatile signed __int32 *v57; // rbx
  unsigned __int32 v58; // edx
  bool v59; // zf
  signed __int32 v60; // eax
  unsigned __int64 v61; // rax
  _KPROCESS *v62; // rax
  __int64 v63; // rax
  struct _KPRCB *v64; // rdx
  char v65; // al
  __int64 v66; // rcx
  struct _KPRCB *v67; // rcx
  char v68; // al
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 CurrentIrql; // rcx
  signed __int64 v72; // rax
  unsigned int v73; // r15d
  signed __int64 v74; // rax
  int v75; // ecx
  signed __int32 v76; // eax
  __int64 v77; // [rsp+20h] [rbp-88h]
  __int64 v78; // [rsp+28h] [rbp-80h]
  unsigned __int64 v79; // [rsp+38h] [rbp-70h]
  unsigned __int64 v80; // [rsp+40h] [rbp-68h]
  unsigned __int64 v81; // [rsp+48h] [rbp-60h]
  __int64 v82; // [rsp+50h] [rbp-58h]
  __int64 retaddr; // [rsp+A8h] [rbp+0h]
  int v86; // [rsp+C0h] [rbp+18h]
  unsigned __int64 v87; // [rsp+C8h] [rbp+20h] BYREF

  v86 = a3;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = a2;
  v77 = v3;
  v5 = a1;
  if ( !(_DWORD)a3 )
  {
    v6 = *(_DWORD *)(v3 + 184);
    if ( *(_BYTE *)(a1 + 9) == 17 )
    {
      if ( (v6 & 0xFu) <= 5 )
      {
        v16 = (*(_DWORD *)(v3 + 184) & 0xF) == 1 ? &qword_140E37980 : (__int64 *)(v3 + 192);
        v17 = (KeGetPcr()->Prcb.Number >> 1) & 3;
        ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(*v16 + (v17 << 6)));
        MmInternal = KeGetCurrentPrcb()->MmInternal;
        if ( MmInternal )
          MmInternal[81] = v17;
      }
    }
    else if ( (v6 & 0xFu) > 5 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (_BYTE)CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    }
    else
    {
      if ( (*(_DWORD *)(v3 + 184) & 0xF) == 1 )
        v7 = &qword_140E37980;
      else
        v7 = (__int64 *)(v3 + 192);
      v8 = (KeGetPcr()->Prcb.Number >> 1) & 3;
      v9 = (_DWORD *)(*v7 + ((unsigned __int64)v8 << 6));
      v10 = v8;
      v11 = KeGetCurrentIrql();
      if ( v11 != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v11, 2LL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        _m_prefetchw(v9);
        v12 = *v9 & 0x7FFFFFFF;
        while ( 1 )
        {
          v13 = v12;
          v12 = _InterlockedCompareExchange(v9, v12 + 1, v12);
          if ( v13 == v12 )
            break;
          if ( v12 < 0 )
          {
            ExpWaitForSpinLockSharedAndAcquire(v9, v11, a3);
            break;
          }
        }
      }
      else
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v9, v11);
      }
      v14 = KeGetCurrentPrcb()->MmInternal;
      if ( v14 )
        v14[81] = v10;
    }
  }
  if ( (*(_DWORD *)v5 & 0x800) != 0 )
  {
LABEL_16:
    *(_DWORD *)(v5 + 4) &= ~1u;
    result = 1LL;
    *(_QWORD *)(v5 + 56) = v4;
    return result;
  }
  v79 = (((unsigned __int64)(v4 << 25 >> 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v80 = ((v79 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v81 = ((v80 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v82 = ((v81 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v19 = 0xFFFFF6FB7DBEDF68uLL;
  CurrentPrcb = KeGetCurrentPrcb();
  v21 = *(_DWORD *)(v3 + 184) & 0xF;
  if ( v21 )
  {
    v24 = 0;
    if ( v21 == 7 )
    {
      v23 = 1;
    }
    else
    {
      v23 = 3;
      if ( v21 == 5 )
        v23 = 0;
    }
    v22 = (volatile __int64 *)(&MiState + 2 * v23 + 2278);
  }
  else
  {
    v22 = (volatile __int64 *)(v3 + 176);
    v23 = 2;
    v24 = 0;
  }
  Process = (__int64)CurrentPrcb->SelfmapLockHandle + 16 * v23 + 8 * v23;
  *(_QWORD *)(Process + 8) = v22;
  *(_QWORD *)Process = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _InterlockedExchange64(v22, Process) )
      KxWaitForLockOwnerShip(Process);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(Process, v22);
  }
  v26 = v77;
  v27 = 2LL;
  v28 = 0xFFFFF6FB7DBED000uLL;
  while ( 1 )
  {
    v29 = *(&v79 + v27);
    v78 = v27;
    v30 = *(_QWORD *)v29;
    if ( v29 >= 0xFFFFF6FB7DBED000uLL
      && v29 <= 0xFFFFF6FB7DBED7F8uLL
      && (v30 & 1) != 0
      && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0)
      && (MiFlags & 0x1800000) != 0 )
    {
      Process = (__int64)KeGetCurrentThread()->ApcState.Process;
      if ( *(_BYTE *)(Process + 352) != 1 )
      {
        if ( Process )
        {
          v34 = *(_QWORD *)(Process + 1288);
          if ( v34 )
          {
            v35 = *(_QWORD *)(v34 + 8 * ((v29 >> 3) & 0x1FF));
            if ( (v35 & 0x20) != 0 )
              v30 |= 0x20uLL;
            Process = v30;
            v30 |= 0x42uLL;
            if ( (v35 & 0x42) == 0 )
              v30 = Process;
          }
        }
      }
    }
    if ( (v30 & 0x81) != 1 )
      break;
    if ( (v30 & 0x20) != 0 )
      goto LABEL_86;
    v31 = 0;
    v32 = (__int64)(v29 << 25) >> 16;
    if ( (*(_DWORD *)(v26 + 184) & 0xF) != 0 && v29 >= 0xFFFFF6FB7DBED000uLL && v29 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      v31 = 1;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        if ( _interlockedbittestandset(&dword_140E36200, 0x1Fu) )
          v24 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140E36200, 0xFFu);
        v33 = (unsigned int)dword_140E36200;
        Process = (unsigned int)dword_140E36200;
        for ( LODWORD(Process) = dword_140E36200 & 0xBFFFFFFF;
              (dword_140E36200 & 0xBFFFFFFF) != 0x80000000;
              v33 = (unsigned int)dword_140E36200 )
        {
          if ( (v33 & 0x40000000) == 0 )
            _InterlockedOr(&dword_140E36200, 0x40000000u);
          if ( (++v24 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Process, v33, v28) )
          {
            HvlNotifyLongSpinWait(v24);
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
    if ( v32 >= 0xFFFFF68000000000uLL && v32 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      while ( 1 )
      {
        Process = v30 | 0x20;
        if ( (MiFlags & 0x8000000) != 0 )
          _mm_lfence();
        v74 = _InterlockedCompareExchange64((volatile signed __int64 *)v29, Process, v30);
        if ( v30 == v74 )
          break;
        v30 = v74;
      }
      goto LABEL_82;
    }
    v36 = *(_QWORD *)v29;
    v37 = v30 | 0x20;
    v38 = 0xFFFFF6FB7DBED000uLL;
    v39 = 0xFFFFF6FB7DBED7F8uLL;
    if ( v29 >= 0xFFFFF6FB7DBED000uLL
      && v29 <= 0xFFFFF6FB7DBED7F8uLL
      && (v36 & 1) != 0
      && ((v36 & 0x20) == 0 || (v36 & 0x42) == 0) )
    {
      v53 = MiPteHasShadow();
      if ( v53 )
      {
        Process = v53[2].KernelWaitTime;
        if ( Process )
        {
          v54 = *(_QWORD *)(Process + 8 * ((v29 >> 3) & 0x1FF));
          if ( (v54 & 0x20) != 0 )
            v36 |= 0x20uLL;
          Process = v36;
          v36 |= 0x42uLL;
          if ( (v54 & 0x42) == 0 )
            v36 = Process;
        }
      }
    }
    v40 = v36 ^ (v37 ^ v36) & 0x80FFFFFFFFFFFFFFuLL;
    v41 = 0;
    v87 = v40;
    if ( v29 >= v38 && v29 <= v39 )
    {
      if ( MiPteHasShadow() )
      {
        v41 = 1;
        if ( !BYTE5(stru_140E2DAB0.Header.WaitListHead.Blink) )
        {
          v61 = v87;
          if ( (v87 & 1) != 0 )
LABEL_199:
            v40 = v61 | 0x8000000000000000uLL;
        }
      }
      else
      {
        Process = (__int64)KeGetCurrentThread()->ApcState.Process;
        if ( (*(_DWORD *)(Process + 1532) & 0x1000) != 0 )
        {
          v61 = v87;
          if ( (v87 & 1) != 0 )
            goto LABEL_199;
        }
      }
    }
    *(_QWORD *)v29 = v40;
    if ( v41 )
    {
      v42 = MiPteHasShadow();
      if ( v42 )
      {
        Process = v42[2].KernelWaitTime;
        if ( Process )
        {
          v44 = (__int64 *)(Process + 8 * ((v29 >> 3) & 0x1FF));
          Process = v43 & 0x7FFFFFFFFFFFFFFFLL;
          v45 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
          if ( (v43 & 1) != 0 )
            v45 = v43 & 0x7FFFFFFFFFFFFFFFLL;
          *v44 = v45;
        }
      }
    }
LABEL_82:
    if ( v31 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        dword_140E36200 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E36200, retaddr);
    }
    v28 = 0xFFFFF6FB7DBED000uLL;
LABEL_86:
    if ( v29 != v19 )
    {
      if ( v29 == 0xFFFFF6FB7DBEDF68uLL )
      {
        v49 = KeGetCurrentPrcb();
        v50 = *(_DWORD *)(v26 + 184) & 0xF;
        if ( v50 )
        {
          if ( v50 == 7 )
          {
            v51 = 1;
          }
          else
          {
            v51 = 3;
            if ( v50 == 5 )
              v51 = 0;
          }
          v52 = (volatile __int64 *)(&MiState + 2 * v51 + 2278);
        }
        else
        {
          v51 = 2;
          v52 = (volatile __int64 *)(v26 + 176);
        }
        Process = (__int64)v49->SelfmapLockHandle + 16 * v51 + 8 * v51;
        *(_QWORD *)(Process + 8) = v52;
        *(_QWORD *)Process = 0LL;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          if ( _InterlockedExchange64(v52, Process) )
            KxWaitForLockOwnerShip(Process);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented(Process, v52);
        }
      }
      else if ( (*(_DWORD *)(v26 + 184) & 0xF) != 0
             || v29 < 0xFFFFF6FB7DBED000uLL
             || v29 > 0xFFFFF6FB7DBEDFFFuLL
             || (Process = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
      {
        if ( (*(_DWORD *)(v26 + 184) & 0xF) != 0 && v29 >= 0xFFFFF6FB7DBED000uLL && v29 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          LODWORD(v87) = 0;
          v55 = (2 * ((__int64)(v29 + 0x90482413000LL) >> 3)) & 0x1F;
          v56 = 2 << v55;
          v57 = (volatile signed __int32 *)(&MiState
                                          + ((unsigned __int64)(2 * (unsigned int)((__int64)(v29 + 0x90482413000LL) >> 3)) >> 5)
                                          + 1467);
          v58 = *v57;
          do
          {
            while ( ((v58 >> v55) & 1) != 0 )
            {
              if ( ((v58 >> v55) & 2) != 0 )
              {
                do
                {
                  KeYieldProcessorEx(&v87);
                  v58 = *v57;
                }
                while ( (((unsigned __int32)*v57 >> v55) & 1) != 0 );
              }
              else
              {
                v75 = v56 | v58;
                v76 = _InterlockedCompareExchange(v57, v56 | v58, v58);
                v59 = v58 == v76;
                v58 = v76;
                if ( v59 )
                  v58 = v75;
              }
            }
            Process = ~(2 << v55) & (v58 | (1 << v55));
            v60 = _InterlockedCompareExchange(v57, Process, v58);
            v59 = v58 == v60;
            v58 = v60;
          }
          while ( !v59 );
        }
        else
        {
          v46 = *(_QWORD *)v29;
          v47 = 0;
          if ( v29 >= 0xFFFFF6FB7DBED000uLL
            && v29 <= 0xFFFFF6FB7DBED7F8uLL
            && (v46 & 1) != 0
            && ((v46 & 0x20) == 0 || (v46 & 0x42) == 0) )
          {
            v62 = MiPteHasShadow();
            if ( v62 )
            {
              Process = v62[2].KernelWaitTime;
              if ( Process )
              {
                v63 = *(_QWORD *)(Process + 8 * ((v29 >> 3) & 0x1FF));
                if ( (v63 & 0x20) != 0 )
                  v46 |= 0x20uLL;
                Process = v46;
                v46 |= 0x42uLL;
                if ( (v63 & 0x42) == 0 )
                  v46 = Process;
              }
            }
          }
          while ( (v46 & 1) != 0 )
          {
            if ( (v46 & 0x1000000000000000LL) != 0 )
            {
              if ( ((v46 >> 60) & 2) != 0 )
              {
                do
                {
                  if ( (++v47 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Process, v46, v28) )
                  {
                    HvlNotifyLongSpinWait(v47);
                  }
                  else
                  {
                    _mm_pause();
                  }
                  v46 = *(_QWORD *)v29;
                }
                while ( (*(_QWORD *)v29 & 0x1000000000000000LL) != 0 );
              }
              else
              {
                Process = v46 | 0x2000000000000000LL;
                if ( (MiFlags & 0x8000000) != 0 )
                  _mm_lfence();
                v72 = _InterlockedCompareExchange64((volatile signed __int64 *)v29, Process, v46);
                if ( v46 == v72 )
                  v46 |= 0x2000000000000000uLL;
                else
                  v46 = v72;
              }
            }
            else
            {
              Process = v46 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL;
              if ( (MiFlags & 0x8000000) != 0 )
                _mm_lfence();
              v48 = _InterlockedCompareExchange64((volatile signed __int64 *)v29, Process, v46);
              if ( v46 == v48 )
                break;
              v46 = v48;
            }
          }
          v26 = v77;
        }
        v27 = v78;
      }
      else
      {
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(Process + 4 * ((v29 >> 3) & 0x1FF)));
      }
      if ( v19 != 0xFFFFF6FB7DBEDF68uLL )
      {
        if ( (*(_DWORD *)(v26 + 184) & 0xF) != 0
          || v19 < 0xFFFFF6FB7DBED000uLL
          || v19 > 0xFFFFF6FB7DBEDFFFuLL
          || (Process = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
        {
          if ( (*(_DWORD *)(v26 + 184) & 0xF) != 0 && v19 >= 0xFFFFF6FB7DBED000uLL && v19 <= 0xFFFFF6FB7DBEDFFFuLL )
          {
            v73 = 2 * ((__int64)(v19 + 0x90482413000LL) >> 3);
            Process = v73;
            _InterlockedAnd((volatile signed __int32 *)&MiState + ((unsigned __int64)v73 >> 5) + 1467, ~(3 << v73));
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)v19, 0xCFFFFFFFFFFFFFFFuLL);
          }
        }
        else
        {
          ExReleaseSpinLockRegardlessFromDpcLevel((volatile signed __int32 *)(Process + 4 * ((v19 >> 3) & 0x1FF)));
        }
        goto LABEL_128;
      }
      v64 = KeGetCurrentPrcb();
      v65 = *(_DWORD *)(v26 + 184) & 0xF;
      if ( !v65 )
      {
        v66 = 2LL;
        goto LABEL_165;
      }
      if ( v65 == 7 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v64->SelfmapLockHandle[1]);
      }
      else
      {
        v66 = 3LL;
        if ( v65 == 5 )
          v66 = 0LL;
LABEL_165:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v64->SelfmapLockHandle[v66]);
      }
LABEL_128:
      v19 = v29;
    }
    v28 = 0xFFFFF6FB7DBED000uLL;
    if ( !v27 )
      break;
    --v27;
    v24 = 0;
  }
  v4 = a2;
  v5 = a1;
  if ( v19 == a2 )
    goto LABEL_16;
  if ( (*(_DWORD *)a1 & 0x800) != 0 && v19 == 0xFFFFF6FB7DBEDF68uLL )
    goto LABEL_67;
  if ( v19 == 0xFFFFF6FB7DBEDF68uLL )
  {
    v67 = KeGetCurrentPrcb();
    v68 = *(_DWORD *)(v77 + 184) & 0xF;
    if ( v68 )
    {
      if ( v68 == 7 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v67->SelfmapLockHandle[1]);
        goto LABEL_67;
      }
      v69 = 3LL;
      if ( v68 == 5 )
        v69 = 0LL;
    }
    else
    {
      v69 = 2LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v67->SelfmapLockHandle[v69]);
    goto LABEL_67;
  }
  if ( (*(_DWORD *)(v77 + 184) & 0xF) != 0
    || v19 < 0xFFFFF6FB7DBED000uLL
    || v19 > 0xFFFFF6FB7DBEDFFFuLL
    || (v70 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
  {
    if ( (*(_DWORD *)(v77 + 184) & 0xF) != 0 && v19 >= 0xFFFFF6FB7DBED000uLL && v19 <= 0xFFFFF6FB7DBEDFFFuLL )
      _InterlockedAnd(
        (volatile signed __int32 *)&MiState
      + ((unsigned __int64)(2 * (unsigned int)((__int64)(v19 + 0x90482413000LL) >> 3)) >> 5)
      + 1467,
        ~(2 << ((2 * ((__int64)(v19 + 0x90482413000LL) >> 3)) & 0x1F)) & ~(1 << ((2
                                                                                * ((__int64)(v19 + 0x90482413000LL) >> 3)) & 0x1F)));
    else
      _InterlockedAnd64((volatile signed __int64 *)v19, 0xCFFFFFFFFFFFFFFFuLL);
  }
  else
  {
    ExReleaseSpinLockRegardlessFromDpcLevel((volatile signed __int32 *)(v70 + 4 * ((v19 >> 3) & 0x1FF)));
  }
LABEL_67:
  if ( !v86 )
    MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 32), *(unsigned __int8 *)(a1 + 9));
  return 0LL;
}
