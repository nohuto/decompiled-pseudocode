/*
 * XREFs of sub_14001DDC0 @ 0x14001DDC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14001DDFC @ 0x14001DDFC (sub_14001DDFC.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_14001DDC0(__int64 a1, char a2)
{
  sub_14001DDFC();
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 24LL);
  return a1;
}
