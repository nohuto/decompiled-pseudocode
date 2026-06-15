/*
 * XREFs of sub_140072B5C @ 0x140072B5C
 * Callers:
 *     sub_140072BD0 @ 0x140072BD0 (sub_140072BD0.c)
 *     sub_1400B2F54 @ 0x1400B2F54 (sub_1400B2F54.c)
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_140072B5C(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = j_j__o_free(v2);
    *a1 = 0LL;
    a1[1] = 0LL;
  }
  return result;
}
