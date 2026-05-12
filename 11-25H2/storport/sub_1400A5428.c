/*
 * XREFs of sub_1400A5428 @ 0x1400A5428
 * Callers:
 *     DllInitialize @ 0x1400A3DE0 (DllInitialize.c)
 * Callees:
 *     sub_1400A5460 @ 0x1400A5460 (sub_1400A5460.c)
 */

__int64 sub_1400A5428()
{
  if ( (dword_1401696B8 & 0x10) != 0 )
    return dword_1401696B8 & 1;
  else
    return sub_1400A5460((unsigned int)dword_1401696B8, 3LL);
}
