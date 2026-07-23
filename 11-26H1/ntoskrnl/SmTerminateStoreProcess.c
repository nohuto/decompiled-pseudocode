/*
 * XREFs of SmTerminateStoreProcess @ 0x1406423FC
 * Callers:
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x14064098C (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 *     SmPartitionCleanup @ 0x14081F1A0 (SmPartitionCleanup.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027BDE0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     PsTerminateMinimalProcess @ 0x1407FFFD8 (PsTerminateMinimalProcess.c)
 */

LONG __fastcall SmTerminateStoreProcess(__int64 a1)
{
  struct _KPROCESS *v1; // rdi
  LONG result; // eax
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(struct _KPROCESS **)(a1 + 2280);
  PsTerminateMinimalProcess(v1);
  Timeout.QuadPart = -3000000000LL;
  while ( KeWaitForSingleObject(v1, WrKernel, 0, 0, &Timeout) )
    ;
  ZwClose(*(HANDLE *)(a1 + 2272));
  ObDereferenceObjectDeferDeleteWithTag(v1, 0x746C6644u);
  Timeout.QuadPart = -6000000000LL;
  while ( KeWaitForSingleObject((PVOID)(a1 + 2288), WrKernel, 0, 0, &Timeout) )
    ;
  result = KeResetEvent((PRKEVENT)(a1 + 2288));
  *(_QWORD *)(a1 + 2280) = 0LL;
  *(_QWORD *)(a1 + 2272) = 0LL;
  return result;
}
