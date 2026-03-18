/*
 * XREFs of PfGenerateTrace @ 0x1407794E8
 * Callers:
 *     PfpLogScenarioEventCallback @ 0x1407C5760 (PfpLogScenarioEventCallback.c)
 *     PfpLogEventRequest @ 0x140B4F4BC (PfpLogEventRequest.c)
 *     PfSetSuperfetchInformation @ 0x140B5DB14 (PfSetSuperfetchInformation.c)
 *     PfpPowerActionSleepSystemPhaseCallback @ 0x140BF8770 (PfpPowerActionSleepSystemPhaseCallback.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 *     KeWaitForMultipleObjects @ 0x140396440 (KeWaitForMultipleObjects.c)
 *     PfpPartitionAccessTraceLockAcquire @ 0x140BE95B0 (PfpPartitionAccessTraceLockAcquire.c)
 *     PfpPartitionAccessTraceLockRelease @ 0x140BF90AC (PfpPartitionAccessTraceLockRelease.c)
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
