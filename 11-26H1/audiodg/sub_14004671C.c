/*
 * XREFs of sub_14004671C @ 0x14004671C
 * Callers:
 *     sub_1400B4600 @ 0x1400B4600 (sub_1400B4600.c)
 * Callees:
 *     _o_free @ 0x14004A64C (_o_free.c)
 */

__int64 __fastcall sub_14004671C(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = o_free(v2);
    *a1 = 0LL;
  }
  a1[1] = 0LL;
  return result;
}
