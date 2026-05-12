/*
 * XREFs of RaidStartUnit @ 0x140057F60
 * Callers:
 *     RaidBusEnumeratorProcessNewUnit @ 0x140034E94 (RaidBusEnumeratorProcessNewUnit.c)
 *     StorProcessNVMeNewUnit @ 0x140191C34 (StorProcessNVMeNewUnit.c)
 * Callees:
 *     RaUnitSetQueueDepth @ 0x14003ACFC (RaUnitSetQueueDepth.c)
 *     StorpInitializeUnitTelemetry @ 0x140057FB8 (StorpInitializeUnitTelemetry.c)
 */

__int64 __fastcall RaidStartUnit(__int64 a1)
{
  _BYTE *v2; // rax
  __int64 result; // rax

  *(_DWORD *)(a1 + 3584) = _InterlockedIncrement(&StorpCountersId);
  v2 = *(_BYTE **)(a1 + 112);
  if ( v2 && (*v2 & 0x1F) == 1 )
    RaUnitSetQueueDepth(a1, 1u, 1u);
  StorpInitializeUnitTelemetry(a1);
  result = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(result + 48) &= ~0x80u;
  return result;
}
