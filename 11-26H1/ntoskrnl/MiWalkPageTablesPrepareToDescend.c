/*
 * XREFs of MiWalkPageTablesPrepareToDescend @ 0x140327B50
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x140329110 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402C7E40 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiLockPte @ 0x140327950 (MiLockPte.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiWalkPageTablesPrepareToDescend(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  int v6; // eax
  unsigned int v7; // ecx
  __int64 v8; // r8
  unsigned __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  char v14; // al
  unsigned int v15; // ebp
  ULONG *v16; // r8
  _KSPIN_LOCK_QUEUE *volatile *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct _KPRCB *v20; // rdx
  char v21; // al
  __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned int v24; // ecx
  unsigned __int64 v25; // rdx
  char v26; // r15
  int v27; // r13d
  int v28; // ebp
  volatile signed __int32 *v29; // r14
  unsigned __int32 v30; // edx
  int v31; // r12d
  bool v32; // zf
  signed __int32 v33; // eax
  int v34; // ecx
  signed __int32 v35; // eax
  int v36; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 176);
  *(_DWORD *)(a1 + 4) |= 0x20u;
  if ( v3 )
  {
    v6 = guard_dispatch_icall_no_overrides(a1, a2, a3);
    v7 = *(_DWORD *)(a1 + 4) & 0xFFFFFFDF;
    *(_DWORD *)(a1 + 4) = v7;
    if ( v6 >= 4 )
    {
      if ( v6 == 5 )
        *(_DWORD *)(a1 + 4) = v7 & 0xFFE3FFFF | 0x140000;
      return 2LL;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 4) &= ~0x20u;
    v7 = *(_DWORD *)(a1 + 4);
  }
  if ( (v7 & 1) != 0 )
    return 2LL;
  if ( (*(_DWORD *)a1 & 4) == 0 )
    goto LABEL_22;
  v8 = *(_QWORD *)(a1 + 32);
  v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v14 = *(_DWORD *)(v8 + 184) & 0xF;
    if ( v14 )
    {
      if ( v14 == 7 )
      {
        v15 = 1;
        v16 = &MiState + 2280;
      }
      else
      {
        v15 = 3;
        if ( v14 == 5 )
          v15 = 0;
        v16 = &MiState + 2 * v15 + 2278;
      }
    }
    else
    {
      v15 = 2;
      v16 = (ULONG *)(v8 + 176);
    }
    v17 = &CurrentPrcb->SelfmapLockHandle[0].LockQueue.Next + 2 * v15 + v15;
    *((_QWORD *)v17 + 1) = v16;
    *v17 = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v18 = _InterlockedExchange64((volatile __int64 *)v16, (__int64)v17);
      if ( v18 )
        KxWaitForLockOwnerShip((volatile signed __int64)v17, v18, (__int64)v16);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)v17, (volatile __int64 *)v16);
    }
  }
  else if ( (*(_DWORD *)(v8 + 184) & 0xF) != 0
         || a2 < 0xFFFFF6FB7DBED000uLL
         || a2 > 0xFFFFF6FB7DBEDFFFuLL
         || (v19 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
  {
    if ( (*(_DWORD *)(v8 + 184) & 0xF) != 0 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      v36 = 0;
      v24 = 2 * ((__int64)(a2 + 0x90482413000LL) >> 3);
      v25 = (unsigned __int64)v24 >> 5;
      v26 = v24 & 0x1F;
      LOBYTE(v24) = v24 & 0x1F;
      v27 = 1 << v24;
      v28 = 2 << v24;
      v29 = (volatile signed __int32 *)(&MiState + v25 + 1467);
      v30 = *v29;
      v31 = ~(2 << v24);
      do
      {
        while ( ((v30 >> v26) & 1) != 0 )
        {
          if ( ((v30 >> v26) & 2) != 0 )
          {
            do
            {
              KeYieldProcessorEx(&v36);
              v30 = *v29;
            }
            while ( (((unsigned __int32)*v29 >> v26) & 1) != 0 );
          }
          else
          {
            v34 = v30 | v28;
            v35 = _InterlockedCompareExchange(v29, v30 | v28, v30);
            v32 = v30 == v35;
            v30 = v35;
            if ( v32 )
              v30 = v34;
          }
        }
        v33 = _InterlockedCompareExchange(v29, v31 & (v30 | v27), v30);
        v32 = v30 == v33;
        v30 = v33;
      }
      while ( !v32 );
    }
    else
    {
      MiLockPte(a2, 0);
    }
  }
  else
  {
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v19 + 4 * ((a2 >> 3) & 0x1FF)));
  }
  if ( (*(_DWORD *)a1 & 0x800) == 0 || ((a2 >> 9) & 0x7FFFFFFFF8LL) != 0x7B7DBEDF68LL )
  {
    v10 = *(_QWORD *)(a1 + 32);
    if ( ((a2 >> 9) & 0x7FFFFFFFF8LL) != 0x7B7DBEDF68LL )
    {
      if ( (*(_DWORD *)(v10 + 184) & 0xF) != 0
        || v9 < 0xFFFFF6FB7DBED000uLL
        || v9 > 0xFFFFF6FB7DBEDFFFuLL
        || (v23 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
      {
        if ( (*(_DWORD *)(v10 + 184) & 0xF) != 0 && v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBEDFFFuLL )
          _InterlockedAnd(
            (volatile signed __int32 *)&MiState
          + ((unsigned __int64)(2 * (unsigned int)((__int64)(v9 + 0x90482413000LL) >> 3)) >> 5)
          + 1467,
            ~(3 << (2 * ((__int64)(v9 + 0x90482413000LL) >> 3))));
        else
          _InterlockedAnd64((volatile signed __int64 *)v9, 0xCFFFFFFFFFFFFFFFuLL);
      }
      else
      {
        ExReleaseSpinLockRegardlessFromDpcLevel((volatile signed __int32 *)(v23 + 4 * ((v9 >> 3) & 0x1FF)));
      }
      goto LABEL_21;
    }
    v20 = KeGetCurrentPrcb();
    v21 = *(_DWORD *)(v10 + 184) & 0xF;
    if ( v21 )
    {
      if ( v21 == 7 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v20->SelfmapLockHandle[1]);
        goto LABEL_21;
      }
      v22 = 3LL;
      if ( v21 == 5 )
        v22 = 0LL;
    }
    else
    {
      v22 = 2LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v20->SelfmapLockHandle[v22]);
  }
LABEL_21:
  *(_QWORD *)(a1 + 56) = a2;
LABEL_22:
  v11 = *(_QWORD *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (v11 & 1) != 0
    && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
  {
    MiPteHasShadow();
  }
  return 0LL;
}
