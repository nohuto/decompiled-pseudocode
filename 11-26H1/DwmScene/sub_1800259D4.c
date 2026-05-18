/*
 * XREFs of sub_1800259D4 @ 0x1800259D4
 * Callers:
 *     sub_18002506C @ 0x18002506C (sub_18002506C.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_1800130CC @ 0x1800130CC (sub_1800130CC.c)
 */

__int64 __fastcall sub_1800259D4(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 v3; // rcx

  v1 = *(__int64 **)(a1 + 8);
  if ( v1 )
  {
    v3 = v1[5];
    if ( v3 )
    {
      sub_1800130CC(v3, v1[6]);
      sub_18000E26C((void *)v1[5], (v1[7] - v1[5]) & 0xFFFFFFFFFFFFFFF0uLL);
      v1[5] = 0LL;
      v1[6] = 0LL;
      v1[7] = 0LL;
    }
  }
  return sub_180025950(a1);
}
