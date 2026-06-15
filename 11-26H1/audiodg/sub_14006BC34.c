/*
 * XREFs of sub_14006BC34 @ 0x14006BC34
 * Callers:
 *     sub_14006BD30 @ 0x14006BD30 (sub_14006BD30.c)
 *     sub_14006C1E0 @ 0x14006C1E0 (sub_14006C1E0.c)
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

_QWORD *__fastcall sub_14006BC34(_QWORD *a1)
{
  *a1 = off_1400BC900;
  j_j__o_free((__int64)a1);
  return a1;
}
