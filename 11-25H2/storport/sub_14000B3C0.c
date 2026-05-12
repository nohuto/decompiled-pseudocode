/*
 * XREFs of sub_14000B3C0 @ 0x14000B3C0
 * Callers:
 *     sub_14000B0B0 @ 0x14000B0B0 (sub_14000B0B0.c)
 *     StorPortNotification @ 0x14004C160 (StorPortNotification.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall sub_14000B3C0(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( !a3 )
    return KeCancelTimer((PKTIMER)(a1 + 1584));
  *(_QWORD *)(a1 + 1840) = a2;
  return KeSetCoalescableTimer((PKTIMER)(a1 + 1584), (LARGE_INTEGER)(-10LL * a3), 0, 0, (PKDPC)(a1 + 1520));
}
