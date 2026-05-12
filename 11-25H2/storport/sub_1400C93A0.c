/*
 * XREFs of sub_1400C93A0 @ 0x1400C93A0
 * Callers:
 *     sub_1400D67D4 @ 0x1400D67D4 (sub_1400D67D4.c)
 *     sub_1400D6CBC @ 0x1400D6CBC (sub_1400D6CBC.c)
 *     sub_1400DA840 @ 0x1400DA840 (sub_1400DA840.c)
 *     sub_1400EA590 @ 0x1400EA590 (sub_1400EA590.c)
 *     sub_1400ED16C @ 0x1400ED16C (sub_1400ED16C.c)
 *     sub_1400F0A34 @ 0x1400F0A34 (sub_1400F0A34.c)
 *     sub_1401929D8 @ 0x1401929D8 (sub_1401929D8.c)
 * Callees:
 *     sub_1400C93D8 @ 0x1400C93D8 (sub_1400C93D8.c)
 */

__int64 sub_1400C93A0()
{
  if ( (dword_140169610 & 0x10) != 0 )
    return dword_140169610 & 1;
  else
    return sub_1400C93D8((unsigned int)dword_140169610, 3LL);
}
