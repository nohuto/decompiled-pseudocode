/*
 * XREFs of EtwTraceEnqueueWork @ 0x140267678
 * Callers:
 *     IoSetIoCompletionEx3 @ 0x1402659C0 (IoSetIoCompletionEx3.c)
 *     KeInsertQueueEx @ 0x140265E10 (KeInsertQueueEx.c)
 *     IopCompleteIrpInFileObjectList @ 0x1402661D0 (IopCompleteIrpInFileObjectList.c)
 *     IoSetIoCompletionEx2 @ 0x140266A90 (IoSetIoCompletionEx2.c)
 *     IoSetIoCompletionEx @ 0x140266E50 (IoSetIoCompletionEx.c)
 *     KiInsertQueue @ 0x140267210 (KiInsertQueue.c)
 *     AlpcpQueueIoCompletionPort @ 0x140267FE0 (AlpcpQueueIoCompletionPort.c)
 *     AlpcpQueueIoCompletion @ 0x1402686B0 (AlpcpQueueIoCompletion.c)
 *     KiInsertQueueInternal @ 0x1402743F0 (KiInsertQueueInternal.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14030D100 (NtReleaseWorkerFactoryWorker.c)
 *     KeInsertQueue @ 0x1403F0500 (KeInsertQueue.c)
 *     IopPassiveInterruptDpc @ 0x1403F0650 (IopPassiveInterruptDpc.c)
 *     FsRtlpPostStackOverflow @ 0x1405BA9A0 (FsRtlpPostStackOverflow.c)
 *     KeInsertHeadQueue @ 0x1405F3FD0 (KeInsertHeadQueue.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceEnqueueWork(__int64 a1, __int64 a2, char a3)
{
  int v3; // eax
  __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+38h] [rbp-30h]
  int v7; // [rsp+3Ch] [rbp-2Ch]
  _QWORD v8[2]; // [rsp+40h] [rbp-28h] BYREF

  v3 = *(_DWORD *)(a1 + 1296);
  v7 = 0;
  v5 = a2;
  v6 = v3;
  v8[1] = 12LL;
  v8[0] = &v5;
  return EtwTraceKernelEvent((unsigned int)v8, 1, 553648128, 1342, a3 != 0 ? 6299138 : 6292994);
}
