/*
 * XREFs of PopFlushVolumeBlameResolverCallback @ 0x140C03280
 * Callers:
 *     <none>
 * Callees:
 *     IoThreadToProcess @ 0x140469B20 (IoThreadToProcess.c)
 *     ExTryToAcquireFastMutex @ 0x140470010 (ExTryToAcquireFastMutex.c)
 */

char __fastcall PopFlushVolumeBlameResolverCallback(__int64 a1, PEPROCESS *a2, _QWORD *a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rbx

  LOBYTE(v7) = ExTryToAcquireFastMutex((PFAST_MUTEX)&PpmIdlePolicyLock.WriteTransferCount);
  if ( (_BYTE)v7 )
  {
    v7 = a4 + 56;
    v8 = *(_QWORD *)(a4 + 56);
    if ( v8 != v7 )
    {
      *a2 = IoThreadToProcess(*(PETHREAD *)(v8 + 16));
      v7 = *(_QWORD *)(v8 + 16);
      *a3 = v7;
    }
  }
  return v7;
}
