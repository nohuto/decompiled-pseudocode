/*
 * XREFs of sub_1400A53D4 @ 0x1400A53D4
 * Callers:
 *     DllInitialize @ 0x1400A3DE0 (DllInitialize.c)
 * Callees:
 *     sub_1400A540C @ 0x1400A540C (sub_1400A540C.c)
 */

__int64 sub_1400A53D4()
{
  if ( (dword_140169620 & 0x10) != 0 )
    return dword_140169620 & 1;
  else
    return sub_1400A540C((unsigned int)dword_140169620, 3LL);
}
