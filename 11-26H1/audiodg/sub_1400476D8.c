/*
 * XREFs of sub_1400476D8 @ 0x1400476D8
 * Callers:
 *     sub_1400AE780 @ 0x1400AE780 (sub_1400AE780.c)
 *     sub_1400B3901 @ 0x1400B3901 (sub_1400B3901.c)
 * Callees:
 *     sub_14000C448 @ 0x14000C448 (sub_14000C448.c)
 */

void __fastcall sub_1400476D8(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    sub_14000C448((_QWORD *)(**(_QWORD **)a1 + 280LL), **(_QWORD **)(a1 + 8));
  }
}
