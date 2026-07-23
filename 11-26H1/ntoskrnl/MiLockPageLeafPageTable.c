/*
 * XREFs of MiLockPageLeafPageTable @ 0x1402D0C10
 * Callers:
 *     MiProbeAndLockPacket @ 0x1402D0300 (MiProbeAndLockPacket.c)
 *     MmStoreProbeAndLockPages @ 0x1402D26F0 (MmStoreProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x1403A1040 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402C7E40 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     MiFastLockLeafPageTable @ 0x1402CF2D0 (MiFastLockLeafPageTable.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiFaultInProbeAddress @ 0x1403A2230 (MiFaultInProbeAddress.c)
 */

__int64 __fastcall MiLockPageLeafPageTable(__int64 a1)
{
  ULONG_PTR v1; // r14
  __int64 v2; // r15
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  __int64 result; // rax
  int v8; // eax
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rcx
  int v12; // ebx
  __int64 i; // rbp
  unsigned __int64 v14; // rbx
  volatile unsigned __int64 v15; // r9
  unsigned __int64 v16; // rdx
  signed __int64 v17; // rax
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // r8
  __int64 v20; // rcx
  __int64 v21; // rdx
  struct _KPRCB *CurrentPrcb; // r8
  char v23; // al
  unsigned int v24; // ecx
  volatile __int64 *v25; // rdx
  _KSPIN_LOCK_QUEUE *volatile *v26; // rcx
  __int64 v27; // r9
  __int64 v28; // r10
  __int16 v29; // ax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 HasShadow; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  unsigned __int64 v36; // rcx
  unsigned int v37; // ecx
  char v38; // r14
  unsigned __int64 v39; // rdx
  unsigned __int32 v40; // r8d
  volatile signed __int32 *v41; // r15
  int v42; // r13d
  int v43; // r12d
  bool v44; // zf
  signed __int32 v45; // eax
  struct _KPRCB *v46; // rdx
  char v47; // al
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  volatile unsigned __int64 v53; // rcx
  signed __int64 v54; // rax
  unsigned __int64 v55; // rdx
  signed __int32 v56; // edx
  signed __int32 v57; // eax
  unsigned __int64 v58; // [rsp+20h] [rbp-68h]
  unsigned __int64 v59; // [rsp+28h] [rbp-60h]
  unsigned __int64 v60; // [rsp+30h] [rbp-58h]
  __int64 v61; // [rsp+38h] [rbp-50h]
  char v62; // [rsp+90h] [rbp+8h]
  int v63; // [rsp+98h] [rbp+10h] BYREF
  ULONG_PTR v64; // [rsp+A0h] [rbp+18h]
  __int64 v65; // [rsp+A8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v64 = v1;
  v65 = v2;
  v4 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v58 = v4;
  v59 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v60 = ((v59 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = *(_QWORD *)(a1 + 40);
  v61 = ((v60 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v5 )
  {
    if ( v5 == ((*(_QWORD *)(a1 + 24) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      goto LABEL_3;
    MiUnlockPageTableInternal(v2, v5);
    *(_DWORD *)(a1 + 104) &= ~1u;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  v8 = MiFastLockLeafPageTable(v2, v1, 4u);
  if ( !v8 )
  {
    v12 = 3;
    *(_QWORD *)(a1 + 40) = 0xFFFFF6FB7DBEDF68uLL;
    MiLockPageTableInternal(v2, 0xFFFFF6FB7DBEDF68uLL, 0LL);
    goto LABEL_15;
  }
  v11 = *(&v58 + v8);
  *(_QWORD *)(a1 + 40) = v11;
  if ( v8 != 1 )
  {
    v12 = v8 - 1;
LABEL_15:
    for ( i = v12; ; i = 3LL )
    {
      while ( 1 )
      {
        if ( !i )
          goto LABEL_3;
        v14 = *(&v58 + i);
        v15 = *(_QWORD *)v14;
        if ( v14 >= 0xFFFFF6FB7DBED000uLL && v14 <= 0xFFFFF6FB7DBED7F8uLL )
          break;
LABEL_18:
        if ( (v15 & 1) == 0 )
          goto LABEL_52;
        if ( (v15 & 0x80u) != 0LL )
        {
          if ( (*(_BYTE *)(a1 + 96) & 6) == 2 && (v15 & 0x800) == 0 )
          {
            ++*(_DWORD *)&stru_140E2ED08.BamQosLevel;
            return 3221225477LL;
          }
          v27 = (v15 >> 12) & 0xFFFFFFFFFFLL;
          v62 = 1;
          v1 >>= 12;
          v28 = 1LL;
          do
          {
            v29 = v1;
            v1 >>= 9;
            v30 = v28 * (v29 & 0x1FF);
            v28 <<= 9;
            v27 += v30;
            --i;
          }
          while ( i );
          v31 = *(_QWORD *)(a1 + 8);
          v64 = v1;
          *(_QWORD *)(a1 + 144) = v27;
          *(_QWORD *)(a1 + 160) = v31 & ~((v28 << 12) - 1);
          *(_QWORD *)(a1 + 168) = (~((v28 << 12) - 1) & ((v28 << 12) + v31)) - 1;
          *(_DWORD *)(a1 + 104) |= 1u;
          *(_QWORD *)(a1 + 176) = v27 & ~(v28 - 1);
        }
        else
        {
          v62 = 0;
        }
        if ( v14 == 0xFFFFF6FB7DBEDF68uLL )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v23 = *(_DWORD *)(v2 + 184) & 0xF;
          if ( v23 )
          {
            if ( v23 == 7 )
            {
              v24 = 1;
            }
            else if ( v23 == 5 )
            {
              v24 = 0;
            }
            else
            {
              v24 = 3;
            }
            v25 = (volatile __int64 *)(&MiState + 2 * v24 + 2278);
          }
          else
          {
            v24 = 2;
            v25 = (volatile __int64 *)(v2 + 176);
          }
          v26 = &CurrentPrcb->SelfmapLockHandle[0].LockQueue.Next + 2 * v24 + v24;
          v10 = 0LL;
          *((_QWORD *)v26 + 1) = v25;
          *v26 = 0LL;
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
          {
            if ( !_InterlockedExchange64(v25, (__int64)v26) )
              goto LABEL_84;
            KxWaitForLockOwnerShip(v26);
          }
          else
          {
            KiAcquireQueuedSpinLockInstrumented(v26, v25);
          }
        }
        else if ( (*(_DWORD *)(v2 + 184) & 0xF) == 0
               && v14 >= 0xFFFFF6FB7DBED000uLL
               && v14 <= 0xFFFFF6FB7DBEDFFFuLL
               && (v32 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) != 0 )
        {
          ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v32 + 4 * ((v14 >> 3) & 0x1FF)));
        }
        else
        {
          if ( (*(_DWORD *)(v2 + 184) & 0xF) != 0 && v14 >= 0xFFFFF6FB7DBED000uLL && v14 <= 0xFFFFF6FB7DBEDFFFuLL )
          {
            v63 = 0;
            v37 = 2 * ((__int64)(v14 + 0x90482413000LL) >> 3);
            v38 = v37 & 0x1F;
            v39 = (unsigned __int64)v37 >> 5;
            v40 = *(&MiState + v39 + 1467);
            v41 = (volatile signed __int32 *)(&MiState + v39 + 1467);
            LOBYTE(v37) = v37 & 0x1F;
            v42 = 1 << v37;
            v43 = ~(2 << v37);
            do
            {
              while ( ((v40 >> v38) & 1) != 0 )
              {
                if ( ((v40 >> v38) & 2) != 0 )
                {
                  do
                  {
                    KeYieldProcessorEx(&v63);
                    v40 = *v41;
                  }
                  while ( (((unsigned __int32)*v41 >> v38) & 1) != 0 );
                }
                else
                {
                  v56 = v40 | (2 << v38);
                  v57 = _InterlockedCompareExchange(v41, v56, v40);
                  v44 = v40 == v57;
                  v40 = v57;
                  if ( v44 )
                    v40 = v56;
                }
              }
              v45 = _InterlockedCompareExchange(v41, v43 & (v40 | v42), v40);
              v44 = v40 == v45;
              v40 = v45;
            }
            while ( !v44 );
            v2 = v65;
          }
          else
          {
            v16 = *(_QWORD *)v14;
            v63 = 0;
            if ( v14 >= 0xFFFFF6FB7DBED000uLL
              && v14 <= 0xFFFFF6FB7DBED7F8uLL
              && (v16 & 1) != 0
              && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
            {
              HasShadow = MiPteHasShadow(0xFFFFF6FB7DBEDFFFuLL, v16, 0LL);
              if ( HasShadow )
              {
                v34 = *(_QWORD *)(HasShadow + 1288);
                if ( v34 )
                {
                  v35 = *(_QWORD *)(v34 + 8 * ((v14 >> 3) & 0x1FF));
                  if ( (v35 & 0x20) != 0 )
                    v16 |= 0x20uLL;
                  v36 = v16;
                  v16 |= 0x42uLL;
                  if ( (v35 & 0x42) == 0 )
                    v16 = v36;
                }
              }
            }
            while ( (v16 & 1) != 0 )
            {
              if ( (v16 & 0x1000000000000000LL) != 0 )
              {
                if ( ((v16 >> 60) & 2) != 0 )
                {
                  do
                  {
                    KeYieldProcessorEx(&v63);
                    v16 = *(_QWORD *)v14;
                  }
                  while ( (*(_QWORD *)v14 & 0x1000000000000000LL) != 0 );
                }
                else
                {
                  if ( (MiFlags & 0x8000000) != 0 )
                    _mm_lfence();
                  v54 = _InterlockedCompareExchange64((volatile signed __int64 *)v14, v16 | 0x2000000000000000LL, v16);
                  if ( v16 == v54 )
                    v16 |= 0x2000000000000000uLL;
                  else
                    v16 = v54;
                }
              }
              else
              {
                if ( (MiFlags & 0x8000000) != 0 )
                  _mm_lfence();
                v17 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)v14,
                        v16 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
                        v16);
                if ( v16 == v17 )
                  break;
                v16 = v17;
              }
            }
          }
          v1 = v64;
        }
        v10 = 0LL;
LABEL_84:
        v9 = *(_QWORD *)(a1 + 40);
        if ( v9 != 0xFFFFF6FB7DBEDF68uLL )
        {
          if ( (*(_DWORD *)(v2 + 184) & 0xF) != 0 )
            goto LABEL_93;
          v11 = 0xFFFFF6FB7DBEDFFFuLL;
          if ( v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBEDFFFuLL )
          {
            v49 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count;
            if ( v49 )
            {
              ExReleaseSpinLockRegardlessFromDpcLevel((volatile signed __int32 *)(v49 + 4 * ((v9 >> 3) & 0x1FF)));
              goto LABEL_91;
            }
LABEL_93:
            v11 = 0xFFFFF6FB7DBEDFFFuLL;
          }
          if ( (*(_DWORD *)(v2 + 184) & 0xF) != 0 && v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBEDFFFuLL )
          {
            v55 = 2 * (unsigned int)((__int64)(v9 + 0x90482413000LL) >> 3);
            v11 = v55 & 0x1F;
            v9 = v55 >> 5;
            _InterlockedAnd((volatile signed __int32 *)&MiState + v9 + 1467, ~(2 << v11) & ~(1 << v11));
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)v9, 0xCFFFFFFFFFFFFFFFuLL);
          }
          goto LABEL_91;
        }
        v46 = KeGetCurrentPrcb();
        v47 = *(_DWORD *)(v2 + 184) & 0xF;
        if ( !v47 )
        {
          v48 = 2LL;
LABEL_96:
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v46->SelfmapLockHandle[v48]);
          goto LABEL_91;
        }
        if ( v47 != 7 )
        {
          v48 = 3LL;
          if ( v47 == 5 )
            v48 = 0LL;
          goto LABEL_96;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v46->SelfmapLockHandle[1]);
LABEL_91:
        *(_QWORD *)(a1 + 40) = v14;
        if ( v62 )
          return 0LL;
        --i;
      }
      if ( (v15 & 1) != 0 )
      {
        if ( (v15 & 0x20) == 0 || (v15 & 0x42) == 0 )
        {
          v50 = MiPteHasShadow(v11, v9, v10);
          if ( v50 )
          {
            v51 = *(_QWORD *)(v50 + 1288);
            if ( v51 )
            {
              v52 = *(_QWORD *)(v51 + 8 * ((v14 >> 3) & 0x1FF));
              if ( (v52 & 0x20) != 0 )
                v15 |= 0x20uLL;
              v53 = v15;
              v15 |= 0x42uLL;
              if ( (v52 & 0x42) == 0 )
                v15 = v53;
            }
          }
        }
        goto LABEL_18;
      }
LABEL_52:
      result = MiFaultInProbeAddress(a1);
      if ( (int)result < 0 )
        goto LABEL_134;
      *(_QWORD *)(a1 + 40) = 0xFFFFF6FB7DBEDF68uLL;
      MiLockPageTableInternal(v2, 0xFFFFF6FB7DBEDF68uLL, 0LL);
    }
  }
LABEL_3:
  v6 = *(_QWORD *)v4;
  if ( v4 >= 0xFFFFF6FB7DBED000uLL && v4 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( (v6 & 1) == 0 )
      goto LABEL_13;
    if ( ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        if ( Process )
        {
          KernelWaitTime = Process[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v20 = *(_QWORD *)(KernelWaitTime + 8 * ((v4 >> 3) & 0x1FF));
            if ( (v20 & 0x20) != 0 )
              v6 |= 0x20uLL;
            v21 = v6;
            v6 |= 0x42uLL;
            if ( (v20 & 0x42) == 0 )
              v6 = v21;
          }
        }
      }
    }
  }
  if ( (v6 & 1) != 0 )
  {
    *(_QWORD *)(a1 + 48) = v6;
    return 0LL;
  }
LABEL_13:
  result = MiFaultInProbeAddress(a1);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(a1 + 40) = 0xFFFFF6FB7DBEDF68uLL;
    MiLockPageTableInternal(v2, 0xFFFFF6FB7DBEDF68uLL, 0LL);
    v12 = 3;
    goto LABEL_15;
  }
LABEL_134:
  ++HIDWORD(stru_140E2ED08.LastXStateSaveDebugInfo);
  return result;
}
