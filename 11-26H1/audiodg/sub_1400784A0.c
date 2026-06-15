/*
 * XREFs of sub_1400784A0 @ 0x1400784A0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_140077D64 @ 0x140077D64 (sub_140077D64.c)
 */

__int64 __fastcall sub_1400784A0(__int64 a1, char a2)
{
  sub_140077D64(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
