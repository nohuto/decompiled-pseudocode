/*
 * XREFs of ObpDeferObjectDeletion @ 0x1403DD9F0
 * Callers:
 *     MiStoreFreeWriteSupport @ 0x14020A108 (MiStoreFreeWriteSupport.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x140264A20 (ObFastDereferenceObjectDeferDelete.c)
 *     ExReturnPoolQuota @ 0x140264B30 (ExReturnPoolQuota.c)
 *     IopReferenceFileObject @ 0x140264F80 (IopReferenceFileObject.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     IopCallDriverReference @ 0x1402652A0 (IopCallDriverReference.c)
 *     ObDereferenceObjectDeferDelete @ 0x140265670 (ObDereferenceObjectDeferDelete.c)
 *     ObFastDereferenceObject @ 0x140265740 (ObFastDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     PfSnGetFileInformation @ 0x140265CF0 (PfSnGetFileInformation.c)
 *     IopCompleteIrpInFileObjectList @ 0x140266C60 (IopCompleteIrpInFileObjectList.c)
 *     IopDropIrp @ 0x140268190 (IopDropIrp.c)
 *     IopFreeWaitCompletionPacket @ 0x140269810 (IopFreeWaitCompletionPacket.c)
 *     HalPutDmaAdapter @ 0x140269C10 (HalPutDmaAdapter.c)
 *     IopReleaseFileObjectLock @ 0x140269EC0 (IopReleaseFileObjectLock.c)
 *     IoReferenceIoAttributionFromThread @ 0x14026CAD0 (IoReferenceIoAttributionFromThread.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027C870 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExpFreeOwnerEntry @ 0x1402B9E50 (ExpFreeOwnerEntry.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402C2440 (NtReleaseWorkerFactoryWorker.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x1402C2960 (ExpLeaveWorkerFactoryAwayMode.c)
 *     MiFinishHardFault @ 0x14031D830 (MiFinishHardFault.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14037CC40 (NtWaitForWorkViaWorkerFactory.c)
 *     IopProcessWorkItem @ 0x14037D550 (IopProcessWorkItem.c)
 *     PspRevertContainerImpersonation @ 0x14037D900 (PspRevertContainerImpersonation.c)
 *     PspUpdateContainerImpersonation @ 0x14037E0F0 (PspUpdateContainerImpersonation.c)
 *     ExFreeHeapPool @ 0x1403A7BB0 (ExFreeHeapPool.c)
 *     IopDeleteFileObjectExtension @ 0x1403DB7A0 (IopDeleteFileObjectExtension.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403DBD20 (NtSignalAndWaitForSingleObject.c)
 *     IopUnloadSafeCompletion @ 0x1403DDA80 (IopUnloadSafeCompletion.c)
 *     IopDequeueIrpFromFileObject @ 0x1403DE5B0 (IopDequeueIrpFromFileObject.c)
 *     ObpDereferenceNamedObject @ 0x1403DE82C (ObpDereferenceNamedObject.c)
 *     NtSetInformationWorkerFactory @ 0x1403DE960 (NtSetInformationWorkerFactory.c)
 *     FsRtlpClearOwner @ 0x1403FCCBC (FsRtlpClearOwner.c)
 *     ExpAddCurrentThreadToThreadHistory @ 0x14044D9E0 (ExpAddCurrentThreadToThreadHistory.c)
 *     IopBoostThreadCallback @ 0x14047DB70 (IopBoostThreadCallback.c)
 *     ObDereferenceObjectExWithTag @ 0x14047DD60 (ObDereferenceObjectExWithTag.c)
 *     ObDereferenceObjectExWithTag2 @ 0x14047F848 (ObDereferenceObjectExWithTag2.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1402642E0 (KeAreInterruptsEnabled.c)
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

void __fastcall ObpDeferObjectDeletion(signed __int64 a1)
{
  signed __int64 v1; // rdx
  signed __int64 i; // rax

  _m_prefetchw(&ObpRemoveObjectList);
  v1 = ObpRemoveObjectList;
  *(_QWORD *)(a1 + 8) = ObpRemoveObjectList;
  for ( i = _InterlockedCompareExchange64(&ObpRemoveObjectList, a1, v1);
        i != v1;
        i = _InterlockedCompareExchange64(&ObpRemoveObjectList, a1, i) )
  {
    v1 = i;
    *(_QWORD *)(a1 + 8) = i;
  }
  if ( !v1 )
  {
    if ( KeAreInterruptsEnabled() && KeGetCurrentIrql() <= 2u )
      ExQueueWorkItem(&ObpRemoveObjectWorkItem, CriticalWorkQueue);
    else
      KiInsertQueueDpc((ULONG_PTR)&ObpRemoveObjectDpc, 0LL, 0LL, 0LL, 0);
  }
}
