/*
 * XREFs of sub_1400322E8 @ 0x1400322E8
 * Callers:
 *     sub_14000DA00 @ 0x14000DA00 (sub_14000DA00.c)
 * Callees:
 *     sub_140032320 @ 0x140032320 (sub_140032320.c)
 */

__int64 sub_1400322E8()
{
  if ( (dword_1400423E8 & 0x10) != 0 )
    return dword_1400423E8 & 1;
  else
    return sub_140032320((unsigned int)dword_1400423E8, 3LL);
}
