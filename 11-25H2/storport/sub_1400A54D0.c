/*
 * XREFs of sub_1400A54D0 @ 0x1400A54D0
 * Callers:
 *     DllInitialize @ 0x1400A3DE0 (DllInitialize.c)
 * Callees:
 *     sub_1400A5508 @ 0x1400A5508 (sub_1400A5508.c)
 */

__int64 sub_1400A54D0()
{
  if ( (dword_140169580 & 0x10) != 0 )
    return dword_140169580 & 1;
  else
    return sub_1400A5508((unsigned int)dword_140169580, 3LL);
}
