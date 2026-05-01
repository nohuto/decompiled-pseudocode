/*
 * XREFs of ?AddRef@CProtocolActivatedEventArgs@@W7EAAKXZ @ 0x180329AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProtocolActivatedEventArgs::AddRef(__int64 a1, volatile int *a2)
{
  return CProtocolActivatedEventArgs::AddRef((CProtocolActivatedEventArgs *)(a1 - 8), a2);
}
