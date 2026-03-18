/*
 * XREFs of MiLockPageLeafPageTable @ 0x1402EEB90
 * Callers:
 *     MiProbeAndLockPacket @ 0x1402EE280 (MiProbeAndLockPacket.c)
 *     MmStoreProbeAndLockPages @ 0x1402F0670 (MmStoreProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x14039F2E0 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     KxWaitForLockOwnerShip @ 0x1402B29C0 (KxWaitForLockOwnerShip.c)
 *     MiLockPageTableInternal @ 0x1402B34E0 (MiLockPageTableInternal.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402B4830 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402B9F90 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiUnlockPageTableInternal @ 0x1402D13E0 (MiUnlockPageTableInternal.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402E5E00 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     MiFastLockLeafPageTable @ 0x1402ED250 (MiFastLockLeafPageTable.c)
 *     MiPteHasShadow @ 0x1403011E0 (MiPteHasShadow.c)
 *     MiFaultInProbeAddress @ 0x1403A04D0 (MiFaultInProbeAddress.c)
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
  __int64 v27; // rax
  __int64 v28; // r9
  __int64 v29; // r10
  __int16 v30; // ax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 HasShadow; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  unsigned __int64 v37; // rcx
  unsigned int v38; // ecx
  char v39; // r14
  unsigned __int64 v40; // rdx
  unsigned __int32 v41; // r8d
  volatile signed __int32 *v42; // r15
  int v43; // r13d
  int v44; // r12d
  bool v45; // zf
  signed __int32 v46; // eax
  struct _KPRCB *v47; // rdx
  char v48; // al
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  volatile unsigned __int64 v54; // rcx
  signed __int64 v55; // rax
  unsigned __int64 v56; // rdx
  signed __int32 v57; // edx
  signed __int32 v58; // eax
  unsigned __int64 v59; // [rsp+20h] [rbp-68h]
  unsigned __int64 v60; // [rsp+28h] [rbp-60h]
  unsigned __int64 v61; // [rsp+30h] [rbp-58h]
  __int64 v62; // [rsp+38h] [rbp-50h]
  char v63; // [rsp+90h] [rbp+8h]
  int v64; // [rsp+98h] [rbp+10h] BYREF
  ULONG_PTR v65; // [rsp+A0h] [rbp+18h]
  __int64 v66; // [rsp+A8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v65 = v1;
  v66 = v2;
  v4 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v59 = v4;
  v60 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v61 = ((v60 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = *(_QWORD *)(a1 + 40);
  v62 = ((v61 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
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
    MiLockPageTableInternal(v2, 0xFFFFF6FB7DBEDF68uLL, 0);
    goto LABEL_15;
  }
  v11 = *(&v59 + v8);
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
        v14 = *(&v59 + i);
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
            ++*(_DWORD *)&stru_140E2EB88.BamQosLevel;
            return 3221225477LL;
          }
          v28 = (v15 >> 12) & 0xFFFFFFFFFFLL;
          v63 = 1;
          v1 >>= 12;
          v29 = 1LL;
          do
          {
            v30 = v1;
            v1 >>= 9;
            v31 = v29 * (v30 & 0x1FF);
            v29 <<= 9;
            v28 += v31;
            --i;
          }
          while ( i );
          v32 = *(_QWORD *)(a1 + 8);
          v65 = v1;
          *(_QWORD *)(a1 + 144) = v28;
          *(_QWORD *)(a1 + 160) = v32 & ~((v29 << 12) - 1);
          *(_QWORD *)(a1 + 168) = (~((v29 << 12) - 1) & ((v29 << 12) + v32)) - 1;
          *(_DWORD *)(a1 + 104) |= 1u;
          *(_QWORD *)(a1 + 176) = v28 & ~(v29 - 1);
        }
        else
        {
          v63 = 0;
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
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
          {
            v27 = _InterlockedExchange64(v25, (__int64)v26);
            if ( !v27 )
              goto LABEL_84;
            KxWaitForLockOwnerShip((volatile signed __int64)v26, v27, 0LL);
          }
          else
          {
            KiAcquireQueuedSpinLockInstrumented((__int64)v26, v25);
          }
        }
        else if ( (*(_DWORD *)(v2 + 184) & 0xF) == 0
               && v14 >= 0xFFFFF6FB7DBED000uLL
               && v14 <= 0xFFFFF6FB7DBEDFFFuLL
               && (v33 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) != 0 )
        {
          ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v33 + 4 * ((v14 >> 3) & 0x1FF)));
        }
        else
        {
          if ( (*(_DWORD *)(v2 + 184) & 0xF) != 0 && v14 >= 0xFFFFF6FB7DBED000uLL && v14 <= 0xFFFFF6FB7DBEDFFFuLL )
          {
            v64 = 0;
            v38 = 2 * ((__int64)(v14 + 0x90482413000LL) >> 3);
            v39 = v38 & 0x1F;
            v40 = (unsigned __int64)v38 >> 5;
            v41 = *(&MiState + v40 + 1467);
            v42 = (volatile signed __int32 *)(&MiState + v40 + 1467);
            LOBYTE(v38) = v38 & 0x1F;
            v43 = 1 << v38;
            v44 = ~(2 << v38);
            do
            {
              while ( ((v41 >> v39) & 1) != 0 )
              {
                if ( ((v41 >> v39) & 2) != 0 )
                {
                  do
                  {
                    KeYieldProcessorEx(&v64);
                    v41 = *v42;
                  }
                  while ( (((unsigned __int32)*v42 >> v39) & 1) != 0 );
                }
                else
                {
                  v57 = v41 | (2 << v39);
                  v58 = _InterlockedCompareExchange(v42, v57, v41);
                  v45 = v41 == v58;
                  v41 = v58;
                  if ( v45 )
                    v41 = v57;
                }
              }
              v46 = _InterlockedCompareExchange(v42, v44 & (v41 | v43), v41);
              v45 = v41 == v46;
              v41 = v46;
            }
            while ( !v45 );
            v2 = v66;
          }
          else
          {
            v16 = *(_QWORD *)v14;
            v64 = 0;
            if ( v14 >= 0xFFFFF6FB7DBED000uLL
              && v14 <= 0xFFFFF6FB7DBED7F8uLL
              && (v16 & 1) != 0
              && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
            {
              HasShadow = MiPteHasShadow(0xFFFFF6FB7DBEDFFFuLL, v16, 0LL);
              if ( HasShadow )
              {
                v35 = *(_QWORD *)(HasShadow + 1288);
                if ( v35 )
                {
                  v36 = *(_QWORD *)(v35 + 8 * ((v14 >> 3) & 0x1FF));
                  if ( (v36 & 0x20) != 0 )
                    v16 |= 0x20uLL;
                  v37 = v16;
                  v16 |= 0x42uLL;
                  if ( (v36 & 0x42) == 0 )
                    v16 = v37;
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
                    KeYieldProcessorEx(&v64);
                    v16 = *(_QWORD *)v14;
                  }
                  while ( (*(_QWORD *)v14 & 0x1000000000000000LL) != 0 );
                }
                else
                {
                  if ( (MiFlags & 0x8000000) != 0 )
                    _mm_lfence();
                  v55 = _InterlockedCompareExchange64((volatile signed __int64 *)v14, v16 | 0x2000000000000000LL, v16);
                  if ( v16 == v55 )
                    v16 |= 0x2000000000000000uLL;
                  else
                    v16 = v55;
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
          v1 = v65;
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
            v50 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count;
            if ( v50 )
            {
              ExReleaseSpinLockRegardlessFromDpcLevel((volatile signed __int32 *)(v50 + 4 * ((v9 >> 3) & 0x1FF)));
              goto LABEL_91;
            }
LABEL_93:
            v11 = 0xFFFFF6FB7DBEDFFFuLL;
          }
          if ( (*(_DWORD *)(v2 + 184) & 0xF) != 0 && v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBEDFFFuLL )
          {
            v56 = 2 * (unsigned int)((__int64)(v9 + 0x90482413000LL) >> 3);
            v11 = v56 & 0x1F;
            v9 = v56 >> 5;
            _InterlockedAnd((volatile signed __int32 *)&MiState + v9 + 1467, ~(2 << v11) & ~(1 << v11));
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)v9, 0xCFFFFFFFFFFFFFFFuLL);
          }
          goto LABEL_91;
        }
        v47 = KeGetCurrentPrcb();
        v48 = *(_DWORD *)(v2 + 184) & 0xF;
        if ( !v48 )
        {
          v49 = 2LL;
LABEL_96:
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v47->SelfmapLockHandle[v49]);
          goto LABEL_91;
        }
        if ( v48 != 7 )
        {
          v49 = 3LL;
          if ( v48 == 5 )
            v49 = 0LL;
          goto LABEL_96;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v47->SelfmapLockHandle[1]);
LABEL_91:
        *(_QWORD *)(a1 + 40) = v14;
        if ( v63 )
          return 0LL;
        --i;
      }
      if ( (v15 & 1) != 0 )
      {
        if ( (v15 & 0x20) == 0 || (v15 & 0x42) == 0 )
        {
          v51 = MiPteHasShadow(v11, v9, v10);
          if ( v51 )
          {
            v52 = *(_QWORD *)(v51 + 1288);
            if ( v52 )
            {
              v53 = *(_QWORD *)(v52 + 8 * ((v14 >> 3) & 0x1FF));
              if ( (v53 & 0x20) != 0 )
                v15 |= 0x20uLL;
              v54 = v15;
              v15 |= 0x42uLL;
              if ( (v53 & 0x42) == 0 )
                v15 = v54;
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
      MiLockPageTableInternal(v2, 0xFFFFF6FB7DBEDF68uLL, 0);
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
    MiLockPageTableInternal(v2, 0xFFFFF6FB7DBEDF68uLL, 0);
    v12 = 3;
    goto LABEL_15;
  }
LABEL_134:
  ++HIDWORD(stru_140E2EB88.LastXStateSaveDebugInfo);
  return result;
}
