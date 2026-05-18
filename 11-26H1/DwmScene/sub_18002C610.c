/*
 * XREFs of sub_18002C610 @ 0x18002C610
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180013494 @ 0x180013494 (sub_180013494.c)
 *     sub_180024D88 @ 0x180024D88 (sub_180024D88.c)
 *     sub_180025208 @ 0x180025208 (sub_180025208.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002C610(__int64 *a1, __int64 a2)
{
  __int64 *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rdx

  v3 = a1 + 16;
  v4 = a1[17];
  if ( v4 == a1[18] )
  {
    sub_180024D88(a1 + 16, v4, a2);
  }
  else
  {
    sub_180025208((__int64)a1, v4, a2);
    v3[1] += 64LL;
  }
  return sub_180013494(a2, v5);
}
