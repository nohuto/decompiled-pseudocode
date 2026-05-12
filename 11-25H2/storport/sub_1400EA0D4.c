/*
 * XREFs of sub_1400EA0D4 @ 0x1400EA0D4
 * Callers:
 *     sub_1400E96A0 @ 0x1400E96A0 (sub_1400E96A0.c)
 *     sub_1400F1278 @ 0x1400F1278 (sub_1400F1278.c)
 *     sub_1400F2658 @ 0x1400F2658 (sub_1400F2658.c)
 * Callees:
 *     sub_1400EA04C @ 0x1400EA04C (sub_1400EA04C.c)
 */

void __fastcall sub_1400EA0D4(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 1416) )
  {
    sub_1400EA04C(a1);
    ExFreePoolWithTag(*(PVOID *)(a1 + 1416), 0x53416152u);
    *(_QWORD *)(a1 + 1416) = 0LL;
  }
}
