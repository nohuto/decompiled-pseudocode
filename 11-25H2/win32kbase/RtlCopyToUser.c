/*
 * XREFs of RtlCopyToUser @ 0x1402C9008
 * Callers:
 *     NtDCompositionProcessChannelBatchBuffer @ 0x1400BA680 (NtDCompositionProcessChannelBatchBuffer.c)
 *     NtDCompositionGetFrameStatistics @ 0x1400BC410 (NtDCompositionGetFrameStatistics.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1400BF130 (NtDCompositionGetFrameLegacyTokens.c)
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1400C0490 (NtDCompositionGetFrameSurfaceUpdates.c)
 *     NtDCompositionGetStatistics @ 0x1400D0800 (NtDCompositionGetStatistics.c)
 *     NtQueryCompositionInputQueueAndTransform @ 0x1400D8B90 (NtQueryCompositionInputQueueAndTransform.c)
 *     NtQueryCompositionInputSinkLuid @ 0x1400DD410 (NtQueryCompositionInputSinkLuid.c)
 *     NtDCompositionSynchronize @ 0x1400EE890 (NtDCompositionSynchronize.c)
 *     NtDCompositionGetTargetStatistics @ 0x1400EFD80 (NtDCompositionGetTargetStatistics.c)
 *     NtDCompositionGetDeletedResources @ 0x140108890 (NtDCompositionGetDeletedResources.c)
 *     NtDCompositionGetFrameId @ 0x140114DB0 (NtDCompositionGetFrameId.c)
 *     ?_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z @ 0x140116D7C (-_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z.c)
 *     NtDCompositionGetFrameIdFromBatchId @ 0x140120880 (NtDCompositionGetFrameIdFromBatchId.c)
 *     NtDCompositionCreateChannel @ 0x140121B00 (NtDCompositionCreateChannel.c)
 *     NtQueryCompositionInputIsImplicit @ 0x140128BB0 (NtQueryCompositionInputIsImplicit.c)
 *     NtCompositionSetDropTarget @ 0x14012EAD0 (NtCompositionSetDropTarget.c)
 *     NtQueryCompositionInputSinkViewId @ 0x140134780 (NtQueryCompositionInputSinkViewId.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x14016ED70 (NtUserDisplayConfigGetDeviceInfo.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x14017DD8C (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     NtDCompositionBeginFrame @ 0x1401978D0 (NtDCompositionBeginFrame.c)
 *     NtDCompositionCreateConnection @ 0x140226B80 (NtDCompositionCreateConnection.c)
 *     NtDCompositionSendDwmLpcMessage @ 0x140227130 (NtDCompositionSendDwmLpcMessage.c)
 *     RtlCopyToUser$thunk$8481748130428616498 @ 0x140246020 (RtlCopyToUser$thunk$8481748130428616498.c)
 * Callees:
 *     ProbeForRead_0 @ 0x1401A4EE6 (ProbeForRead_0.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
 */

void *__fastcall RtlCopyToUser(void *a1, void *Src, size_t Size)
{
  void *result; // rax

  result = 0LL;
  if ( Size )
  {
    ProbeForRead_0(a1, Size, 1u);
    return RtlCopyVolatileMemory(a1, Src, Size);
  }
  return result;
}
