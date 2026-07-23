/*
 * XREFs of ExFreeToNPagedLookasideList @ 0x1403BF960
 * Callers:
 *     PopAllocateIrp @ 0x14026ED9C (PopAllocateIrp.c)
 *     CcSetVacbLargeOffset @ 0x1402C3430 (CcSetVacbLargeOffset.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x14030A7AC (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlPrivateInsertSharedLock @ 0x14030B6D0 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlpOplockSetPrivateFoExt @ 0x14030C978 (FsRtlpOplockSetPrivateFoExt.c)
 *     IoSetOplockKeyContext @ 0x14030CDF4 (IoSetOplockKeyContext.c)
 *     FsRtlFreeFileLock @ 0x1403BE880 (FsRtlFreeFileLock.c)
 *     FsRtlUninitializeFileLock @ 0x1403BE8B0 (FsRtlUninitializeFileLock.c)
 *     FsRtlAddBaseMcbEntryEx @ 0x1403BEF30 (FsRtlAddBaseMcbEntryEx.c)
 *     FsRtlAddEntry @ 0x1403BF7C0 (FsRtlAddEntry.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1403BF9C4 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlUninitializeLargeMcb @ 0x1403BFDB0 (FsRtlUninitializeLargeMcb.c)
 *     PopFreeIrp @ 0x1403BFDEC (PopFreeIrp.c)
 *     FsRtlUninitializeBaseMcb @ 0x1403BFF10 (FsRtlUninitializeBaseMcb.c)
 *     CcDeallocateVacbLevel @ 0x1403BFFA8 (CcDeallocateVacbLevel.c)
 *     PopCreateDynamicIrpWorker @ 0x1403C03AC (PopCreateDynamicIrpWorker.c)
 *     FsRtlFreeTunnelNode @ 0x1403C0510 (FsRtlFreeTunnelNode.c)
 *     CcExtendVacbArray @ 0x1403C07EC (CcExtendVacbArray.c)
 *     CcFreeUnusedVacbLevels @ 0x1403C0D84 (CcFreeUnusedVacbLevels.c)
 *     WmipDeregisterRegEntry @ 0x1403C0DF0 (WmipDeregisterRegEntry.c)
 *     FsRtlEmptyFreePoolList @ 0x1403C0FB0 (FsRtlEmptyFreePoolList.c)
 *     VfAvlFreeNodeNoLock @ 0x1403C1610 (VfAvlFreeNodeNoLock.c)
 *     VfTargetDriversRemove @ 0x1403C1B48 (VfTargetDriversRemove.c)
 *     FsRtlpSyncWithAckTimeout @ 0x1403FABC0 (FsRtlpSyncWithAckTimeout.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1404FF000 (FsRtlPrivateCancelFileLockIrp.c)
 *     sub_140544BB0 @ 0x140544BB0 (sub_140544BB0.c)
 *     FsRtlpOplockAckTimeoutWorker @ 0x1405B9E10 (FsRtlpOplockAckTimeoutWorker.c)
 *     PopIrpWorker @ 0x14060EED0 (PopIrpWorker.c)
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x140644D1C (ViFlushZeroMapRegisterBaseWcbs.c)
 *     HashpHashMemory @ 0x1408B1F90 (HashpHashMemory.c)
 *     HashpVerifyPkcs1Signature @ 0x1408B2320 (HashpVerifyPkcs1Signature.c)
 *     AlpcpDestroyBlob @ 0x1408EE980 (AlpcpDestroyBlob.c)
 *     AlpcConnectionDestroyProcedure @ 0x1408EF6E0 (AlpcConnectionDestroyProcedure.c)
 *     AlpcpDestroyPort @ 0x1408F0EE4 (AlpcpDestroyPort.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140933710 (FsRtlFreeExtraCreateParameter.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x140934030 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlpCleanupEcps @ 0x140986DF0 (FsRtlpCleanupEcps.c)
 *     AlpcAddHandleTableEntry @ 0x14098D2D0 (AlpcAddHandleTableEntry.c)
 *     AlpcpDereferenceBlobEx @ 0x140991360 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockMessage @ 0x140991780 (AlpcpUnlockMessage.c)
 *     AlpcpUnlockBlob @ 0x1409936F0 (AlpcpUnlockBlob.c)
 *     AlpcMessageDestroyProcedure @ 0x1409B8750 (AlpcMessageDestroyProcedure.c)
 *     WmipUnreferenceEntry @ 0x140A0E124 (WmipUnreferenceEntry.c)
 *     ObWaitForMultipleObjects @ 0x140A2C6D0 (ObWaitForMultipleObjects.c)
 *     RtlpFreeRangeListEntry @ 0x140AE2D28 (RtlpFreeRangeListEntry.c)
 *     FsRtlDeleteTunnelCache @ 0x140B24670 (FsRtlDeleteTunnelCache.c)
 *     ViFreeContextTable @ 0x140C2880C (ViFreeContextTable.c)
 *     VfAllocateAdapterChannel @ 0x140C29100 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140C292E0 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x140C29A20 (VfBuildScatterGatherList.c)
 *     VfCancelAdapterChannel @ 0x140C29F90 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x140C2A440 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140C2A4F0 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x140C2A790 (VfFreeMapRegisters.c)
 *     VfGetScatterGatherList @ 0x140C2AB90 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x140C2B990 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x140C2BC10 (ViAdapterCallback.c)
 *     VfIrpReleaseCallDriverData @ 0x140C325E0 (VfIrpReleaseCallDriverData.c)
 *     ViDeadlockFree @ 0x140C3D920 (ViDeadlockFree.c)
 *     ViDeadlockPopulateLookasideCache @ 0x140C3DD68 (ViDeadlockPopulateLookasideCache.c)
 *     ViPacketNotificationCallback @ 0x140C3F410 (ViPacketNotificationCallback.c)
 *     ViWdIrpBeforeCompletionRoutine @ 0x140C4024C (ViWdIrpBeforeCompletionRoutine.c)
 *     IovpSessionDataDereference @ 0x140C40568 (IovpSessionDataDereference.c)
 *     VfIoCompletionCheckState @ 0x140C4CBE0 (VfIoCompletionCheckState.c)
 *     VfFastIoCheckState @ 0x140C4DF34 (VfFastIoCheckState.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __stdcall ExFreeToNPagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside, PVOID Entry)
{
  ++Lookaside->L.TotalFrees;
  if ( LOWORD(Lookaside->L.ListHead.Alignment) < Lookaside->L.Depth )
  {
    RtlpInterlockedPushEntrySList(&Lookaside->L.ListHead, (PSLIST_ENTRY)Entry);
  }
  else
  {
    ++Lookaside->L.FreeMisses;
    guard_dispatch_icall_no_overrides(Entry, Entry);
  }
}
