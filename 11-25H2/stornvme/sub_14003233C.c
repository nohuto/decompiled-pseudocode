/*
 * XREFs of sub_14003233C @ 0x14003233C
 * Callers:
 *     sub_14000DA00 @ 0x14000DA00 (sub_14000DA00.c)
 * Callees:
 *     sub_140032374 @ 0x140032374 (sub_140032374.c)
 */

__int64 sub_14003233C()
{
  if ( (dword_1400423F0 & 0x10) != 0 )
    return dword_1400423F0 & 1;
  else
    return sub_140032374((unsigned int)dword_1400423F0, 3LL);
}
