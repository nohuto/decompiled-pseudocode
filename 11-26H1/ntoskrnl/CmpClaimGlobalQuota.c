/*
 * XREFs of CmpClaimGlobalQuota @ 0x140A8F33C
 * Callers:
 *     CmpAllocateForNonPagedHive @ 0x1404FEF00 (CmpAllocateForNonPagedHive.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x1408666FC (HvpBuildMapForMemoryBackedHive.c)
 *     HvpAllocateNonPagedBin @ 0x140A8F1BC (HvpAllocateNonPagedBin.c)
 *     CmpAllocate @ 0x140A8F2D0 (CmpAllocate.c)
 *     HvpMapHiveImageFromViewMap @ 0x140B878DC (HvpMapHiveImageFromViewMap.c)
 *     HvpAddBin @ 0x140B87980 (HvpAddBin.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     CmpUpdateGlobalQuotaAllowed @ 0x140A8F390 (CmpUpdateGlobalQuotaAllowed.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

char __fastcall CmpClaimGlobalQuota(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  struct _WORK_QUEUE_ITEM *Pool2; // rax

  CmpUpdateGlobalQuotaAllowed(a1, a2, (unsigned int)a1, a4);
  if ( !(_DWORD)v4
    || v4 >= (__int64)((__int64)ExpPlatformBinaryLock.Timer.Header.WaitListHead.Flink
                     - PspSiloMonitorLock.Timer.DueTime.QuadPart) )
  {
    return 0;
  }
  _InterlockedAdd((volatile signed __int32 *)&PspSiloMonitorLock.Timer.DueTime, v4);
  if ( PspSiloMonitorLock.Timer.DueTime.QuadPart > *(_QWORD *)&ExpPlatformBinaryLock.Timer.Header.Lock
    && !CmpQuotaWarningPopupDisplayed
    && ExReadyForErrors )
  {
    Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      CmpQuotaWarningPopupDisplayed = 1;
      Pool2->WorkerRoutine = (void (__fastcall *)(void *))CmpQuotaWarningWorker;
      Pool2->Parameter = Pool2;
      Pool2->List.Flink = 0LL;
      ExQueueWorkItem(Pool2, DelayedWorkQueue);
    }
  }
  return 1;
}
