/*
 * XREFs of ExInitializeFastOwnerEntry @ 0x14043D670
 * Callers:
 *     DifExInitializeFastOwnerEntryWrapper @ 0x140651A40 (DifExInitializeFastOwnerEntryWrapper.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x140772FF8 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspCheckAllocateAndQueryNotificationChannel @ 0x140776F6C (PspCheckAllocateAndQueryNotificationChannel.c)
 *     PsSwapProcessWorkingSet @ 0x1407F0C88 (PsSwapProcessWorkingSet.c)
 *     NtQueryInformationJobObject @ 0x1407F2FB0 (NtQueryInformationJobObject.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1407F7D20 (PspEnforceLimitsJobPostCallback.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x1407F8EFC (PspQueryJobHierarchyInterferenceCount.c)
 *     PspSendSiloTerminationNotification @ 0x1407F91F8 (PspSendSiloTerminationNotification.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x140958B14 (PspQueryJobHierarchyProcessIdList.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14095A350 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspCallJobHierarchyCallbacks @ 0x14095A5C8 (PspCallJobHierarchyCallbacks.c)
 *     PspGetNextChildJob @ 0x14095A784 (PspGetNextChildJob.c)
 *     PspValidateJobAffinityState @ 0x140985390 (PspValidateJobAffinityState.c)
 *     PspInsertThread @ 0x140A026D0 (PspInsertThread.c)
 *     PsInsertPermanentSiloContextEx @ 0x140A30E34 (PsInsertPermanentSiloContextEx.c)
 *     NtSetInformationThread @ 0x140A833F0 (NtSetInformationThread.c)
 *     PspSetProcessAffinitySafe @ 0x140AFC7BC (PspSetProcessAffinitySafe.c)
 *     PspSetProcessPriorityClass @ 0x140B10240 (PspSetProcessPriorityClass.c)
 *     PspCheckEnableNotificationChannel @ 0x140B650F8 (PspCheckEnableNotificationChannel.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

struct _KTHREAD *__fastcall ExInitializeFastOwnerEntry(__int64 a1)
{
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *result; // rax

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  result = KeGetCurrentThread();
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
