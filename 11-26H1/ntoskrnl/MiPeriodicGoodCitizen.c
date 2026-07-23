/*
 * XREFs of MiPeriodicGoodCitizen @ 0x140315E70
 * Callers:
 *     MiAgePte @ 0x1402E0900 (MiAgePte.c)
 *     MiWalkLeap @ 0x1403280E0 (MiWalkLeap.c)
 *     MiWalkPageTablesRecursively @ 0x140329110 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     EtwTraceShouldYieldProcessor @ 0x140316318 (EtwTraceShouldYieldProcessor.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

_BOOL8 __fastcall MiPeriodicGoodCitizen(int *a1, unsigned __int64 a2, int a3)
{
  int v4; // ecx
  __int64 v5; // r8
  int v6; // ecx
  unsigned int v7; // esi
  unsigned __int8 v8; // al
  __int64 *v9; // rax
  __int64 v10; // r11
  unsigned int *MmInternal; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  int v16; // eax
  bool v17; // zf
  struct _KPRCB *v18; // rcx
  int v19; // r8d
  __int64 v20; // r9
  volatile int DpcRequestSummary; // edx
  unsigned int DpcWatchdogCount; // edi
  unsigned int DpcTimeCount; // ebp
  _KTHREAD *NextThread; // rax
  unsigned int i; // r10d
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  struct _KPRCB *CurrentPrcb; // rdx
  char v32; // al
  __int64 v33; // rcx
  __int64 v34; // rdx
  unsigned __int64 v35; // rax
  struct _KPRCB *v36; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v38; // eax
  __int64 v39; // rdx
  unsigned __int32 v40; // ett

  v4 = *a1;
  if ( (v4 & 2) == 0 || !a3 && ((_BYTE)a1[2] & (_BYTE)a1[40]) != 0 )
    return 0LL;
  v5 = *((_QWORD *)a1 + 4);
  v6 = v4 & 4;
  v7 = 0;
  v8 = *(_DWORD *)(v5 + 184) & 0xF;
  if ( v8 == 5 || v8 <= 4u )
  {
    if ( (*(_DWORD *)(v5 + 184) & 0xF) == 1 )
      v9 = &qword_140E37980;
    else
      v9 = (__int64 *)(v5 + 192);
    v10 = *v9;
    if ( v6 )
    {
      MmInternal = (unsigned int *)KeGetCurrentPrcb()->MmInternal;
      if ( MmInternal )
        v12 = MmInternal[81];
      else
        v12 = 0LL;
      if ( (*(_DWORD *)((v12 << 6) + v10) & 0x40000000) != 0 )
        return 1LL;
    }
    else
    {
      for ( i = 0; i < 4; ++i )
      {
        if ( (*(_DWORD *)(((unsigned __int64)i << 6) + v10) & 0x40000000) != 0 )
          return 1LL;
      }
    }
  }
  if ( (*a1 & 4) == 0 )
    goto LABEL_21;
  v13 = a2 >> 9;
  v14 = (v13 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (v13 & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v32 = *(_DWORD *)(v5 + 184) & 0xF;
    if ( v32 )
    {
      if ( v32 == 7 )
      {
        v17 = CurrentPrcb->SelfmapLockHandle[1].LockQueue.Next == 0LL;
LABEL_20:
        if ( v17 )
          goto LABEL_21;
        return 1LL;
      }
      v33 = 3LL;
      if ( v32 == 5 )
        v33 = 0LL;
    }
    else
    {
      v33 = 2LL;
    }
    v17 = CurrentPrcb->SelfmapLockHandle[v33].LockQueue.Next == 0LL;
    goto LABEL_20;
  }
  if ( (*(_DWORD *)(v5 + 184) & 0xF) == 0 && v14 >= 0xFFFFF6FB7DBED000uLL && v14 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v34 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count;
    if ( v34 )
    {
      v16 = (*(_DWORD *)(v34 + 4 * ((v14 >> 3) & 0x1FF)) & 0x40000000) != 0;
LABEL_19:
      v17 = v16 == 0;
      goto LABEL_20;
    }
  }
  if ( (*(_DWORD *)(v5 + 184) & 0xF) == 0 || v14 < 0xFFFFF6FB7DBED000uLL || v14 > 0xFFFFF6FB7DBEDFFFuLL )
  {
    v15 = *(_QWORD *)v14;
    if ( v14 >= 0xFFFFF6FB7DBED000uLL
      && v14 <= 0xFFFFF6FB7DBED7F8uLL
      && (v15 & 1) != 0
      && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0)
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
            v29 = *(_QWORD *)(KernelWaitTime + 8 * ((v14 >> 3) & 0x1FF));
            if ( (v29 & 0x20) != 0 )
              v15 |= 0x20uLL;
            v30 = v15;
            v15 |= 0x42uLL;
            if ( (v29 & 0x42) == 0 )
              v15 = v30;
          }
        }
      }
    }
    v16 = (v15 >> 60) & 2;
    goto LABEL_19;
  }
  v35 = 2 * (unsigned int)((__int64)(v14 + 0x90482413000LL) >> 3);
  if ( ((*(_DWORD *)&stru_140E2DAB0.PriorityFloorCounts[4 * (v35 >> 5) + 4] >> (v35 & 0x1F)) & 2) == 0 )
  {
LABEL_21:
    if ( *((_BYTE *)a1 + 9) >= 2u )
      return 0LL;
    v18 = KeGetCurrentPrcb();
    v19 = 0;
    v20 = 0LL;
    DpcRequestSummary = v18->DpcRequestSummary;
    DpcWatchdogCount = v18->DpcWatchdogCount;
    DpcTimeCount = v18->DpcTimeCount;
    if ( (DpcRequestSummary & 1) != 0 )
    {
      v19 = 1;
      if ( DpcTimeCount > 7 )
      {
        if ( v18->QuantumEnd )
        {
          v7 = 1;
          goto LABEL_59;
        }
        goto LABEL_70;
      }
    }
    else
    {
      if ( v18->NestingLevel )
      {
        v20 = 1LL;
        if ( DpcWatchdogCount <= 7 )
          return 0LL;
        if ( v18->QuantumEnd )
        {
          v7 = 7;
          goto LABEL_59;
        }
        goto LABEL_70;
      }
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v7 = 2;
        goto LABEL_59;
      }
      if ( v18->QuantumEnd )
      {
        v7 = 3;
        goto LABEL_59;
      }
      NextThread = v18->NextThread;
      if ( NextThread && NextThread != v18->CurrentThread )
      {
        v7 = 4;
        goto LABEL_59;
      }
    }
    if ( DpcWatchdogCount <= 7 )
      return 0LL;
    if ( !v19 )
    {
LABEL_84:
      _disable();
      v18->DpcWatchdogCount = 0;
      v18->DpcTimeCount = 0;
      v36 = KeGetCurrentPrcb();
      SchedulerAssist = (unsigned __int32 *)v36->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v38 = *SchedulerAssist;
        do
        {
          v39 = v38;
          LODWORD(v39) = v38 & 0xFFDFFFFF;
          v40 = v38;
          v38 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v38 & 0xFFDFFFFF, v38);
        }
        while ( v40 != v38 );
        if ( (v38 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v36, v39, SchedulerAssist, v20);
      }
      _enable();
LABEL_59:
      if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
        EtwTraceShouldYieldProcessor(v7, DpcWatchdogCount, DpcTimeCount, v20);
      return v7 != 0;
    }
LABEL_70:
    if ( (DpcRequestSummary & 0x1E) != 0 )
    {
      v7 = 5;
      goto LABEL_59;
    }
    if ( v18->CurrentThread != v18->IdleThread )
    {
      v7 = 6;
      goto LABEL_59;
    }
    goto LABEL_84;
  }
  return 1LL;
}
