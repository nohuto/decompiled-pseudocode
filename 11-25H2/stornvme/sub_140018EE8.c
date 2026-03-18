/*
 * XREFs of sub_140018EE8 @ 0x140018EE8
 * Callers:
 *     sub_140019450 @ 0x140019450 (sub_140019450.c)
 * Callees:
 *     sub_140018F20 @ 0x140018F20 (sub_140018F20.c)
 */

__int64 sub_140018EE8()
{
  if ( (dword_140042378 & 0x10) != 0 )
    return dword_140042378 & 1;
  else
    return sub_140018F20((unsigned int)dword_140042378, 3LL);
}
