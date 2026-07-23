/*
 * XREFs of ExAllocateFromNPagedLookasideList @ 0x14030C430
 * Callers:
 *     LZNT1DecompressChunkNewThread @ 0x140205048 (LZNT1DecompressChunkNewThread.c)
 *     PopAllocateIrp @ 0x14026ED9C (PopAllocateIrp.c)
 *     FsRtlFastUnlockSingle @ 0x140308CE0 (FsRtlFastUnlockSingle.c)
 *     FsRtlFastUnlockSingleShared @ 0x14030A210 (FsRtlFastUnlockSingleShared.c)
 *     FsRtlPrivateLock @ 0x14030AE50 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInitializeFileLock @ 0x14030C878 (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlpOplockSetPrivateFoExt @ 0x14030C978 (FsRtlpOplockSetPrivateFoExt.c)
 *     IoSetOplockKeyContext @ 0x14030CDF4 (IoSetOplockKeyContext.c)
 *     PopCreateDynamicIrpWorker @ 0x1403C03AC (PopCreateDynamicIrpWorker.c)
 *     CcExtendVacbArray @ 0x1403C07EC (CcExtendVacbArray.c)
 *     CcAllocateVacbLevels @ 0x1403C0CDC (CcAllocateVacbLevels.c)
 *     FsRtlSplitLocks @ 0x1403C1168 (FsRtlSplitLocks.c)
 *     VfAvlReserveNode @ 0x1403C2690 (VfAvlReserveNode.c)
 *     FsRtlTruncateBaseMcb @ 0x1404145B0 (FsRtlTruncateBaseMcb.c)
 *     FsRtlAllocateFileLock @ 0x140414740 (FsRtlAllocateFileLock.c)
 *     FsRtlInitializeLargeMcb @ 0x140475DA0 (FsRtlInitializeLargeMcb.c)
 *     FsRtlInitializeBaseMcbEx @ 0x140475E10 (FsRtlInitializeBaseMcbEx.c)
 *     WmipAllocRegEntry @ 0x1404E0D7C (WmipAllocRegEntry.c)
 *     MiAddMdlTracker @ 0x1404ED400 (MiAddMdlTracker.c)
 *     sub_140544BB0 @ 0x140544BB0 (sub_140544BB0.c)
 *     HashpHashMemory @ 0x1408B1F90 (HashpHashMemory.c)
 *     HashpVerifyPkcs1Signature @ 0x1408B2320 (HashpVerifyPkcs1Signature.c)
 *     AlpcpInitializePort @ 0x1408F08D0 (AlpcpInitializePort.c)
 *     AlpcInitializeHandleTable @ 0x1408F0AB4 (AlpcInitializeHandleTable.c)
 *     AlpcpAllocateBlob @ 0x1408F1B80 (AlpcpAllocateBlob.c)
 *     IopSymlinkAllocateAndAddECP @ 0x140933C40 (IopSymlinkAllocateAndAddECP.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x140933DA0 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     PspCreateUserProcessEcp @ 0x140933EF8 (PspCreateUserProcessEcp.c)
 *     AlpcpAllocateMessage @ 0x14098DB40 (AlpcpAllocateMessage.c)
 *     FsRtlAddToTunnelCacheEx @ 0x1409DE220 (FsRtlAddToTunnelCacheEx.c)
 *     WmipAllocEntry @ 0x140A0AF24 (WmipAllocEntry.c)
 *     ObWaitForMultipleObjects @ 0x140A2C6D0 (ObWaitForMultipleObjects.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x140A66900 (FsRtlAllocateExtraCreateParameterList.c)
 *     RtlpCopyRangeListEntry @ 0x140AE2B30 (RtlpCopyRangeListEntry.c)
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140AE4C60 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     RtlpCreateRangeListEntry @ 0x140B1244C (RtlpCreateRangeListEntry.c)
 *     ViAllocateContextTable @ 0x140C287CC (ViAllocateContextTable.c)
 *     VfAllocateAdapterChannel @ 0x140C29100 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140C292E0 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x140C29A20 (VfBuildScatterGatherList.c)
 *     VfGetScatterGatherList @ 0x140C2AB90 (VfGetScatterGatherList.c)
 *     VfIrpAllocateCallDriverData @ 0x140C32580 (VfIrpAllocateCallDriverData.c)
 *     ViDeadlockAllocate @ 0x140C3CE0C (ViDeadlockAllocate.c)
 *     ViDeadlockPopulateLookasideCache @ 0x140C3DD68 (ViDeadlockPopulateLookasideCache.c)
 *     VfPacketCreateAndLock @ 0x140C3F314 (VfPacketCreateAndLock.c)
 *     ViWdBeforeCallDriver @ 0x140C400D8 (ViWdBeforeCallDriver.c)
 *     IovpSessionDataCreate @ 0x140C4045C (IovpSessionDataCreate.c)
 *     ViIoCallbackSnapState @ 0x140C4C190 (ViIoCallbackSnapState.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
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
