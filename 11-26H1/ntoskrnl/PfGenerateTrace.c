/*
 * XREFs of PfGenerateTrace @ 0x14077C418
 * Callers:
 *     PfpLogScenarioEventCallback @ 0x1407C87C0 (PfpLogScenarioEventCallback.c)
 *     PfpLogEventRequest @ 0x140B51D4C (PfpLogEventRequest.c)
 *     PfSetSuperfetchInformation @ 0x140B60C94 (PfSetSuperfetchInformation.c)
 *     PfpPowerActionSleepSystemPhaseCallback @ 0x140BFE770 (PfpPowerActionSleepSystemPhaseCallback.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     PfpPartitionAccessTraceLockAcquire @ 0x140BEF5B0 (PfpPartitionAccessTraceLockAcquire.c)
 *     PfpPartitionAccessTraceLockRelease @ 0x140BFF0AC (PfpPartitionAccessTraceLockRelease.c)
 */

__int64 __fastcall PfGenerateTrace(__int64 a1, int a2)
{
  unsigned int v4; // ebp
  void *v5; // rdi
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF

  PfpPartitionAccessTraceLockAcquire();
  v4 = 0;
  if ( *(_QWORD *)(a1 + 168) )
  {
    if ( !a2 )
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 248));
    KeResetEvent((PRKEVENT)(a1 + 224));
    KeSetEvent((PRKEVENT)(a1 + 200), 0, 0);
    v5 = *(void **)(a1 + 168);
    PsReferenceSiloContext(v5);
    PfpPartitionAccessTraceLockRelease(a1);
    Object[0] = (PVOID)(a1 + 224);
    Object[1] = v5;
    KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
    ObfDereferenceObject(v5);
    if ( !a2 )
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 248));
  }
  else
  {
    v4 = -1073741177;
    PfpPartitionAccessTraceLockRelease(a1);
  }
  return v4;
}
