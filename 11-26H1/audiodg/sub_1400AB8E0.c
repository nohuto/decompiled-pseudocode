/*
 * XREFs of sub_1400AB8E0 @ 0x1400AB8E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400461D0 @ 0x1400461D0 (sub_1400461D0.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

_QWORD *__fastcall sub_1400AB8E0(_QWORD *a1, char a2)
{
  *a1 = off_1400BAFD8;
  sub_1400461D0((__int64)a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free((__int64)a1);
  return a1;
}
