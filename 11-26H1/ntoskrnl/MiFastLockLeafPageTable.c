/*
 * XREFs of MiFastLockLeafPageTable @ 0x1402ED250
 * Callers:
 *     MiCountSharedPages @ 0x1402D0E10 (MiCountSharedPages.c)
 *     MiSynchronizeSystemVa @ 0x1402E3870 (MiSynchronizeSystemVa.c)
 *     MiResolvePageTablePage @ 0x1402ECA70 (MiResolvePageTablePage.c)
 *     MiLockPageLeafPageTable @ 0x1402EEB90 (MiLockPageLeafPageTable.c)
 *     MiMakeSystemAddressValid @ 0x1403028C0 (MiMakeSystemAddressValid.c)
 *     MiCaptureDeleteHierarchy @ 0x140303880 (MiCaptureDeleteHierarchy.c)
 *     MiQueryAddressState @ 0x140305180 (MiQueryAddressState.c)
 *     MiGetNextPageTable @ 0x140318050 (MiGetNextPageTable.c)
 *     MiDeleteVaDirect @ 0x140361EF0 (MiDeleteVaDirect.c)
 *     MiClearNonPagedPtes @ 0x1403633B8 (MiClearNonPagedPtes.c)
 *     MiCommitPoolMemory @ 0x140364AE0 (MiCommitPoolMemory.c)
 *     MiLockStealUserVm @ 0x14045EF90 (MiLockStealUserVm.c)
 *     MiLockPoolCommitPageTable @ 0x140465970 (MiLockPoolCommitPageTable.c)
 *     MiWriteAwePtesNewPageTable @ 0x140702E64 (MiWriteAwePtesNewPageTable.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     KxWaitForLockOwnerShip @ 0x1402B29C0 (KxWaitForLockOwnerShip.c)
 *     KiTryToAcquireQueuedSpinLockInstrumented @ 0x1402B3438 (KiTryToAcquireQueuedSpinLockInstrumented.c)
 *     MiLockPageTableInternal @ 0x1402B34E0 (MiLockPageTableInternal.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402B4830 (KiAcquireQueuedSpinLockInstrumented.c)
 *     MiUnlockPageTableInternal @ 0x1402D13E0 (MiUnlockPageTableInternal.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402EDFB0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiPteHasShadow @ 0x1403011E0 (MiPteHasShadow.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiFastLockLeafPageTable(signed __int64 a1, ULONG_PTR a2, unsigned int a3)
{
  signed __int64 v4; // r9
  BOOL v5; // edx
  char v6; // cl
  int v7; // r11d
  _DWORD *MmInternal; // rcx
  _DWORD *v9; // r12
  __int64 result; // rax
  int v11; // edi
  unsigned __int64 v12; // rbx
  char v13; // r10
  __int64 v14; // rax
  _KPROCESS *Process; // rcx
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r13
  volatile signed __int64 v20; // rdx
  char v21; // r10
  unsigned __int64 v22; // rdx
  int v23; // r10d
  signed __int64 v24; // rax
  char v25; // cl
  struct _KPRCB *CurrentPrcb; // r10
  char v27; // al
  unsigned int v28; // ecx
  volatile __int64 *v29; // rdx
  volatile __int64 *v30; // r9
  volatile __int64 *v31; // r8
  _KSPIN_LOCK_QUEUE *volatile *v32; // rcx
  __int64 HasShadow; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  unsigned __int64 v41; // rcx
  char v42; // r13
  volatile signed __int32 *v43; // r9
  unsigned __int32 v44; // r8d
  int v45; // r10d
  bool v46; // zf
  signed __int32 v47; // eax
  signed __int64 v48; // rcx
  signed __int64 v49; // rax
  char v50; // r8
  int v51; // ecx
  signed __int32 v52; // eax
  unsigned __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rax
  unsigned __int64 v56; // r8
  __int64 v57; // rax
  __int64 v58; // rax
  char v59; // cl
  unsigned int v60; // [rsp+34h] [rbp-A4h]
  int v61; // [rsp+3Ch] [rbp-9Ch]
  int v62; // [rsp+44h] [rbp-94h] BYREF
  int v63; // [rsp+48h] [rbp-90h] BYREF
  unsigned __int64 v64; // [rsp+50h] [rbp-88h]
  volatile signed __int64 v65; // [rsp+58h] [rbp-80h]
  unsigned __int64 v66; // [rsp+60h] [rbp-78h]
  __int64 v67; // [rsp+68h] [rbp-70h]
  unsigned __int64 i; // [rsp+70h] [rbp-68h]
  unsigned __int32 *v69; // [rsp+78h] [rbp-60h]
  int v70; // [rsp+80h] [rbp-58h]
  char *v71; // [rsp+88h] [rbp-50h]
  volatile __int64 *v72; // [rsp+90h] [rbp-48h]
  _KSPIN_LOCK_QUEUE *volatile *v73; // [rsp+98h] [rbp-40h]
  char v75; // [rsp+F8h] [rbp+20h]
  char v76; // [rsp+F8h] [rbp+20h]
  int v77; // [rsp+F8h] [rbp+20h]
  int v78; // [rsp+F8h] [rbp+20h]

  v4 = a1;
  if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
    KeBugCheckEx(0x1Au, 0x1380uLL, a2, a3, 0LL);
  v5 = 0;
  v6 = *(_DWORD *)(a1 + 184) & 0xF;
  if ( v6 == 7 || (unsigned __int8)(v6 - 1) <= 1u )
    goto LABEL_12;
  if ( v6 == 5 )
  {
    if ( a2 >= qword_140E37BE0 && a2 < qword_140E37BE8 + qword_140E37BE0 )
      return 0LL;
    v7 = 1;
    v5 = 1;
    goto LABEL_7;
  }
  if ( v6 != 3 )
  {
    v7 = 1;
    v5 = v6 == 0;
    goto LABEL_7;
  }
  if ( a2 < MmPfnDatabase )
  {
LABEL_12:
    v7 = 1;
    goto LABEL_7;
  }
  if ( a2 < ((qword_140E2D710 + 0x7FFFFFFFFFLL) & 0xFFFFFF8000000000uLL) )
    return 0LL;
  v7 = 1;
LABEL_7:
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  if ( (MiFlags & 0x2000000) == 0 )
    return 0LL;
  if ( !MmInternal )
    return 0LL;
  v9 = MmInternal + 80;
  v71 = (char *)(MmInternal + 80);
  if ( MmInternal[80] )
    return 0LL;
  *v9 = 1;
  v11 = 0;
  v60 = 0;
  v12 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  i = v12;
  v13 = a3 | 2;
  v75 = a3 | 2;
  if ( !v5 )
    goto LABEL_18;
  v18 = v12 & 0xFFFFFFFFFFFFLL;
  v19 = (((v12 & 0xFFFFFFFFFFFFLL) >> 9) & 0x7FFFFFFFFFFFF8LL) - 0x98000000000LL;
  v69 = (unsigned __int32 *)v19;
  v20 = *(_QWORD *)v19;
  if ( v19 >= 0xFFFFF6FB7DBED000uLL && v19 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v65 = *(_QWORD *)v19;
    if ( (v20 & 1) == 0 )
      goto LABEL_117;
    if ( (v20 & 0x20) == 0 || (v20 & 0x42) == 0 )
    {
      HasShadow = MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v20, v18);
      if ( HasShadow )
      {
        v34 = *(_QWORD *)(HasShadow + 1288);
        if ( v34 )
        {
          v35 = *(_QWORD *)(v34 + 8 * ((v19 >> 3) & 0x1FF));
          if ( (v35 & 0x20) != 0 )
          {
            v20 |= 0x20uLL;
            v65 = v20;
          }
          if ( (v35 & 0x42) != 0 )
          {
            v20 |= 0x42uLL;
            v65 = v20;
          }
        }
      }
    }
  }
  if ( (v20 & 1) == 0 )
  {
LABEL_117:
    result = 0LL;
    goto LABEL_139;
  }
  if ( (v20 & 0x80u) == 0LL )
  {
    if ( (v13 & 8) == 0 )
      goto LABEL_18;
    v21 = v13 & 0xF7;
    v76 = v21;
    v62 = 0;
    if ( (((v12 & 0xFFFFFFFFFFFFLL) >> 9) & 0x7FFFFFFFFFFFF8LL) != 0x7B7DBEDF68LL )
    {
      if ( (*(_DWORD *)(v4 + 184) & 0xF) == 0 && v19 >= 0xFFFFF6FB7DBED000uLL && v19 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v36 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count;
        if ( v36 )
        {
          ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v36 + 4 * ((v19 >> 3) & 0x1FF)));
          goto LABEL_59;
        }
      }
      v70 = *(_DWORD *)(v4 + 184);
      if ( (v70 & 0xF) != 0 && v19 >= 0xFFFFF6FB7DBED000uLL && v19 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v62 = 0;
        v41 = 2 * (unsigned int)((__int64)(v19 + 0x90482413000LL) >> 3);
        v42 = (2 * ((__int64)(v19 + 0x90482413000LL) >> 3)) & 0x1F;
        v43 = (volatile signed __int32 *)(&MiState + (v41 >> 5) + 1467);
        v69 = (unsigned __int32 *)v43;
        v44 = *v43;
        v78 = v21 & 1;
        v45 = 2 << (v41 & 0x1F);
        v61 = v45;
        do
        {
          while ( ((v44 >> v42) & 1) != 0 )
          {
            if ( v78 )
              goto LABEL_60;
            if ( ((v44 >> v42) & 2) != 0 )
            {
              do
              {
                KeYieldProcessorEx(&v62);
                v43 = (volatile signed __int32 *)v69;
                v44 = *v69;
              }
              while ( ((*v69 >> v42) & 1) != 0 );
              v45 = v61;
              v7 = 1;
            }
            else
            {
              v51 = v44 | v45;
              v52 = _InterlockedCompareExchange(v43, v44 | v45, v44);
              v46 = v44 == v52;
              v44 = v52;
              if ( v46 )
                v44 = v51;
            }
          }
          v47 = _InterlockedCompareExchange(v43, ~v45 & (v44 | (v7 << v42)), v44);
          v46 = v44 == v47;
          v44 = v47;
          if ( v46 )
            goto LABEL_59;
        }
        while ( !v78 );
        goto LABEL_60;
      }
      v64 = 0LL;
      v63 = 0;
      v22 = *(_QWORD *)v19;
      if ( v19 >= 0xFFFFF6FB7DBED000uLL && v19 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        v66 = *(_QWORD *)v19;
        if ( (v22 & 1) != 0 && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
        {
          v38 = MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v22, v18);
          if ( v38 )
          {
            v39 = *(_QWORD *)(v38 + 1288);
            if ( v39 )
            {
              v40 = *(_QWORD *)(v39 + 8 * ((v19 >> 3) & 0x1FF));
              if ( (v40 & 0x20) != 0 )
              {
                v22 |= 0x20uLL;
                v66 = v22;
              }
              if ( (v40 & 0x42) != 0 )
              {
                v22 |= 0x42uLL;
                v66 = v22;
              }
            }
          }
        }
      }
      v64 = v22;
      v23 = v21 & 1;
      v77 = v23;
      while ( (v22 & 1) != 0 )
      {
        if ( (v22 & 0x1000000000000000LL) != 0 )
        {
          if ( v23 )
            break;
          if ( ((v22 >> 60) & 2) != 0 )
          {
            do
            {
              KeYieldProcessorEx(&v63);
              v64 = *(_QWORD *)v19;
              v22 = v64;
            }
            while ( (v64 & 0x1000000000000000LL) != 0 );
            v7 = 1;
            v23 = v77;
          }
          else
          {
            v48 = v22 | 0x2000000000000000LL;
            if ( (MiFlags & 0x8000000) != 0 )
              _mm_lfence();
            v49 = _InterlockedCompareExchange64((volatile signed __int64 *)v19, v48, v22);
            if ( v22 == v49 )
            {
              v50 = 1;
            }
            else
            {
              v50 = 0;
              v22 = v49;
              v64 = v49;
            }
            if ( v50 )
            {
              v22 = v48;
              v64 = v48;
            }
          }
        }
        else
        {
          if ( (MiFlags & 0x8000000) != 0 )
            _mm_lfence();
          v24 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)v19,
                  v22 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
                  v22);
          if ( v22 == v24 )
          {
            v25 = 1;
          }
          else
          {
            v25 = 0;
            v22 = v24;
            v64 = v24;
          }
          if ( v25 )
            goto LABEL_58;
          if ( v23 )
            break;
        }
      }
      v7 = 0;
      goto LABEL_58;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v27 = *(_DWORD *)(v4 + 184) & 0xF;
    if ( v27 )
    {
      if ( v27 == 7 )
      {
        v28 = v7;
      }
      else if ( v27 == 5 )
      {
        v28 = 0;
      }
      else
      {
        v28 = 3;
      }
      v29 = (volatile __int64 *)(&MiState + 2 * v28 + 2278);
    }
    else
    {
      v28 = 2;
      v29 = (volatile __int64 *)(v4 + 176);
    }
    v30 = v29;
    v31 = v29;
    v72 = v29;
    v32 = &CurrentPrcb->SelfmapLockHandle[0].LockQueue.Next + 2 * v28 + v28;
    v73 = v32;
    *((_QWORD *)v32 + 1) = v29;
    *v32 = 0LL;
    if ( (v76 & 1) == 0 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        if ( !LODWORD(stru_140F11D08.WaitStatus) )
        {
          KiAcquireQueuedSpinLockInstrumented((__int64)v32, v29);
          goto LABEL_59;
        }
        v30 = v29;
      }
      v37 = _InterlockedExchange64(v30, (__int64)v32);
      if ( v37 )
        KxWaitForLockOwnerShip((volatile signed __int64)v32, v37, (__int64)v31);
      goto LABEL_59;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      if ( !LODWORD(stru_140F11D08.WaitStatus) )
      {
        v7 = KiTryToAcquireQueuedSpinLockInstrumented((signed __int64)v32, v29);
LABEL_58:
        if ( !v7 )
        {
LABEL_60:
          v4 = a1;
          result = v60;
          goto LABEL_139;
        }
LABEL_59:
        v60 = 2;
        goto LABEL_60;
      }
      v31 = v29;
    }
    _m_prefetchw((const void *)v31);
    v7 = !*v29 && !_InterlockedCompareExchange64(v29, (signed __int64)v32, 0LL);
    if ( v7 )
      goto LABEL_59;
    _mm_pause();
    goto LABEL_58;
  }
  v11 = 3;
  v12 = ((v18 >> 18) & 0x3FFFFFFFFFF8LL) - 0x904C0000000LL;
  for ( i = v12; ; i = v12 )
  {
LABEL_18:
    v14 = *(_QWORD *)v12;
    if ( v12 >= 0xFFFFF6FB7DBED000uLL && v12 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v67 = *(_QWORD *)v12;
      if ( (v14 & 1) == 0 )
      {
LABEL_35:
        result = 0LL;
        goto LABEL_139;
      }
      if ( (v14 & 0x20) == 0 || (v14 & 0x42) == 0 )
      {
        if ( (MiFlags & 0x1800000) == 0
          || (Process = KeGetCurrentThread()->ApcState.Process, Process->AddressPolicy == 1) )
        {
          Process = 0LL;
        }
        if ( Process )
        {
          KernelWaitTime = Process[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v17 = *(_QWORD *)(KernelWaitTime + 8 * ((v12 >> 3) & 0x1FF));
            if ( (v17 & 0x20) != 0 )
            {
              v14 |= 0x20uLL;
              v67 = v14;
            }
            if ( (v17 & 0x42) != 0 )
            {
              v14 |= 0x42uLL;
              v67 = v14;
            }
          }
        }
      }
    }
    if ( (v14 & 1) == 0 )
      goto LABEL_35;
    if ( (v14 & 0x80u) == 0LL )
      break;
    v11 = 2;
    v12 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  result = MiLockPageTableInternal(v4, v12, v75);
  if ( (_DWORD)result )
    result = 1LL;
  v4 = a1;
LABEL_139:
  *v9 = 0;
  if ( (_DWORD)result && v11 )
  {
    v53 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    if ( v11 == 3 )
      v53 = ((v53 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v54 = *(_QWORD *)v53;
    if ( v53 >= 0xFFFFF6FB7DBED000uLL
      && v53 <= 0xFFFFF6FB7DBED7F8uLL
      && (v54 & 1) != 0
      && ((v54 & 0x20) == 0 || (v54 & 0x42) == 0) )
    {
      v55 = MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v54, v53);
      if ( v55 )
      {
        v57 = *(_QWORD *)(v55 + 1288);
        if ( v57 )
        {
          v58 = *(_QWORD *)(v57 + 8 * ((v56 >> 3) & 0x1FF));
          if ( (v58 & 0x20) != 0 )
            LOBYTE(v54) = v54 | 0x20;
          v59 = v54;
          LOBYTE(v54) = v54 | 0x42;
          if ( (v58 & 0x42) == 0 )
            LOBYTE(v54) = v59;
        }
      }
    }
    if ( (v54 & 0x81) == 0x81 )
      return (unsigned int)(v11 == 3) + 2;
    MiUnlockPageTableInternal(v4, v12);
    return 0LL;
  }
  return result;
}
