/*
 * XREFs of sub_1400902E4 @ 0x1400902E4
 * Callers:
 *     sub_1400938AC @ 0x1400938AC (sub_1400938AC.c)
 *     sub_14009D244 @ 0x14009D244 (sub_14009D244.c)
 * Callees:
 *     sub_14009031C @ 0x14009031C (sub_14009031C.c)
 */

__int64 sub_1400902E4()
{
  if ( (dword_140169700 & 0x10) != 0 )
    return dword_140169700 & 1;
  else
    return sub_14009031C((unsigned int)dword_140169700, 3LL);
}
