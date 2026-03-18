/*
 * XREFs of CmpClaimGlobalQuota @ 0x140A8820C
 * Callers:
 *     CmpAllocateForNonPagedHive @ 0x140505650 (CmpAllocateForNonPagedHive.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x14086040C (HvpBuildMapForMemoryBackedHive.c)
 *     HvpAllocateNonPagedBin @ 0x140A8808C (HvpAllocateNonPagedBin.c)
 *     CmpAllocate @ 0x140A881A0 (CmpAllocate.c)
 *     HvpMapHiveImageFromViewMap @ 0x140B7E9FC (HvpMapHiveImageFromViewMap.c)
 *     HvpAddBin @ 0x140B7EAA0 (HvpAddBin.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     CmpUpdateGlobalQuotaAllowed @ 0x140A88260 (CmpUpdateGlobalQuotaAllowed.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

char __fastcall CmpClaimGlobalQuota(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int64 v4; // r8
  struct _WORK_QUEUE_ITEM *Pool2; // rax

  CmpUpdateGlobalQuotaAllowed(a1, a2, (unsigned int)a1, a4);
  if ( !(_DWORD)v4
    || v4 >= (signed __int64)(*(_QWORD *)&ExpPlatformBinaryLock.Timer.Header.Lock
                            - (unsigned __int64)PspSiloMonitorLock.Timer.Header.WaitListHead.Blink) )
  {
    return 0;
  }
  _InterlockedAdd((volatile signed __int32 *)&PspSiloMonitorLock.Timer.Header.WaitListHead.Blink, v4);
  if ( PspSiloMonitorLock.Timer.Header.WaitListHead.Blink > ExpPlatformBinaryLock.Timer.Header.WaitListHead.Flink
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
