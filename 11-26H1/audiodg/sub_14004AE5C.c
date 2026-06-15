/*
 * XREFs of sub_14004AE5C @ 0x14004AE5C
 * Callers:
 *     sub_14004AE90 @ 0x14004AE90 (sub_14004AE90.c)
 *     sub_14004AEE4 @ 0x14004AEE4 (sub_14004AEE4.c)
 *     sub_14004B4E0 @ 0x14004B4E0 (sub_14004B4E0.c)
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_14004AE5C(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = off_1400BB2E8;
  result = j_j__o_free(a1[2]);
  a1[2] = 0LL;
  return result;
}
