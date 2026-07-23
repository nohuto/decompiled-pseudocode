/*
 * XREFs of ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x14021D410
 * Callers:
 *     ?KiIdealProcessorRebalancerWorker@@YAXPEAX@Z @ 0x14021C4A0 (-KiIdealProcessorRebalancerWorker@@YAXPEAX@Z.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     ?KiAdaptThreadIdealProcessorForProcessIdealSetChange@@YAXPEAU_KPROCESS@@PEAU_KTHREAD@@PEAU_KAFFINITY_EX@@2PEAE3PEAK@Z @ 0x140200F50 (-KiAdaptThreadIdealProcessorForProcessIdealSetChange@@YAXPEAU_KPROCESS@@PEAU_KTHREAD@@PEAU_KAFFI.c)
 *     ?KiSelectIdealProcessorSetsForProcess@@YAXPEAU_KPROCESS@@PEAT_KI_PROCESS_CONCURRENCY_COUNT@@PEAU_KAFFINITY_EX@@PEAU_KI_IDEAL_PROCESSOR_SET_BREAKPOINTS@@@Z @ 0x1402013E4 (-KiSelectIdealProcessorSetsForProcess@@YAXPEAU_KPROCESS@@PEAT_KI_PROCESS_CONCURRENCY_COUNT@@PEAU.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403C6258 (MmAdjustWorkingSetSizeEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PsGetNextProcess @ 0x1409BC470 (PsGetNextProcess.c)
 */

