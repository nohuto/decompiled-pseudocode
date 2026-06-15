/*
 * XREFs of sub_14006F310 @ 0x14006F310
 * Callers:
 *     <none>
 * Callees:
 *     sub_140027F4C @ 0x140027F4C (sub_140027F4C.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_14006F310(__int64 a1, char a2)
{
  sub_140027F4C(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
