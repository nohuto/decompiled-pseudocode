/*
 * XREFs of sub_1400566F8 @ 0x1400566F8
 * Callers:
 *     sub_1400184D0 @ 0x1400184D0 (sub_1400184D0.c)
 *     sub_140045120 @ 0x140045120 (sub_140045120.c)
 *     sub_140045574 @ 0x140045574 (sub_140045574.c)
 *     Callback @ 0x140045BD0 (Callback.c)
 *     sub_140051C30 @ 0x140051C30 (sub_140051C30.c)
 *     sub_140061988 @ 0x140061988 (sub_140061988.c)
 *     sub_140062EFC @ 0x140062EFC (sub_140062EFC.c)
 *     sub_140070720 @ 0x140070720 (sub_140070720.c)
 *     sub_1401B2A00 @ 0x1401B2A00 (sub_1401B2A00.c)
 *     sub_1401B34BC @ 0x1401B34BC (sub_1401B34BC.c)
 * Callees:
 *     sub_140056730 @ 0x140056730 (sub_140056730.c)
 */

__int64 sub_1400566F8()
{
  if ( (dword_140169648 & 0x10) != 0 )
    return dword_140169648 & 1;
  else
    return sub_140056730((unsigned int)dword_140169648, 3LL);
}
