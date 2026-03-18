/*
 * XREFs of AlpcpCaptureWorkOnBehalfAttribute @ 0x140A59C70
 * Callers:
 *     AlpcpCaptureAttributes @ 0x1409BE688 (AlpcpCaptureAttributes.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     PsGetWorkOnBehalfThread @ 0x14045F7E0 (PsGetWorkOnBehalfThread.c)
 *     IoThreadToProcess @ 0x1404703A0 (IoThreadToProcess.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x140476D00 (PsEncodeThreadWorkOnBehalfTicket.c)
 *     PoEnergyEstimationEnabled @ 0x14047C5D0 (PoEnergyEstimationEnabled.c)
 */

__int64 __fastcall AlpcpCaptureWorkOnBehalfAttribute(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // rbx
  PVOID WorkOnBehalfThread; // rax
  void *v5; // rdi
  __int64 v6; // rcx
  int v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v8 = 0;
  v9 = 0LL;
  WorkOnBehalfThread = PsGetWorkOnBehalfThread(CurrentThread, &v8);
  v5 = WorkOnBehalfThread;
  if ( WorkOnBehalfThread )
  {
    v6 = (__int64)WorkOnBehalfThread;
    goto LABEL_5;
  }
  if ( IoThreadToProcess(CurrentThread)[3].UserWaitTime || (unsigned __int8)PoEnergyEstimationEnabled() )
  {
    v6 = (__int64)CurrentThread;
LABEL_5:
    PsEncodeThreadWorkOnBehalfTicket(v6, &v9);
    v3 = v9;
  }
  if ( v8 )
    ObfDereferenceObject(v5);
  *(_QWORD *)(a1 + 64) = v3;
  return 0LL;
}
