/*
 * XREFs of sub_140025F00 @ 0x140025F00
 * Callers:
 *     sub_140021ACC @ 0x140021ACC (sub_140021ACC.c)
 *     sub_140041294 @ 0x140041294 (sub_140041294.c)
 *     sub_14004E530 @ 0x14004E530 (sub_14004E530.c)
 *     sub_14004FDBC @ 0x14004FDBC (sub_14004FDBC.c)
 *     sub_140050AE0 @ 0x140050AE0 (sub_140050AE0.c)
 *     sub_140051420 @ 0x140051420 (sub_140051420.c)
 *     sub_140053700 @ 0x140053700 (sub_140053700.c)
 *     sub_140053838 @ 0x140053838 (sub_140053838.c)
 *     sub_140053AF0 @ 0x140053AF0 (sub_140053AF0.c)
 *     sub_1400AE1F2 @ 0x1400AE1F2 (sub_1400AE1F2.c)
 *     sub_1400AF4D9 @ 0x1400AF4D9 (sub_1400AF4D9.c)
 *     sub_1400B17C9 @ 0x1400B17C9 (sub_1400B17C9.c)
 *     sub_1400B17FF @ 0x1400B17FF (sub_1400B17FF.c)
 * Callees:
 *     sub_140025F3C @ 0x140025F3C (sub_140025F3C.c)
 */

__int64 __fastcall sub_140025F00(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return sub_140025F3C(*(_QWORD *)a1);
  return result;
}
