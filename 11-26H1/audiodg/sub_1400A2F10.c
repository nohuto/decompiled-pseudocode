/*
 * XREFs of sub_1400A2F10 @ 0x1400A2F10
 * Callers:
 *     <none>
 * Callees:
 *     sub_140038E2C @ 0x140038E2C (sub_140038E2C.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_1400A2F10(__int64 a1, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  sub_140038E2C(a1, a2);
  if ( (v2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
