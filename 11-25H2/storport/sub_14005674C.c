/*
 * XREFs of sub_14005674C @ 0x14005674C
 * Callers:
 *     sub_14002D1F0 @ 0x14002D1F0 (sub_14002D1F0.c)
 *     sub_14002E460 @ 0x14002E460 (sub_14002E460.c)
 * Callees:
 *     sub_140056784 @ 0x140056784 (sub_140056784.c)
 */

__int64 sub_14005674C()
{
  if ( (dword_140169600 & 0x10) != 0 )
    return dword_140169600 & 1;
  else
    return sub_140056784((unsigned int)dword_140169600, 3LL);
}
