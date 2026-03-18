/*
 * XREFs of sub_140018F3C @ 0x140018F3C
 * Callers:
 *     sub_140019450 @ 0x140019450 (sub_140019450.c)
 * Callees:
 *     sub_140018F74 @ 0x140018F74 (sub_140018F74.c)
 */

__int64 sub_140018F3C()
{
  if ( (dword_140042340 & 0x10) != 0 )
    return dword_140042340 & 1;
  else
    return sub_140018F74((unsigned int)dword_140042340, 3LL);
}
