/*
 * XREFs of KeSetPriorityAndQuantumProcess @ 0x140202264
 * Callers:
 *     PspSetProcessPriorityByClass @ 0x140518324 (PspSetProcessPriorityByClass.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 *     PspSetProcessPriorityByClassIgnoreForegroundBoost @ 0x140B7D69C (PspSetProcessPriorityByClassIgnoreForegroundBoost.c)
 * Callees:
 *     KeSetQuantumProcess @ 0x1402028D4 (KeSetQuantumProcess.c)
 *     EtwTracePriority @ 0x140202938 (EtwTracePriority.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140228920 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1402394F0 (KiPriQueueThreadPriorityChanged.c)
 *     KiQueryQuantumReset @ 0x14023B390 (KiQueryQuantumReset.c)
 *     KiComputeThreadPriority @ 0x14023B414 (KiComputeThreadPriority.c)
 *     KiClearForegroundBoost @ 0x14023B460 (KiClearForegroundBoost.c)
 *     KeFlushProcessWriteBuffers @ 0x140252FDC (KeFlushProcessWriteBuffers.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x140309580 (KiSetBasePriorityAndClearDecrement.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     KiSetPriorityThread @ 0x140381000 (KiSetPriorityThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiSetForegroundBoost @ 0x14052461C (KiSetForegroundBoost.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeSetPriorityAndQuantumProcess(__int64 a1, __int64 a2, UCHAR a3, int a4, int a5)
{
  __int64 result; // rax
  unsigned int v7; // esi
  void *v9; // rcx
  int v10; // r14d
  int v11; // r12d
  char v12; // r15
  __int64 CurrentIrql; // rax
  UCHAR v14; // si
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // r13
  _KTHREAD *v19; // rdi
  int BasePriority; // r15d
  int v21; // esi
  char Saturation; // al
  char v23; // r14
  __int64 CycleTime; // r14
  signed __int32 *SchedulerAssist; // r8
  __int64 v26; // rcx
  unsigned int v27; // ecx
  __int64 v28; // r8
  _DISPATCHER_HEADER *volatile Queue; // rcx
  unsigned int v30; // r14d
  _KTHREAD *v31; // rdi
  int v32; // r8d
  int v33; // esi
  int v34; // edx
  char v35; // al
  __int64 updated; // r14
  signed __int32 *v37; // r8
  __int64 v38; // rcx
  _DISPATCHER_HEADER *volatile v39; // rcx
  signed __int32 v40; // eax
  signed __int32 v41; // ett
  signed __int32 v42; // eax
  signed __int32 v43; // ett
  unsigned int v44; // [rsp+30h] [rbp-50h]
  unsigned int v45; // [rsp+30h] [rbp-50h]
  int Priority; // [rsp+34h] [rbp-4Ch]
  int v47; // [rsp+38h] [rbp-48h]
  int v48; // [rsp+3Ch] [rbp-44h]
  int v49; // [rsp+40h] [rbp-40h]
  __int64 v50; // [rsp+48h] [rbp-38h] BYREF
  struct _KPRCB *CurrentPrcb; // [rsp+50h] [rbp-30h]
  _KTHREAD *CurrentThread; // [rsp+58h] [rbp-28h]
  _QWORD *v53; // [rsp+60h] [rbp-20h]
  PEX_SPIN_LOCK SpinLock; // [rsp+68h] [rbp-18h]
  __int64 v55; // [rsp+70h] [rbp-10h]
  int v56; // [rsp+C0h] [rbp+40h] BYREF
  char v57; // [rsp+C8h] [rbp+48h]
  UCHAR v58; // [rsp+D0h] [rbp+50h]
  int v59; // [rsp+D8h] [rbp+58h]

  v59 = a4;
  v58 = a3;
  result = (unsigned int)*(char *)(a1 + 144);
  v7 = a2;
  if ( (_DWORD)result != (_DWORD)a2 || a4 != a5 )
  {
    v9 = &unk_140FC9F40;
    if ( (_UNKNOWN *)a1 == &unk_140FC9F40 )
      return result;
    v10 = 1;
    if ( (_DWORD)a2 )
      v10 = a2;
    v11 = 0;
    v12 = 0;
    v44 = 0;
    Priority = 0;
    v49 = WORD2(PerfGlobalGroupMask) & 0x2000;
    v57 = 0;
    v50 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    v55 = CurrentIrql;
    if ( (_BYTE)CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v9) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v9, 2LL);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread = CurrentPrcb->CurrentThread;
    SpinLock = (PEX_SPIN_LOCK)(a1 + 64);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    v14 = v58;
    if ( v58 )
      *(_BYTE *)(a1 + 145) = v58;
    if ( a5 )
    {
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 136), 0xDu);
    }
    else if ( a4 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 136), 0xDu);
    }
    v15 = *(char *)(a1 + 144);
    v16 = (unsigned int)(v10 - v15);
    v47 = v15;
    v48 = v10 - v15;
    LOBYTE(v16) = 1;
    *(_BYTE *)(a1 + 144) = v10;
    KeFlushProcessWriteBuffers(v16);
    v18 = *(_QWORD **)(a1 + 48);
    v53 = (_QWORD *)(a1 + 48);
    if ( v18 == (_QWORD *)(a1 + 48) )
    {
LABEL_52:
      ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
      LOBYTE(v28) = v55;
      KiProcessDeferredReadyList(CurrentPrcb, &v50, v28);
      return (unsigned int)v47;
    }
    if ( v10 < 16 )
    {
      while ( 1 )
      {
        v19 = (_KTHREAD *)(v18 - 95);
        if ( v14 )
          v19->SchedulerApc.SpareByte1 = v14;
        v56 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v19->ThreadLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v56);
          while ( v19->ThreadLock );
        }
        if ( a5 )
        {
          KiSetForegroundBoost(v18 - 95, v17);
        }
        else if ( v59 )
        {
          KiClearForegroundBoost(v18 - 95, v17);
        }
        BasePriority = v19->BasePriority;
        if ( BasePriority <= v47 || BasePriority < 16 )
          break;
        v19->ThreadLock = 0LL;
LABEL_51:
        v18 = (_QWORD *)*v18;
        if ( v18 == v53 )
          goto LABEL_52;
      }
      v17 = 1LL;
      v21 = BasePriority + v48;
      if ( BasePriority + v48 >= 16 )
      {
        v21 = 15;
        v56 = 15;
      }
      else
      {
        if ( v21 <= 0 )
          v21 = 1;
        v56 = v21;
      }
      Saturation = v19->Saturation;
      if ( Saturation )
      {
        if ( v47 < 16 )
        {
          v23 = 0;
          goto LABEL_48;
        }
        if ( Saturation <= 0 )
        {
          v21 = 1;
          v56 = 1;
        }
        else
        {
          v21 = 15;
          v56 = 15;
        }
      }
      if ( v19 != CurrentThread || CurrentPrcb->NestingLevel )
      {
        CycleTime = v19->CycleTime;
      }
      else
      {
        _disable();
        CycleTime = KiUpdateTotalCyclesCurrentThread(CurrentPrcb, v18 - 95, 0LL);
        SchedulerAssist = (signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v40 = *SchedulerAssist;
          do
          {
            v41 = v40;
            v40 = _InterlockedCompareExchange(SchedulerAssist, v40 & 0xFFDFFFFF, v40);
          }
          while ( v41 != v40 );
          if ( (v40 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick();
        }
        _enable();
      }
      v26 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)KiQueryQuantumReset(v18 - 95);
      if ( (*((_DWORD *)&v19->0 + 1) & 0x20) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)&v19->116 + 1, 5u);
      v23 = 0;
      v19->QuantumTarget = v26;
      if ( v21 != BasePriority )
      {
        KiSetBasePriorityAndClearDecrement(v18 - 95, &v56);
        v23 = 1;
      }
      v27 = KiComputeThreadPriority((struct _KTHREAD *)(v18 - 95), 0, 0);
      v44 = v27;
      if ( v27 != v19->Priority )
      {
        Priority = v19->Priority;
        v57 = KiSetPriorityThread(v18 - 95, &v50, v27);
        v44 = v19->Priority;
      }
      if ( v23 )
      {
        Queue = v19->Queue;
        if ( Queue )
        {
          LOBYTE(v17) = Queue->Type & 0x7F;
          if ( (_BYTE)v17 == 21 )
          {
            KiPriQueueThreadPriorityChanged(Queue, v18 - 95);
            goto LABEL_49;
          }
        }
      }
LABEL_48:
      v19->ThreadLock = 0LL;
LABEL_49:
      if ( v49 )
      {
        if ( v57 )
        {
          v57 = 0;
          EtwTracePriority((_DWORD)v18 - 760, 1328, Priority, v44, 0LL);
        }
        if ( v23 && BasePriority != v21 )
          EtwTracePriority((_DWORD)v18 - 760, 1329, BasePriority, v21, (__int64)&v56);
      }
      v14 = v58;
      goto LABEL_51;
    }
    v30 = 0;
    while ( 1 )
    {
      v31 = (_KTHREAD *)(v18 - 95);
      if ( v14 )
        v31->SchedulerApc.SpareByte1 = v14;
      v56 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v31->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v56);
        while ( v31->ThreadLock );
      }
      v32 = 16;
      v33 = v48 + v31->BasePriority;
      v34 = 31;
      if ( v33 < 16 )
      {
        v33 = 16;
        v56 = 16;
      }
      else
      {
        if ( v33 > 31 )
          v33 = 31;
        v56 = v33;
      }
      if ( a5 )
      {
        KiSetForegroundBoost(v18 - 95, 31LL);
        v34 = 31;
        v32 = 16;
      }
      else if ( v59 )
      {
        KiClearForegroundBoost(v18 - 95, 31LL);
      }
      v35 = v31->Saturation;
      if ( v35 )
      {
        if ( v47 >= v32 )
          goto LABEL_88;
        if ( v35 <= 0 )
        {
          v33 = v32;
          v56 = v32;
        }
        else
        {
          v33 = v34;
          v56 = v34;
        }
      }
      v11 = v31->BasePriority;
      if ( v31 != CurrentThread || CurrentPrcb->NestingLevel )
      {
        updated = v31->CycleTime;
      }
      else
      {
        _disable();
        updated = KiUpdateTotalCyclesCurrentThread(CurrentPrcb, v18 - 95, 0LL);
        v37 = (signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
        if ( v37 )
        {
          _m_prefetchw(v37);
          v42 = *v37;
          do
          {
            v43 = v42;
            v42 = _InterlockedCompareExchange(v37, v42 & 0xFFDFFFFF, v42);
          }
          while ( v43 != v42 );
          if ( (v42 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick();
        }
        _enable();
      }
      v38 = updated + KiCyclesPerClockQuantum * (unsigned int)KiQueryQuantumReset(v18 - 95);
      if ( (*((_DWORD *)&v31->0 + 1) & 0x20) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)&v31->116 + 1, 5u);
      v31->QuantumTarget = v38;
      KiSetBasePriorityAndClearDecrement(v18 - 95, &v56);
      v45 = KiComputeThreadPriority((struct _KTHREAD *)(v18 - 95), 0, 0);
      Priority = v31->Priority;
      v12 = 1;
      if ( (unsigned __int8)KiSetPriorityThread(v18 - 95, &v50, v45) )
      {
        v45 = v31->Priority;
        v57 = 1;
      }
      v39 = v31->Queue;
      if ( v39 && (v39->Type & 0x7F) == 0x15 )
      {
        KiPriQueueThreadPriorityChanged(v39, v18 - 95);
        v30 = v45;
        goto LABEL_89;
      }
      v30 = v45;
LABEL_88:
      v31->ThreadLock = 0LL;
LABEL_89:
      if ( v49 )
      {
        if ( v57 )
        {
          v57 = 0;
          EtwTracePriority((_DWORD)v18 - 760, 1328, Priority, v30, 0LL);
        }
        if ( v12 )
        {
          v12 = 0;
          if ( v11 != v33 )
            EtwTracePriority((_DWORD)v18 - 760, 1329, v11, v33, (__int64)&v56);
        }
      }
      v18 = (_QWORD *)*v18;
      v14 = v58;
      if ( v18 == v53 )
        goto LABEL_52;
    }
  }
  if ( a3 )
  {
    LOBYTE(a2) = a3;
    KeSetQuantumProcess(a1, a2);
  }
  return v7;
}
