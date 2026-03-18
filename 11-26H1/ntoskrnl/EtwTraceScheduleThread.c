/*
 * XREFs of EtwTraceScheduleThread @ 0x1402467D0
 * Callers:
 *     KiSoftParkElectionUnparkProcessor @ 0x14022ACC4 (KiSoftParkElectionUnparkProcessor.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x14022B26C (KiRescheduleThreadAfterAffinityChange.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x14022DEE0 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiEnterLongDpcProcessing @ 0x14022EA74 (KiEnterLongDpcProcessing.c)
 *     KiDeferGroupSchedulingPreemption @ 0x14022FA60 (KiDeferGroupSchedulingPreemption.c)
 *     KiDeferredReadySingleThread @ 0x140231820 (KiDeferredReadySingleThread.c)
 *     KeYieldExecution @ 0x1402387B0 (KeYieldExecution.c)
 *     KiDirectSwitchThread @ 0x140239BE0 (KiDirectSwitchThread.c)
 *     KiSearchForNewThread @ 0x14023E3D0 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1402404D0 (KiSearchForNewThreadsOnTarget.c)
 *     KiFastExitThreadWait @ 0x140244040 (KiFastExitThreadWait.c)
 *     KeDelayExecutionThread @ 0x140244840 (KeDelayExecutionThread.c)
 *     KiExitThreadWait @ 0x140245780 (KiExitThreadWait.c)
 *     KiSatisfyThreadWait @ 0x140245F80 (KiSatisfyThreadWait.c)
 *     KiRemoveBoostThread @ 0x1402742E0 (KiRemoveBoostThread.c)
 *     KiExecuteAllDpcs @ 0x14032DD00 (KiExecuteAllDpcs.c)
 *     KiQuantumEnd @ 0x140331070 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140332850 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140333210 (KiGroupSchedulingGenerationEnd.c)
 *     KiParkCurrentProcessor @ 0x1403346DC (KiParkCurrentProcessor.c)
 *     KiSetPriorityThread @ 0x14037F250 (KiSetPriorityThread.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x140216A20 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall EtwTraceScheduleThread(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // r10
  int v4; // r9d
  char v5; // r8
  int v6; // r8d
  _DWORD v7[2]; // [rsp+30h] [rbp-40h] BYREF
  char v8; // [rsp+38h] [rbp-38h]
  __int16 v9; // [rsp+39h] [rbp-37h]
  char v10; // [rsp+3Bh] [rbp-35h]
  _QWORD v11[3]; // [rsp+40h] [rbp-30h] BYREF
  int v12; // [rsp+58h] [rbp-18h]
  int v13; // [rsp+5Ch] [rbp-14h]

  if ( a3 )
  {
    v3 = *a3;
    v4 = *((_DWORD *)a3 + 2);
    v5 = *((_BYTE *)a3 + 12);
  }
  else
  {
    v3 = 0LL;
    v4 = 0;
    v5 = 0;
  }
  v7[0] = *(_DWORD *)(a1 + 1296);
  v7[1] = *(_DWORD *)(a2 + 36);
  v8 = v5;
  v6 = 1;
  v10 = 0;
  v9 = v4 != 0;
  v11[0] = v7;
  v11[1] = 12LL;
  if ( v4 )
  {
    v11[2] = v3;
    v6 = 2;
    v12 = v4;
    v13 = 0;
  }
  EtwTraceSiloKernelEvent(*(_QWORD *)(*(_QWORD *)(a1 + 544) + 1520LL), (int)v11, v6, 0xA0000400, 1355, 6295042);
}
