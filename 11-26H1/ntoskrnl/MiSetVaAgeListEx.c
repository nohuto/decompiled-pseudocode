/*
 * XREFs of MiSetVaAgeListEx @ 0x14029C850
 * Callers:
 *     MiActOnValidPte @ 0x140296698 (MiActOnValidPte.c)
 *     MiUpdateWsleAge @ 0x14029B680 (MiUpdateWsleAge.c)
 *     MiResetAccessBitPteWorker @ 0x14029BA28 (MiResetAccessBitPteWorker.c)
 *     MiResetAccessBitPte @ 0x14029BDF0 (MiResetAccessBitPte.c)
 *     MiSetVaAgeList @ 0x14029C4D0 (MiSetVaAgeList.c)
 *     MiFlushDeferredAgingBucket @ 0x14029C4F0 (MiFlushDeferredAgingBucket.c)
 *     MiProcessWsInSwapFault @ 0x14029E50C (MiProcessWsInSwapFault.c)
 *     MiAgePteWorker @ 0x1402E10E0 (MiAgePteWorker.c)
 *     MiClearPteAccessed @ 0x1402E1A30 (MiClearPteAccessed.c)
 *     MiLockVirtualMemoryVa @ 0x14031AC40 (MiLockVirtualMemoryVa.c)
 *     MiUnlockWsle @ 0x140326688 (MiUnlockWsle.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029B1F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiLowPriorityWsleAdded @ 0x14029D6F8 (MiLowPriorityWsleAdded.c)
 *     MiRebuildPageTableAges @ 0x14029D740 (MiRebuildPageTableAges.c)
 *     MiLockNestedPageTable @ 0x14029E130 (MiLockNestedPageTable.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402C7E40 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     MiUpdateWorkingSetAgeDistribution @ 0x1402CCE50 (MiUpdateWorkingSetAgeDistribution.c)
 *     MiInsertActivePageTableLinksTail @ 0x1402CE660 (MiInsertActivePageTableLinksTail.c)
 *     MiRemoveActivePageTableLinks @ 0x1402CE8C0 (MiRemoveActivePageTableLinks.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402D0080 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiGetPagePrivilege @ 0x1402DB8F8 (MiGetPagePrivilege.c)
 *     MiUnlockWorkingSetCoreExclusive @ 0x1402E06D0 (MiUnlockWorkingSetCoreExclusive.c)
 *     MiLockWorkingSetCoreExclusive @ 0x1402E0830 (MiLockWorkingSetCoreExclusive.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiSetVaAgeListEx(__int64 a1, unsigned __int64 a2, unsigned int a3, unsigned __int8 a4, char a5)
{
  unsigned int v5; // r12d
  __int64 v6; // r13
  __int64 v7; // r8
  __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r14
  __int64 v11; // r15
  int v12; // ebp
  _DWORD *v13; // rcx
  signed __int32 v14; // eax
  __int64 v15; // rdx
  signed __int32 v16; // ett
  unsigned __int8 v17; // r9
  unsigned int v18; // r10d
  unsigned __int64 v19; // r11
  bool v20; // zf
  unsigned __int64 v21; // r10
  volatile unsigned __int64 v22; // rax
  unsigned __int64 *v23; // r14
  __int64 v24; // rbx
  unsigned __int8 v25; // bp
  signed __int64 i; // rdx
  signed __int64 v27; // rax
  int v28; // edx
  int PagePrivilege; // eax
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // r8
  __int64 v32; // rcx
  volatile unsigned __int64 v33; // rdx
  int v34; // r15d
  unsigned __int64 v35; // r10
  unsigned __int8 j; // di
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // r9
  unsigned int v39; // r12d
  unsigned __int64 *v40; // r8
  unsigned __int64 v41; // rdx
  __int64 v42; // rdi
  __int64 v43; // rdx
  unsigned __int8 v44; // al
  volatile signed __int32 *v45; // rcx
  unsigned __int64 v47; // r14
  unsigned __int64 *v48; // r8
  unsigned __int64 v49; // rdx
  __int64 v50; // rsi
  __int64 v51; // rdx
  unsigned __int8 v52; // al
  __int64 v53; // rbx
  __int64 v54; // rbx
  __int64 HasShadow; // rax
  unsigned __int64 v56; // r8
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  unsigned __int64 v60; // r8
  __int64 v61; // rax
  __int64 v62; // rax
  unsigned __int64 v63; // rcx
  __int64 v64; // r8
  struct _KPRCB *CurrentPrcb; // rdx
  char v66; // cl
  __int64 v67; // rax
  __int64 v68; // rcx
  struct _KPRCB *v69; // rdx
  char v70; // cl
  __int64 v71; // rax
  __int64 v72; // rcx
  unsigned __int64 v75; // [rsp+38h] [rbp-B0h]
  unsigned __int64 v76; // [rsp+38h] [rbp-B0h]
  unsigned int v77; // [rsp+40h] [rbp-A8h]
  int v78; // [rsp+44h] [rbp-A4h]
  int v79; // [rsp+48h] [rbp-A0h]
  unsigned int v80; // [rsp+4Ch] [rbp-9Ch]
  __int64 v81; // [rsp+58h] [rbp-90h]
  unsigned __int64 v82; // [rsp+60h] [rbp-88h]
  _OWORD v84[2]; // [rsp+70h] [rbp-78h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+0h]

  v5 = a3;
  v75 = a2;
  v6 = a1;
  v7 = 0xFFFFF68000000000uLL;
  LOBYTE(v8) = 0;
  memset(v84, 0, sizeof(v84));
  v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = 0LL;
  v81 = *(_QWORD *)(a1 + 16);
  v11 = 0LL;
  v82 = 0LL;
  v80 = 0;
  v79 = 0;
  v77 = 0;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v12 = 1;
    v78 = 1;
  }
  else
  {
    v12 = 0;
    v78 = 0;
    if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0 )
    {
      MiLockNestedPageTable(a1, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v10 = v9;
      v82 = v9;
    }
  }
  if ( (a5 & 1) == 0 )
  {
    if ( (*(_DWORD *)(v6 + 184) & 0xF) == 1 )
      v13 = &unk_140E379C0;
    else
      v13 = (_DWORD *)(v6 + 256);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(v13);
      v14 = *v13 & 0x7FFFFFFF;
      while ( 1 )
      {
        v15 = (unsigned int)(v14 + 1);
        v16 = v14;
        v14 = _InterlockedCompareExchange(v13, v15, v14);
        if ( v16 == v14 )
          break;
        if ( v14 < 0 )
        {
          LOBYTE(v15) = -1;
          ExpWaitForSpinLockSharedAndAcquire(v13, v15, v7);
          break;
        }
      }
    }
    else
    {
      LOBYTE(a2) = -1;
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v13, a2);
    }
    v17 = a4;
    goto LABEL_10;
  }
  MiLockWorkingSetCoreExclusive(v6);
  v17 = a4;
  if ( a4 != 8 )
  {
LABEL_10:
    v18 = v5;
    goto LABEL_11;
  }
  v64 = *(_QWORD *)(v81 + 32);
  if ( (*(_DWORD *)(v6 + 184) & 0x10) == 0 )
  {
    v18 = v5;
LABEL_163:
    if ( (a5 & 2) == 0 || *(_QWORD *)(v6 + 120) >= v64 + (unsigned __int64)v18 )
    {
LABEL_11:
      v19 = 0xFFFFF6FB7DBED000uLL;
      v20 = v18 == 0;
      v21 = v75;
      if ( !v20 )
      {
        while ( 1 )
        {
          v22 = *(_QWORD *)v9;
          if ( v9 >= 0xFFFFF6FB7DBED000uLL
            && v9 <= 0xFFFFF6FB7DBED7F8uLL
            && (v22 & 1) != 0
            && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0)
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
                  v32 = *(_QWORD *)(KernelWaitTime + 8 * ((v9 >> 3) & 0x1FF));
                  if ( (v32 & 0x20) != 0 )
                    v22 |= 0x20uLL;
                  v33 = v22;
                  v22 |= 0x42uLL;
                  if ( (v32 & 0x42) == 0 )
                    v22 = v33;
                }
              }
            }
          }
          v23 = (unsigned __int64 *)(48 * ((v22 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
          if ( v12 )
          {
            LOBYTE(v8) = HIBYTE(v22) & 0xF | (16 * ((v22 >> 60) & 7));
            v24 = HIBYTE(v22) & 0xF;
            if ( (HIBYTE(v22) & 0xF) == 8 )
              ++v11;
          }
          else
          {
            LOBYTE(v24) = (*v23 >> 46) & 7;
          }
          v25 = v17;
          if ( (unsigned __int8)(v17 - 1) > 5u || (v22 & 0x20) == 0 )
            goto LABEL_17;
          v28 = *(_DWORD *)(v6 + 184);
          if ( (v28 & 0xF) != 0 )
          {
            if ( (MiFlags & 0x4000000000LL) == 0 || (v28 & 0x40) == 0 )
              goto LABEL_187;
          }
          else if ( !*(_QWORD *)(v6 + 624) && (*(_QWORD *)(v6 - 656) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
          {
            goto LABEL_187;
          }
          if ( (*(_DWORD *)(v6 + 184) & 0xF) != 0 )
          {
            if ( (MiGetPagePrivilege(48 * ((v22 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) & 0x41) != 0 )
              goto LABEL_17;
          }
          else
          {
            if ( v21 >= 0x7FFFFFFF0000LL )
              goto LABEL_187;
            if ( *(_QWORD *)(v6 + 624) )
              goto LABEL_17;
            PagePrivilege = MiGetPagePrivilege(48 * ((v22 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
            if ( PagePrivilege )
            {
              if ( (*(_BYTE *)(v6 - 656) & 1) != 0 || (PagePrivilege & 8) == 0 )
                goto LABEL_17;
            }
          }
          v21 = v75;
LABEL_187:
          if ( (_BYTE)v24 )
          {
            v25 = 0;
            ++v77;
LABEL_17:
            if ( (_BYTE)v24 != 8 )
              ++*((_DWORD *)v84 + (unsigned __int8)v24);
            if ( v78 )
            {
              v8 = (unsigned __int8)(v8 ^ (v25 ^ v8) & 0xF);
              for ( i = *(_QWORD *)v9; ; i = v27 )
              {
                if ( (MiFlags & 0x8000000) != 0 )
                  _mm_lfence();
                v27 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)v9,
                        (v8 << 56) ^ (i ^ (v8 << 56)) & 0x80FFFFFFFFFFFFFFuLL,
                        i);
                if ( i == v27 )
                  break;
              }
              v6 = a1;
            }
            else
            {
              *v23 = ((unsigned __int64)v25 << 46) ^ (((unsigned __int64)v25 << 46) ^ *v23) & 0xFFFE3FFFFFFFFFFFuLL;
            }
            ++v80;
            v21 = v75;
            goto LABEL_152;
          }
          ++v79;
LABEL_152:
          v21 += 4096LL;
          v12 = v78;
          v9 += 8LL;
          v17 = a4;
          v75 = v21;
          if ( !--v5 )
          {
            v19 = 0xFFFFF6FB7DBED000uLL;
            break;
          }
        }
      }
      _InterlockedAdd64((volatile signed __int64 *)(v81 + 32), -v11);
      v34 = 0;
      v35 = v21 - ((unsigned __int64)a3 << 12);
      v76 = v35;
      for ( j = 0; j < 8u; ++j )
      {
        v37 = *((unsigned int *)v84 + j);
        if ( (_DWORD)v37 )
        {
          v47 = -(__int64)v37;
          v34 = 0;
          v48 = (unsigned __int64 *)(((v35 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
          v49 = *v48;
          if ( (unsigned __int64)v48 >= v19
            && (unsigned __int64)v48 <= 0xFFFFF6FB7DBED7F8uLL
            && (v49 & 1) != 0
            && ((v49 & 0x20) == 0 || (v49 & 0x42) == 0) )
          {
            HasShadow = MiPteHasShadow(v37, v49, v48);
            if ( HasShadow )
            {
              v57 = *(_QWORD *)(HasShadow + 1288);
              if ( v57 )
              {
                v58 = *(_QWORD *)(v57 + 8 * ((v56 >> 3) & 0x1FF));
                if ( (v58 & 0x20) != 0 )
                  v49 |= 0x20uLL;
                v37 = v49;
                v49 |= 0x42uLL;
                if ( (v58 & 0x42) == 0 )
                  v49 = v37;
              }
            }
          }
          v50 = 48 * ((v49 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
          v51 = (*(_QWORD *)v50 >> 49) & 0x3FFLL;
          v52 = (*(_QWORD *)v50 >> 59) & 7;
          if ( j == v52 )
          {
            v37 = (v51 + v47) << 49;
            *(_QWORD *)v50 = v37 ^ (v37 ^ *(_QWORD *)v50) & 0xF801FFFFFFFFFFFFuLL;
            if ( v51 + v47 )
            {
              if ( (*(_DWORD *)(v50 + 36) & 0x4000000) == 0 )
              {
                *(_QWORD *)v50 = ((v51 + v47) << 49) ^ (((v51 + v47) << 49) ^ ((unsigned __int64)j << 59)) & 0xF801FFFFFFFFFFFFuLL ^ (((unsigned __int64)j << 59) ^ *(_QWORD *)v50) & 0xC001FFFFFFFFFFFFuLL;
                MiInsertActivePageTableLinksTail(v6, v50, j, 0LL);
                v35 = v76;
                v19 = 0xFFFFF6FB7DBED000uLL;
              }
            }
            else
            {
              MiRebuildPageTableAges(v6, v35, 0LL);
              v35 = v76;
              v34 = 1;
              v19 = 0xFFFFF6FB7DBED000uLL;
            }
          }
          else if ( j > v52 )
          {
            v53 = *(_QWORD *)v50;
            if ( (*(_DWORD *)(v50 + 36) & 0x4000000) != 0 )
              MiRemoveActivePageTableLinks(v6, v50, 0LL);
            *(_QWORD *)v50 = ((unsigned __int64)(unsigned int)v47 << 49) ^ (((unsigned __int64)(unsigned int)v47 << 49) ^ ((unsigned __int64)j << 59)) & 0xF801FFFFFFFFFFFFuLL ^ (((unsigned __int64)j << 59) ^ v53) & 0xC001FFFFFFFFFFFFuLL;
            MiInsertActivePageTableLinksTail(v6, v50, j, 0LL);
            v35 = v76;
            v19 = 0xFFFFF6FB7DBED000uLL;
          }
          _InterlockedAdd64((volatile signed __int64 *)(v6 + 8LL * j + 56), v47);
          if ( v34 )
            break;
        }
      }
      if ( a4 >= 8u )
      {
        if ( a4 == 8 )
          _InterlockedAdd64((volatile signed __int64 *)(v81 + 32), v80);
LABEL_68:
        if ( (a5 & 1) != 0 )
        {
          MiUnlockWorkingSetCoreExclusive(v6);
        }
        else
        {
          if ( (*(_DWORD *)(v6 + 184) & 0xF) == 1 )
            v45 = (volatile signed __int32 *)&unk_140E379C0;
          else
            v45 = (volatile signed __int32 *)(v6 + 256);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          {
            _InterlockedAnd(v45, 0xBFFFFFFF);
            _InterlockedDecrement(v45);
          }
          else
          {
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v45, retaddr);
          }
        }
        if ( !v82 )
          return 0LL;
        if ( v82 != 0xFFFFF6FB7DBEDF68uLL )
        {
          if ( (*(_DWORD *)(v6 + 184) & 0xF) != 0
            || v82 < 0xFFFFF6FB7DBED000uLL
            || v82 > 0xFFFFF6FB7DBEDFFFuLL
            || (v68 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
          {
            if ( (*(_DWORD *)(v6 + 184) & 0xF) != 0 && v82 >= 0xFFFFF6FB7DBED000uLL && v82 <= 0xFFFFF6FB7DBEDFFFuLL )
              _InterlockedAnd(
                (volatile signed __int32 *)&MiState
              + ((unsigned __int64)(2 * (unsigned int)((__int64)(v82 + 0x90482413000LL) >> 3)) >> 5)
              + 1467,
                ~(2 << ((2 * ((__int64)(v82 + 0x90482413000LL) >> 3)) & 0x1F)) & ~(1 << ((2
                                                                                        * ((__int64)(v82 + 0x90482413000LL) >> 3)) & 0x1F)));
            else
              _InterlockedAnd64((volatile signed __int64 *)v82, 0xCFFFFFFFFFFFFFFFuLL);
          }
          else
          {
            ExReleaseSpinLockRegardlessFromDpcLevel(v68 + 4 * ((v82 >> 3) & 0x1FF));
          }
          return 0LL;
        }
        CurrentPrcb = KeGetCurrentPrcb();
        v66 = *(_DWORD *)(v6 + 184) & 0xF;
        if ( v66 )
        {
          if ( v66 == 7 )
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[1]);
            return 0LL;
          }
          v67 = 3LL;
          if ( v66 == 5 )
            v67 = 0LL;
        }
        else
        {
          v67 = 2LL;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[v67]);
        return 0LL;
      }
      v38 = v77;
      v39 = a3 - v77 - v79;
      if ( v39 )
      {
        if ( !v34 )
        {
          v40 = (unsigned __int64 *)(((v35 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
          v41 = *v40;
          if ( (unsigned __int64)v40 >= v19
            && (unsigned __int64)v40 <= 0xFFFFF6FB7DBED7F8uLL
            && (v41 & 1) != 0
            && ((v41 & 0x20) == 0 || (v41 & 0x42) == 0) )
          {
            v59 = MiPteHasShadow(v37, v41, v40);
            if ( v59 )
            {
              v61 = *(_QWORD *)(v59 + 1288);
              if ( v61 )
              {
                v62 = *(_QWORD *)(v61 + 8 * ((v60 >> 3) & 0x1FF));
                if ( (v62 & 0x20) != 0 )
                  v41 |= 0x20uLL;
                v63 = v41;
                v41 |= 0x42uLL;
                if ( (v62 & 0x42) == 0 )
                  v41 = v63;
              }
            }
          }
          v42 = 48 * ((v41 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
          v43 = (*(_QWORD *)v42 >> 49) & 0x3FFLL;
          v44 = (*(_QWORD *)v42 >> 59) & 7;
          if ( a4 == v44 )
          {
            *(_QWORD *)v42 = ((unsigned __int64)(v39 + (unsigned int)v43) << 49) ^ (((unsigned __int64)(v39 + (unsigned int)v43) << 49) ^ *(_QWORD *)v42) & 0xF801FFFFFFFFFFFFuLL;
            if ( !(v43 + v39) )
            {
              MiRebuildPageTableAges(v6, v35, 0LL);
              goto LABEL_65;
            }
            if ( (*(_DWORD *)(v42 + 36) & 0x4000000) != 0 )
              goto LABEL_66;
            *(_QWORD *)v42 = ((unsigned __int64)(v39 + (unsigned int)v43) << 49) ^ (((unsigned __int64)a4 << 59) ^ ((unsigned __int64)(v39 + (unsigned int)v43) << 49)) & 0xF801FFFFFFFFFFFFuLL ^ (*(_QWORD *)v42 ^ ((unsigned __int64)a4 << 59)) & 0xC001FFFFFFFFFFFFuLL;
          }
          else
          {
            if ( a4 <= v44 )
            {
LABEL_66:
              _InterlockedAdd64((volatile signed __int64 *)(v6 + 8LL * a4 + 56), v39);
              if ( a4 != 7 )
                goto LABEL_67;
              goto LABEL_138;
            }
            v54 = *(_QWORD *)v42;
            if ( (*(_DWORD *)(v42 + 36) & 0x4000000) != 0 )
              MiRemoveActivePageTableLinks(v6, v42, 0LL);
            *(_QWORD *)v42 = ((unsigned __int64)v39 << 49) ^ (((unsigned __int64)v39 << 49) ^ ((unsigned __int64)a4 << 59)) & 0xF801FFFFFFFFFFFFuLL ^ (v54 ^ ((unsigned __int64)a4 << 59)) & 0xC001FFFFFFFFFFFFuLL;
          }
          MiInsertActivePageTableLinksTail(v6, v42, a4, 0LL);
LABEL_65:
          LODWORD(v35) = v76;
          v38 = v77;
          goto LABEL_66;
        }
        _InterlockedAdd64((volatile signed __int64 *)(v6 + 8LL * a4 + 56), v39);
        if ( a4 == 7 )
LABEL_138:
          MiLowPriorityWsleAdded(v6);
      }
LABEL_67:
      if ( (_DWORD)v38 )
      {
        if ( v34 )
          _InterlockedAdd64((volatile signed __int64 *)(v6 + 56), v38);
        else
          MiUpdateWorkingSetAgeDistribution(v6, v35, 0, v38, 0);
      }
      goto LABEL_68;
    }
    MiUnlockWorkingSetCoreExclusive(v6);
    if ( v10 )
      MiUnlockPageTableInternal(v6, v10);
    return 2LL;
  }
  v18 = v5;
  if ( *(_QWORD *)(v6 + 128) >= v64 + (unsigned __int64)v5 + 6 )
    goto LABEL_163;
  MiUnlockWorkingSetCoreExclusive(v6);
  if ( !v10 )
    return 1LL;
  if ( v10 == 0xFFFFF6FB7DBEDF68uLL )
  {
    v69 = KeGetCurrentPrcb();
    v70 = *(_DWORD *)(v6 + 184) & 0xF;
    if ( v70 )
    {
      if ( v70 == 7 )
      {
        v71 = 1LL;
      }
      else
      {
        v71 = 3LL;
        if ( v70 == 5 )
          v71 = 0LL;
      }
    }
    else
    {
      v71 = 2LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v69->SelfmapLockHandle[v71]);
    return 1LL;
  }
  else
  {
    if ( (*(_DWORD *)(v6 + 184) & 0xF) == 0 && v10 >= 0xFFFFF6FB7DBED000uLL && v10 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      v72 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count;
      if ( v72 )
      {
        ExReleaseSpinLockRegardlessFromDpcLevel(v72 + 4 * ((v10 >> 3) & 0x1FF));
        return 1LL;
      }
    }
    if ( (*(_DWORD *)(v6 + 184) & 0xF) == 0 || v10 < 0xFFFFF6FB7DBED000uLL || v10 > 0xFFFFF6FB7DBEDFFFuLL )
    {
      _InterlockedAnd64((volatile signed __int64 *)v10, 0xCFFFFFFFFFFFFFFFuLL);
      return 1LL;
    }
    _InterlockedAnd(
      (volatile signed __int32 *)&MiState
    + ((unsigned __int64)(2 * (unsigned int)((__int64)(v10 + 0x90482413000LL) >> 3)) >> 5)
    + 1467,
      ~(2 << ((2 * ((__int64)(v10 + 0x90482413000LL) >> 3)) & 0x1F)) & ~(1 << ((2
                                                                              * ((__int64)(v10 + 0x90482413000LL) >> 3)) & 0x1F)));
    return 1LL;
  }
}
