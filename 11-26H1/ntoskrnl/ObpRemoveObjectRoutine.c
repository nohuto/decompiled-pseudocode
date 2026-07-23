/*
 * XREFs of ObpRemoveObjectRoutine @ 0x1408FF6D0
 * Callers:
 *     IopReferenceFileObject @ 0x1402644F0 (IopReferenceFileObject.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObFastDereferenceObject @ 0x140264CB0 (ObFastDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PfSnGetFileInformation @ 0x140265260 (PfSnGetFileInformation.c)
 *     IopCompleteIrpInFileObjectList @ 0x1402661D0 (IopCompleteIrpInFileObjectList.c)
 *     IopDropIrp @ 0x140267700 (IopDropIrp.c)
 *     IopFreeWaitCompletionPacket @ 0x140268D80 (IopFreeWaitCompletionPacket.c)
 *     HalPutDmaAdapter @ 0x140269180 (HalPutDmaAdapter.c)
 *     IopReleaseFileObjectLock @ 0x140269430 (IopReleaseFileObjectLock.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14030D100 (NtReleaseWorkerFactoryWorker.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x14030D620 (ExpLeaveWorkerFactoryAwayMode.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14037E9F0 (NtWaitForWorkViaWorkerFactory.c)
 *     IopProcessWorkItem @ 0x14037F300 (IopProcessWorkItem.c)
 *     IopDeleteFileObjectExtension @ 0x1403DE990 (IopDeleteFileObjectExtension.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403DEF10 (NtSignalAndWaitForSingleObject.c)
 *     IopUnloadSafeCompletion @ 0x1403E0C70 (IopUnloadSafeCompletion.c)
 *     IopDequeueIrpFromFileObject @ 0x1403E17A0 (IopDequeueIrpFromFileObject.c)
 *     ObpDereferenceNamedObject @ 0x1403E1A1C (ObpDereferenceNamedObject.c)
 *     NtSetInformationWorkerFactory @ 0x1403E1B50 (NtSetInformationWorkerFactory.c)
 *     ExpAddCurrentThreadToThreadHistory @ 0x140445B10 (ExpAddCurrentThreadToThreadHistory.c)
 *     ObpProcessRemoveObjectQueue @ 0x140A66D00 (ObpProcessRemoveObjectQueue.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ObpFreeObject @ 0x1408FF7D0 (ObpFreeObject.c)
 */

__int64 __fastcall ObpRemoveObjectRoutine(__int64 a1, __int64 a2)
{
  char v3; // bp
  ULONG_PTR v4; // rdi

  v3 = a2;
  v4 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)];
  if ( v4 == *(_QWORD *)&ObpStackTraceLock.PriorityFloorSummary )
    KeBugCheckEx(0xF4u, v4, a1 + 48, 0LL, 0LL);
  if ( *(_QWORD *)(a1 + 40) )
    guard_dispatch_icall_no_overrides(a1 + 48, 2LL);
  if ( *(_QWORD *)(v4 + 136) )
  {
    if ( !v3 )
      *(_BYTE *)(a1 + 27) |= 0x80u;
    guard_dispatch_icall_no_overrides(a1 + 48, a2);
  }
  return ObpFreeObject(a1);
}
