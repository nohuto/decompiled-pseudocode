/*
 * XREFs of MiTerminateWsle @ 0x140326960
 * Callers:
 *     MiDecommitAddToList @ 0x140325550 (MiDecommitAddToList.c)
 *     MiRemoveSystemImagePage @ 0x14038C1A4 (MiRemoveSystemImagePage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiCleanupLazyStampedPageTable @ 0x14029F55C (MiCleanupLazyStampedPageTable.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlockWsle @ 0x140326688 (MiUnlockWsle.c)
 *     MiRemoveWsle @ 0x1403273B4 (MiRemoveWsle.c)
 *     MiUnlockNestedPageTableWritePte @ 0x140327678 (MiUnlockNestedPageTableWritePte.c)
 *     MiLockPte @ 0x140327950 (MiLockPte.c)
 */

__int64 __fastcall MiTerminateWsle(__int64 a1, unsigned __int64 a2, int a3, char a4, int *a5)
{
  int v5; // r12d
  char v6; // r13
  __int64 v7; // r10
  __int64 v9; // r9
  BOOL v10; // ebp
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rax
  __int64 v13; // rbx
  int v14; // r15d
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  int v17; // esi
  unsigned __int8 v18; // di
  int v19; // r9d
  unsigned int v20; // esi
  unsigned __int64 v21; // r11
  unsigned __int64 v22; // r8
  volatile __int64 v23; // rdx
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // rcx
  _KPROCESS *v26; // rax
  __int64 v27; // r8
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rax
  __int64 v30; // r14
  int v31; // esi
  int v32; // ebx
  __int64 result; // rax
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // r8
  __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  _KPROCESS *v38; // r8
  unsigned __int64 v39; // rcx
  __int64 v40; // rcx
  unsigned __int64 v41; // rdx
  char v42; // dl
  _KPROCESS *v43; // rax
  __int64 v44; // r8
  unsigned __int64 v45; // r10
  unsigned __int64 v46; // rax
  __int64 v47; // r14
  volatile unsigned __int64 v48; // rdx
  unsigned __int64 v49; // r8
  unsigned __int64 v50; // r10
  __int64 v51; // rsi
  __int64 CurrentPrcb; // r8
  volatile unsigned __int64 v53; // rdx
  unsigned __int64 v54; // rdx
  __int64 v55; // rax
  unsigned __int64 v56; // rax
  int v57; // eax
  char v58; // al
  unsigned int v59; // r15d
  volatile __int64 *v60; // rdx
  _QWORD *v61; // rcx
  __int64 v62; // rax
  _KPROCESS *v63; // rax
  unsigned __int64 v64; // rcx
  __int64 v65; // rax
  volatile unsigned __int64 v66; // rcx
  _KPROCESS *v67; // rax
  unsigned __int64 v68; // rcx
  __int64 v69; // rax
  volatile unsigned __int64 v70; // rcx
  __int64 v71; // rcx
  unsigned int v72; // ecx
  int v73; // r9d
  int v74; // r15d
  int v75; // r10d
  volatile signed __int32 *v76; // r13
  unsigned __int32 v77; // edx
  bool v78; // zf
  signed __int32 v79; // eax
  int v80; // ecx
  signed __int32 v81; // eax
  int v82; // [rsp+30h] [rbp-68h]
  unsigned int v83; // [rsp+30h] [rbp-68h]
  int v84; // [rsp+34h] [rbp-64h]
  int v85; // [rsp+38h] [rbp-60h] BYREF
  int v86; // [rsp+3Ch] [rbp-5Ch]
  int v87; // [rsp+40h] [rbp-58h]
  unsigned __int64 v88; // [rsp+48h] [rbp-50h]
  int v90; // [rsp+A8h] [rbp+10h]

  v90 = a2;
  v5 = 0;
  v84 = 10;
  v82 = 0;
  v6 = a4;
  v85 = 0;
  v7 = (a2 >> 9) & 0x7FFFFFFFF8LL;
  v9 = a1;
  v10 = 1;
  v11 = v7 - 0x98000000000LL;
  v12 = *(_QWORD *)(v7 - 0x98000000000LL);
  if ( (unsigned __int64)(v7 - 0x98000000000LL) >= 0xFFFFF6FB7DBED000uLL
    && v11 <= 0xFFFFF6FB7DBED7F8uLL
    && (v12 & 1) != 0
    && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0)
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
          v36 = *(_QWORD *)(KernelWaitTime + 8 * ((v11 >> 3) & 0x1FF));
          if ( (v36 & 0x20) != 0 )
            v12 |= 0x20uLL;
          v37 = v12;
          v12 |= 0x42uLL;
          if ( (v36 & 0x42) == 0 )
            v12 = v37;
        }
      }
    }
  }
  v13 = 48 * ((v12 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v14 = 1;
    v10 = *(_QWORD *)(v13 + 40) >= 0LL;
    v15 = v7 - 0x98000000000LL;
    v16 = *(_QWORD *)(v7 - 0x98000000000LL);
    if ( (unsigned __int64)(v7 - 0x98000000000LL) >= 0xFFFFF6FB7DBED000uLL
      && v15 <= 0xFFFFF6FB7DBED7F8uLL
      && (v16 & 1) != 0
      && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0)
      && (MiFlags & 0x1800000) != 0 )
    {
      v38 = KeGetCurrentThread()->ApcState.Process;
      if ( v38->AddressPolicy != 1 )
      {
        if ( v38 )
        {
          v39 = v38[2].KernelWaitTime;
          if ( v39 )
          {
            v40 = *(_QWORD *)(v39 + 8 * ((v15 >> 3) & 0x1FF));
            if ( (v40 & 0x20) != 0 )
              v16 |= 0x20uLL;
            v41 = v16;
            v16 |= 0x42uLL;
            if ( (v40 & 0x42) == 0 )
              v16 = v41;
          }
        }
      }
    }
    v17 = v6 & 1;
    v18 = HIBYTE(v16) & 0xF | (16 * ((v16 >> 60) & 7));
    v84 = !(v6 & 1) + 9;
    if ( (HIBYTE(v16) & 0xF) == 8 )
    {
      v85 = 1;
      v57 = MiUnlockWsle(a1, a2, v13, !(v6 & 1));
      v9 = a1;
      v82 = v57;
    }
  }
  else
  {
    v14 = 0;
    v18 = (*(_QWORD *)v13 >> 46) & 7;
    v17 = v6 & 1;
  }
  if ( v17 )
  {
    v31 = a1;
LABEL_29:
    v32 = v82;
    goto LABEL_30;
  }
  if ( v14 )
  {
    v19 = 0;
    if ( (v6 & 4) != 0 && v10 )
    {
      v20 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v20 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v20);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v13 + 24) < 0 );
      }
      v19 = 64;
      *(_QWORD *)(v13 + 24) |= 0x4000000000000000uLL;
    }
    v21 = 0x7FFFFFFFFFFFFFFFLL;
    if ( v85 )
      goto LABEL_27;
    v22 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    v23 = *(_QWORD *)v11;
    v24 = 0xFFFFF6FB7DBED000uLL;
    if ( v11 >= 0xFFFFF6FB7DBED000uLL && v11 <= 0xFFFFF6FB7DBED7F8uLL && MiPteHasShadow() )
    {
      LOBYTE(v23) = v23 | 0x20;
    }
    else
    {
      v25 = ((unsigned __int64)MiFlags >> 28) & 3;
      if ( v25 <= 1 )
      {
        if ( v25 )
        {
          if ( v11 >= 0xFFFFF6FB40000000uLL && v11 <= 0xFFFFF6FB7FFFFFFFuLL && (v23 & 0x80u) == 0LL )
            LOBYTE(v23) = v23 | 0x20;
        }
        else
        {
          LOBYTE(v23) = v23 | 0x20;
        }
      }
      else if ( (MiFlags & 0x8000000) != 0 )
      {
        _mm_lfence();
      }
    }
    if ( (v23 & 0x20) == 0 )
    {
      if ( (MiFlags & 0x8000000) != 0 )
        _mm_lfence();
      v42 = _InterlockedExchange64((volatile __int64 *)v11, v22);
      if ( v11 >= v24 && v11 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        v43 = MiPteHasShadow();
        if ( v43 )
        {
          v45 = v43[2].KernelWaitTime;
          if ( v45 )
          {
            v46 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
            v47 = (v11 >> 3) & 0x1FF;
            if ( (v44 & 1) != 0 )
              v46 = v21 & v44;
            *(_QWORD *)(v45 + 8 * v47) = v46;
          }
        }
      }
      if ( (v42 & 0x20) == 0 )
      {
        v82 = 0;
LABEL_27:
        v31 = a1;
        if ( v19 )
          _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), v21);
        goto LABEL_29;
      }
