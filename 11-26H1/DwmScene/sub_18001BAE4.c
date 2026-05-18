/*
 * XREFs of sub_18001BAE4 @ 0x18001BAE4
 * Callers:
 *     sub_1800177F0 @ 0x1800177F0 (sub_1800177F0.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 */

__int64 __fastcall sub_18001BAE4(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  void *v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r9

  v2 = 0x3FFFFFFFFFFFFFFFLL;
  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v5 = (void *)*a1;
  v6 = (a1[2] - (__int64)v5) >> 2;
  v7 = v6 >> 1;
  if ( v6 <= 0x3FFFFFFFFFFFFFFFLL - (v6 >> 1) )
  {
    v2 = v7 + v6;
    if ( v7 + v6 < a2 )
      v2 = a2;
  }
  if ( v5 )
  {
    sub_18000E26C(v5, 4 * v6);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return sub_18001BA3C(a1, v2);
}
