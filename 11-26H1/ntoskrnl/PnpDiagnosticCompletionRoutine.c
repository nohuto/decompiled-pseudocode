/*
 * XREFs of PnpDiagnosticCompletionRoutine @ 0x1405DF9F0
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeIrp @ 0x140267DD0 (IoFreeIrp.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     IoFindDeviceThatFailedIrp @ 0x1404CD600 (IoFindDeviceThatFailedIrp.c)
 */

__int64 __fastcall PnpDiagnosticCompletionRoutine(__int64 a1, IRP *a2, __int64 a3)
{
  int Status; // eax
  __int64 DeviceThatFailedIrp; // rax

  Status = a2->IoStatus.Status;
  *(_DWORD *)(a3 + 32) = Status;
  if ( Status < 0 )
  {
    DeviceThatFailedIrp = IoFindDeviceThatFailedIrp((__int64)a2);
    if ( DeviceThatFailedIrp )
      *(_QWORD *)a3 = *(_QWORD *)(DeviceThatFailedIrp + 8);
  }
  IoFreeIrp(a2);
  KeSetEvent((PRKEVENT)(a3 + 8), 0, 0);
  return 3221225494LL;
}
