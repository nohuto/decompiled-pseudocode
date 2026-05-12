/*
 * XREFs of sub_1400E4CB8 @ 0x1400E4CB8
 * Callers:
 *     sub_1400DCEE0 @ 0x1400DCEE0 (sub_1400DCEE0.c)
 *     sub_1400DD3F0 @ 0x1400DD3F0 (sub_1400DD3F0.c)
 *     sub_1400E0064 @ 0x1400E0064 (sub_1400E0064.c)
 *     sub_1400E22C0 @ 0x1400E22C0 (sub_1400E22C0.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall sub_1400E4CB8(__int64 a1, __int64 a2)
{
  KeClearEvent((PRKEVENT)(a1 + 184));
  return KeSetCoalescableTimer((PKTIMER)(a1 + 280), (LARGE_INTEGER)(-10000 * a2), 0, 1u, (PKDPC)(a1 + 344));
}
