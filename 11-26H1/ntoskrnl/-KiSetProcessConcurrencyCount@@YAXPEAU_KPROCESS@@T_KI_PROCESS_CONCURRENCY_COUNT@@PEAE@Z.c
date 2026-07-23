/*
 * XREFs of ?KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z @ 0x140200DD0
 * Callers:
 *     KeSetExpectedConcurrencyCountProcess @ 0x140200A58 (KeSetExpectedConcurrencyCountProcess.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     ?KiAdaptThreadIdealProcessorForProcessIdealSetChange@@YAXPEAU_KPROCESS@@PEAU_KTHREAD@@PEAU_KAFFINITY_EX@@2PEAE3PEAK@Z @ 0x140200F50 (-KiAdaptThreadIdealProcessorForProcessIdealSetChange@@YAXPEAU_KPROCESS@@PEAU_KTHREAD@@PEAU_KAFFI.c)
 *     ?KiSelectIdealProcessorSetsForProcess@@YAXPEAU_KPROCESS@@PEAT_KI_PROCESS_CONCURRENCY_COUNT@@PEAU_KAFFINITY_EX@@PEAU_KI_IDEAL_PROCESSOR_SET_BREAKPOINTS@@@Z @ 0x1402013E4 (-KiSelectIdealProcessorSetsForProcess@@YAXPEAU_KPROCESS@@PEAT_KI_PROCESS_CONCURRENCY_COUNT@@PEAU.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall KiSetProcessConcurrencyCount(
        struct _KPROCESS *a1,
        union _KI_PROCESS_CONCURRENCY_COUNT a2,
        unsigned __int8 *a3)
{
  _KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK *IdealProcessorAssignmentBlock; // rdi
  unsigned __int8 v7; // si
  __int64 v8; // rdx
  union _KI_PROCESS_CONCURRENCY_COUNT v9; // eax
  struct _KPROCESS *Flink; // rbx
  unsigned __int8 v11; // [rsp+40h] [rbp-178h] BYREF
  unsigned __int8 v12[7]; // [rsp+41h] [rbp-177h] BYREF
  union _KI_PROCESS_CONCURRENCY_COUNT v13; // [rsp+48h] [rbp-170h] BYREF
  struct _KI_IDEAL_PROCESSOR_SET_BREAKPOINTS v14; // [rsp+50h] [rbp-168h] BYREF
  struct _KAFFINITY_EX v15; // [rsp+60h] [rbp-158h] BYREF

  v13.0 = a2.0;
  memset_0(&v15.8, 0, sizeof(v15.8));
  IdealProcessorAssignmentBlock = a1->IdealProcessorAssignmentBlock;
  v7 = 0;
  v12[0] = 0;
  v11 = 0;
  v14 = 0LL;
  IdealProcessorAssignmentBlock->ExpectedConcurrencyCount = a2;
  if ( IdealProcessorAssignmentBlock->Breakpoints.Low.AllFields > a2.AllFields
    || IdealProcessorAssignmentBlock->Breakpoints.High.AllFields < a2.AllFields )
  {
    *(_QWORD *)&v15.Count = 2097184LL;
    memset_0(&v15.8, 0, sizeof(v15.8));
    KiSelectIdealProcessorSetsForProcess(a1, &v13, &v15, &v14);
    if ( !KeHeteroSystem )
    {
      v9.AllFields = ExGenRandom(1, v8);
      Flink = (struct _KPROCESS *)a1->ThreadListHead.Flink;
      for ( v13.0 = v9.0;
            Flink != (struct _KPROCESS *)&a1->ThreadListHead;
            Flink = *(struct _KPROCESS **)&Flink->Header.Lock )
      {
        KiAdaptThreadIdealProcessorForProcessIdealSetChange(
          a1,
          (struct _KTHREAD *)&Flink[-2].ActiveGroupsMask,
          &IdealProcessorAssignmentBlock->IdealProcessorSets,
          &v15,
          v12,
          &v11,
          (unsigned int *)&v13);
        v7 |= v11;
      }
    }
    RtlpCopyAffinityEx(
      &IdealProcessorAssignmentBlock->IdealProcessorSets,
      IdealProcessorAssignmentBlock->IdealProcessorSets.Size,
      &v15);
    IdealProcessorAssignmentBlock->Breakpoints = v14;
    v7 &= (KiCacheAwareScheduling & 0x10) != 0;
  }
  *a3 = v7;
}
