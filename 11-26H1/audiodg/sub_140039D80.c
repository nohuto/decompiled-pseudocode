/*
 * XREFs of sub_140039D80 @ 0x140039D80
 * Callers:
 *     <none>
 * Callees:
 *     sub_140039DC0 @ 0x140039DC0 (sub_140039DC0.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_140039D80(__int64 a1, char a2)
{
  sub_140039DC0();
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 32LL);
  return a1;
}
