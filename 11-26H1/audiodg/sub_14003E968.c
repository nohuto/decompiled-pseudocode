/*
 * XREFs of sub_14003E968 @ 0x14003E968
 * Callers:
 *     sub_1400B0370 @ 0x1400B0370 (sub_1400B0370.c)
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_14003E968(_QWORD *a1)
{
  __int64 result; // rax

  result = j_j__o_free(*a1, 16LL);
  *a1 = 0LL;
  return result;
}
