/*
 * XREFs of RaidAdapterRequestTimer @ 0x1400299B0
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x140028880 (RaidAdapterDeferredRoutine.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RaidAdapterRequestTimer(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( !a3 )
    return KeCancelTimer((PKTIMER)(a1 + 1648));
  *(_QWORD *)(a1 + 1904) = a2;
  return KeSetCoalescableTimer((PKTIMER)(a1 + 1648), (LARGE_INTEGER)(-10LL * a3), 0, 0, (PKDPC)(a1 + 1584));
}
