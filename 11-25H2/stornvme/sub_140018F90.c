/*
 * XREFs of sub_140018F90 @ 0x140018F90
 * Callers:
 *     sub_140019450 @ 0x140019450 (sub_140019450.c)
 * Callees:
 *     sub_140018FC8 @ 0x140018FC8 (sub_140018FC8.c)
 */

__int64 sub_140018F90()
{
  if ( (dword_1400422E8 & 0x10) != 0 )
    return dword_1400422E8 & 1;
  else
    return sub_140018FC8((unsigned int)dword_1400422E8, 3LL);
}
