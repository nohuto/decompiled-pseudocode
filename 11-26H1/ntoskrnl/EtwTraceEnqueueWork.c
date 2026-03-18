/*
 * XREFs of EtwTraceEnqueueWork @ 0x140268108
 * Callers:
 *     IoSetIoCompletionEx3 @ 0x140266450 (IoSetIoCompletionEx3.c)
 *     KeInsertQueueEx @ 0x1402668A0 (KeInsertQueueEx.c)
 *     IopCompleteIrpInFileObjectList @ 0x140266C60 (IopCompleteIrpInFileObjectList.c)
 *     IoSetIoCompletionEx2 @ 0x140267520 (IoSetIoCompletionEx2.c)
 *     IoSetIoCompletionEx @ 0x1402678E0 (IoSetIoCompletionEx.c)
 *     KiInsertQueue @ 0x140267CA0 (KiInsertQueue.c)
 *     AlpcpQueueIoCompletionPort @ 0x140268A70 (AlpcpQueueIoCompletionPort.c)
 *     AlpcpQueueIoCompletion @ 0x140269140 (AlpcpQueueIoCompletion.c)
 *     KiInsertQueueInternal @ 0x140274E80 (KiInsertQueueInternal.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402C2440 (NtReleaseWorkerFactoryWorker.c)
 *     KeInsertQueue @ 0x1403F6B50 (KeInsertQueue.c)
 *     IopPassiveInterruptDpc @ 0x1403F6CA0 (IopPassiveInterruptDpc.c)
 *     FsRtlpPostStackOverflow @ 0x1405B8130 (FsRtlpPostStackOverflow.c)
 *     KeInsertHeadQueue @ 0x1405F1610 (KeInsertHeadQueue.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402DAC90 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
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
