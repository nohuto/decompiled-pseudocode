/*
 * XREFs of sub_140069778 @ 0x140069778
 * Callers:
 *     sub_140046420 @ 0x140046420 (sub_140046420.c)
 *     sub_14006AA44 @ 0x14006AA44 (sub_14006AA44.c)
 * Callees:
 *     sub_1400697B0 @ 0x1400697B0 (sub_1400697B0.c)
 */

__int64 sub_140069778()
{
  if ( (dword_140169678 & 0x10) != 0 )
    return dword_140169678 & 1;
  else
    return sub_1400697B0((unsigned int)dword_140169678, 3LL);
}
