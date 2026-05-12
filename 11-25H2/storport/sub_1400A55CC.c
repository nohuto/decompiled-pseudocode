/*
 * XREFs of sub_1400A55CC @ 0x1400A55CC
 * Callers:
 *     DllInitialize @ 0x1400A3DE0 (DllInitialize.c)
 * Callees:
 *     sub_1400A5604 @ 0x1400A5604 (sub_1400A5604.c)
 */

__int64 sub_1400A55CC()
{
  if ( (dword_140169630 & 0x10) != 0 )
    return dword_140169630 & 1;
  else
    return sub_1400A5604((unsigned int)dword_140169630, 3LL);
}
