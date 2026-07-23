/*
 * XREFs of PopRecordFirmwareResetReason @ 0x140CD69A8
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

char __fastcall PopRecordFirmwareResetReason(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax

  v1 = *(_QWORD *)(a1 + 240);
  LOBYTE(v2) = *(_BYTE *)(v1 + 3440);
  LOBYTE(stru_140E67200.WriteTransferCount) = v2;
  if ( *(_BYTE *)(v1 + 3440) )
  {
    v2 = *(_QWORD *)(v1 + 3448);
    stru_140E67200.OtherTransferCount = v2;
    *(_OWORD *)&stru_140E67200.QueuedScb = *(_OWORD *)(v1 + 3456);
    *(_OWORD *)stru_140E67200.TracingPrivate = *(_OWORD *)(v1 + 3472);
  }
  return v2;
}
