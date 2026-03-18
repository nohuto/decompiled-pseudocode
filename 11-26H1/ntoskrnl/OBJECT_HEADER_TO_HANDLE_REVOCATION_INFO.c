/*
 * XREFs of OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x140269BD0
 * Callers:
 *     ObFastDereferenceObject @ 0x140265740 (ObFastDereferenceObject.c)
 *     PfSnGetFileInformation @ 0x140265CF0 (PfSnGetFileInformation.c)
 *     IopCompleteIrpInFileObjectList @ 0x140266C60 (IopCompleteIrpInFileObjectList.c)
 *     IopDropIrp @ 0x140268190 (IopDropIrp.c)
 *     IopFreeWaitCompletionPacket @ 0x140269810 (IopFreeWaitCompletionPacket.c)
 *     HalPutDmaAdapter @ 0x140269C10 (HalPutDmaAdapter.c)
 *     IopReleaseFileObjectLock @ 0x140269EC0 (IopReleaseFileObjectLock.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402C2440 (NtReleaseWorkerFactoryWorker.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x1402C2960 (ExpLeaveWorkerFactoryAwayMode.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14037CC40 (NtWaitForWorkViaWorkerFactory.c)
 *     IopProcessWorkItem @ 0x14037D550 (IopProcessWorkItem.c)
 *     IopDeleteFileObjectExtension @ 0x1403DB7A0 (IopDeleteFileObjectExtension.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403DBD20 (NtSignalAndWaitForSingleObject.c)
 *     IopUnloadSafeCompletion @ 0x1403DDA80 (IopUnloadSafeCompletion.c)
 *     IopDequeueIrpFromFileObject @ 0x1403DE5B0 (IopDequeueIrpFromFileObject.c)
 *     ObpDereferenceNamedObject @ 0x1403DE82C (ObpDereferenceNamedObject.c)
 *     NtSetInformationWorkerFactory @ 0x1403DE960 (NtSetInformationWorkerFactory.c)
 *     ExpAddCurrentThreadToThreadHistory @ 0x14044D9E0 (ExpAddCurrentThreadToThreadHistory.c)
 *     ObpCreateHandle @ 0x14092CA60 (ObpCreateHandle.c)
 *     ObHandleRevocationBlockAddObject @ 0x140A47564 (ObHandleRevocationBlockAddObject.c)
 *     ObpProcessRemoveObjectQueue @ 0x140A59D90 (ObpProcessRemoveObjectQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  if ( (*(_BYTE *)(a1 + 26) & 0x40) == 0 )
    return 0LL;
  result = 0LL;
  v2 = *(_QWORD *)(a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 0x7F]);
  if ( *(_BYTE *)(v2 + 24) )
    return v2;
  return result;
}
