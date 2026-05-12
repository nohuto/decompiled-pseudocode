/*
 * XREFs of sub_1400EA21C @ 0x1400EA21C
 * Callers:
 *     sub_1400DEFC4 @ 0x1400DEFC4 (sub_1400DEFC4.c)
 *     sub_140194600 @ 0x140194600 (sub_140194600.c)
 * Callees:
 *     sub_1400F2F70 @ 0x1400F2F70 (sub_1400F2F70.c)
 */

void __fastcall sub_1400EA21C(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 1272);
  if ( v2 )
  {
    KeCancelTimer((PKTIMER)(*(_QWORD *)(v2 + 40) + 128LL));
    sub_1400F2F70(a1);
    ExFreePoolWithTag(*(PVOID *)(a1 + 1272), 0x52436152u);
    *(_QWORD *)(a1 + 1272) = 0LL;
  }
}
