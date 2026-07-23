/*
 * XREFs of ExReleaseFastResourceShared @ 0x14047F770
 * Callers:
 *     DifExReleaseFastResourceSharedWrapper @ 0x140657E50 (DifExReleaseFastResourceSharedWrapper.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x140775FF8 (PspQueryJobHierarchyAccountingInformation.c)
 *     PsSwapProcessWorkingSet @ 0x1407F67E8 (PsSwapProcessWorkingSet.c)
 *     PspValidateJobAffinityState @ 0x140947398 (PspValidateJobAffinityState.c)
 *     NtSetInformationThread @ 0x14094C4F0 (NtSetInformationThread.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1409FFC10 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspCallJobHierarchyCallbacks @ 0x1409FFE88 (PspCallJobHierarchyCallbacks.c)
 *     PspGetNextChildJob @ 0x140A00044 (PspGetNextChildJob.c)
 *     PspInsertThread @ 0x140A7B188 (PspInsertThread.c)
 *     PspUnlockJobShared @ 0x140AAB240 (PspUnlockJobShared.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x140AD2220 (PspQueryJobHierarchyProcessIdList.c)
 *     PspSetProcessAffinitySafe @ 0x140AFE330 (PspSetProcessAffinitySafe.c)
 *     PspSetProcessPriorityClass @ 0x140B11C80 (PspSetProcessPriorityClass.c)
 * Callees:
 *     ExpReleaseFastResourceExclusive @ 0x14026FD50 (ExpReleaseFastResourceExclusive.c)
 *     ExpReleaseFastResourceShared @ 0x140271F10 (ExpReleaseFastResourceShared.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall ExReleaseFastResourceShared(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, __int64 a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // r8
  __int64 v6; // rax
  char v7; // al

  LOBYTE(a4) = 1;
  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  if ( (struct _KTHREAD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFEuLL) != CurrentThread )
    KeBugCheckEx(0x1C6u, 9uLL, a2, *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFEuLL, 0LL);
  if ( (*(_BYTE *)(a2 + 37) & 2) == 0 )
  {
    v6 = *(_QWORD *)(a2 + 24);
    if ( v6 != BugCheckParameter2 )
    {
      if ( v6 )
        KeBugCheckEx(0x1C6u, 8uLL, BugCheckParameter2, a2, *(_QWORD *)(a2 + 24));
    }
  }
  if ( (*(_QWORD *)(a2 + 16) & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xAuLL, a2, 0LL, 0LL);
  v7 = *(_BYTE *)(a2 + 37);
  if ( (v7 & 2) != 0 )
    KeBugCheckEx(0x1C6u, 0xBuLL, a2, (unsigned __int64)(v7 & 2) << 15, 0LL);
  if ( (*(_QWORD *)BugCheckParameter2 & 1) != 0 )
    ExpReleaseFastResourceExclusive((signed __int64 *)BugCheckParameter2, a2, (__int64)CurrentThread, a4);
  else
    ExpReleaseFastResourceShared((struct _KTHREAD *)BugCheckParameter2, a2, (__int64)CurrentThread, a4);
}
