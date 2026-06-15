/*
 * XREFs of sub_1400AC5F4 @ 0x1400AC5F4
 * Callers:
 *     sub_1400AC6D0 @ 0x1400AC6D0 (sub_1400AC6D0.c)
 *     sub_1400ACC20 @ 0x1400ACC20 (sub_1400ACC20.c)
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 *__fastcall sub_1400AC5F4(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
      j_j__o_free(v4);
  }
  return a1;
}
