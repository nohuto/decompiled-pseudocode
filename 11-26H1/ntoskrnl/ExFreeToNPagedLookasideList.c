/*
 * XREFs of ExFreeToNPagedLookasideList @ 0x1403B5A60
 * Callers:
 *     PopAllocateIrp @ 0x14026F82C (PopAllocateIrp.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1402BFAE8 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlPrivateInsertSharedLock @ 0x1402C0A10 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlpOplockSetPrivateFoExt @ 0x1402C1CB8 (FsRtlpOplockSetPrivateFoExt.c)
 *     IoSetOplockKeyContext @ 0x1402C2134 (IoSetOplockKeyContext.c)
 *     CcSetVacbLargeOffset @ 0x1402E1620 (CcSetVacbLargeOffset.c)
 *     FsRtlFreeFileLock @ 0x1403B4980 (FsRtlFreeFileLock.c)
 *     FsRtlUninitializeFileLock @ 0x1403B49B0 (FsRtlUninitializeFileLock.c)
 *     FsRtlAddBaseMcbEntryEx @ 0x1403B5030 (FsRtlAddBaseMcbEntryEx.c)
 *     FsRtlAddEntry @ 0x1403B58C0 (FsRtlAddEntry.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1403B5AC4 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlUninitializeLargeMcb @ 0x1403B5EB0 (FsRtlUninitializeLargeMcb.c)
 *     PopFreeIrp @ 0x1403B5EEC (PopFreeIrp.c)
 *     FsRtlUninitializeBaseMcb @ 0x1403B6010 (FsRtlUninitializeBaseMcb.c)
 *     CcDeallocateVacbLevel @ 0x1403B60A8 (CcDeallocateVacbLevel.c)
 *     PopCreateDynamicIrpWorker @ 0x1403B64AC (PopCreateDynamicIrpWorker.c)
 *     FsRtlFreeTunnelNode @ 0x1403B6610 (FsRtlFreeTunnelNode.c)
 *     CcExtendVacbArray @ 0x1403B68EC (CcExtendVacbArray.c)
 *     CcFreeUnusedVacbLevels @ 0x1403B6E84 (CcFreeUnusedVacbLevels.c)
 *     WmipDeregisterRegEntry @ 0x1403B6EF0 (WmipDeregisterRegEntry.c)
 *     FsRtlEmptyFreePoolList @ 0x1403B70B0 (FsRtlEmptyFreePoolList.c)
 *     VfAvlFreeNodeNoLock @ 0x1403B7710 (VfAvlFreeNodeNoLock.c)
 *     VfTargetDriversRemove @ 0x1403B7C48 (VfTargetDriversRemove.c)
 *     FsRtlpSyncWithAckTimeout @ 0x1403FE3D0 (FsRtlpSyncWithAckTimeout.c)
 *     MmUnlockPages @ 0x140410C10 (MmUnlockPages.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x140505750 (FsRtlPrivateCancelFileLockIrp.c)
 *     sub_140542730 @ 0x140542730 (sub_140542730.c)
 *     FsRtlpOplockAckTimeoutWorker @ 0x1405B75A0 (FsRtlpOplockAckTimeoutWorker.c)
 *     PopIrpWorker @ 0x14060BD70 (PopIrpWorker.c)
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x14064113C (ViFlushZeroMapRegisterBaseWcbs.c)
 *     HashpHashMemory @ 0x1408ABB4C (HashpHashMemory.c)
 *     HashpVerifyPkcs1Signature @ 0x1408ABEDC (HashpVerifyPkcs1Signature.c)
 *     AlpcpDestroyBlob @ 0x1408E83C0 (AlpcpDestroyBlob.c)
 *     AlpcConnectionDestroyProcedure @ 0x1408E9120 (AlpcConnectionDestroyProcedure.c)
 *     AlpcpDestroyPort @ 0x1408EA924 (AlpcpDestroyPort.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140903780 (FsRtlFreeExtraCreateParameter.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x1409040A0 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlpCleanupEcps @ 0x1409B5D30 (FsRtlpCleanupEcps.c)
 *     AlpcAddHandleTableEntry @ 0x1409BC2F0 (AlpcAddHandleTableEntry.c)
 *     AlpcpDereferenceBlobEx @ 0x1409C0380 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockMessage @ 0x1409C07A0 (AlpcpUnlockMessage.c)
 *     AlpcpUnlockBlob @ 0x1409C2710 (AlpcpUnlockBlob.c)
 *     AlpcMessageDestroyProcedure @ 0x1409E04E0 (AlpcMessageDestroyProcedure.c)
 *     WmipUnreferenceEntry @ 0x140A0EF48 (WmipUnreferenceEntry.c)
 *     ObWaitForMultipleObjects @ 0x140A230B0 (ObWaitForMultipleObjects.c)
 *     RtlpFreeRangeListEntry @ 0x140AE4F68 (RtlpFreeRangeListEntry.c)
 *     FsRtlDeleteTunnelCache @ 0x140B22270 (FsRtlDeleteTunnelCache.c)
 *     ViFreeContextTable @ 0x140C227FC (ViFreeContextTable.c)
 *     VfAllocateAdapterChannel @ 0x140C230F0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140C232D0 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x140C23A10 (VfBuildScatterGatherList.c)
 *     VfCancelAdapterChannel @ 0x140C23F80 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x140C24430 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140C244E0 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x140C24780 (VfFreeMapRegisters.c)
 *     VfGetScatterGatherList @ 0x140C24B80 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x140C25980 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x140C25C00 (ViAdapterCallback.c)
 *     VfIrpReleaseCallDriverData @ 0x140C2C5D0 (VfIrpReleaseCallDriverData.c)
 *     ViDeadlockFree @ 0x140C37910 (ViDeadlockFree.c)
 *     ViDeadlockPopulateLookasideCache @ 0x140C37D58 (ViDeadlockPopulateLookasideCache.c)
 *     ViPacketNotificationCallback @ 0x140C39400 (ViPacketNotificationCallback.c)
 *     ViWdIrpBeforeCompletionRoutine @ 0x140C3A23C (ViWdIrpBeforeCompletionRoutine.c)
 *     IovpSessionDataDereference @ 0x140C3A558 (IovpSessionDataDereference.c)
 *     VfIoCompletionCheckState @ 0x140C46BD0 (VfIoCompletionCheckState.c)
 *     VfFastIoCheckState @ 0x140C47F24 (VfFastIoCheckState.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
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