LABEL_26:
      v82 = 1;
      goto LABEL_27;
    }
    v88 = v22;
    if ( v11 >= v24 && v11 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( MiPteHasShadow() )
      {
        v5 = 1;
        if ( !BYTE5(stru_140E2DAB0.Header.WaitListHead.Blink) )
        {
          v56 = v88;
          if ( (v88 & 1) != 0 )
            goto LABEL_153;
        }
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0 )
      {
        v56 = v88;
        if ( (v88 & 1) != 0 )
LABEL_153:
          v22 = v56 | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v11 = v22;
    if ( v5 )
    {
      v26 = MiPteHasShadow();
      if ( v26 )
      {
        v28 = v26[2].KernelWaitTime;
        if ( v28 )
        {
          v29 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
          v30 = (v11 >> 3) & 0x1FF;
          if ( (v27 & 1) != 0 )
            v29 = v21 & v27;
          *(_QWORD *)(v28 + 8 * v30) = v29;
        }
      }
    }
    goto LABEL_26;
  }
  v48 = *(_QWORD *)v11;
  v49 = 0xFFFFF6FB7DBED000uLL;
  if ( v11 >= 0xFFFFF6FB7DBED000uLL
    && v11 <= 0xFFFFF6FB7DBED7F8uLL
    && (v48 & 1) != 0
    && ((v48 & 0x20) == 0 || (v48 & 0x42) == 0) )
  {
    v67 = MiPteHasShadow();
    if ( v67 )
    {
      v68 = v67[2].KernelWaitTime;
      if ( v68 )
      {
        v69 = *(_QWORD *)(v68 + 8 * ((v11 >> 3) & 0x1FF));
        if ( (v69 & 0x20) != 0 )
          v48 |= 0x20uLL;
        v70 = v48;
        v48 |= 0x42uLL;
        if ( (v69 & 0x42) == 0 )
          v48 = v70;
      }
    }
  }
  v50 = 0xFFFFDE0000000000uLL;
  v51 = 48 * ((v48 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( v11 == 0xFFFFF6FB7DBEDF68uLL )
  {
    CurrentPrcb = (__int64)KeGetCurrentPrcb();
    v58 = *(_DWORD *)(v9 + 184) & 0xF;
    if ( v58 )
    {
      if ( v58 == 7 )
      {
        v59 = 1;
      }
      else
      {
        v59 = 3;
        if ( v58 == 5 )
          v59 = 0;
      }
      v60 = (volatile __int64 *)(&MiState + 2 * v59 + 2278);
    }
    else
    {
      v59 = 2;
      v60 = (volatile __int64 *)(v9 + 176);
    }
    v61 = (_QWORD *)(CurrentPrcb + 8 * (v59 + 2 * (v59 + 2504LL)));
    v61[1] = v60;
    *v61 = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v62 = _InterlockedExchange64(v60, (__int64)v61);
      if ( !v62 )
        goto LABEL_92;
      KxWaitForLockOwnerShip((volatile signed __int64)v61, v62, CurrentPrcb);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)v61, v60);
    }
  }
  else if ( (*(_DWORD *)(v9 + 184) & 0xF) != 0
         || v11 < v49
         || v11 > 0xFFFFF6FB7DBEDFFFuLL
         || (v71 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
  {
    if ( (*(_DWORD *)(v9 + 184) & 0xF) != 0 && v11 >= v49 && v11 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      v85 = 0;
      v72 = 2 * ((__int64)(v11 - v49) >> 3);
      CurrentPrcb = (2 * (unsigned __int8)((__int64)(v11 - v49) >> 3)) & 0x1F;
      v83 = CurrentPrcb;
      v73 = 1 << CurrentPrcb;
      v74 = 2 << CurrentPrcb;
      v87 = 1 << CurrentPrcb;
      v75 = ~(2 << CurrentPrcb);
      v86 = 2 << CurrentPrcb;
      v76 = (volatile signed __int32 *)(&MiState + ((unsigned __int64)v72 >> 5) + 1467);
      LODWORD(v88) = v75;
      v77 = *v76;
      do
      {
        while ( ((v77 >> CurrentPrcb) & 1) != 0 )
        {
          if ( ((v77 >> CurrentPrcb) & 2) != 0 )
          {
            do
            {
              KeYieldProcessorEx(&v85);
              v77 = *v76;
            }
            while ( (((unsigned __int32)*v76 >> v83) & 1) != 0 );
            v74 = v86;
            CurrentPrcb = v83;
            v73 = v87;
            v75 = v88;
          }
          else
          {
            v80 = v74 | v77;
            v81 = _InterlockedCompareExchange(v76, v74 | v77, v77);
            v78 = v77 == v81;
            v77 = v81;
            if ( v78 )
              v77 = v80;
          }
        }
        v79 = _InterlockedCompareExchange(v76, v75 & (v73 | v77), v77);
        v78 = v77 == v79;
        v77 = v79;
      }
      while ( !v78 );
      v6 = a4;
    }
    else
    {
      MiLockPte(v11, 0LL);
    }
  }
  else
  {
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v71 + 4 * ((v11 >> 3) & 0x1FF)));
  }
  v9 = a1;
  v50 = 0xFFFFDE0000000000uLL;
