/*
 * XREFs of SmTerminateStoreProcess @ 0x14063E81C
 * Callers:
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x14063CDAC (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 *     SmPartitionCleanup @ 0x140818F90 (SmPartitionCleanup.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027C870 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     PsTerminateMinimalProcess @ 0x1407FA5A8 (PsTerminateMinimalProcess.c)
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
