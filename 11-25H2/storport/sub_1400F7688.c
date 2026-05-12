/*
 * XREFs of sub_1400F7688 @ 0x1400F7688
 * Callers:
 *     sub_140112294 @ 0x140112294 (sub_140112294.c)
 * Callees:
 *     sub_1400F76C0 @ 0x1400F76C0 (sub_1400F76C0.c)
 */

__int64 sub_1400F7688()
{
  if ( (dword_1401696A0 & 0x10) != 0 )
    return dword_1401696A0 & 1;
  else
    return sub_1400F76C0((unsigned int)dword_1401696A0, 3LL);
}
