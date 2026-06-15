/*
 * XREFs of sub_140030FC0 @ 0x140030FC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140030FFC @ 0x140030FFC (sub_140030FFC.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_140030FC0(__int64 a1, char a2)
{
  sub_140030FFC();
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 104LL);
  return a1;
}
