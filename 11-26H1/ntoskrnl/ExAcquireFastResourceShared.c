/*
 * XREFs of ExAcquireFastResourceShared @ 0x140276AE0
 * Callers:
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x1402B39B0 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x1402B3B20 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     SeSecurityAttributePresent @ 0x1402B4AC0 (SeSecurityAttributePresent.c)
 *     SepMandatoryIntegrityCheck @ 0x1402B5410 (SepMandatoryIntegrityCheck.c)
 *     ExpFastResourceLegacyAcquireShared @ 0x1404B8FEC (ExpFastResourceLegacyAcquireShared.c)
 *     DifExAcquireFastResourceSharedWrapper @ 0x14064EDE0 (DifExAcquireFastResourceSharedWrapper.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x140772FF8 (PspQueryJobHierarchyAccountingInformation.c)
 *     PsSwapProcessWorkingSet @ 0x1407F0C88 (PsSwapProcessWorkingSet.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x140958B14 (PspQueryJobHierarchyProcessIdList.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14095A350 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspCallJobHierarchyCallbacks @ 0x14095A5C8 (PspCallJobHierarchyCallbacks.c)
 *     PspGetNextChildJob @ 0x14095A784 (PspGetNextChildJob.c)
 *     PspValidateJobAffinityState @ 0x140985390 (PspValidateJobAffinityState.c)
 *     PspInsertThread @ 0x140A026D0 (PspInsertThread.c)
 *     PspLockJobShared @ 0x140A81FE8 (PspLockJobShared.c)
 *     NtSetInformationThread @ 0x140A833F0 (NtSetInformationThread.c)
 *     PspSetProcessAffinitySafe @ 0x140AFC7BC (PspSetProcessAffinitySafe.c)
 *     PspSetProcessPriorityClass @ 0x140B10240 (PspSetProcessPriorityClass.c)
 *     PspCheckEnableNotificationChannel @ 0x140B650F8 (PspCheckEnableNotificationChannel.c)
 * Callees:
 *     ExpSaveAbHandle @ 0x140276630 (ExpSaveAbHandle.c)
 *     ExpAddFastOwnerEntryToThreadList @ 0x1402766A0 (ExpAddFastOwnerEntryToThreadList.c)
 *     ExAreApcsDisabledForThread @ 0x140276780 (ExAreApcsDisabledForThread.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x140276E40 (ExpAcquireFastResourceSharedSlow.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     KeAbMarkCrossThreadReleasable @ 0x140529B94 (KeAbMarkCrossThreadReleasable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

char __fastcall ExAcquireFastResourceShared(__int64 *BugCheckParameter2, ULONG_PTR a2, char a3)
{
  int v3; // ebp
  __int16 v5; // dx
  unsigned __int8 v7; // al
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *CurrentThread; // rbx
  ULONG_PTR v10; // r9
  int v11; // ecx
  __int64 v12; // rbx
  __int64 v13; // r14
  _BYTE *v14; // r15
  signed __int64 v15; // rax
  __int64 v17; // rtt
  __int64 v18; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v21; // eax
  __int64 v22; // rdx
  unsigned __int32 v23; // ett

  v3 = 2;
  v5 = *((_WORD *)BugCheckParameter2 + 13);
  if ( a3 )
    v3 = 10;
  v7 = ((v3 & 8) == 0) + 1;
  if ( (v5 & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > v7 )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, v7, 0LL);
  if ( CurrentIrql >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
  if ( (v5 & 8) == 0 && (CurrentThread->ApcState.InProgressFlags & 2) != 0 )
    KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
  if ( !ExAreApcsDisabledForThread(CurrentIrql, (__int64)CurrentThread) )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  if ( (struct _KTHREAD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFEuLL) != CurrentThread )
    KeBugCheckEx(0x1C6u, 9uLL, a2, *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFEuLL, 0LL);
  if ( (*(_BYTE *)(a2 + 37) & 2) == 0 )
  {
    v10 = *(_QWORD *)(a2 + 24);
    if ( v10 )
    {
      if ( (__int64 *)v10 != BugCheckParameter2 )
        KeBugCheckEx(0x1C6u, 2uLL, a2, v10, 0LL);
      if ( (struct _KTHREAD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFEuLL) != CurrentThread )
        KeBugCheckEx(0x1C6u, 2uLL, a2, *(_QWORD *)(a2 + 24), 0LL);
    }
  }
  v11 = *(_DWORD *)(a2 + 32);
  if ( !v11 || (*(_BYTE *)(a2 + 37) & 4) != 0 )
  {
    v12 = 0LL;
    v13 = (__int64)KeGetCurrentThread();
    v14 = 0LL;
    if ( !*(_BYTE *)(a2 + 36) )
      v14 = (_BYTE *)KeAbPreAcquire((struct _KTHREAD *)BugCheckParameter2, 0LL);
    do
    {
      _m_prefetchw(BugCheckParameter2);
      v15 = *BugCheckParameter2;
      if ( (*BugCheckParameter2 & 1) != 0 || (v15 & 2) != 0 )
        return ExpAcquireFastResourceSharedSlow((struct _KTHREAD *)BugCheckParameter2, v3);
      v17 = *BugCheckParameter2;
    }
    while ( v17 != _InterlockedCompareExchange64(
                     BugCheckParameter2,
                     v15 ^ (v15 ^ (v15 + 4)) & 0xFFFFFFFFFFFFFFFCuLL,
                     v15) );
    if ( (__int64 *)a2 != BugCheckParameter2 + 8 )
      *(_QWORD *)(a2 + 24) = BugCheckParameter2;
    LOBYTE(v12) = 0;
    *(_QWORD *)(a2 + 16) = v13 | v12;
    *(_DWORD *)(a2 + 32) = 1;
    ExpSaveAbHandle(a2, v14, 1);
    _disable();
    ExpAddFastOwnerEntryToThreadList(v13, (__int64)BugCheckParameter2, 0, (_QWORD *)a2);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v21 = *SchedulerAssist;
      do
      {
        v22 = v21;
        LODWORD(v22) = v21 & 0xFFDFFFFF;
        v23 = v21;
        v21 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v21 & 0xFFDFFFFF, v21);
      }
      while ( v23 != v21 );
      if ( (v21 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb, v22, SchedulerAssist, v18);
    }
    _enable();
    return 1;
  }
  else
  {
    *(_DWORD *)(a2 + 32) = v11 + 1;
    return 1;
  }
}
