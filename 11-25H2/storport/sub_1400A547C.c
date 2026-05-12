/*
 * XREFs of sub_1400A547C @ 0x1400A547C
 * Callers:
 *     DllInitialize @ 0x1400A3DE0 (DllInitialize.c)
 * Callees:
 *     sub_1400A54B4 @ 0x1400A54B4 (sub_1400A54B4.c)
 */

__int64 sub_1400A547C()
{
  if ( (dword_140169638 & 0x10) != 0 )
    return dword_140169638 & 1;
  else
    return sub_1400A54B4((unsigned int)dword_140169638, 3LL);
}
