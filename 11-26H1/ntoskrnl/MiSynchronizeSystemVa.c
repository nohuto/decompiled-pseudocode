/*
 * XREFs of MiSynchronizeSystemVa @ 0x1402E3870
 * Callers:
 *     MiTranslatePageForCopy @ 0x140338D4C (MiTranslatePageForCopy.c)
 *     MiSystemFault @ 0x1403A4508 (MiSystemFault.c)
 *     MiTrimViewLockSystemPte @ 0x1403A6720 (MiTrimViewLockSystemPte.c)
 *     MiLockStealSystemVm @ 0x140455630 (MiLockStealSystemVm.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402474C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140249B40 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiLockWorkingSetExclusive @ 0x14027E5A0 (MiLockWorkingSetExclusive.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029BC90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KxWaitForLockOwnerShip @ 0x1402B29C0 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402B4830 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402B9F90 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetSystemCacheReverseMap @ 0x1402E46F0 (MiGetSystemCacheReverseMap.c)
 *     MiGetMultiplexedVm @ 0x1402E47B0 (MiGetMultiplexedVm.c)
 *     MiUnlockSystemVa @ 0x1402E5200 (MiUnlockSystemVa.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402E5E00 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     MiFastLockLeafPageTable @ 0x1402ED250 (MiFastLockLeafPageTable.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402EE000 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiPteHasShadow @ 0x1403011E0 (MiPteHasShadow.c)
 *     MiFillPteHierarchy @ 0x14039FA50 (MiFillPteHierarchy.c)
 *     MiPageTableStillExists @ 0x1404884B4 (MiPageTableStillExists.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
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
  __int64 v29; // rax
  __int64 i; // rax
  unsigned __int64 v31; // r11
  unsigned __int64 v32; // r8
  signed __int64 v33; // rbx
  int v34; // r12d
  unsigned __int64 v35; // rbp
  unsigned int v36; // r14d
  LONG v37; // edx
  __int64 v38; // rdx
  __int64 v39; // rax
  volatile signed __int64 v40; // rdx
  __int64 v41; // rbx
  unsigned __int64 v42; // r9
  unsigned __int64 v43; // r10
  unsigned __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // r8
  __int64 *v48; // rdx
  __int64 v49; // rax
  unsigned __int64 v50; // rdx
  signed __int64 v51; // rax
  struct _KPRCB *v52; // r8
  char v53; // al
  unsigned int v54; // ecx
  volatile __int64 *v55; // rdx
  __int64 v56; // rax
  char v57; // bp
  int v58; // r12d
  volatile signed __int32 *v59; // rbx
  unsigned __int32 v60; // edx
  bool v61; // zf
  signed __int32 v62; // eax
  __int64 HasShadow; // rax
  __int64 v64; // rax
  __int64 SystemCacheReverseMap; // rax
  __int64 v66; // rcx
  unsigned __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  struct _KPRCB *v70; // rdx
  char v71; // al
  __int64 v72; // rcx
  signed __int64 v73; // rax
  signed __int64 v74; // rax
  int v75; // ecx
  signed __int32 v76; // eax
  int v77; // ecx
  char v78; // [rsp+20h] [rbp-88h]
  unsigned __int64 v79; // [rsp+28h] [rbp-80h]
  unsigned __int64 v80; // [rsp+30h] [rbp-78h]
  __int64 v81; // [rsp+38h] [rbp-70h]
  unsigned __int64 v82; // [rsp+40h] [rbp-68h]
  __int128 v83; // [rsp+48h] [rbp-60h] BYREF
  __int128 v84; // [rsp+58h] [rbp-50h]
  __int64 retaddr; // [rsp+A8h] [rbp+0h]
  int v87; // [rsp+C0h] [rbp+18h] BYREF

  v5 = 0;
  v87 = 0;
  v6 = a2;
  v83 = 0LL;
  v84 = 0LL;
  if ( !(_DWORD)a3 )
    return 0LL;
  v8 = a5;
  *(_DWORD *)(a5 + 16) = 0;
  *(_QWORD *)(v8 + 24) = a1;
  v9 = *(_DWORD *)(a1 + 184);
  v10 = *(_BYTE *)(v8 + 37);
  v78 = v9;
  if ( a4 )
  {
    *(_BYTE *)(v8 + 37) = v10 | 1;
    *(_BYTE *)(v8 + 36) = MiLockWorkingSetExclusive(a1, a2, a3);
    MiFillPteHierarchy(v6, &v83);
    if ( (unsigned int)MiPageTableStillExists(&v83, &v87) )
    {
      if ( !v87 )
        goto LABEL_21;
      if ( (*(_DWORD *)(v8 + 4) & 4) != 0 )
      {
        *(_DWORD *)(v8 + 16) = v87;
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
      v11 = &qword_140E37800;
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
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
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
    v87 = v21;
    if ( v21 )
    {
      *(_QWORD *)&v83 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)&v83 + 1) = (((unsigned __int64)v83 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *(_QWORD *)&v84 = ((*((_QWORD *)&v83 + 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)&v84 + 1) = (((unsigned __int64)v84 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v19 = *((_QWORD *)&v83 + v21);
      v20 = *(&v82 + v21);
    }
  }
  v22 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v82 = v22;
  if ( v19 )
    goto LABEL_20;
  *(_QWORD *)&v83 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *((_QWORD *)&v83 + 1) = (((unsigned __int64)v83 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)&v84 = ((*((_QWORD *)&v83 + 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *((_QWORD *)&v84 + 1) = (((unsigned __int64)v84 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v19 = 0xFFFFF6FB7DBEDF68uLL;
  CurrentPrcb = KeGetCurrentPrcb();
  v79 = 0xFFFFF6FB7DBEDF68uLL;
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
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
  {
    v29 = _InterlockedExchange64(v27, Process);
    if ( v29 )
      KxWaitForLockOwnerShip(Process, v29, (__int64)CurrentPrcb);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(Process, v27);
  }
  for ( i = 2LL; ; i = v81 - 1 )
  {
    v20 = *((_QWORD *)&v83 + i);
    v31 = 0xDFFFFFFFFFFFFFFFuLL;
    v32 = 0xFFFFF6FB7DBED000uLL;
    v33 = *(_QWORD *)v20;
    v81 = i;
    if ( v20 >= 0xFFFFF6FB7DBED000uLL
      && v20 <= 0xFFFFF6FB7DBED7F8uLL
      && (v33 & 1) != 0
      && ((v33 & 0x20) == 0 || (v33 & 0x42) == 0)
      && (MiFlags & 0x1800000) != 0 )
    {
      Process = (__int64)KeGetCurrentThread()->ApcState.Process;
      if ( *(_BYTE *)(Process + 352) != 1 )
      {
        if ( Process )
        {
          v38 = *(_QWORD *)(Process + 1288);
          if ( v38 )
          {
            v39 = *(_QWORD *)(v38 + 8 * ((v20 >> 3) & 0x1FF));
            if ( (v39 & 0x20) != 0 )
              v33 |= 0x20uLL;
            Process = v33;
            v33 |= 0x42uLL;
            if ( (v39 & 0x42) == 0 )
              v33 = Process;
          }
        }
      }
    }
    if ( (v33 & 0x81) != 1 )
    {
      v22 = v82;
      goto LABEL_59;
    }
    if ( (v33 & 0x20) == 0 )
    {
      v34 = 0;
      v35 = (__int64)(v20 << 25) >> 16;
      if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 && v20 >= 0xFFFFF6FB7DBED000uLL && v20 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v34 = 1;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        {
          v36 = 0;
          if ( _interlockedbittestandset(&dword_140E36080, 0x1Fu) )
            v36 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140E36080, 0xFFu);
          v37 = dword_140E36080;
          Process = (unsigned int)dword_140E36080;
          for ( LODWORD(Process) = dword_140E36080 & 0xBFFFFFFF;
                (dword_140E36080 & 0xBFFFFFFF) != 0x80000000;
                v37 = dword_140E36080 )
          {
            if ( (v37 & 0x40000000) == 0 )
              _InterlockedOr(&dword_140E36080, 0x40000000u);
            if ( (++v36 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v36);
            }
            else
            {
              _mm_pause();
            }
          }
          v19 = v79;
        }
        else
        {
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140E36080, 0xFFu);
        }
      }
      if ( v35 >= 0xFFFFF68000000000uLL && v35 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        while ( 1 )
        {
          Process = v33 | 0x20;
          if ( (MiFlags & 0x8000000) != 0 )
            _mm_lfence();
          v74 = _InterlockedCompareExchange64((volatile signed __int64 *)v20, Process, v33);
          if ( v33 == v74 )
            break;
          v33 = v74;
        }
        goto LABEL_74;
      }
      v40 = *(_QWORD *)v20;
      v41 = v33 | 0x20;
      v42 = 0xFFFFF6FB7DBED000uLL;
      v43 = 0xFFFFF6FB7DBED7F8uLL;
      if ( v20 >= 0xFFFFF6FB7DBED000uLL
        && v20 <= 0xFFFFF6FB7DBED7F8uLL
        && (v40 & 1) != 0
        && ((v40 & 0x20) == 0 || (v40 & 0x42) == 0) )
      {
        HasShadow = MiPteHasShadow(Process, v40, v32);
        if ( HasShadow )
        {
          Process = *(_QWORD *)(HasShadow + 1288);
          if ( Process )
          {
            v64 = *(_QWORD *)(Process + 8 * ((v20 >> 3) & 0x1FF));
            if ( (v64 & 0x20) != 0 )
              v40 |= 0x20uLL;
            Process = v40;
            v40 |= 0x42uLL;
            if ( (v64 & 0x42) == 0 )
              v40 = Process;
          }
        }
      }
      v44 = v40 ^ (v41 ^ v40) & 0x80FFFFFFFFFFFFFFuLL;
      v45 = 0LL;
      v80 = v44;
      if ( v20 >= v42 && v20 <= v43 )
      {
        if ( MiPteHasShadow(Process, 0LL, v44) )
        {
          v45 = 1LL;
          if ( !BYTE5(stru_140E2D930.Header.WaitListHead.Blink) )
          {
            v67 = v80;
            if ( (v80 & 1) != 0 )
              goto LABEL_188;
          }
        }
        else
        {
          Process = (__int64)KeGetCurrentThread()->ApcState.Process;
          if ( (*(_DWORD *)(Process + 1532) & 0x1000) != 0 )
          {
            v67 = v80;
            if ( (v80 & 1) != 0 )
LABEL_188:
              v44 = v67 | 0x8000000000000000uLL;
          }
        }
      }
      *(_QWORD *)v20 = v44;
      if ( (_DWORD)v45 )
      {
        v46 = MiPteHasShadow(Process, v45, v44);
        if ( v46 )
        {
          Process = *(_QWORD *)(v46 + 1288);
          if ( Process )
          {
            v48 = (__int64 *)(Process + 8 * ((v20 >> 3) & 0x1FF));
            Process = v47 & 0x7FFFFFFFFFFFFFFFLL;
            v49 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
            if ( (v47 & 1) != 0 )
              v49 = v47 & 0x7FFFFFFFFFFFFFFFLL;
            *v48 = v49;
          }
        }
      }
LABEL_74:
      if ( v34 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
          dword_140E36080 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E36080, retaddr);
      }
      v31 = 0xDFFFFFFFFFFFFFFFuLL;
    }
    if ( v20 == v19 )
      goto LABEL_109;
    if ( v20 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v52 = KeGetCurrentPrcb();
      v53 = *(_DWORD *)(a1 + 184) & 0xF;
      if ( v53 )
      {
        if ( v53 == 7 )
        {
          v54 = 1;
        }
        else
        {
          v54 = 3;
          if ( v53 == 5 )
            v54 = 0;
        }
        v55 = (volatile __int64 *)(&MiState + 2 * v54 + 2278);
      }
      else
      {
        v54 = 2;
        v55 = (volatile __int64 *)(a1 + 176);
      }
      Process = (__int64)v52->SelfmapLockHandle + 16 * v54 + 8 * v54;
      *(_QWORD *)(Process + 8) = v55;
      *(_QWORD *)Process = 0LL;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      {
        v56 = _InterlockedExchange64(v55, Process);
        if ( v56 )
          KxWaitForLockOwnerShip(Process, v56, (__int64)v52);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented(Process, v55);
      }
    }
    else if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0
           || v20 < 0xFFFFF6FB7DBED000uLL
           || v20 > 0xFFFFF6FB7DBEDFFFuLL
           || (Process = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
    {
      if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 && v20 >= 0xFFFFF6FB7DBED000uLL && v20 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v87 = 0;
        v57 = (2 * ((__int64)(v20 + 0x90482413000LL) >> 3)) & 0x1F;
        v58 = 2 << v57;
        v59 = (volatile signed __int32 *)(&MiState
                                        + ((unsigned __int64)(2 * (unsigned int)((__int64)(v20 + 0x90482413000LL) >> 3)) >> 5)
                                        + 1467);
        v60 = *v59;
        do
        {
          while ( ((v60 >> v57) & 1) != 0 )
          {
            if ( ((v60 >> v57) & 2) != 0 )
            {
              do
              {
                KeYieldProcessorEx(&v87);
                v60 = *v59;
              }
              while ( (((unsigned __int32)*v59 >> v57) & 1) != 0 );
            }
            else
            {
              v75 = v58 | v60;
              v76 = _InterlockedCompareExchange(v59, v58 | v60, v60);
              v61 = v60 == v76;
              v60 = v76;
              if ( v61 )
                v60 = v75;
            }
          }
          Process = ~(2 << v57) & (v60 | (1 << v57));
          v62 = _InterlockedCompareExchange(v59, Process, v60);
          v61 = v60 == v62;
          v60 = v62;
        }
        while ( !v61 );
        v19 = v79;
        v5 = 0;
      }
      else
      {
        v50 = *(_QWORD *)v20;
        v87 = 0;
        if ( v20 >= 0xFFFFF6FB7DBED000uLL
          && v20 <= 0xFFFFF6FB7DBED7F8uLL
          && (v50 & 1) != 0
          && ((v50 & 0x20) == 0 || (v50 & 0x42) == 0) )
        {
          v68 = MiPteHasShadow(Process, v50, 0xFFFFF6FB7DBED000uLL);
          if ( v68 )
          {
            Process = *(_QWORD *)(v68 + 1288);
            if ( Process )
            {
              v69 = *(_QWORD *)(Process + 8 * ((v20 >> 3) & 0x1FF));
              if ( (v69 & 0x20) != 0 )
                v50 |= 0x20uLL;
              Process = v50;
              v50 |= 0x42uLL;
              if ( (v69 & 0x42) == 0 )
                v50 = Process;
            }
          }
        }
        while ( (v50 & 1) != 0 )
        {
          if ( (v50 & 0x1000000000000000LL) != 0 )
          {
            if ( ((v50 >> 60) & 2) != 0 )
            {
              do
              {
                KeYieldProcessorEx(&v87);
                v50 = *(_QWORD *)v20;
              }
              while ( (*(_QWORD *)v20 & 0x1000000000000000LL) != 0 );
              v31 = 0xDFFFFFFFFFFFFFFFuLL;
            }
            else
            {
              Process = v50 | 0x2000000000000000LL;
              if ( (MiFlags & 0x8000000) != 0 )
                _mm_lfence();
              v73 = _InterlockedCompareExchange64((volatile signed __int64 *)v20, Process, v50);
              if ( v50 == v73 )
                v50 |= 0x2000000000000000uLL;
              else
                v50 = v73;
            }
          }
          else
          {
            Process = v31 & v50 | 0x1000000000000020LL;
            if ( (MiFlags & 0x8000000) != 0 )
              _mm_lfence();
            v51 = _InterlockedCompareExchange64((volatile signed __int64 *)v20, Process, v50);
            if ( v50 == v51 )
              break;
            v50 = v51;
          }
        }
        LOBYTE(v9) = v78;
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
    v70 = KeGetCurrentPrcb();
    v71 = *(_DWORD *)(a1 + 184) & 0xF;
    if ( v71 )
    {
      if ( v71 == 7 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v70->SelfmapLockHandle[1]);
        goto LABEL_108;
      }
      v72 = 3LL;
      if ( v71 == 5 )
        v72 = 0LL;
    }
    else
    {
      v72 = 2LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v70->SelfmapLockHandle[v72]);
LABEL_108:
    v19 = v20;
    v79 = v20;
LABEL_109:
    if ( !v81 )
      break;
  }
  v22 = v82;
  v20 = v82;
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
      v77 = ++v5;
    }
    while ( v22 != v20 );
    *(_DWORD *)(v8 + 16) = v77;
    return 1LL;
  }
LABEL_21:
  if ( (v9 & 0xF) != 1 )
    return 1LL;
  if ( *(_DWORD *)(v8 + 48) == 3 )
  {
    *(_QWORD *)(v8 + 24) = &unk_140E3D500;
    return 1LL;
  }
  SystemCacheReverseMap = MiGetSystemCacheReverseMap(v6);
  if ( SystemCacheReverseMap && *(_QWORD *)(SystemCacheReverseMap + 32) >> 62 == 3 )
  {
    *(_QWORD *)(v8 + 24) = MiGetMultiplexedVm(v66, v6);
    return 1LL;
  }
LABEL_139:
  MiUnlockSystemVa(v8);
  return 0LL;
}
