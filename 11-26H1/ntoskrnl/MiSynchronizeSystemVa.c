/*
 * XREFs of MiSynchronizeSystemVa @ 0x1402C58B0
 * Callers:
 *     MiTranslatePageForCopy @ 0x14033ADCC (MiTranslatePageForCopy.c)
 *     MiSystemFault @ 0x1403A6268 (MiSystemFault.c)
 *     MiTrimViewLockSystemPte @ 0x1403A8480 (MiTrimViewLockSystemPte.c)
 *     MiLockStealSystemVm @ 0x14044D760 (MiLockStealSystemVm.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140248E20 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14024B4A0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiLockWorkingSetExclusive @ 0x14027DB10 (MiLockWorkingSetExclusive.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029B1F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetSystemCacheReverseMap @ 0x1402C6730 (MiGetSystemCacheReverseMap.c)
 *     MiGetMultiplexedVm @ 0x1402C67F0 (MiGetMultiplexedVm.c)
 *     MiUnlockSystemVa @ 0x1402C7240 (MiUnlockSystemVa.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402C7E40 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     MiFastLockLeafPageTable @ 0x1402CF2D0 (MiFastLockLeafPageTable.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402D0080 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiFillPteHierarchy @ 0x1403A17B0 (MiFillPteHierarchy.c)
 *     MiPageTableStillExists @ 0x140481FF4 (MiPageTableStillExists.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiSynchronizeSystemVa(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  int v5; // r15d
  unsigned __int64 v6; // rbx
  __int64 v8; // r12
  int v9; // edi
  char v10; // al
  __int64 *v11; // rcx
  unsigned int v12; // eax
  _DWORD *v13; // rbx
  unsigned int v14; // ebp
  unsigned __int8 CurrentIrql; // si
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  _DWORD *MmInternal; // rcx
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rsi
  int v21; // eax
  unsigned __int64 v22; // rbp
  struct _KPRCB *CurrentPrcb; // r8
  char v25; // al
  unsigned int v26; // ecx
  volatile __int64 *v27; // rdx
  __int64 Process; // rcx
  __int64 i; // rax
  unsigned __int64 v30; // r11
  unsigned __int64 v31; // r8
  signed __int64 v32; // rbx
  int v33; // r12d
  unsigned __int64 v34; // rbp
  unsigned int v35; // r14d
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rax
  volatile signed __int64 v39; // rdx
  __int64 v40; // rbx
  unsigned __int64 v41; // r9
  unsigned __int64 v42; // r10
  unsigned __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // r8
  __int64 *v47; // rdx
  __int64 v48; // rax
  unsigned __int64 v49; // rdx
  signed __int64 v50; // rax
  struct _KPRCB *v51; // r8
  char v52; // al
  unsigned int v53; // ecx
  volatile __int64 *v54; // rdx
  char v55; // bp
  int v56; // r12d
  volatile signed __int32 *v57; // rbx
  unsigned __int32 v58; // edx
  bool v59; // zf
  signed __int32 v60; // eax
  __int64 HasShadow; // rax
  __int64 v62; // rax
  __int64 SystemCacheReverseMap; // rax
  __int64 v64; // rcx
  unsigned __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  struct _KPRCB *v68; // rdx
  char v69; // al
  __int64 v70; // rcx
  signed __int64 v71; // rax
  signed __int64 v72; // rax
  int v73; // ecx
  signed __int32 v74; // eax
  int v75; // ecx
  char v76; // [rsp+20h] [rbp-88h]
  unsigned __int64 v77; // [rsp+28h] [rbp-80h]
  unsigned __int64 v78; // [rsp+30h] [rbp-78h]
  __int64 v79; // [rsp+38h] [rbp-70h]
  unsigned __int64 v80; // [rsp+40h] [rbp-68h]
  __int128 v81; // [rsp+48h] [rbp-60h] BYREF
  __int128 v82; // [rsp+58h] [rbp-50h]
  __int64 retaddr; // [rsp+A8h] [rbp+0h]
  int v85; // [rsp+C0h] [rbp+18h] BYREF

  v5 = 0;
  v85 = 0;
  v6 = a2;
  v81 = 0LL;
  v82 = 0LL;
  if ( !(_DWORD)a3 )
    return 0LL;
  v8 = a5;
  *(_DWORD *)(a5 + 16) = 0;
  *(_QWORD *)(v8 + 24) = a1;
  v9 = *(_DWORD *)(a1 + 184);
  v10 = *(_BYTE *)(v8 + 37);
  v76 = v9;
  if ( a4 )
  {
    *(_BYTE *)(v8 + 37) = v10 | 1;
    *(_BYTE *)(v8 + 36) = MiLockWorkingSetExclusive(a1, a2, a3);
    MiFillPteHierarchy(v6, &v81);
    if ( (unsigned int)MiPageTableStillExists(&v81, &v85) )
    {
      if ( !v85 )
        goto LABEL_21;
      if ( (*(_DWORD *)(v8 + 4) & 4) != 0 )
      {
        *(_DWORD *)(v8 + 16) = v85;
        goto LABEL_21;
      }
    }
    goto LABEL_139;
  }
  *(_BYTE *)(v8 + 37) = v10 & 0xFE;
  if ( (*(_DWORD *)(a1 + 184) & 0xFu) > 5 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
      v11 = &qword_140E37980;
    else
      v11 = (__int64 *)(a1 + 192);
    v12 = (KeGetPcr()->Prcb.Number >> 1) & 3;
    v13 = (_DWORD *)(*v11 + ((unsigned __int64)v12 << 6));
    v14 = v12;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(v13);
      v16 = *v13 & 0x7FFFFFFF;
      while ( 1 )
      {
        v17 = v16;
        v16 = _InterlockedCompareExchange(v13, v16 + 1, v16);
        if ( v17 == v16 )
          break;
        if ( v16 < 0 )
        {
          ExpWaitForSpinLockSharedAndAcquire(v13, CurrentIrql, a3);
          break;
        }
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v13, CurrentIrql);
    }
    MmInternal = KeGetCurrentPrcb()->MmInternal;
    if ( MmInternal )
      MmInternal[81] = v14;
    v6 = a2;
  }
  *(_BYTE *)(v8 + 36) = CurrentIrql;
  v19 = 0LL;
  v20 = 0LL;
  if ( v6 < 0xFFFFF68000000000uLL || v6 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v21 = MiFastLockLeafPageTable(a1, v6, 0LL);
    v85 = v21;
    if ( v21 )
    {
      *(_QWORD *)&v81 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)&v81 + 1) = (((unsigned __int64)v81 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *(_QWORD *)&v82 = ((*((_QWORD *)&v81 + 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)&v82 + 1) = (((unsigned __int64)v82 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v19 = *((_QWORD *)&v81 + v21);
      v20 = *(&v80 + v21);
    }
  }
  v22 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v80 = v22;
  if ( v19 )
    goto LABEL_20;
  *(_QWORD *)&v81 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *((_QWORD *)&v81 + 1) = (((unsigned __int64)v81 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)&v82 = ((*((_QWORD *)&v81 + 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *((_QWORD *)&v82 + 1) = (((unsigned __int64)v82 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v19 = 0xFFFFF6FB7DBEDF68uLL;
  CurrentPrcb = KeGetCurrentPrcb();
  v77 = 0xFFFFF6FB7DBEDF68uLL;
  v25 = *(_DWORD *)(a1 + 184) & 0xF;
  if ( v25 )
  {
    if ( v25 == 7 )
    {
      v26 = 1;
    }
    else
    {
      v26 = 3;
      if ( v25 == 5 )
        v26 = 0;
    }
    v27 = (volatile __int64 *)(&MiState + 2 * v26 + 2278);
  }
  else
  {
    v26 = 2;
    v27 = (volatile __int64 *)(a1 + 176);
  }
  Process = (__int64)CurrentPrcb->SelfmapLockHandle + 16 * v26 + 8 * v26;
  *(_QWORD *)(Process + 8) = v27;
  *(_QWORD *)Process = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _InterlockedExchange64(v27, Process) )
      KxWaitForLockOwnerShip(Process);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(Process, v27);
  }
  for ( i = 2LL; ; i = v79 - 1 )
  {
    v20 = *((_QWORD *)&v81 + i);
    v30 = 0xDFFFFFFFFFFFFFFFuLL;
    v31 = 0xFFFFF6FB7DBED000uLL;
    v32 = *(_QWORD *)v20;
    v79 = i;
    if ( v20 >= 0xFFFFF6FB7DBED000uLL
      && v20 <= 0xFFFFF6FB7DBED7F8uLL
      && (v32 & 1) != 0
      && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0)
      && (MiFlags & 0x1800000) != 0 )
    {
      Process = (__int64)KeGetCurrentThread()->ApcState.Process;
      if ( *(_BYTE *)(Process + 352) != 1 )
      {
        if ( Process )
        {
          v37 = *(_QWORD *)(Process + 1288);
          if ( v37 )
          {
            v38 = *(_QWORD *)(v37 + 8 * ((v20 >> 3) & 0x1FF));
            if ( (v38 & 0x20) != 0 )
              v32 |= 0x20uLL;
            Process = v32;
            v32 |= 0x42uLL;
            if ( (v38 & 0x42) == 0 )
              v32 = Process;
          }
        }
      }
    }
    if ( (v32 & 0x81) != 1 )
    {
      v22 = v80;
      goto LABEL_59;
    }
    if ( (v32 & 0x20) == 0 )
    {
      v33 = 0;
      v34 = (__int64)(v20 << 25) >> 16;
      if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 && v20 >= 0xFFFFF6FB7DBED000uLL && v20 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v33 = 1;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          v35 = 0;
          if ( _interlockedbittestandset(&dword_140E36200, 0x1Fu) )
            v35 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140E36200, 0xFFu);
          v36 = (unsigned int)dword_140E36200;
          Process = (unsigned int)dword_140E36200;
          for ( LODWORD(Process) = dword_140E36200 & 0xBFFFFFFF;
                (dword_140E36200 & 0xBFFFFFFF) != 0x80000000;
                v36 = (unsigned int)dword_140E36200 )
          {
            if ( (v36 & 0x40000000) == 0 )
              _InterlockedOr(&dword_140E36200, 0x40000000u);
            if ( (++v35 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Process, v36, v31) )
            {
              HvlNotifyLongSpinWait(v35);
            }
            else
            {
              _mm_pause();
            }
          }
          v19 = v77;
        }
        else
        {
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140E36200, 0xFFu);
        }
      }
      if ( v34 >= 0xFFFFF68000000000uLL && v34 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        while ( 1 )
        {
          Process = v32 | 0x20;
          if ( (MiFlags & 0x8000000) != 0 )
            _mm_lfence();
          v72 = _InterlockedCompareExchange64((volatile signed __int64 *)v20, Process, v32);
          if ( v32 == v72 )
            break;
          v32 = v72;
        }
        goto LABEL_74;
      }
      v39 = *(_QWORD *)v20;
      v40 = v32 | 0x20;
      v41 = 0xFFFFF6FB7DBED000uLL;
      v42 = 0xFFFFF6FB7DBED7F8uLL;
      if ( v20 >= 0xFFFFF6FB7DBED000uLL
        && v20 <= 0xFFFFF6FB7DBED7F8uLL
        && (v39 & 1) != 0
        && ((v39 & 0x20) == 0 || (v39 & 0x42) == 0) )
      {
        HasShadow = MiPteHasShadow(Process, v39, v31);
        if ( HasShadow )
        {
          Process = *(_QWORD *)(HasShadow + 1288);
          if ( Process )
          {
            v62 = *(_QWORD *)(Process + 8 * ((v20 >> 3) & 0x1FF));
            if ( (v62 & 0x20) != 0 )
              v39 |= 0x20uLL;
            Process = v39;
            v39 |= 0x42uLL;
            if ( (v62 & 0x42) == 0 )
              v39 = Process;
          }
        }
      }
      v43 = v39 ^ (v40 ^ v39) & 0x80FFFFFFFFFFFFFFuLL;
      v44 = 0LL;
      v78 = v43;
      if ( v20 >= v41 && v20 <= v42 )
      {
        if ( MiPteHasShadow(Process, 0LL, v43) )
        {
          v44 = 1LL;
          if ( !BYTE5(stru_140E2DAB0.Header.WaitListHead.Blink) )
          {
            v65 = v78;
            if ( (v78 & 1) != 0 )
              goto LABEL_188;
          }
        }
        else
        {
          Process = (__int64)KeGetCurrentThread()->ApcState.Process;
          if ( (*(_DWORD *)(Process + 1532) & 0x1000) != 0 )
          {
            v65 = v78;
            if ( (v78 & 1) != 0 )
LABEL_188:
              v43 = v65 | 0x8000000000000000uLL;
          }
        }
      }
      *(_QWORD *)v20 = v43;
      if ( (_DWORD)v44 )
      {
        v45 = MiPteHasShadow(Process, v44, v43);
        if ( v45 )
        {
          Process = *(_QWORD *)(v45 + 1288);
          if ( Process )
          {
            v47 = (__int64 *)(Process + 8 * ((v20 >> 3) & 0x1FF));
            Process = v46 & 0x7FFFFFFFFFFFFFFFLL;
            v48 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
            if ( (v46 & 1) != 0 )
              v48 = v46 & 0x7FFFFFFFFFFFFFFFLL;
            *v47 = v48;
          }
        }
      }
LABEL_74:
      if ( v33 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          dword_140E36200 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E36200, retaddr);
      }
      v30 = 0xDFFFFFFFFFFFFFFFuLL;
    }
    if ( v20 == v19 )
      goto LABEL_109;
    if ( v20 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v51 = KeGetCurrentPrcb();
      v52 = *(_DWORD *)(a1 + 184) & 0xF;
      if ( v52 )
      {
        if ( v52 == 7 )
        {
          v53 = 1;
        }
        else
        {
          v53 = 3;
          if ( v52 == 5 )
            v53 = 0;
        }
        v54 = (volatile __int64 *)(&MiState + 2 * v53 + 2278);
      }
      else
      {
        v53 = 2;
        v54 = (volatile __int64 *)(a1 + 176);
      }
      Process = (__int64)v51->SelfmapLockHandle + 16 * v53 + 8 * v53;
      *(_QWORD *)(Process + 8) = v54;
      *(_QWORD *)Process = 0LL;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        if ( _InterlockedExchange64(v54, Process) )
          KxWaitForLockOwnerShip(Process);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented(Process, v54);
      }
    }
    else if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0
           || v20 < 0xFFFFF6FB7DBED000uLL
           || v20 > 0xFFFFF6FB7DBEDFFFuLL
           || (Process = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
    {
      if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 && v20 >= 0xFFFFF6FB7DBED000uLL && v20 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v85 = 0;
        v55 = (2 * ((__int64)(v20 + 0x90482413000LL) >> 3)) & 0x1F;
        v56 = 2 << v55;
        v57 = (volatile signed __int32 *)(&MiState
                                        + ((unsigned __int64)(2 * (unsigned int)((__int64)(v20 + 0x90482413000LL) >> 3)) >> 5)
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
                KeYieldProcessorEx(&v85);
                v58 = *v57;
              }
              while ( (((unsigned __int32)*v57 >> v55) & 1) != 0 );
            }
            else
            {
              v73 = v56 | v58;
              v74 = _InterlockedCompareExchange(v57, v56 | v58, v58);
              v59 = v58 == v74;
              v58 = v74;
              if ( v59 )
                v58 = v73;
            }
          }
          Process = ~(2 << v55) & (v58 | (1 << v55));
          v60 = _InterlockedCompareExchange(v57, Process, v58);
          v59 = v58 == v60;
          v58 = v60;
        }
        while ( !v59 );
        v19 = v77;
        v5 = 0;
      }
      else
      {
        v49 = *(_QWORD *)v20;
        v85 = 0;
        if ( v20 >= 0xFFFFF6FB7DBED000uLL
          && v20 <= 0xFFFFF6FB7DBED7F8uLL
          && (v49 & 1) != 0
          && ((v49 & 0x20) == 0 || (v49 & 0x42) == 0) )
        {
          v66 = MiPteHasShadow(Process, v49, 0xFFFFF6FB7DBED000uLL);
          if ( v66 )
          {
            Process = *(_QWORD *)(v66 + 1288);
            if ( Process )
            {
              v67 = *(_QWORD *)(Process + 8 * ((v20 >> 3) & 0x1FF));
              if ( (v67 & 0x20) != 0 )
                v49 |= 0x20uLL;
              Process = v49;
              v49 |= 0x42uLL;
              if ( (v67 & 0x42) == 0 )
                v49 = Process;
            }
          }
        }
        while ( (v49 & 1) != 0 )
        {
          if ( (v49 & 0x1000000000000000LL) != 0 )
          {
            if ( ((v49 >> 60) & 2) != 0 )
            {
              do
              {
                KeYieldProcessorEx(&v85);
                v49 = *(_QWORD *)v20;
              }
              while ( (*(_QWORD *)v20 & 0x1000000000000000LL) != 0 );
              v30 = 0xDFFFFFFFFFFFFFFFuLL;
            }
            else
            {
              Process = v49 | 0x2000000000000000LL;
              if ( (MiFlags & 0x8000000) != 0 )
                _mm_lfence();
              v71 = _InterlockedCompareExchange64((volatile signed __int64 *)v20, Process, v49);
              if ( v49 == v71 )
                v49 |= 0x2000000000000000uLL;
              else
                v49 = v71;
            }
          }
          else
          {
            Process = v30 & v49 | 0x1000000000000020LL;
            if ( (MiFlags & 0x8000000) != 0 )
              _mm_lfence();
            v50 = _InterlockedCompareExchange64((volatile signed __int64 *)v20, Process, v49);
            if ( v49 == v50 )
              break;
            v49 = v50;
          }
        }
        LOBYTE(v9) = v76;
      }
    }
    else
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(Process + 4 * ((v20 >> 3) & 0x1FF)));
    }
    if ( v19 != 0xFFFFF6FB7DBEDF68uLL )
    {
      if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0
        || v19 < 0xFFFFF6FB7DBED000uLL
        || v19 > 0xFFFFF6FB7DBEDFFFuLL
        || (Process = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
      {
        if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 && v19 >= 0xFFFFF6FB7DBED000uLL && v19 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          Process = (__int64)&MiState;
          _InterlockedAnd(
            (volatile signed __int32 *)&MiState
          + ((unsigned __int64)(2 * (unsigned int)((__int64)(v19 + 0x90482413000LL) >> 3)) >> 5)
          + 1467,
            ~(2 << ((2 * ((__int64)(v19 + 0x90482413000LL) >> 3)) & 0x1F)) & ~(1 << ((2
                                                                                    * ((__int64)(v19 + 0x90482413000LL) >> 3)) & 0x1F)));
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)v19, 0xCFFFFFFFFFFFFFFFuLL);
        }
      }
      else
      {
        ExReleaseSpinLockRegardlessFromDpcLevel(Process + 4 * ((v19 >> 3) & 0x1FF));
      }
      goto LABEL_108;
    }
    v68 = KeGetCurrentPrcb();
    v69 = *(_DWORD *)(a1 + 184) & 0xF;
    if ( v69 )
    {
      if ( v69 == 7 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v68->SelfmapLockHandle[1]);
        goto LABEL_108;
      }
      v70 = 3LL;
      if ( v69 == 5 )
        v70 = 0LL;
    }
    else
    {
      v70 = 2LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v68->SelfmapLockHandle[v70]);
LABEL_108:
    v19 = v20;
    v77 = v20;
LABEL_109:
    if ( !v79 )
      break;
  }
  v22 = v80;
  v20 = v80;
LABEL_59:
  v8 = a5;
  v6 = a2;
LABEL_20:
  *(_QWORD *)(v8 + 40) = v19;
  if ( v20 != v22 )
  {
    if ( (*(_DWORD *)(v8 + 4) & 4) == 0 || (*(_QWORD *)v20 & 0x81) != 0x81 )
      goto LABEL_139;
    do
    {
      v22 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v75 = ++v5;
    }
    while ( v22 != v20 );
    *(_DWORD *)(v8 + 16) = v75;
    return 1LL;
  }
LABEL_21:
  if ( (v9 & 0xF) != 1 )
    return 1LL;
  if ( *(_DWORD *)(v8 + 48) == 3 )
  {
    *(_QWORD *)(v8 + 24) = &unk_140E3D680;
    return 1LL;
  }
  SystemCacheReverseMap = MiGetSystemCacheReverseMap(v6);
  if ( SystemCacheReverseMap && *(_QWORD *)(SystemCacheReverseMap + 32) >> 62 == 3 )
  {
    *(_QWORD *)(v8 + 24) = MiGetMultiplexedVm(v64, v6);
    return 1LL;
  }
LABEL_139:
  MiUnlockSystemVa(v8);
  return 0LL;
}
