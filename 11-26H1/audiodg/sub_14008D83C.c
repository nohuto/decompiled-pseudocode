/*
 * XREFs of sub_14008D83C @ 0x14008D83C
 * Callers:
 *     sub_14008E414 @ 0x14008E414 (sub_14008E414.c)
 *     sub_1400B3FDA @ 0x1400B3FDA (sub_1400B3FDA.c)
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_14008D83C(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return j_j__o_free(v1);
  return result;
}
