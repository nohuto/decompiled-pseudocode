/*
 * XREFs of ObpRemoveObjectRoutine @ 0x140923BC0
 * Callers:
 *     IopReferenceFileObject @ 0x140264F80 (IopReferenceFileObject.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObFastDereferenceObject @ 0x140265740 (ObFastDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
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
 *     ObpProcessRemoveObjectQueue @ 0x140A59D90 (ObpProcessRemoveObjectQueue.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ObpFreeObject @ 0x140923CC0 (ObpFreeObject.c)
 */

__int64 __fastcall ObpRemoveObjectRoutine(__int64 a1, __int64 a2)
{
  char v3; // bp
  _QWORD *v4; // rdi

  v3 = a2;
  v4 = (_QWORD *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)];
  if ( v4 == ObpTypeObjectType )
    KeBugCheckEx(0xF4u, (ULONG_PTR)v4, a1 + 48, 0LL, 0LL);
  if ( *(_QWORD *)(a1 + 40) )
    guard_dispatch_icall_no_overrides(a1 + 48, 2LL);
  if ( v4[17] )
  {
    if ( !v3 )
      *(_BYTE *)(a1 + 27) |= 0x80u;
    guard_dispatch_icall_no_overrides(a1 + 48, a2);
  }
  return ObpFreeObject(a1);
}
