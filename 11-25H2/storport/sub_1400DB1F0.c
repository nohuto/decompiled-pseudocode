/*
 * XREFs of sub_1400DB1F0 @ 0x1400DB1F0
 * Callers:
 *     sub_1400ED768 @ 0x1400ED768 (sub_1400ED768.c)
 * Callees:
 *     sub_1400DB228 @ 0x1400DB228 (sub_1400DB228.c)
 */

__int64 sub_1400DB1F0()
{
  if ( (dword_140169590 & 0x10) != 0 )
    return dword_140169590 & 1;
  else
    return sub_1400DB228((unsigned int)dword_140169590, 3LL);
}
