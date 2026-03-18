/*
 * XREFs of MiReacquireWalkLocks @ 0x140301220
 * Callers:
 *     MiWalkPageTables @ 0x140326A80 (MiWalkPageTables.c)
 *     MiQueryVpabAccessedState @ 0x1404646AC (MiQueryVpabAccessedState.c)
 *     MiProtectDriverSectionPte @ 0x1406E5D50 (MiProtectDriverSectionPte.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402474C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140249B40 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029BC90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KxWaitForLockOwnerShip @ 0x1402B29C0 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402B4830 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402B9F90 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402E5E00 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402EDFB0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402EE000 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiPteHasShadow @ 0x1403011E0 (MiPteHasShadow.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
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
  _KSPIN_LOCK_QUEUE *volatile *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 i; // r13
  unsigned __int64 v29; // rdi
  signed __int64 v30; // rbx
  int v31; // r12d
  unsigned __int64 v32; // rsi
  LONG j; // edx
  _KPROCESS *Process; // rcx
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v36; // rax
  signed __int64 v37; // rcx
  volatile signed __int64 v38; // rdx
  __int64 v39; // rbx
  unsigned __int64 v40; // r9
  unsigned __int64 v41; // r10
  unsigned __int64 v42; // r8
  int v43; // edx
  _KPROCESS *v44; // rax
  __int64 v45; // r8
  unsigned __int64 v46; // rcx
  __int64 v47; // rax
  unsigned __int64 v48; // rdx
  unsigned int v49; // ebx
  signed __int64 v50; // rax
  struct _KPRCB *v51; // r8
  char v52; // al
  unsigned int v53; // ecx
  volatile __int64 *v54; // rdx
  _KSPIN_LOCK_QUEUE *volatile *v55; // rcx
  __int64 v56; // rax
  _KPROCESS *v57; // rax
  unsigned __int64 v58; // rcx
  __int64 v59; // rax
  volatile signed __int64 v60; // rcx
  char v61; // si
  int v62; // r13d
  volatile signed __int32 *v63; // rbx
  unsigned __int32 v64; // edx
  bool v65; // zf
  signed __int32 v66; // eax
  unsigned __int64 v67; // rax
  __int64 v68; // rcx
  _KPROCESS *v69; // rax
  unsigned __int64 v70; // rcx
  __int64 v71; // rax
  unsigned __int64 v72; // rcx
  struct _KPRCB *v73; // rdx
  char v74; // al
  __int64 v75; // rcx
  __int64 v76; // rcx
  struct _KPRCB *v77; // rcx
  char v78; // al
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 CurrentIrql; // rcx
  signed __int64 v82; // rax
  signed __int64 v83; // rax
  int v84; // ecx
  signed __int32 v85; // eax
  __int64 v86; // [rsp+20h] [rbp-88h]
  __int64 v87; // [rsp+28h] [rbp-80h]
  unsigned __int64 v88; // [rsp+38h] [rbp-70h]
  unsigned __int64 v89; // [rsp+40h] [rbp-68h]
  unsigned __int64 v90; // [rsp+48h] [rbp-60h]
  __int64 v91; // [rsp+50h] [rbp-58h]
  __int64 retaddr; // [rsp+A8h] [rbp+0h]
  int v95; // [rsp+C0h] [rbp+18h]
  unsigned __int64 v96; // [rsp+C8h] [rbp+20h] BYREF

  v95 = a3;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = a2;
  v86 = v3;
  v5 = a1;
  if ( !(_DWORD)a3 )
  {
    v6 = *(_DWORD *)(v3 + 184);
    if ( *(_BYTE *)(a1 + 9) == 17 )
    {
      if ( (v6 & 0xFu) <= 5 )
      {
        v16 = (*(_DWORD *)(v3 + 184) & 0xF) == 1 ? &qword_140E37800 : (__int64 *)(v3 + 192);
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
        v7 = &qword_140E37800;
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
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
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
  v88 = (((unsigned __int64)(v4 << 25 >> 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v89 = ((v88 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v90 = ((v89 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v91 = ((v90 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
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
  v25 = &CurrentPrcb->SelfmapLockHandle[0].LockQueue.Next + 2 * v23 + v23;
  *((_QWORD *)v25 + 1) = v22;
  *v25 = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
  {
    v26 = _InterlockedExchange64(v22, (__int64)v25);
    if ( v26 )
      KxWaitForLockOwnerShip((volatile signed __int64)v25, v26, (__int64)CurrentPrcb);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)v25, v22);
  }
  v27 = v86;
  for ( i = 2LL; ; --i )
  {
    v29 = *(&v88 + i);
    v87 = i;
    v30 = *(_QWORD *)v29;
    if ( v29 >= 0xFFFFF6FB7DBED000uLL
      && v29 <= 0xFFFFF6FB7DBED7F8uLL
      && (v30 & 1) != 0
      && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0)
      && (MiFlags & 0x1800000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        if ( Process )
        {
          KernelWaitTime = Process[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v36 = *(_QWORD *)(KernelWaitTime + 8 * ((v29 >> 3) & 0x1FF));
            if ( (v36 & 0x20) != 0 )
              v30 |= 0x20uLL;
            v37 = v30;
            v30 |= 0x42uLL;
            if ( (v36 & 0x42) == 0 )
              v30 = v37;
          }
        }
      }
    }
    if ( (v30 & 0x81) != 1 )
      break;
    if ( (v30 & 0x20) != 0 )
      goto LABEL_85;
    v31 = 0;
    v32 = (__int64)(v29 << 25) >> 16;
    if ( (*(_DWORD *)(v27 + 184) & 0xF) != 0 && v29 >= 0xFFFFF6FB7DBED000uLL && v29 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      v31 = 1;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      {
        if ( _interlockedbittestandset(&dword_140E36080, 0x1Fu) )
          v24 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140E36080, 0xFFu);
        for ( j = dword_140E36080; (dword_140E36080 & 0xBFFFFFFF) != 0x80000000; j = dword_140E36080 )
        {
          if ( (j & 0x40000000) == 0 )
            _InterlockedOr(&dword_140E36080, 0x40000000u);
          if ( (++v24 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
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
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140E36080, 0xFFu);
      }
    }
    if ( v32 >= 0xFFFFF68000000000uLL && v32 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      while ( 1 )
      {
        if ( (MiFlags & 0x8000000) != 0 )
          _mm_lfence();
        v83 = _InterlockedCompareExchange64((volatile signed __int64 *)v29, v30 | 0x20, v30);
        if ( v30 == v83 )
          break;
        v30 = v83;
      }
      goto LABEL_82;
    }
    v38 = *(_QWORD *)v29;
    v39 = v30 | 0x20;
    v40 = 0xFFFFF6FB7DBED000uLL;
    v41 = 0xFFFFF6FB7DBED7F8uLL;
    if ( v29 >= 0xFFFFF6FB7DBED000uLL
      && v29 <= 0xFFFFF6FB7DBED7F8uLL
      && (v38 & 1) != 0
      && ((v38 & 0x20) == 0 || (v38 & 0x42) == 0) )
    {
      v57 = MiPteHasShadow();
      if ( v57 )
      {
        v58 = v57[2].KernelWaitTime;
        if ( v58 )
        {
          v59 = *(_QWORD *)(v58 + 8 * ((v29 >> 3) & 0x1FF));
          if ( (v59 & 0x20) != 0 )
            v38 |= 0x20uLL;
          v60 = v38;
          v38 |= 0x42uLL;
          if ( (v59 & 0x42) == 0 )
            v38 = v60;
        }
      }
    }
    v42 = v38 ^ (v39 ^ v38) & 0x80FFFFFFFFFFFFFFuLL;
    v43 = 0;
    v96 = v42;
    if ( v29 >= v40 && v29 <= v41 )
    {
      if ( MiPteHasShadow() )
      {
        v43 = 1;
        if ( !BYTE5(stru_140E2D930.Header.WaitListHead.Blink) )
        {
          v67 = v96;
          if ( (v96 & 1) != 0 )
LABEL_198:
            v42 = v67 | 0x8000000000000000uLL;
        }
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0 )
      {
        v67 = v96;
        if ( (v96 & 1) != 0 )
          goto LABEL_198;
      }
    }
    *(_QWORD *)v29 = v42;
    if ( v43 )
    {
      v44 = MiPteHasShadow();
      if ( v44 )
      {
        v46 = v44[2].KernelWaitTime;
        if ( v46 )
        {
          v47 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
          if ( (v45 & 1) != 0 )
            v47 = v45 & 0x7FFFFFFFFFFFFFFFLL;
          *(_QWORD *)(v46 + 8 * ((v29 >> 3) & 0x1FF)) = v47;
        }
      }
    }
LABEL_82:
    if ( v31 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        dword_140E36080 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E36080, retaddr);
    }
LABEL_85:
    if ( v29 != v19 )
    {
      if ( v29 == 0xFFFFF6FB7DBEDF68uLL )
      {
        v51 = KeGetCurrentPrcb();
        v52 = *(_DWORD *)(v27 + 184) & 0xF;
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
          v54 = (volatile __int64 *)(v27 + 176);
        }
        v55 = &v51->SelfmapLockHandle[0].LockQueue.Next + 2 * v53 + v53;
        *((_QWORD *)v55 + 1) = v54;
        *v55 = 0LL;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        {
          v56 = _InterlockedExchange64(v54, (__int64)v55);
          if ( v56 )
            KxWaitForLockOwnerShip((volatile signed __int64)v55, v56, (__int64)v51);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented((__int64)v55, v54);
        }
      }
      else if ( (*(_DWORD *)(v27 + 184) & 0xF) != 0
             || v29 < 0xFFFFF6FB7DBED000uLL
             || v29 > 0xFFFFF6FB7DBEDFFFuLL
             || (v68 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
      {
        if ( (*(_DWORD *)(v27 + 184) & 0xF) != 0 && v29 >= 0xFFFFF6FB7DBED000uLL && v29 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          LODWORD(v96) = 0;
          v61 = (2 * ((__int64)(v29 + 0x90482413000LL) >> 3)) & 0x1F;
          v62 = 2 << v61;
          v63 = (volatile signed __int32 *)(&MiState
                                          + ((unsigned __int64)(2 * (unsigned int)((__int64)(v29 + 0x90482413000LL) >> 3)) >> 5)
                                          + 1467);
          v64 = *v63;
          do
          {
            while ( ((v64 >> v61) & 1) != 0 )
            {
              if ( ((v64 >> v61) & 2) != 0 )
              {
                do
                {
                  KeYieldProcessorEx(&v96);
                  v64 = *v63;
                }
                while ( (((unsigned __int32)*v63 >> v61) & 1) != 0 );
              }
              else
              {
                v84 = v62 | v64;
                v85 = _InterlockedCompareExchange(v63, v62 | v64, v64);
                v65 = v64 == v85;
                v64 = v85;
                if ( v65 )
                  v64 = v84;
              }
            }
            v66 = _InterlockedCompareExchange(v63, ~(2 << v61) & (v64 | (1 << v61)), v64);
            v65 = v64 == v66;
            v64 = v66;
          }
          while ( !v65 );
        }
        else
        {
          v48 = *(_QWORD *)v29;
          v49 = 0;
          if ( v29 >= 0xFFFFF6FB7DBED000uLL
            && v29 <= 0xFFFFF6FB7DBED7F8uLL
            && (v48 & 1) != 0
            && ((v48 & 0x20) == 0 || (v48 & 0x42) == 0) )
          {
            v69 = MiPteHasShadow();
            if ( v69 )
            {
              v70 = v69[2].KernelWaitTime;
              if ( v70 )
              {
                v71 = *(_QWORD *)(v70 + 8 * ((v29 >> 3) & 0x1FF));
                if ( (v71 & 0x20) != 0 )
                  v48 |= 0x20uLL;
                v72 = v48;
                v48 |= 0x42uLL;
                if ( (v71 & 0x42) == 0 )
                  v48 = v72;
              }
            }
          }
          while ( (v48 & 1) != 0 )
          {
            if ( (v48 & 0x1000000000000000LL) != 0 )
            {
              if ( ((v48 >> 60) & 2) != 0 )
              {
                do
                {
                  if ( (++v49 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && KiCheckVpBackingLongSpinWaitHypercall() )
                  {
                    HvlNotifyLongSpinWait(v49);
                  }
                  else
                  {
                    _mm_pause();
                  }
                  v48 = *(_QWORD *)v29;
                }
                while ( (*(_QWORD *)v29 & 0x1000000000000000LL) != 0 );
              }
              else
              {
                if ( (MiFlags & 0x8000000) != 0 )
                  _mm_lfence();
                v82 = _InterlockedCompareExchange64((volatile signed __int64 *)v29, v48 | 0x2000000000000000LL, v48);
                if ( v48 == v82 )
                  v48 |= 0x2000000000000000uLL;
                else
                  v48 = v82;
              }
            }
            else
            {
              if ( (MiFlags & 0x8000000) != 0 )
                _mm_lfence();
              v50 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)v29,
                      v48 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
                      v48);
              if ( v48 == v50 )
                break;
              v48 = v50;
            }
          }
          v27 = v86;
        }
        i = v87;
      }
      else
      {
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v68 + 4 * ((v29 >> 3) & 0x1FF)));
      }
      if ( v19 != 0xFFFFF6FB7DBEDF68uLL )
      {
        if ( (*(_DWORD *)(v27 + 184) & 0xF) != 0
          || v19 < 0xFFFFF6FB7DBED000uLL
          || v19 > 0xFFFFF6FB7DBEDFFFuLL
          || (v76 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
        {
          if ( (*(_DWORD *)(v27 + 184) & 0xF) != 0 && v19 >= 0xFFFFF6FB7DBED000uLL && v19 <= 0xFFFFF6FB7DBEDFFFuLL )
            _InterlockedAnd(
              (volatile signed __int32 *)&MiState
            + ((unsigned __int64)(2 * (unsigned int)((__int64)(v19 + 0x90482413000LL) >> 3)) >> 5)
            + 1467,
              ~(3 << (2 * ((__int64)(v19 + 0x90482413000LL) >> 3))));
          else
            _InterlockedAnd64((volatile signed __int64 *)v19, 0xCFFFFFFFFFFFFFFFuLL);
        }
        else
        {
          ExReleaseSpinLockRegardlessFromDpcLevel((volatile signed __int32 *)(v76 + 4 * ((v19 >> 3) & 0x1FF)));
        }
        goto LABEL_127;
      }
      v73 = KeGetCurrentPrcb();
      v74 = *(_DWORD *)(v27 + 184) & 0xF;
      if ( !v74 )
      {
        v75 = 2LL;
        goto LABEL_164;
      }
      if ( v74 == 7 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v73->SelfmapLockHandle[1]);
      }
      else
      {
        v75 = 3LL;
        if ( v74 == 5 )
          v75 = 0LL;
LABEL_164:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v73->SelfmapLockHandle[v75]);
      }
LABEL_127:
      v19 = v29;
    }
    if ( !i )
      break;
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
    v77 = KeGetCurrentPrcb();
    v78 = *(_DWORD *)(v86 + 184) & 0xF;
    if ( v78 )
    {
      if ( v78 == 7 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v77->SelfmapLockHandle[1]);
        goto LABEL_67;
      }
      v79 = 3LL;
      if ( v78 == 5 )
        v79 = 0LL;
    }
    else
    {
      v79 = 2LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v77->SelfmapLockHandle[v79]);
    goto LABEL_67;
  }
  if ( (*(_DWORD *)(v86 + 184) & 0xF) != 0
    || v19 < 0xFFFFF6FB7DBED000uLL
    || v19 > 0xFFFFF6FB7DBEDFFFuLL
    || (v80 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
  {
    if ( (*(_DWORD *)(v86 + 184) & 0xF) != 0 && v19 >= 0xFFFFF6FB7DBED000uLL && v19 <= 0xFFFFF6FB7DBEDFFFuLL )
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
    ExReleaseSpinLockRegardlessFromDpcLevel((volatile signed __int32 *)(v80 + 4 * ((v19 >> 3) & 0x1FF)));
  }
LABEL_67:
  if ( !v95 )
    MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 32), *(unsigned __int8 *)(a1 + 9));
  return 0LL;
}
