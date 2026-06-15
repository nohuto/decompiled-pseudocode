/*
 * XREFs of sub_140034440 @ 0x140034440
 * Callers:
 *     <none>
 * Callees:
 *     sub_14003447C @ 0x14003447C (sub_14003447C.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_140034440(__int64 a1, char a2)
{
  sub_14003447C();
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 400LL);
  return a1;
}
