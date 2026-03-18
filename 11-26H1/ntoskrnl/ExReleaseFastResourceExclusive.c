/*
 * XREFs of ExReleaseFastResourceExclusive @ 0x1404912F0
 * Callers:
 *     DifExReleaseFastResourceExclusiveWrapper @ 0x140654100 (DifExReleaseFastResourceExclusiveWrapper.c)
 *     PspUnlockJobExclusiveUnlessRoot @ 0x14077D1D8 (PspUnlockJobExclusiveUnlessRoot.c)
 *     PspSetQuotaLimits @ 0x1407F0F9C (PspSetQuotaLimits.c)
 *     NtSetInformationJobObject @ 0x1407F4C70 (NtSetInformationJobObject.c)
 *     PspFreezeJobTree @ 0x1407F8824 (PspFreezeJobTree.c)
 *     PspGetCpuAndMemoryPartitionFromJobList @ 0x1407F8AC0 (PspGetCpuAndMemoryPartitionFromJobList.c)
 *     PspSetIoPriorityLimitJobTree @ 0x1407F9304 (PspSetIoPriorityLimitJobTree.c)
 *     PspSetJobCpuPartition @ 0x1407F938C (PspSetJobCpuPartition.c)
 *     PspSetJobMemoryPartition @ 0x1407F96B4 (PspSetJobMemoryPartition.c)
 *     PspSetPagePriorityLimitJobTree @ 0x1407F9D6C (PspSetPagePriorityLimitJobTree.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x14095859C (PspSetEnergyTrackingStateJobTree.c)
 *     PspUnlockJobExclusive @ 0x140959DD4 (PspUnlockJobExclusive.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x140AAED7C (PspUnlockJobsAndProcessExclusive.c)
 *     PspUnlockJobChain @ 0x140AAEE38 (PspUnlockJobChain.c)
 *     PspSetBackgroundJobTree @ 0x140AF7AB8 (PspSetBackgroundJobTree.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x140B003D8 (PspApplyWorkingSetLimitsToProcess.c)
 * Callees:
 *     ExpReleaseFastResourceExclusive @ 0x1402707E0 (ExpReleaseFastResourceExclusive.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __fastcall ExReleaseFastResourceExclusive(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // r10
  __int64 v7; // rax
  char v8; // al

  v4 = BugCheckParameter2 + 64;
  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  if ( (struct _KTHREAD *)(*(_QWORD *)(BugCheckParameter2 + 80) & 0xFFFFFFFFFFFFFFFEuLL) != CurrentThread )
    KeBugCheckEx(0x1C6u, 9uLL, v4, *(_QWORD *)(BugCheckParameter2 + 80) & 0xFFFFFFFFFFFFFFFEuLL, 0LL);
  if ( (*(_BYTE *)(BugCheckParameter2 + 101) & 2) == 0 )
  {
    v7 = *(_QWORD *)(BugCheckParameter2 + 88);
    if ( v7 != BugCheckParameter2 )
    {
      if ( v7 )
        KeBugCheckEx(0x1C6u, 8uLL, BugCheckParameter2, BugCheckParameter2 + 64, *(_QWORD *)(BugCheckParameter2 + 88));
    }
  }
  if ( (*(_QWORD *)(BugCheckParameter2 + 80) & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xAuLL, v4, 0LL, 0LL);
  v8 = *(_BYTE *)(BugCheckParameter2 + 101);
  if ( (v8 & 2) == 0 )
    KeBugCheckEx(0x1C6u, 0xBuLL, v4, ((unsigned __int64)(v8 & 2) << 15) | 1, 0LL);
  ExpReleaseFastResourceExclusive((signed __int64 *)BugCheckParameter2, 0LL, v4, a4);
}
