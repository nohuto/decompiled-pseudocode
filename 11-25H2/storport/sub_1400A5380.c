/*
 * XREFs of sub_1400A5380 @ 0x1400A5380
 * Callers:
 *     DllInitialize @ 0x1400A3DE0 (DllInitialize.c)
 * Callees:
 *     sub_1400A53B8 @ 0x1400A53B8 (sub_1400A53B8.c)
 */

__int64 sub_1400A5380()
{
  if ( (dword_1401696C8 & 0x10) != 0 )
    return dword_1401696C8 & 1;
  else
    return sub_1400A53B8((unsigned int)dword_1401696C8, 3LL);
}
