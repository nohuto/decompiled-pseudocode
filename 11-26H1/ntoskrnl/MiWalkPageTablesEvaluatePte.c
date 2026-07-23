/*
 * XREFs of MiWalkPageTablesEvaluatePte @ 0x140329B60
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x140329110 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     MiWalkLevelCompleted @ 0x140249800 (MiWalkLevelCompleted.c)
 *     EtwTraceShouldYieldProcessor @ 0x140316318 (EtwTraceShouldYieldProcessor.c)
 *     MiComputePxeWalkAction @ 0x14032A400 (MiComputePxeWalkAction.c)
 *     MiGetNextPageTablePte @ 0x14032A730 (MiGetNextPageTablePte.c)
 *     MiYieldPageTableWalk @ 0x140364BF0 (MiYieldPageTableWalk.c)
 *     MiRecomputeWalkHierarchy @ 0x140404E80 (MiRecomputeWalkHierarchy.c)
 *     MiAdvanceToLeapAddress @ 0x140436B90 (MiAdvanceToLeapAddress.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiWalkPageTablesEvaluatePte(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        _QWORD *a5)
{
  __int64 v7; // r15
  unsigned int v8; // r9d
  unsigned __int64 v10; // rax
  int v11; // r8d
  unsigned __int64 i; // rdx
  unsigned __int64 v13; // rcx
  int v14; // edx
  __int64 v15; // rdx
  unsigned int v16; // r9d
  int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // ecx
  unsigned __int8 v21; // al
  __int64 *v22; // rax
  __int64 v23; // rdx
  unsigned int *MmInternal; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rax
  int v28; // eax
  bool v29; // zf
  struct _KPRCB *v30; // rcx
  int v31; // r8d
  __int64 v32; // r9
  volatile int DpcRequestSummary; // edx
  unsigned int DpcWatchdogCount; // edi
  unsigned int DpcTimeCount; // ebp
  _KTHREAD *NextThread; // rax
  __int64 v37; // r9
  unsigned int v38; // edx
  __int64 result; // rax
  int v40; // ecx
  int v41; // eax
  int v42; // edx
  unsigned __int64 v43; // rcx
  __int64 v44; // rdx
  unsigned int v45; // ecx
  unsigned int j; // r9d
  unsigned __int64 v47; // r11
  unsigned int v48; // r9d
  int v49; // r9d
  __int64 v50; // rcx
  unsigned __int64 v51; // r11
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v54; // rcx
  unsigned __int64 v55; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  char v57; // al
  __int64 v58; // rdx
  __int64 v59; // rax
  int v60; // esi
  unsigned int v61; // edx
  __int64 v62; // rax
  struct _KPRCB *v63; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v65; // eax
  __int64 v66; // rdx
  unsigned __int32 v67; // ett

  v7 = (int)a3;
  v8 = *(_DWORD *)(a1 + 4) & 0xFF1FFFFF | 0x200000;
  *a5 = a2;
  *(_DWORD *)(a1 + 4) = v8;
  if ( (v8 & 0x20000) != 0 )
  {
    if ( (unsigned int)MiWalkLevelCompleted(a1, a2, a3, (v8 >> 18) & 7) )
      return 1LL;
    *(_DWORD *)(a1 + 4) &= ~0x20000u;
    v8 = *(_DWORD *)(a1 + 4);
  }
  v10 = *(_QWORD *)(a1 + 72);
  v11 = ((_DWORD)v7 != 0) + 2;
  if ( v10 )
  {
    for ( i = a2; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
    {
      if ( i > 0xFFFFF6FFFFFFFFFFuLL )
        break;
    }
    for ( ; v10 >= 0xFFFFF68000000000uLL; v10 = (__int64)(v10 << 25) >> 16 )
    {
      if ( v10 > 0xFFFFF6FFFFFFFFFFuLL )
        break;
    }
    v8 = *(_DWORD *)(a1 + 4);
    if ( i > v10 )
    {
      *(_QWORD *)(a1 + 72) = 0LL;
      v8 &= 0xFFFFFFE3;
    }
    else
    {
      v13 = *(_QWORD *)(a1 + 72);
      if ( v13 == a2 )
      {
        *(_QWORD *)(a1 + 72) = 0LL;
        v16 = v8 & 0xFF1FFFE3 | 0x400000;
        v11 = 2;
        goto LABEL_16;
      }
      v14 = (v8 >> 2) & 7;
      if ( (_DWORD)v7 != v14 )
      {
        v15 = (unsigned int)(v7 - v14);
        do
        {
          v13 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v15;
        }
        while ( v15 );
      }
      if ( a2 < v13 )
      {
        v47 = *(_QWORD *)(a1 + 72);
        v48 = v8 & 0xFF1FFFFF | 0x200000;
        *(_DWORD *)(a1 + 4) = v48;
        v49 = (v48 >> 2) & 7;
        if ( (_DWORD)v7 != v49 )
        {
          v50 = (unsigned int)(v7 - v49);
          do
          {
            v47 = ((v47 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            --v50;
          }
          while ( v50 );
        }
        *a5 = v47;
        MiRecomputeWalkHierarchy(a1, v47, (unsigned int)v7);
        if ( v51 <= a4 )
        {
          *(_DWORD *)(a1 + 4) &= 0xFFE3FFFF;
          return 2LL;
        }
        return 2LL;
      }
    }
  }
  v16 = (v11 << 21) | v8 & 0xFF1FFFFF;
LABEL_16:
  *(_DWORD *)(a1 + 4) = v16;
  if ( *(_QWORD *)(a1 + 80) )
  {
    v62 = MiAdvanceToLeapAddress(a1, a2, v7, a4, v11);
    if ( a2 != v62 )
    {
      *a5 = v62;
      return 2LL;
    }
  }
  v17 = *(_DWORD *)a1;
  v18 = *(_QWORD *)(a1 + 160) + 1LL;
  *(_QWORD *)(a1 + 160) = v18;
  if ( (v17 & 2) == 0 || ((unsigned __int8)v18 & *(_BYTE *)(a1 + 8)) != 0 )
    goto LABEL_44;
  v19 = *(_QWORD *)(a1 + 32);
  v20 = v17 & 4;
  v21 = *(_DWORD *)(v19 + 184) & 0xF;
  if ( v21 == 5 || v21 <= 4u )
  {
    if ( (*(_DWORD *)(v19 + 184) & 0xF) == 1 )
      v22 = &qword_140E37980;
    else
      v22 = (__int64 *)(v19 + 192);
    v23 = *v22;
    if ( v20 )
    {
      MmInternal = (unsigned int *)KeGetCurrentPrcb()->MmInternal;
      if ( MmInternal )
        v25 = MmInternal[81];
      else
        v25 = 0LL;
      if ( (*(_DWORD *)((v25 << 6) + v23) & 0x40000000) != 0 )
        goto LABEL_51;
    }
    else
    {
      for ( j = 0; j < 4; ++j )
      {
        if ( (*(_DWORD *)(((unsigned __int64)j << 6) + v23) & 0x40000000) != 0 )
          goto LABEL_51;
      }
    }
  }
  if ( (*(_DWORD *)a1 & 4) == 0 )
    goto LABEL_37;
  v26 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( ((a2 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v57 = *(_DWORD *)(v19 + 184) & 0xF;
    if ( v57 )
    {
      if ( v57 == 7 )
      {
        v29 = CurrentPrcb->SelfmapLockHandle[1].LockQueue.Next == 0LL;
LABEL_36:
        if ( v29 )
          goto LABEL_37;
LABEL_51:
        v40 = *(_DWORD *)(a1 + 4);
        if ( (v40 & 0x1C) == 0 && (_DWORD)v7 && (v40 & 0xE00000) != 0x600000 )
        {
          *(_QWORD *)(a1 + 72) = a2;
          *(_DWORD *)(a1 + 4) = v40 ^ ((unsigned __int8)v40 ^ (unsigned __int8)(4 * v7)) & 0x1C;
        }
        v41 = MiYieldPageTableWalk(a1, 1LL);
        if ( v41 >= 4 )
          *(_DWORD *)(a1 + 4) ^= (*(_DWORD *)(a1 + 4) ^ (v41 << 18)) & 0x1C0000;
        *(_DWORD *)(a1 + 4) |= 0x20000u;
        return 2LL;
      }
      v58 = 3LL;
      if ( v57 == 5 )
        v58 = 0LL;
    }
    else
    {
      v58 = 2LL;
    }
    v29 = CurrentPrcb->SelfmapLockHandle[v58].LockQueue.Next == 0LL;
    goto LABEL_36;
  }
  if ( (*(_DWORD *)(v19 + 184) & 0xF) == 0 && v26 >= 0xFFFFF6FB7DBED000uLL && v26 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v59 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count;
    if ( v59 )
    {
      v28 = (*(_DWORD *)(v59 + 4 * ((v26 >> 3) & 0x1FF)) & 0x40000000) != 0;
LABEL_35:
      v29 = v28 == 0;
      goto LABEL_36;
    }
  }
  if ( (*(_DWORD *)(v19 + 184) & 0xF) == 0 || v26 < 0xFFFFF6FB7DBED000uLL || v26 > 0xFFFFF6FB7DBEDFFFuLL )
  {
    v27 = *(_QWORD *)v26;
    if ( v26 >= 0xFFFFF6FB7DBED000uLL
      && v26 <= 0xFFFFF6FB7DBED7F8uLL
      && (v27 & 1) != 0
      && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0)
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
            v54 = *(_QWORD *)(KernelWaitTime + 8 * ((v26 >> 3) & 0x1FF));
            if ( (v54 & 0x20) != 0 )
              v27 |= 0x20uLL;
            v55 = v27;
            v27 |= 0x42uLL;
            if ( (v54 & 0x42) == 0 )
              v27 = v55;
          }
        }
      }
    }
    v28 = (v27 >> 60) & 2;
    goto LABEL_35;
  }
  if ( ((*(_DWORD *)&stru_140E2DAB0.PriorityFloorCounts[4
                                                      * ((unsigned __int64)(2
                                                                          * (unsigned int)((__int64)(v26 + 0x90482413000LL) >> 3)) >> 5)
                                                      + 4] >> ((2 * ((__int64)(v26 + 0x90482413000LL) >> 3)) & 0x1F)) & 2) != 0 )
    goto LABEL_51;
LABEL_37:
  if ( *(_BYTE *)(a1 + 9) >= 2u )
    goto LABEL_44;
  v30 = KeGetCurrentPrcb();
  v31 = 0;
  v32 = 0LL;
  DpcRequestSummary = v30->DpcRequestSummary;
  DpcWatchdogCount = v30->DpcWatchdogCount;
  DpcTimeCount = v30->DpcTimeCount;
  if ( (DpcRequestSummary & 1) != 0 )
  {
    v31 = 1;
    if ( DpcTimeCount > 7 )
    {
      if ( v30->QuantumEnd )
      {
        v60 = 1;
        goto LABEL_101;
      }
      goto LABEL_115;
    }
  }
  else
  {
    if ( v30->NestingLevel )
    {
      v32 = 1LL;
      if ( DpcWatchdogCount <= 7 )
        goto LABEL_44;
      if ( v30->QuantumEnd )
      {
        v60 = 7;
        goto LABEL_101;
      }
LABEL_115:
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v60 = 5;
        goto LABEL_101;
      }
      if ( v30->CurrentThread != v30->IdleThread )
      {
        v60 = 6;
        goto LABEL_101;
      }
      goto LABEL_136;
    }
    if ( (DpcRequestSummary & 0x1E) != 0 )
    {
      v60 = 2;
      goto LABEL_101;
    }
    if ( v30->QuantumEnd )
    {
      v60 = 3;
      goto LABEL_101;
    }
    NextThread = v30->NextThread;
    if ( NextThread && NextThread != v30->CurrentThread )
    {
      v60 = 4;
      goto LABEL_101;
    }
  }
  if ( DpcWatchdogCount <= 7 )
    goto LABEL_44;
  if ( v31 )
    goto LABEL_115;
LABEL_136:
  _disable();
  v30->DpcWatchdogCount = 0;
  v30->DpcTimeCount = 0;
  v63 = KeGetCurrentPrcb();
  SchedulerAssist = (unsigned __int32 *)v63->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v65 = *SchedulerAssist;
    do
    {
      v66 = v65;
      LODWORD(v66) = v65 & 0xFFDFFFFF;
      v67 = v65;
      v65 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v65 & 0xFFDFFFFF, v65);
    }
    while ( v67 != v65 );
    if ( (v65 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(v63, v66, SchedulerAssist, v32);
  }
  _enable();
  v60 = 0;
LABEL_101:
  if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
    EtwTraceShouldYieldProcessor(v60, DpcWatchdogCount, DpcTimeCount);
  if ( v60 )
    goto LABEL_51;
LABEL_44:
  v37 = (*(_DWORD *)(a1 + 4) >> 21) & 7;
  if ( (*(_DWORD *)a1 & 0x10) != 0 )
    v38 = *(_DWORD *)(a1 + 4) ^ (*(_DWORD *)(a1 + 4) ^ ((unsigned int)MiGetNextPageTablePte(
                                                                        a1,
                                                                        a2,
                                                                        (unsigned int)v7,
                                                                        v37) << 21)) & 0xE00000;
  else
    v38 = *(_DWORD *)(a1 + 4) ^ (*(_DWORD *)(a1 + 4) ^ ((unsigned int)MiComputePxeWalkAction(
                                                                        a1,
                                                                        a2,
                                                                        (unsigned int)v7,
                                                                        v37) << 21)) & 0xE00000;
  *(_DWORD *)(a1 + 4) = v38;
  if ( (v38 & 0xE00000) == 0x800000 )
  {
    v61 = v38 & 0xFFE1FFFF | 0x120000;
LABEL_106:
    *(_DWORD *)(a1 + 4) = v61;
    *a5 = *(_QWORD *)(a1 + 8 * v7 + 96);
    return 2LL;
  }
  if ( (v38 & 0xE00000) == 0 )
  {
    v61 = v38 & 0xFFE1FFFF | 0x20000;
    goto LABEL_106;
  }
  if ( (v38 & 1) != 0 )
  {
    result = 2LL;
    *(_DWORD *)(a1 + 4) = v38 | 0x20000;
  }
  else
  {
    if ( (int)v7 >= 1 && (v38 & 0xE00000) != 0x600000 )
    {
      v42 = (v38 >> 2) & 7;
      if ( v42 )
      {
        v43 = *(_QWORD *)(a1 + 72);
        if ( (_DWORD)v7 != v42 )
        {
          v44 = (unsigned int)(v7 - v42);
          do
          {
            v43 = ((v43 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            --v44;
          }
          while ( v44 );
        }
        if ( v43 == a2 )
        {
          v45 = *(_DWORD *)(a1 + 4);
          if ( (int)(((v45 >> 2) & 7) - 1) < (int)v7 )
          {
            *(_QWORD *)(a1 + 72) = 0LL;
            *(_DWORD *)(a1 + 4) = v45 & 0xFFFFFFE3;
          }
        }
      }
    }
    return 0LL;
  }
  return result;
}
