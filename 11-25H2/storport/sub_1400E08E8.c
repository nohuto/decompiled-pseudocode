/*
 * XREFs of sub_1400E08E8 @ 0x1400E08E8
 * Callers:
 *     sub_1400DC188 @ 0x1400DC188 (sub_1400DC188.c)
 *     sub_1400DEFC4 @ 0x1400DEFC4 (sub_1400DEFC4.c)
 *     sub_140194600 @ 0x140194600 (sub_140194600.c)
 * Callees:
 *     sub_1400F37C8 @ 0x1400F37C8 (sub_1400F37C8.c)
 */

void __fastcall sub_1400E08E8(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 712);
  if ( v2 )
  {
    if ( *(_QWORD *)(v2 + 96) )
    {
      sub_1400F37C8();
      ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(a1 + 712) + 96LL), 0x414E6152u);
      *(_QWORD *)(*(_QWORD *)(a1 + 712) + 96LL) = 0LL;
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 712), 0x52436152u);
    *(_QWORD *)(a1 + 712) = 0LL;
  }
}
