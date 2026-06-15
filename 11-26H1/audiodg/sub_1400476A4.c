/*
 * XREFs of sub_1400476A4 @ 0x1400476A4
 * Callers:
 *     sub_1400AE76E @ 0x1400AE76E (sub_1400AE76E.c)
 *     sub_1400B38EF @ 0x1400B38EF (sub_1400B38EF.c)
 * Callees:
 *     sub_14000C544 @ 0x14000C544 (sub_14000C544.c)
 */

void __fastcall sub_1400476A4(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    sub_14000C544((_QWORD *)(**(_QWORD **)a1 + 152LL), **(_QWORD **)(a1 + 8));
  }
}
