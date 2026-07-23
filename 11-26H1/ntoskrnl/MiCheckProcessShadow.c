/*
 * XREFs of MiCheckProcessShadow @ 0x1402FDB40
 * Callers:
 *     MiUnlockWorkingSetExclusive @ 0x14027DCC8 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiReleaseFaultState @ 0x14038FB40 (MiReleaseFaultState.c)
 *     MmCheckProcessShadow @ 0x1404DF430 (MmCheckProcessShadow.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     KiTryToAcquireQueuedSpinLockInstrumented @ 0x1402FE108 (KiTryToAcquireQueuedSpinLockInstrumented.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiCheckRelevantKernelShadows @ 0x14042A238 (MiCheckRelevantKernelShadows.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiCheckProcessShadow(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  bool v6; // zf
  unsigned __int64 v7; // r14
  __int64 v8; // rbp
  unsigned __int8 v9; // al
  __int64 *v10; // rax
  __int64 v11; // r8
  unsigned int *MmInternal; // rcx
  __int64 v13; // rax
  struct _KPRCB *CurrentPrcb; // r8
  char v15; // al
  unsigned int v16; // ecx
  unsigned __int64 *v17; // rdx
  _KLOCK_QUEUE_HANDLE *v18; // r8
  unsigned int i; // edx
  ULONG_PTR v21; // r8
  int v22; // r10d
  unsigned __int64 v23; // r11
  ULONG_PTR v24; // rdx
  ULONG_PTR v25; // r9
  _KPROCESS *v26; // rax
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v28; // rax
  ULONG_PTR v29; // rcx
  _KPROCESS *v30; // rax
  unsigned __int64 v31; // rcx
  __int64 v32; // rax
  ULONG_PTR v33; // rcx
  ULONG_PTR v34; // rdx
  ULONG_PTR BugCheckParameter4; // r9
  unsigned int v36; // r10d
  unsigned __int64 v37; // r14
  ULONG_PTR v38; // r9
  ULONG_PTR v39; // rdx
  _KPROCESS *v40; // rax
  unsigned __int64 v41; // rcx
  __int64 v42; // rax
  ULONG_PTR v43; // rcx
  _KPROCESS *v44; // rax
  unsigned __int64 v45; // r11
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  ULONG_PTR v48; // rcx

  if ( (MiFlags & 0x1800000) == 0 || (*(_DWORD *)(a1 + 184) & 0xF) != 0 || *(_BYTE *)(a1 - 672) == 1 )
    return 0xFFFFFFFFLL;
  if ( (a2 & 4) != 0 )
  {
    v6 = (*(_DWORD *)(a1 - 524) & 0x4000000) == 0;
    v7 = *(_QWORD *)(a1 + 264);
  }
  else
  {
    if ( (__rdtsc() & 0x3FF0) != 0 )
      return 0xFFFFFFFFLL;
    v7 = *(_QWORD *)(a1 + 264);
    v6 = v7 == 0;
  }
  if ( v6 || !*(_QWORD *)(a1 + 16) || !*(_QWORD *)(a1 + 24) )
    return 0xFFFFFFFFLL;
  if ( (a2 & 4) != 0 )
  {
    if ( (a2 & 1) != 0 )
      MiLockPageTableInternal(a1, 0xFFFFF6FB7DBEDF68uLL, 0LL);
    v8 = 0LL;
  }
  else
  {
    v8 = 0LL;
    v9 = *(_DWORD *)(a1 + 184) & 0xF;
    if ( v9 == 5 || v9 <= 4u )
    {
      if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
        v10 = &qword_140E37980;
      else
        v10 = (__int64 *)(a1 + 192);
      v11 = *v10;
      if ( (a2 & 2) != 0 )
      {
        for ( i = 0; i < 4; ++i )
        {
          if ( (*(_DWORD *)(((unsigned __int64)i << 6) + v11) & 0x40000000) != 0 )
            return 0xFFFFFFFFLL;
        }
      }
      else
      {
        MmInternal = (unsigned int *)KeGetCurrentPrcb()->MmInternal;
        if ( MmInternal )
          v13 = MmInternal[81];
        else
          v13 = 0LL;
        if ( (*(_DWORD *)((v13 << 6) + v11) & 0x40000000) != 0 )
          return 0xFFFFFFFFLL;
      }
    }
    if ( (a2 & 1) != 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v15 = *(_DWORD *)(a1 + 184) & 0xF;
      if ( v15 )
      {
        if ( v15 == 7 )
        {
          v16 = 1;
          v17 = (unsigned __int64 *)((char *)&unk_140E2EA98 + 8);
        }
        else
        {
          v16 = 3;
          if ( v15 == 5 )
            v16 = 0;
          v17 = (unsigned __int64 *)((char *)&unk_140E2EA98 + 8 * v16);
        }
      }
      else
      {
        v16 = 2;
        v17 = (unsigned __int64 *)(a1 + 176);
      }
      v18 = &CurrentPrcb->SelfmapLockHandle[v16];
      v18->LockQueue.Lock = v17;
      v18->LockQueue.Next = 0LL;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        _m_prefetchw(v17);
        if ( *v17 || _InterlockedCompareExchange64((volatile signed __int64 *)v17, (signed __int64)v18, 0LL) )
        {
          _mm_pause();
          return 0xFFFFFFFFLL;
        }
      }
      else if ( !(unsigned int)KiTryToAcquireQueuedSpinLockInstrumented(v18, v17, v18, a4) )
      {
        return 0xFFFFFFFFLL;
      }
    }
  }
  v21 = 0xFFFFF6FB7DBED000uLL;
  v22 = 256;
  v23 = 0x8000000000000000uLL;
  while ( v22 )
  {
    v24 = *(_QWORD *)v21;
    if ( v21 >= 0xFFFFF6FB7DBED000uLL
      && v21 <= 0xFFFFF6FB7DBED7F8uLL
      && (v24 & 1) != 0
      && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
    {
      v26 = MiPteHasShadow();
      if ( v26 )
      {
        KernelWaitTime = v26[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v28 = *(_QWORD *)(KernelWaitTime + 8 * ((v21 >> 3) & 0x1FF));
          if ( (v28 & 0x20) != 0 )
            v24 |= 0x20uLL;
          v29 = v24;
          v24 |= 0x42uLL;
          if ( (v28 & 0x42) == 0 )
            v24 = v29;
        }
      }
    }
    v25 = *(_QWORD *)v7;
    if ( v7 >= 0xFFFFF6FB7DBED000uLL
      && v7 <= 0xFFFFF6FB7DBED7F8uLL
      && (v25 & 1) != 0
      && ((v25 & 0x20) == 0 || (v25 & 0x42) == 0) )
    {
      v30 = MiPteHasShadow();
      if ( v30 )
      {
        v31 = v30[2].KernelWaitTime;
        if ( v31 )
        {
          v32 = *(_QWORD *)(v31 + 8 * ((v7 >> 3) & 0x1FF));
          if ( (v32 & 0x20) != 0 )
            v25 |= 0x20uLL;
          v33 = v25;
          v25 |= 0x42uLL;
          if ( (v32 & 0x42) == 0 )
            v25 = v33;
        }
      }
    }
    if ( (v24 & 1) != 0 )
    {
      v34 = v24 & 0xCFFFFFFFFFFFFFDFuLL | 0x20;
      if ( !BYTE5(stru_140E2DAB0.Header.WaitListHead.Blink) )
        v25 |= v23;
      BugCheckParameter4 = v25 | 0x20;
      if ( v34 != BugCheckParameter4 )
      {
        if ( (a2 & 8) == 0 )
          KeBugCheckEx(0x1Au, 0x1300uLL, v21, v34, BugCheckParameter4);
        goto LABEL_115;
      }
    }
    else if ( v25 )
    {
      if ( (a2 & 8) == 0 )
        KeBugCheckEx(0x1Au, 0x1301uLL, v21, v25, v25);
      goto LABEL_115;
    }
    v21 += 8LL;
    v7 += 8LL;
    ++v8;
    --v22;
  }
  v36 = 512 - (((unsigned int)v21 >> 3) & 0x1FF);
  v37 = v7 - v21;
  while ( v36 )
  {
    v38 = *(_QWORD *)v21;
    if ( v21 >= 0xFFFFF6FB7DBED000uLL
      && v21 <= 0xFFFFF6FB7DBED7F8uLL
      && (v38 & 1) != 0
      && ((v38 & 0x20) == 0 || (v38 & 0x42) == 0) )
    {
      v40 = MiPteHasShadow();
      if ( v40 )
      {
        v41 = v40[2].KernelWaitTime;
        if ( v41 )
        {
          v42 = *(_QWORD *)(v41 + 8 * ((v21 >> 3) & 0x1FF));
          if ( (v42 & 0x20) != 0 )
            v38 |= 0x20uLL;
          v43 = v38;
          v38 |= 0x42uLL;
          if ( (v42 & 0x42) == 0 )
            v38 = v43;
        }
      }
    }
    v39 = *(_QWORD *)(v37 + v21);
    if ( v37 + v21 >= 0xFFFFF6FB7DBED000uLL
      && v37 + v21 <= 0xFFFFF6FB7DBED7F8uLL
      && (v39 & 1) != 0
      && ((v39 & 0x20) == 0 || (v39 & 0x42) == 0) )
    {
      v44 = MiPteHasShadow();
      if ( v44 )
      {
        v46 = v44[2].KernelWaitTime;
        if ( v46 )
        {
          v47 = *(_QWORD *)(v46 + 8 * ((v45 >> 3) & 0x1FF));
          if ( (v47 & 0x20) != 0 )
            v39 |= 0x20uLL;
          v48 = v39;
          v39 |= 0x42uLL;
          if ( (v47 & 0x42) == 0 )
            v39 = v48;
        }
      }
    }
    if ( (v38 & 1) != 0 && (v38 & 4) != 0 )
    {
      if ( (a2 & 8) == 0 )
        KeBugCheckEx(0x1Au, 0x1304uLL, v21, v38, v39);
      break;
    }
    if ( (v39 & 1) != 0 && (v39 & 4) != 0 )
    {
      if ( (a2 & 8) == 0 )
        KeBugCheckEx(0x1Au, 0x1305uLL, v21, v38, v39);
      break;
    }
    v21 += 8LL;
    ++v8;
    --v36;
  }
  if ( (v21 & 0xFFF) == 0 )
    v8 = 0xFFFFFFFFLL;
LABEL_115:
  if ( (a2 & 1) != 0 )
    MiUnlockPageTableInternal(a1, 0xFFFFF6FB7DBEDF68uLL);
  if ( v8 == 0xFFFFFFFFLL && (a2 & 0x10) != 0 )
    return MiCheckRelevantKernelShadows(a2);
  return v8;
}
