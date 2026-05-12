/*
 * XREFs of sub_1400F1650 @ 0x1400F1650
 * Callers:
 *     sub_1401305DC @ 0x1401305DC (sub_1401305DC.c)
 * Callees:
 *     sub_1400F16A4 @ 0x1400F16A4 (sub_1400F16A4.c)
 */

__int64 __fastcall sub_1400F1650(__int64 a1)
{
  __int64 i; // rdi

  for ( i = 0LL; (unsigned int)i < *(unsigned __int16 *)(a1 + 22); i = (unsigned int)(i + 1) )
    sub_1400F16A4(*(_QWORD *)(a1 + 728) + 192 * i);
  return sub_1400F16A4(*(_QWORD *)(a1 + 712));
}
