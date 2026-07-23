/*
 * XREFs of MiFastLockLeafPageTable @ 0x1402CF2D0
 * Callers:
 *     MiCountSharedPages @ 0x1402B2BD0 (MiCountSharedPages.c)
 *     MiSynchronizeSystemVa @ 0x1402C58B0 (MiSynchronizeSystemVa.c)
 *     MiResolvePageTablePage @ 0x1402CEAB0 (MiResolvePageTablePage.c)
 *     MiLockPageLeafPageTable @ 0x1402D0C10 (MiLockPageLeafPageTable.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     MiCaptureDeleteHierarchy @ 0x1402E5900 (MiCaptureDeleteHierarchy.c)
 *     MiQueryAddressState @ 0x1402E7200 (MiQueryAddressState.c)
 *     MiGetNextPageTable @ 0x14031A080 (MiGetNextPageTable.c)
 *     MiDeleteVaDirect @ 0x140363C90 (MiDeleteVaDirect.c)
 *     MiClearNonPagedPtes @ 0x140365158 (MiClearNonPagedPtes.c)
 *     MiCommitPoolMemory @ 0x140366880 (MiCommitPoolMemory.c)
 *     MiLockStealUserVm @ 0x140458690 (MiLockStealUserVm.c)
 *     MiLockPoolCommitPageTable @ 0x14045E930 (MiLockPoolCommitPageTable.c)
 *     MiWriteAwePtesNewPageTable @ 0x140707B34 (MiWriteAwePtesNewPageTable.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiTryToAcquireQueuedSpinLockInstrumented @ 0x1402FE108 (KiTryToAcquireQueuedSpinLockInstrumented.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiFastLockLeafPageTable(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  __int64 v4; // r9
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
  volatile signed __int64 *v29; // rdx
  volatile __int64 *v30; // r9
  volatile signed __int64 *v31; // r8
  _KSPIN_LOCK_QUEUE *volatile *v32; // rcx
  __int64 HasShadow; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  unsigned __int64 v40; // rcx
  char v41; // r13
  volatile signed __int32 *v42; // r9
  unsigned __int32 v43; // r8d
  int v44; // r10d
  bool v45; // zf
  signed __int32 v46; // eax
  signed __int64 v47; // rcx
  signed __int64 v48; // rax
  char v49; // r8
  int v50; // ecx
  signed __int32 v51; // eax
  unsigned __int64 v52; // r8
  __int64 v53; // rdx
  __int64 v54; // rax
  unsigned __int64 v55; // r8
  __int64 v56; // rax
  __int64 v57; // rax
  char v58; // cl
  unsigned int v59; // [rsp+34h] [rbp-A4h]
  int v60; // [rsp+3Ch] [rbp-9Ch]
  int v61; // [rsp+44h] [rbp-94h] BYREF
  int v62; // [rsp+48h] [rbp-90h] BYREF
  unsigned __int64 v63; // [rsp+50h] [rbp-88h]
  volatile signed __int64 v64; // [rsp+58h] [rbp-80h]
  unsigned __int64 v65; // [rsp+60h] [rbp-78h]
  __int64 v66; // [rsp+68h] [rbp-70h]
  unsigned __int64 i; // [rsp+70h] [rbp-68h]
  unsigned __int32 *v68; // [rsp+78h] [rbp-60h]
  int v69; // [rsp+80h] [rbp-58h]
  char *v70; // [rsp+88h] [rbp-50h]
  volatile signed __int64 *v71; // [rsp+90h] [rbp-48h]
  _KSPIN_LOCK_QUEUE *volatile *v72; // [rsp+98h] [rbp-40h]
  unsigned int v74; // [rsp+F8h] [rbp+20h]
  char v75; // [rsp+F8h] [rbp+20h]
  int v76; // [rsp+F8h] [rbp+20h]
  int v77; // [rsp+F8h] [rbp+20h]

  v4 = a1;
  if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
    KeBugCheckEx(0x1Au, 0x1380uLL, a2, a3, 0LL);
  v5 = 0;
  v6 = *(_DWORD *)(a1 + 184) & 0xF;
  if ( v6 == 7 || (unsigned __int8)(v6 - 1) <= 1u )
    goto LABEL_12;
  if ( v6 == 5 )
  {
    if ( a2 >= qword_140E37D60 && a2 < qword_140E37D68 + qword_140E37D60 )
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
  if ( a2 < ((qword_140E2D890 + 0x7FFFFFFFFFLL) & 0xFFFFFF8000000000uLL) )
    return 0LL;
  v7 = 1;
LABEL_7:
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  if ( (MiFlags & 0x2000000) == 0 )
    return 0LL;
  if ( !MmInternal )
    return 0LL;
  v9 = MmInternal + 80;
  v70 = (char *)(MmInternal + 80);
  if ( MmInternal[80] )
    return 0LL;
  *v9 = 1;
  v11 = 0;
  v59 = 0;
  v12 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  i = v12;
  v13 = a3 | 2;
  v74 = a3 | 2;
  if ( !v5 )
    goto LABEL_18;
  v18 = v12 & 0xFFFFFFFFFFFFLL;
  v19 = (((v12 & 0xFFFFFFFFFFFFLL) >> 9) & 0x7FFFFFFFFFFFF8LL) - 0x98000000000LL;
  v68 = (unsigned __int32 *)v19;
  v20 = *(_QWORD *)v19;
  if ( v19 >= 0xFFFFF6FB7DBED000uLL && v19 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v64 = *(_QWORD *)v19;
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
            v64 = v20;
          }
          if ( (v35 & 0x42) != 0 )
          {
            v20 |= 0x42uLL;
            v64 = v20;
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
    v75 = v21;
    v61 = 0;
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
      v69 = *(_DWORD *)(v4 + 184);
      if ( (v69 & 0xF) != 0 && v19 >= 0xFFFFF6FB7DBED000uLL && v19 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v61 = 0;
        v40 = 2 * (unsigned int)((__int64)(v19 + 0x90482413000LL) >> 3);
        v41 = (2 * ((__int64)(v19 + 0x90482413000LL) >> 3)) & 0x1F;
        v42 = (volatile signed __int32 *)(&MiState + (v40 >> 5) + 1467);
        v68 = (unsigned __int32 *)v42;
        v43 = *v42;
        v77 = v21 & 1;
        v44 = 2 << (v40 & 0x1F);
        v60 = v44;
        do
        {
          while ( ((v43 >> v41) & 1) != 0 )
          {
            if ( v77 )
              goto LABEL_60;
            if ( ((v43 >> v41) & 2) != 0 )
            {
              do
              {
                KeYieldProcessorEx(&v61);
                v42 = (volatile signed __int32 *)v68;
                v43 = *v68;
              }
              while ( ((*v68 >> v41) & 1) != 0 );
              v44 = v60;
              v7 = 1;
            }
            else
            {
              v50 = v43 | v44;
              v51 = _InterlockedCompareExchange(v42, v43 | v44, v43);
              v45 = v43 == v51;
              v43 = v51;
              if ( v45 )
                v43 = v50;
            }
          }
          v46 = _InterlockedCompareExchange(v42, ~v44 & (v43 | (v7 << v41)), v43);
          v45 = v43 == v46;
          v43 = v46;
          if ( v45 )
            goto LABEL_59;
        }
        while ( !v77 );
        goto LABEL_60;
      }
      v63 = 0LL;
      v62 = 0;
      v22 = *(_QWORD *)v19;
      if ( v19 >= 0xFFFFF6FB7DBED000uLL && v19 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        v65 = *(_QWORD *)v19;
        if ( (v22 & 1) != 0 && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
        {
          v37 = MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v22, v18);
          if ( v37 )
          {
            v38 = *(_QWORD *)(v37 + 1288);
            if ( v38 )
            {
              v39 = *(_QWORD *)(v38 + 8 * ((v19 >> 3) & 0x1FF));
              if ( (v39 & 0x20) != 0 )
              {
                v22 |= 0x20uLL;
                v65 = v22;
              }
              if ( (v39 & 0x42) != 0 )
              {
                v22 |= 0x42uLL;
                v65 = v22;
              }
            }
          }
        }
      }
      v63 = v22;
      v23 = v21 & 1;
      v76 = v23;
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
              KeYieldProcessorEx(&v62);
              v63 = *(_QWORD *)v19;
              v22 = v63;
            }
            while ( (v63 & 0x1000000000000000LL) != 0 );
            v7 = 1;
            v23 = v76;
          }
          else
          {
            v47 = v22 | 0x2000000000000000LL;
            if ( (MiFlags & 0x8000000) != 0 )
              _mm_lfence();
            v48 = _InterlockedCompareExchange64((volatile signed __int64 *)v19, v47, v22);
            if ( v22 == v48 )
            {
              v49 = 1;
            }
            else
            {
              v49 = 0;
              v22 = v48;
              v63 = v48;
            }
            if ( v49 )
            {
              v22 = v47;
              v63 = v47;
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
            v63 = v24;
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
      v29 = (volatile signed __int64 *)(&MiState + 2 * v28 + 2278);
    }
    else
    {
      v28 = 2;
      v29 = (volatile signed __int64 *)(v4 + 176);
    }
    v30 = v29;
    v31 = v29;
    v71 = v29;
    v32 = &CurrentPrcb->SelfmapLockHandle[0].LockQueue.Next + 2 * v28 + v28;
    v72 = v32;
    *((_QWORD *)v32 + 1) = v29;
    *v32 = 0LL;
    if ( (v75 & 1) == 0 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        if ( !PopHibernateInProgress )
        {
          KiAcquireQueuedSpinLockInstrumented(v32, v29);
          goto LABEL_59;
        }
        v30 = v29;
      }
      if ( _InterlockedExchange64(v30, (__int64)v32) )
        KxWaitForLockOwnerShip(v32);
      goto LABEL_59;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      if ( !PopHibernateInProgress )
      {
        v7 = KiTryToAcquireQueuedSpinLockInstrumented(v32, v29, v29, v29);
LABEL_58:
        if ( !v7 )
        {
LABEL_60:
          v4 = a1;
          result = v59;
          goto LABEL_139;
        }
LABEL_59:
        v59 = 2;
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
      v66 = *(_QWORD *)v12;
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
              v66 = v14;
            }
            if ( (v17 & 0x42) != 0 )
            {
              v14 |= 0x42uLL;
              v66 = v14;
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
  result = MiLockPageTableInternal(v4, v12, v74);
  if ( (_DWORD)result )
    result = 1LL;
  v4 = a1;
LABEL_139:
  *v9 = 0;
  if ( (_DWORD)result && v11 )
  {
    v52 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    if ( v11 == 3 )
      v52 = ((v52 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v53 = *(_QWORD *)v52;
    if ( v52 >= 0xFFFFF6FB7DBED000uLL
      && v52 <= 0xFFFFF6FB7DBED7F8uLL
      && (v53 & 1) != 0
      && ((v53 & 0x20) == 0 || (v53 & 0x42) == 0) )
    {
      v54 = MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v53, v52);
      if ( v54 )
      {
        v56 = *(_QWORD *)(v54 + 1288);
        if ( v56 )
        {
          v57 = *(_QWORD *)(v56 + 8 * ((v55 >> 3) & 0x1FF));
          if ( (v57 & 0x20) != 0 )
            LOBYTE(v53) = v53 | 0x20;
          v58 = v53;
          LOBYTE(v53) = v53 | 0x42;
          if ( (v57 & 0x42) == 0 )
            LOBYTE(v53) = v58;
        }
      }
    }
    if ( (v53 & 0x81) == 0x81 )
      return (unsigned int)(v11 == 3) + 2;
    MiUnlockPageTableInternal(v4, v12);
    return 0LL;
  }
  return result;
}
