/*
 * XREFs of sub_1400A6800 @ 0x1400A6800
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_1400A62C8 @ 0x1400A62C8 (sub_1400A62C8.c)
 */

_QWORD *__fastcall sub_1400A6800(_QWORD *a1, __int64 a2, __int64 a3)
{
  char v3; // bl

  v3 = a2;
  sub_1400A62C8(a1, a2, a3);
  if ( (v3 & 1) != 0 )
    j_j__o_free((__int64)a1);
  return a1;
}
