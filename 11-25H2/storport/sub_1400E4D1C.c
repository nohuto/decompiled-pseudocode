/*
 * XREFs of sub_1400E4D1C @ 0x1400E4D1C
 * Callers:
 *     sub_1400E2610 @ 0x1400E2610 (sub_1400E2610.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall sub_1400E4D1C(__int64 a1, __int64 a2)
{
  KeClearEvent((PRKEVENT)(a1 + 208));
  return KeSetCoalescableTimer((PKTIMER)(a1 + 408), (LARGE_INTEGER)(-10000 * a2), 0, 1u, (PKDPC)(a1 + 472));
}
