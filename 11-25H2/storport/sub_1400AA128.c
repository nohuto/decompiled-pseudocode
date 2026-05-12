/*
 * XREFs of sub_1400AA128 @ 0x1400AA128
 * Callers:
 *     sub_1400AE9C0 @ 0x1400AE9C0 (sub_1400AE9C0.c)
 *     sub_1400AFDF4 @ 0x1400AFDF4 (sub_1400AFDF4.c)
 * Callees:
 *     sub_1400AA160 @ 0x1400AA160 (sub_1400AA160.c)
 */

__int64 sub_1400AA128()
{
  if ( (dword_1401695E0 & 0x10) != 0 )
    return dword_1401695E0 & 1;
  else
    return sub_1400AA160((unsigned int)dword_1401695E0, 3LL);
}
