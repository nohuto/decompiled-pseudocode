/*
 * XREFs of sub_14001B6FC @ 0x14001B6FC
 * Callers:
 *     sub_14000FB60 @ 0x14000FB60 (sub_14000FB60.c)
 * Callees:
 *     sub_14001B734 @ 0x14001B734 (sub_14001B734.c)
 */

__int64 sub_14001B6FC()
{
  if ( (dword_1400422F0 & 0x10) != 0 )
    return dword_1400422F0 & 1;
  else
    return sub_14001B734((unsigned int)dword_1400422F0, 3LL);
}
