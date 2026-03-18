/*
 * XREFs of MiInSwapSharedWorkingSetWorker @ 0x14087A710
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeStackAttachProcess @ 0x1402C5270 (KeStackAttachProcess.c)
 *     MiGetProcessPartition @ 0x14044C0C0 (MiGetProcessPartition.c)
 *     MiProcessWsInSwapSupport @ 0x1404AC94C (MiProcessWsInSwapSupport.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     MiFreeWorkingSetSwapContext @ 0x140AC1D44 (MiFreeWorkingSetSwapContext.c)
 *     EtwTraceWorkingSetSwap @ 0x140AF3D1C (EtwTraceWorkingSetSwap.c)
 */

LONG_PTR __fastcall MiInSwapSharedWorkingSetWorker(__int64 a1)
{
  struct _KPROCESS *v1; // rdi
  __int64 ProcessPartition; // rax
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-38h] BYREF

  v1 = *(struct _KPROCESS **)(a1 + 48);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(v1, &ApcState);
  EtwTraceWorkingSetSwap(v1);
  _InterlockedExchange(&v1[3].StackCount.Value, 1000);
  MiProcessWsInSwapSupport(*(_QWORD *)(a1 + 8), 1u);
  _InterlockedExchange(&v1[3].StackCount.Value, 0);
  EtwTraceWorkingSetSwap(v1);
  KiUnstackDetachProcess((__int64)&ApcState, 0);
  ProcessPartition = MiGetProcessPartition((__int64)v1);
  *(_QWORD *)(a1 + 48) = 0LL;
  MiFreeWorkingSetSwapContext(ProcessPartition, a1);
  return ObfDereferenceObjectWithTag(v1, 0x73576D4Du);
}
