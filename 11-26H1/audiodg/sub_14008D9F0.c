/*
 * XREFs of sub_14008D9F0 @ 0x14008D9F0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_14008D8E8 @ 0x14008D8E8 (sub_14008D8E8.c)
 */

_QWORD *__fastcall sub_14008D9F0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl

  v4 = a2;
  sub_14008D8E8(a1, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    j_j__o_free((__int64)a1);
  return a1;
}
