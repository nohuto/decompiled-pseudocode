/*
 * XREFs of sub_18008BB10 @ 0x18008BB10
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008A56C @ 0x18008A56C (sub_18008A56C.c)
 */

__int64 *__fastcall sub_18008BB10(__int64 a1, __int64 a2)
{
  __int64 *v2; // rcx
  __int64 *result; // rax

  v2 = *(__int64 **)(a1 + 16);
  if ( v2 )
    return sub_18008A56C(v2, a2);
  return result;
}
