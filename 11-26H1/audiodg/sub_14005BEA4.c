/*
 * XREFs of sub_14005BEA4 @ 0x14005BEA4
 * Callers:
 *     sub_14004648C @ 0x14004648C (sub_14004648C.c)
 *     sub_14005C3DC @ 0x14005C3DC (sub_14005C3DC.c)
 * Callees:
 *     sub_1400080D4 @ 0x1400080D4 (sub_1400080D4.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

__int64 __fastcall sub_14005BEA4(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  if ( !*(_QWORD *)a1 && !sub_1400080D4((__int64 *)a1, *(unsigned int *)(a1 + 16), 1) )
    sub_14004639C(-2147024882);
  return sub_14005BF90(a1, a2, a3, a4);
}