void KiUpdateProcessConcurrencyCounts(void)
{
  struct _KPROCESS *i; // rdi
  bool v1; // zf
  LARGE_INTEGER v2; // rbx
  unsigned __int64 v3; // r14
  __int64 v4; // r8
  __int64 v5; // rsi
  unsigned int v6; // edx
  unsigned int v7; // ecx
  __int64 v8; // r11
  __int64 v9; // rax
  __int64 v10; // r10
  __int64 v11; // rdx
  LONGLONG v12; // rdx
  _KI_PROCESS_CONCURRENCY_COUNT *p_ExpectedConcurrencyCount; // rbx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned int v17; // r15d
  unsigned __int8 CurrentIrql; // si
  unsigned int *p_ProcessLock; // r14
  union _KI_PROCESS_CONCURRENCY_COUNT v20; // eax
  union _KI_PROCESS_CONCURRENCY_COUNT v21; // ebx
  _KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK *IdealProcessorAssignmentBlock; // r15
  char v23; // r12
  __int64 v24; // rdx
  union _KI_PROCESS_CONCURRENCY_COUNT v25; // eax
  _LIST_ENTRY *Flink; // rbx
  unsigned __int8 v27; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 v28[7]; // [rsp+41h] [rbp-BFh] BYREF
  union _KI_PROCESS_CONCURRENCY_COUNT v29; // [rsp+48h] [rbp-B8h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v31[3]; // [rsp+58h] [rbp-A8h] BYREF
  struct _KAFFINITY_EX v32; // [rsp+90h] [rbp-70h] BYREF
  __int64 retaddr; // [rsp+1D8h] [rbp+D8h]

  for ( i = (struct _KPROCESS *)PsGetNextProcess(0LL); i; i = (struct _KPROCESS *)PsGetNextProcess(i) )
  {
    v1 = i->PerProcessorCycleTimes == 0LL;
    PerformanceFrequency.QuadPart = 0LL;
    if ( !v1 )
    {
      v2 = KeQueryPerformanceCounter(&PerformanceFrequency);
      v3 = 0LL;
      if ( (_DWORD)KeNumberProcessors_0 )
      {
        v4 = 0LL;
        v5 = (unsigned int)KeNumberProcessors_0;
        do
        {
          ++v4;
          v6 = ((unsigned int)i->PerProcessorCycleTimes >> 13) & 0x3FFFF;
          _BitScanReverse(&v7, v6);
          v8 = ((unsigned __int64)i->PerProcessorCycleTimes >> 4) & 0x1FF;
          v29.AllFields = 0;
          v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)((char *)ExSaPageGroupDescriptorArrayLock.SListFaultAddress
                                                 + v4 * 8
                                                 - 8)
                                     + 8LL * (v7 - 2))
                         + 8LL * (v6 ^ (1 << v7))
                         + 8);
          v10 = *(_QWORD *)(v9 + 8 * v8);
          v11 = *(_QWORD *)(v9 + 8 * v8 + 8);
          *(_QWORD *)(v9 + 8 * v8 + 8) = v10;
          v3 += 10000000 * (v10 - v11) / (1000000 * (unsigned __int64)*(unsigned int *)(KiProcessorBlock[v4 - 1] + 68));
          --v5;
        }
        while ( v5 );
      }
      v12 = (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - v2.QuadPart) / 2 + v2.QuadPart;
      p_ExpectedConcurrencyCount = &i->IdealProcessorAssignmentBlock->ExpectedConcurrencyCount;
      v14 = v12 - i->LastRebalanceQpc;
      i->LastRebalanceQpc = v12;
      v15 = 10000000 * v14 / PerformanceFrequency.QuadPart + 1;
      v16 = v3 % v15;
      v17 = v3 / v15;
      if ( (p_ExpectedConcurrencyCount[3].AllFields & 1) == 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v16) = 2;
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v16);
        }
        p_ProcessLock = &i->ProcessLock;
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)&i->ProcessLock);
        if ( (p_ExpectedConcurrencyCount[3].AllFields & 1) != 0 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            *p_ProcessLock = 0;
          else
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&i->ProcessLock, retaddr);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
        }
        else
        {
          v20.0 = p_ExpectedConcurrencyCount->0;
          if ( v17 > KeMaximumProcessors )
            v21.AllFields = (KeMaximumProcessors << 18) - 1;
          else
            v21.AllFields = v17 << 18;
          if ( v21.AllFields < v20.AllFields )
            v21.AllFields = v20.AllFields - ((v20.AllFields - v21.AllFields) >> 4);
          v29.0 = v21.0;
          memset_0(&v32, 0, sizeof(v32));
          IdealProcessorAssignmentBlock = i->IdealProcessorAssignmentBlock;
          v23 = 0;
          v27 = 0;
          v28[0] = 0;
          PerformanceFrequency.QuadPart = 0LL;
          IdealProcessorAssignmentBlock->ExpectedConcurrencyCount = v21;
          if ( IdealProcessorAssignmentBlock->Breakpoints.Low.AllFields > v21.AllFields
            || IdealProcessorAssignmentBlock->Breakpoints.High.AllFields < v21.AllFields )
          {
            *(_QWORD *)&v32.Count = 2097184LL;
            memset_0(&v32.8, 0, sizeof(v32.8));
            KiSelectIdealProcessorSetsForProcess(
              (unsigned __int64)i,
              &v29,
              &v32,
              (struct _KI_IDEAL_PROCESSOR_SET_BREAKPOINTS *)&PerformanceFrequency);
            if ( !KeHeteroSystem )
            {
              v25.AllFields = ExGenRandom(1, v24);
              Flink = i->ThreadListHead.Flink;
              v29.0 = v25.0;
              if ( Flink != &i->ThreadListHead )
              {
                do
                {
                  KiAdaptThreadIdealProcessorForProcessIdealSetChange(
                    i,
                    (__int64)&Flink[-48].Blink,
                    &IdealProcessorAssignmentBlock->IdealProcessorSets,
                    &v32,
                    &v27,
                    v28,
                    (unsigned int *)&v29);
                  v23 |= v28[0];
                  Flink = Flink->Flink;
                }
                while ( Flink != &i->ThreadListHead );
                p_ProcessLock = &i->ProcessLock;
              }
            }
            RtlpCopyAffinityEx(
              &IdealProcessorAssignmentBlock->IdealProcessorSets,
              IdealProcessorAssignmentBlock->IdealProcessorSets.Size,
              &v32);
            IdealProcessorAssignmentBlock->Breakpoints = (_KI_IDEAL_PROCESSOR_SET_BREAKPOINTS)PerformanceFrequency;
            v23 &= (KiCacheAwareScheduling & 0x10) != 0;
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            *p_ProcessLock = 0;
          else
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(p_ProcessLock, retaddr);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
          if ( v23 )
          {
            memset(v31, 0, sizeof(v31));
            KiStackAttachProcess((ULONG_PTR)i);
            v27 = 0;
            MmAdjustWorkingSetSizeEx(-1, -1, 0, 0, 0, (__int64)&v27);
            KiUnstackDetachProcess(v31, 0LL);
          }
        }
      }
    }
  }
}
