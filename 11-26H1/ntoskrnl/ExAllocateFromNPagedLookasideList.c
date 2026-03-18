/*
 * XREFs of ExAllocateFromNPagedLookasideList @ 0x1402C1770
 * Callers:
 *     LZNT1DecompressChunkNewThread @ 0x140204F68 (LZNT1DecompressChunkNewThread.c)
 *     PopAllocateIrp @ 0x14026F82C (PopAllocateIrp.c)
 *     FsRtlFastUnlockSingle @ 0x1402BE020 (FsRtlFastUnlockSingle.c)
 *     FsRtlFastUnlockSingleShared @ 0x1402BF550 (FsRtlFastUnlockSingleShared.c)
 *     FsRtlPrivateLock @ 0x1402C0190 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInitializeFileLock @ 0x1402C1BB8 (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlpOplockSetPrivateFoExt @ 0x1402C1CB8 (FsRtlpOplockSetPrivateFoExt.c)
 *     IoSetOplockKeyContext @ 0x1402C2134 (IoSetOplockKeyContext.c)
 *     PopCreateDynamicIrpWorker @ 0x1403B64AC (PopCreateDynamicIrpWorker.c)
 *     CcExtendVacbArray @ 0x1403B68EC (CcExtendVacbArray.c)
 *     CcAllocateVacbLevels @ 0x1403B6DDC (CcAllocateVacbLevels.c)
 *     FsRtlSplitLocks @ 0x1403B7268 (FsRtlSplitLocks.c)
 *     VfAvlReserveNode @ 0x1403B8790 (VfAvlReserveNode.c)
 *     FsRtlTruncateBaseMcb @ 0x14041CD60 (FsRtlTruncateBaseMcb.c)
 *     FsRtlAllocateFileLock @ 0x14041CEF0 (FsRtlAllocateFileLock.c)
 *     FsRtlInitializeLargeMcb @ 0x14047C430 (FsRtlInitializeLargeMcb.c)
 *     FsRtlInitializeBaseMcbEx @ 0x14047C4A0 (FsRtlInitializeBaseMcbEx.c)
 *     WmipAllocRegEntry @ 0x1404E79BC (WmipAllocRegEntry.c)
 *     MiAddMdlTracker @ 0x1404F3E20 (MiAddMdlTracker.c)
 *     sub_140542730 @ 0x140542730 (sub_140542730.c)
 *     HashpHashMemory @ 0x1408ABB4C (HashpHashMemory.c)
 *     HashpVerifyPkcs1Signature @ 0x1408ABEDC (HashpVerifyPkcs1Signature.c)
 *     AlpcpInitializePort @ 0x1408EA310 (AlpcpInitializePort.c)
 *     AlpcInitializeHandleTable @ 0x1408EA4F4 (AlpcInitializeHandleTable.c)
 *     AlpcpAllocateBlob @ 0x1408EB5C0 (AlpcpAllocateBlob.c)
 *     IopSymlinkAllocateAndAddECP @ 0x140903CB0 (IopSymlinkAllocateAndAddECP.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x140903E10 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     PspCreateUserProcessEcp @ 0x140903F68 (PspCreateUserProcessEcp.c)
 *     AlpcpAllocateMessage @ 0x1409BCB60 (AlpcpAllocateMessage.c)
 *     FsRtlAddToTunnelCacheEx @ 0x1409E1210 (FsRtlAddToTunnelCacheEx.c)
 *     WmipAllocEntry @ 0x140A0BF54 (WmipAllocEntry.c)
 *     ObWaitForMultipleObjects @ 0x140A230B0 (ObWaitForMultipleObjects.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x140A59990 (FsRtlAllocateExtraCreateParameterList.c)
 *     RtlpCopyRangeListEntry @ 0x140AE4D70 (RtlpCopyRangeListEntry.c)
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140AE6EA0 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     RtlpCreateRangeListEntry @ 0x140B10A0C (RtlpCreateRangeListEntry.c)
 *     ViAllocateContextTable @ 0x140C227BC (ViAllocateContextTable.c)
 *     VfAllocateAdapterChannel @ 0x140C230F0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140C232D0 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x140C23A10 (VfBuildScatterGatherList.c)
 *     VfGetScatterGatherList @ 0x140C24B80 (VfGetScatterGatherList.c)
 *     VfIrpAllocateCallDriverData @ 0x140C2C570 (VfIrpAllocateCallDriverData.c)
 *     ViDeadlockAllocate @ 0x140C36DFC (ViDeadlockAllocate.c)
 *     ViDeadlockPopulateLookasideCache @ 0x140C37D58 (ViDeadlockPopulateLookasideCache.c)
 *     VfPacketCreateAndLock @ 0x140C39304 (VfPacketCreateAndLock.c)
 *     ViWdBeforeCallDriver @ 0x140C3A0C8 (ViWdBeforeCallDriver.c)
 *     IovpSessionDataCreate @ 0x140C3A44C (IovpSessionDataCreate.c)
 *     ViIoCallbackSnapState @ 0x140C46180 (ViIoCallbackSnapState.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140730C90 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

PVOID __stdcall ExAllocateFromNPagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside)
{
  PVOID result; // rax

  ++Lookaside->L.TotalAllocates;
  result = RtlpInterlockedPopEntrySList(&Lookaside->L.ListHead);
  if ( !result )
  {
    ++Lookaside->L.AllocateMisses;
    return (PVOID)guard_dispatch_icall_no_overrides(
                    (unsigned int)Lookaside->L.Type,
                    Lookaside->L.Size,
                    Lookaside->L.Tag);
  }
  return result;
}
