/*
 * XREFs of ExInitializeFastOwnerEntry @ 0x14042FF20
 * Callers:
 *     DifExInitializeFastOwnerEntryWrapper @ 0x140655620 (DifExInitializeFastOwnerEntryWrapper.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x140775FF8 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspCheckAllocateAndQueryNotificationChannel @ 0x140779E14 (PspCheckAllocateAndQueryNotificationChannel.c)
 *     PsSwapProcessWorkingSet @ 0x1407F67E8 (PsSwapProcessWorkingSet.c)
 *     NtQueryInformationJobObject @ 0x1407F8B10 (NtQueryInformationJobObject.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1407FD820 (PspEnforceLimitsJobPostCallback.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x1407FE9FC (PspQueryJobHierarchyInterferenceCount.c)
 *     PspSendSiloTerminationNotification @ 0x1407FECF8 (PspSendSiloTerminationNotification.c)
 *     PspValidateJobAffinityState @ 0x140947398 (PspValidateJobAffinityState.c)
 *     NtSetInformationThread @ 0x14094C4F0 (NtSetInformationThread.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1409FFC10 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspCallJobHierarchyCallbacks @ 0x1409FFE88 (PspCallJobHierarchyCallbacks.c)
 *     PspGetNextChildJob @ 0x140A00044 (PspGetNextChildJob.c)
 *     PsInsertPermanentSiloContextEx @ 0x140A4BD94 (PsInsertPermanentSiloContextEx.c)
 *     PspInsertThread @ 0x140A7B188 (PspInsertThread.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x140AD2220 (PspQueryJobHierarchyProcessIdList.c)
 *     PspSetProcessAffinitySafe @ 0x140AFE330 (PspSetProcessAffinitySafe.c)
 *     PspSetProcessPriorityClass @ 0x140B11C80 (PspSetProcessPriorityClass.c)
 *     PspCheckEnableNotificationChannel @ 0x140B68198 (PspCheckEnableNotificationChannel.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
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
