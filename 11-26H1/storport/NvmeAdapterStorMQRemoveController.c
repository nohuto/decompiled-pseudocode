/*
 * XREFs of NvmeAdapterStorMQRemoveController @ 0x1400DF6F8
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidNtStatusToStorStatus @ 0x1400018E8 (RaidNtStatusToStorStatus.c)
 *     NvmeControllerAcquireRundown @ 0x1400C5B84 (NvmeControllerAcquireRundown.c)
 *     NvmeControllerCompleteAllRequests @ 0x1400F189C (NvmeControllerCompleteAllRequests.c)
 *     NvmeControllerStorMQQuiesceCompletionDPCs @ 0x1400FAFEC (NvmeControllerStorMQQuiesceCompletionDPCs.c)
 *     NvmeControllerWaitForOutstandingIoComplete @ 0x1400FB8F0 (NvmeControllerWaitForOutstandingIoComplete.c)
 */

__int64 __fastcall NvmeAdapterStorMQRemoveController(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rdi
  _QWORD *i; // rax
  signed __int32 v7[8]; // [rsp+0h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a1 && a2 )
  {
    if ( *(_DWORD *)(a1 + 84) != 1
      || (v4 = *(_QWORD *)(a2 - 64), *(_DWORD *)(v4 + 976) == 4)
      || *(_DWORD *)(v4 + 976) == 3 )
    {
      v3 = -1073741661;
    }
    else
    {
      v3 = NvmeControllerAcquireRundown(*(_QWORD *)(a2 - 64));
      if ( v3 >= 0 )
      {
        *(_DWORD *)(v4 + 976) = 3;
        _InterlockedOr(v7, 0);
        _interlockedbittestandset((volatile signed __int32 *)(v4 + 948), 1u);
        NvmeControllerWaitForOutstandingIoComplete(v4, 1LL);
        NvmeControllerStorMQQuiesceCompletionDPCs(v4);
        NvmeControllerCompleteAllRequests(v4, 0LL, 3221225486LL);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 632), &LockHandle);
        for ( i = *(_QWORD **)(v4 + 640); i != (_QWORD *)(v4 + 640); i = (_QWORD *)*i )
          i[11] &= ~2uLL;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(a1 + 32), BusRelations);
        IoQueueWorkItemEx(
          *(PIO_WORKITEM *)(v4 + 176),
          (PIO_WORKITEM_ROUTINE_EX)NvmeAdapterStorMQControllerRemoveWorker,
          DelayedWorkQueue,
          (PVOID)v4);
      }
    }
  }
  else
  {
    v3 = -1073741811;
  }
  return RaidNtStatusToStorStatus(v3);
}
