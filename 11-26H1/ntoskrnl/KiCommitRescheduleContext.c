/*
 * XREFs of KiCommitRescheduleContext @ 0x14023F070
 * Callers:
 *     KiHandleDeferredPreemption @ 0x14022E730 (KiHandleDeferredPreemption.c)
 *     KiDeferGroupSchedulingPreemption @ 0x14022FA60 (KiDeferGroupSchedulingPreemption.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140237654 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiFastExitThreadWait @ 0x140244040 (KiFastExitThreadWait.c)
 *     KeDelayExecutionThread @ 0x140244840 (KeDelayExecutionThread.c)
 *     KiExitThreadWait @ 0x140245780 (KiExitThreadWait.c)
 *     KiSatisfyThreadWait @ 0x140245F80 (KiSatisfyThreadWait.c)
 *     KiAdjustCoreIsolationReasonThread @ 0x1404D3414 (KiAdjustCoreIsolationReasonThread.c)
 *     KiApplyForegroundBoostThread @ 0x140521D48 (KiApplyForegroundBoostThread.c)
 *     KiFinalizeCoreControlBlockAssignment @ 0x1405EB014 (KiFinalizeCoreControlBlockAssignment.c)
 *     KiForceParkDutyCycleDpcCallback @ 0x1405F8980 (KiForceParkDutyCycleDpcCallback.c)
 * Callees:
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14023F140 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 */

__int64 __fastcall KiCommitRescheduleContext(
        unsigned __int8 *a1,
        struct _KPRCB *a2,
        unsigned int a3,
        struct _SINGLE_LIST_ENTRY *a4)
{
  unsigned __int8 v4; // si
  unsigned int v8; // edi
  __int64 i; // rbp
  __int64 result; // rax
  _BYTE *v11; // rcx

  v4 = 0;
  v8 = a3 | 2;
  if ( (WORD2(xmmword_140FBFC10) & 0x400) == 0 )
    v8 = a3;
  for ( i = 0LL; (unsigned int)i < *a1; i = (unsigned int)(i + 1) )
    v4 |= KiCommitRescheduleContextEntry(
            (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)&a1[32 * i + 16 + 8 * (unsigned int)i],
            a2,
            v8,
            a4);
  result = v4;
  if ( *((_DWORD *)a1 + 2) == 1 )
  {
    v11 = *(_BYTE **)(*((_QWORD *)a1 + 2) + 36504LL);
    if ( ++v11[1] >= *v11 )
      v11[1] = 0;
  }
  return result;
}
