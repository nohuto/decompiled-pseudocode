/*
 * XREFs of MiAddWorkingSetEntries @ 0x1402CDB00
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x1402B8530 (MiCompletePrivateZeroFault.c)
 *     MiAllocateWsle @ 0x1402B9CD8 (MiAllocateWsle.c)
 *     MiCompleteProtoPteFault @ 0x1402BAC10 (MiCompleteProtoPteFault.c)
 *     MiUnlockSystemVa @ 0x1402C7240 (MiUnlockSystemVa.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x1402C7EE0 (MiEmptyDeferredWorkingSetEntries.c)
 *     MmCheckCachedPageStates @ 0x1402C8850 (MmCheckCachedPageStates.c)
 *     MiReleaseCachedPageLocks @ 0x1402CBF70 (MiReleaseCachedPageLocks.c)
 *     MiQueueCoreWorkingSetEntries @ 0x1402CC3A0 (MiQueueCoreWorkingSetEntries.c)
 *     MiPerformFaultClusterMaintenance @ 0x1402CD110 (MiPerformFaultClusterMaintenance.c)
 *     MiUnlockFaultPageTable @ 0x1402CD850 (MiUnlockFaultPageTable.c)
 *     MiReleaseFaultState @ 0x14038FB40 (MiReleaseFaultState.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029B1F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiRebuildPageTableAges @ 0x14029D740 (MiRebuildPageTableAges.c)
 *     MiInsertActivePageTableLinksTail @ 0x1402CE660 (MiInsertActivePageTableLinksTail.c)
 *     MiRemoveActivePageTableLinks @ 0x1402CE8C0 (MiRemoveActivePageTableLinks.c)
 *     MiComputeHardTrimSize @ 0x1402CF228 (MiComputeHardTrimSize.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402D0080 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiGetAvailablePagesForTrimPass @ 0x1403C3B08 (MiGetAvailablePagesForTrimPass.c)
 *     MiIsDriverPage @ 0x1404B6920 (MiIsDriverPage.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall MiAddWorkingSetEntries(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  char v4; // bp
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r13
  int v8; // r12d
  unsigned __int64 v9; // rbx
  volatile signed __int32 *v10; // r15
  unsigned __int64 i; // rcx
  signed __int32 v12; // eax
  __int64 v13; // rdx
  signed __int32 v14; // ett
  signed __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  int v18; // r9d
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rbx
  __int64 v22; // rbp
  unsigned __int64 v23; // r11
  BOOL v24; // r14d
  unsigned __int64 v25; // r9
  unsigned __int64 AvailablePagesForTrimPass; // r10
  unsigned __int64 v27; // r9
  int v28; // edx
  __int64 v29; // r8
  int v30; // eax
  __int64 v31; // rax
  __int64 v32; // r8
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // r8
  unsigned __int8 j; // dl
  unsigned __int64 v40; // r10
  unsigned __int64 v41; // r8
  __int64 v42; // r11
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  unsigned __int8 v46; // bp
  unsigned int v47; // ecx
  unsigned int v48; // r14d
  unsigned __int64 v49; // r12
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rax
  __int64 v52; // rsi
  __int64 v53; // r8
  unsigned __int8 v54; // al
  unsigned __int64 v55; // rdx
  __int64 v56; // r14
  __int64 v57; // rbx
  char result; // al
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v61; // rcx
  unsigned __int64 v62; // rdx
  __int64 v63; // r9
  unsigned __int64 v64; // rdx
  __int64 v65; // rdx
  unsigned __int64 *v66; // r9
  unsigned __int64 v67; // rdx
  __int64 v68; // rdx
  unsigned __int64 v69; // rtt
  __int64 v70; // rdx
  unsigned __int64 v71; // r10
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // rtt
  __int64 HasShadow; // rax
  unsigned __int64 v76; // r9
  __int64 v77; // rax
  __int64 v78; // rax
  unsigned __int64 v79; // rcx
  unsigned __int64 v80; // rtt
  unsigned __int8 v81; // al
  unsigned __int64 v82; // rax
  unsigned __int32 v84; // [rsp+24h] [rbp-74h]
  unsigned __int64 v85; // [rsp+28h] [rbp-70h]
  _OWORD v86[2]; // [rsp+38h] [rbp-60h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]

  v4 = a4;
  v5 = a3;
  v85 = a2;
  v6 = a2;
  _InterlockedAdd((volatile signed __int32 *)(a1 + 4), a3);
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    _InterlockedAdd(&dword_140E37A00, a3);
  v8 = 1;
  if ( !dword_140E36240 )
  {
    v81 = *(_DWORD *)(a1 + 184) & 0xF;
    if ( v81 )
      dword_140E36240 = v81 <= 4u;
  }
  __addgsdword(0x2E90u, a3);
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
    v9 = a3;
  else
    v9 = 0LL;
  v10 = (volatile signed __int32 *)&unk_140E379C0;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    i = (unsigned __int64)&unk_140E379C0;
  else
    i = a1 + 256;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw((const void *)i);
    v12 = *(_DWORD *)i & 0x7FFFFFFF;
    while ( 1 )
    {
      v13 = (unsigned int)(v12 + 1);
      v14 = v12;
      v12 = _InterlockedCompareExchange((volatile signed __int32 *)i, v13, v12);
      if ( v14 == v12 )
        break;
      if ( v12 < 0 )
      {
        LOBYTE(v13) = -1;
        ExpWaitForSpinLockSharedAndAcquire((signed __int32 *)i, v13, 0xFFFFF6FFFFFFFFFFuLL);
        break;
      }
    }
  }
  else
  {
    LOBYTE(a2) = -1;
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(i, a2);
  }
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 152), v5);
  if ( v9 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 16) + 64LL));
    v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 136), v9);
    v16 = *(_QWORD *)(a1 + 8);
    i = v9 + v15;
    if ( i > v16 )
    {
      do
      {
        v69 = v16;
        v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), i, v16);
      }
      while ( v69 != v16 && i > v16 );
    }
  }
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
  {
    _InterlockedAdd64(&qword_140E37A08, v5);
    if ( v9 )
    {
      v17 = qword_140E37A18;
      i = v9 + _InterlockedExchangeAdd64(&qword_140E37A10, v9);
      if ( i > qword_140E37A18 )
      {
        do
        {
          v74 = v17;
          v17 = _InterlockedCompareExchange64(&qword_140E37A18, i, v17);
        }
        while ( v74 != v17 && i > v17 );
      }
    }
  }
  if ( (v4 & 2) != 0 )
  {
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 160), v5);
    if ( v6 < 0xFFFFF68000000000uLL || v6 > 0xFFFFF6FFFFFFFFFFuLL )
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 144), v5);
  }
  v18 = *(_DWORD *)(a1 + 184);
  if ( (v18 & 0xF) != 0 )
  {
    v70 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 174));
    v71 = *(_QWORD *)(v70 + 7616) + *(_QWORD *)(a1 + 152);
    i = v70 + 8LL * ((*(_DWORD *)(a1 + 184) & 0xFu) - 1);
    v72 = *(_QWORD *)(i + 7624);
    if ( v71 > v72 )
    {
      do
      {
        v80 = v72;
        v72 = _InterlockedCompareExchange64((volatile signed __int64 *)(i + 7624), v71, v72);
      }
      while ( v80 != v72 && v71 > v72 );
    }
    if ( (v18 & 0xF) == 3 )
    {
      if ( PsNtosImageBase
        && (v6 < PsNtosImageEnd && v6 >= (unsigned __int64)PsNtosImageBase
         || v6 >= (unsigned __int64)PsHalImageBase && v6 < PsHalImageEnd) )
      {
        _InterlockedAdd((volatile signed __int32 *)&stru_140E2D2D0.SchedulerApcFill5[72], v5);
      }
      else if ( (unsigned int)MiGetSystemRegionType(v6) == 11
             && MiIsDriverPage(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL) )
      {
        _InterlockedAdd((volatile signed __int32 *)&stru_140E2D2D0.SchedulerApcFill5[76], v5);
      }
    }
  }
  if ( (v4 & 1) == 0 )
    goto LABEL_56;
  v19 = *(_QWORD *)(a1 + 136);
  if ( v19 <= *(_QWORD *)(a1 + 120) || *(_DWORD *)(a1 + 188) )
    goto LABEL_55;
  v20 = *(_QWORD *)(a1 + 152);
  v21 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
  if ( v20 > v21 )
  {
    i = *(unsigned __int16 *)(a1 + 174);
    v22 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * i);
    v23 = *(_QWORD *)(v22 + 22288);
    if ( v5 && ((v20 ^ (v5 + v20)) & 0xFFFFFFFFFFFFFFC0uLL) == 0 )
    {
      v27 = v20 - v21;
      AvailablePagesForTrimPass = -1LL;
      v8 = 0;
    }
    else
    {
      v24 = 0;
      AvailablePagesForTrimPass = MiGetAvailablePagesForTrimPass(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * i));
      if ( AvailablePagesForTrimPass < v23 >> 4 && AvailablePagesForTrimPass < 0x800000 )
        v24 = v25 >= v23 >> 4;
      v27 = v25 - v21;
      if ( v24 )
        goto LABEL_36;
    }
    if ( v27 < 3 * (v23 >> 2) )
      goto LABEL_51;
    v28 = 0;
    i = v22 + 7588;
    v29 = 7LL;
    do
    {
      v30 = *(_DWORD *)i;
      i += 4LL;
      v28 += v30;
      --v29;
    }
    while ( v29 );
    if ( v28 == *(_DWORD *)(v22 + 18420) )
      goto LABEL_51;
    if ( !v8 )
    {
      AvailablePagesForTrimPass = *(_QWORD *)(v22 + 3408) + *(_QWORD *)(v22 + 3280);
      for ( i = v22 + 3648; i < v22 + 4176; AvailablePagesForTrimPass += v31 )
      {
        v31 = *(_QWORD *)(i + 16);
        i += 88LL;
      }
    }
    if ( AvailablePagesForTrimPass >= 8LL * *(_QWORD *)(v22 + 18400) )
    {
LABEL_51:
      v37 = 0LL;
LABEL_52:
      v4 = a4;
      LOWORD(v8) = 1;
      goto LABEL_53;
    }
LABEL_36:
    i = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 174));
    v32 = *(_QWORD *)(i + 18400);
    if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
    {
      v32 *= 2LL;
    }
    else if ( AvailablePagesForTrimPass > *(_QWORD *)(i + 17024) )
    {
      v36 = 0LL;
LABEL_44:
      if ( v36 > AvailablePagesForTrimPass )
      {
        v37 = v36 - AvailablePagesForTrimPass;
        if ( !v37 )
          goto LABEL_52;
        v38 = 0LL;
        for ( j = 7; j; --j )
        {
          i = *(_QWORD *)(a1 + 8LL * j + 56);
          v38 += i;
          if ( v38 >= v37 )
            goto LABEL_52;
        }
        v37 = v38;
        if ( v38 )
          goto LABEL_52;
      }
      goto LABEL_51;
    }
    v33 = *(_QWORD *)(i + 22288);
    v34 = 2 * v32;
    if ( v34 > 0x40000 )
      v34 = 0x40000LL;
    v35 = v27;
    if ( v27 >= v33 )
      v35 = v33;
    i = v34 * (100 * v35 / v33) / 0x64;
    v36 = v27 / 0xA;
    if ( i <= v27 / 0xA )
      v36 = i;
    goto LABEL_44;
  }
  v37 = 0LL;
LABEL_53:
  if ( (*(_DWORD *)(a1 + 184) & 0x10) == 0 || v19 <= *(_QWORD *)(a1 + 128) )
  {
LABEL_54:
    if ( v37 )
    {
      v73 = (v37 >> 9) + 1;
      if ( (v37 & 0x1FF) == 0 )
        v73 = v37 >> 9;
      if ( v73 )
      {
        LOWORD(v8) = v73;
        if ( v73 > 0xFFFF )
          LOWORD(v8) = -1;
      }
      LOWORD(v84) = v8;
      HIWORD(v84) = v8;
      i = v84;
      _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 188), v84, 0);
    }
    goto LABEL_55;
  }
  v82 = MiComputeHardTrimSize(*(_QWORD *)(a1 + 128), 85LL, 120LL);
  i = *(_QWORD *)(a1 + 136);
  if ( i > v82 )
  {
    i -= v82;
    if ( i > v37 )
      v37 = i;
    goto LABEL_54;
  }
LABEL_55:
  v6 = v85;
LABEL_56:
  if ( (v4 & 4) == 0 )
    goto LABEL_76;
  v40 = 0xFFFFF6FB7DBED000uLL;
  v41 = v6;
  v42 = 0xFFFFFFFFFFLL;
  memset(v86, 0, sizeof(v86));
  if ( v5 )
  {
    do
    {
      if ( v41 < 0xFFFFF68000000000uLL || v41 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v43 = ((v41 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v44 = *(_QWORD *)v43;
        i = v40;
        if ( v43 >= v40 )
        {
          i = 0xFFFFF6FB7DBED7F8uLL;
          if ( v43 <= 0xFFFFF6FB7DBED7F8uLL
            && (v44 & 1) != 0
            && ((v44 & 0x20) == 0 || (v44 & 0x42) == 0)
            && (MiFlags & 0x1800000) != 0 )
          {
            i = (unsigned __int64)KeGetCurrentThread();
            v63 = *(_QWORD *)(i + 184);
            if ( *(_BYTE *)(v63 + 352) != 1 )
            {
              if ( v63 )
              {
                i = *(_QWORD *)(v63 + 1288);
                if ( i )
                {
                  i = *(_QWORD *)(i + 8 * ((v43 >> 3) & 0x1FF));
                  if ( (i & 0x20) != 0 )
                    v44 |= 0x20uLL;
                  v64 = v44;
                  v44 |= 0x42uLL;
                  if ( (i & 0x42) == 0 )
                    v44 = v64;
                }
              }
            }
          }
        }
        v45 = HIBYTE(v44) & 0xF;
      }
      else
      {
        v66 = (unsigned __int64 *)(((v41 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v67 = *v66;
        if ( (unsigned __int64)v66 >= v40
          && (unsigned __int64)v66 <= 0xFFFFF6FB7DBED7F8uLL
          && (v67 & 1) != 0
          && ((v67 & 0x20) == 0 || (v67 & 0x42) == 0) )
        {
          HasShadow = MiPteHasShadow(i, v67, v41);
          if ( HasShadow )
          {
            v77 = *(_QWORD *)(HasShadow + 1288);
            if ( v77 )
            {
              v78 = *(_QWORD *)(v77 + 8 * ((v76 >> 3) & 0x1FF));
              if ( (v78 & 0x20) != 0 )
                v67 |= 0x20uLL;
              v79 = v67;
              v67 |= 0x42uLL;
              if ( (v78 & 0x42) == 0 )
                v67 = v79;
            }
          }
        }
        v68 = v42 & (v67 >> 12);
        i = 6 * v68;
        v45 = (*(_QWORD *)(48 * v68 - 0x220000000000LL) >> 46) & 7LL;
      }
      ++*((_DWORD *)v86 + v45);
      v41 += 4096LL;
      --v5;
    }
    while ( v5 );
    v6 = v85;
  }
  v46 = 8;
  do
  {
    while ( 1 )
    {
      v47 = *((_DWORD *)v86 + --v46);
      v48 = v47;
      if ( !v47 )
        break;
      v49 = v47;
      v50 = ((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      v51 = *(_QWORD *)v50;
      if ( v50 >= v40
        && v50 <= 0xFFFFF6FB7DBED7F8uLL
        && (v51 & 1) != 0
        && ((v51 & 0x20) == 0 || (v51 & 0x42) == 0)
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
              v61 = *(_QWORD *)(KernelWaitTime + 8 * ((v50 >> 3) & 0x1FF));
              if ( (v61 & 0x20) != 0 )
                v51 |= 0x20uLL;
              v62 = v51;
              v51 |= 0x42uLL;
              if ( (v61 & 0x42) == 0 )
                v51 = v62;
            }
          }
        }
      }
      v52 = 48 * ((v51 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v53 = (*(_QWORD *)v52 >> 49) & 0x3FFLL;
      v54 = (*(_QWORD *)v52 >> 59) & 7;
      if ( (a4 & 8) == 0 )
      {
        if ( v46 == v54 )
        {
          v55 = (unsigned __int64)((unsigned int)v53 + v48) << 49;
          v56 = ((_WORD)v53 + (_WORD)v48) & 0x3FF;
          *(_QWORD *)v52 = v55 ^ (v55 ^ *(_QWORD *)v52) & 0xF801FFFFFFFFFFFFuLL;
          if ( v53 + v49 )
          {
            if ( (*(_DWORD *)(v52 + 36) & 0x4000000) != 0 )
              goto LABEL_73;
            v57 = *(_QWORD *)v52;
LABEL_71:
            *(_QWORD *)v52 = v57 & 0xC001FFFFFFFFFFFFuLL | ((v56 | ((unsigned __int64)(v46 & 7) << 10)) << 49);
            MiInsertActivePageTableLinksTail(a1, v52, v46, 0LL);
          }
          else
          {
            MiRebuildPageTableAges(a1, v6, 0);
          }
          v40 = 0xFFFFF6FB7DBED000uLL;
          goto LABEL_73;
        }
        if ( v46 > v54 )
        {
          v57 = *(_QWORD *)v52;
          if ( (*(_DWORD *)(v52 + 36) & 0x4000000) != 0 )
            MiRemoveActivePageTableLinks(a1, v52, 0LL);
          v56 = v48 & 0x3FF;
          goto LABEL_71;
        }
      }
LABEL_73:
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 8LL * v46 + 56), v49);
      if ( v46 != 7 )
        break;
      v65 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 174));
      if ( *(_QWORD *)(a1 + 112) >= *(_QWORD *)(v65 + 21216) )
        _InterlockedCompareExchange((volatile signed __int32 *)(v65 + 21392), 5, 0);
    }
  }
  while ( v46 );
  v10 = (volatile signed __int32 *)&unk_140E379C0;
LABEL_76:
  result = *(_DWORD *)(a1 + 184) & 0xF;
  if ( result != 1 )
    v10 = (volatile signed __int32 *)(a1 + 256);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    result = PopHibernateInProgress;
    if ( !PopHibernateInProgress )
      return ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v10, retaddr);
  }
  _InterlockedAnd(v10, 0xBFFFFFFF);
  _InterlockedDecrement(v10);
  return result;
}
