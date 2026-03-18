/*
 * XREFs of sub_140019038 @ 0x140019038
 * Callers:
 *     sub_140005030 @ 0x140005030 (sub_140005030.c)
 *     sub_1400264A0 @ 0x1400264A0 (sub_1400264A0.c)
 *     sub_140026640 @ 0x140026640 (sub_140026640.c)
 *     sub_14002A860 @ 0x14002A860 (sub_14002A860.c)
 * Callees:
 *     sub_14001901C @ 0x14001901C (sub_14001901C.c)
 */

__int64 sub_140019038()
{
  if ( (dword_140042348 & 2) != 0 )
    return dword_140042348 & 1;
  else
    return sub_14001901C((unsigned int)dword_140042348, 0LL);
}
