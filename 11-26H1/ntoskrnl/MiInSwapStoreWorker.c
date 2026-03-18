/*
 * XREFs of MiInSwapStoreWorker @ 0x140AE9FA0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeStackAttachProcess @ 0x1402C5270 (KeStackAttachProcess.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     MiGetProcessPartition @ 0x14044C0C0 (MiGetProcessPartition.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     SmSwapStore @ 0x140AEA064 (SmSwapStore.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x140AEA0E8 (EtwTraceWorkingSetInSwapStoreFail.c)
 *     MiInSwapStoreContextDereference @ 0x140AEA190 (MiInSwapStoreContextDereference.c)
 */

__int64 __fastcall MiInSwapStoreWorker(__int64 a1)
{
  struct _KPROCESS *v1; // rdi
  __int64 v3; // rbx
  PRKPROCESS v4; // rcx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  v1 = *(struct _KPROCESS **)(a1 + 32);
  memset(&ApcState, 0, sizeof(ApcState));
  v3 = *(_QWORD *)(MiGetProcessPartition((__int64)v1) + 256);
  KeStackAttachProcess(v4, &ApcState);
  LODWORD(v3) = SmSwapStore(v3, 2LL);
  KeSetEvent((PRKEVENT)(a1 + 40), 0, 0);
  if ( (int)v3 < 0 )
    EtwTraceWorkingSetInSwapStoreFail(v1);
  KiUnstackDetachProcess((__int64)&ApcState, 0);
  ObfDereferenceObjectWithTag(v1, 0x73576D4Du);
  return MiInSwapStoreContextDereference(a1);
}
