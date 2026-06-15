/*
 * XREFs of sub_140078660 @ 0x140078660
 * Callers:
 *     <none>
 * Callees:
 *     sub_14001B398 @ 0x14001B398 (sub_14001B398.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_140078660(__int64 a1, char a2)
{
  sub_14001B398(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
