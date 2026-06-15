/*
 * XREFs of sub_140017620 @ 0x140017620
 * Callers:
 *     <none>
 * Callees:
 *     sub_14001765C @ 0x14001765C (sub_14001765C.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_140017620(__int64 a1, char a2)
{
  sub_14001765C();
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 48LL);
  return a1;
}