LABEL_92:
  v53 = *(_QWORD *)v11;
  if ( v11 >= 0xFFFFF6FB7DBED000uLL
    && v11 <= 0xFFFFF6FB7DBED7F8uLL
    && (v53 & 1) != 0
    && ((v53 & 0x20) == 0 || (v53 & 0x42) == 0) )
  {
    v63 = MiPteHasShadow();
    if ( v63 )
    {
      v64 = v63[2].KernelWaitTime;
      if ( v64 )
      {
        v65 = *(_QWORD *)(v64 + 8 * ((v11 >> 3) & 0x1FF));
        if ( (v65 & 0x20) != 0 )
          v53 |= 0x20uLL;
        v66 = v53;
        v53 |= 0x42uLL;
        if ( (v65 & 0x42) == 0 )
          v53 = v66;
      }
    }
  }
  v54 = v50 + 48 * ((v53 >> 12) & 0xFFFFFFFFFFLL);
  if ( (*(_DWORD *)(v54 + 36) & 0x4000000) != 0 )
    v55 = *(_QWORD *)v54 >> 36;
  else
    v55 = *(_QWORD *)(v54 + 16) >> 17;
  if ( (v55 & 0x3FF) != 0 )
    goto LABEL_149;
  if ( (*(_DWORD *)(v9 + 184) & 0xF) != 0 )
  {
    if ( a3 == 1 || (_UNKNOWN *)v9 == &unk_140E37340 )
    {
      MiCleanupLazyStampedPageTable(v9, v11, CurrentPrcb);
      v9 = a1;
    }
    if ( (unsigned __int16)*(_QWORD *)(v51 + 24) != 1 )
    {
LABEL_149:
      MiUnlockPageTableInternal(v9, v11);
      *a5 = 0;
      return 0LL;
    }
  }
  v31 = a1;
  MiUnlockNestedPageTableWritePte(a1, v11, *(_QWORD *)&CLFS_LSN_NULL_EXT, 0LL);
  v32 = 1;
LABEL_30:
  if ( (v6 & 2) == 0 )
    MiRemoveWsle(v31, v90, v18, v84, v10);
  result = 1LL;
  *a5 = v32;
  return result;
}
