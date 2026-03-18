/*
 * XREFs of Endpoint_IsTransferRingEmpty @ 0x14001E8D0
 * Callers:
 *     Endpoint_OnResetSetDequeuePointer @ 0x14001E158 (Endpoint_OnResetSetDequeuePointer.c)
 *     Endpoint_OnCancelSetDequeuePointer @ 0x14001E588 (Endpoint_OnCancelSetDequeuePointer.c)
 * Callees:
 *     <none>
 */

bool __fastcall Endpoint_IsTransferRingEmpty(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = *(_QWORD *)(a1 + 144);
  v3 = *(_QWORD *)(104LL * (a2 - 1) + v2 + 48);
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 32) + 16LL) + 16LL * a2) & 0xFFFFFFFFFFFFFFF0uLL;
  v5 = *(_QWORD *)(*(_QWORD *)(v3 + 176) + 24LL);
  return v4 == v5 && v4 == v5 + 16LL * *(unsigned int *)(v3 + 192);
}
