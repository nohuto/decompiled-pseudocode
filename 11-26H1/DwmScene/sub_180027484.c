/*
 * XREFs of sub_180027484 @ 0x180027484
 * Callers:
 *     sub_1800275DC @ 0x1800275DC (sub_1800275DC.c)
 *     sub_180027670 @ 0x180027670 (sub_180027670.c)
 * Callees:
 *     sub_18001291C @ 0x18001291C (sub_18001291C.c)
 *     sub_1800258AC @ 0x1800258AC (sub_1800258AC.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall __noreturn sub_180027484(__int32 a1)
{
  __m128i *v1; // rax
  __m128i v2; // [rsp+20h] [rbp-38h] BYREF
  __m128i v3[2]; // [rsp+30h] [rbp-28h] BYREF

  v2.m128i_i32[0] = a1;
  v2.m128i_i64[1] = (__int64)&off_1801BD218;
  v1 = sub_1800258AC(v3, &v2);
  sub_18001291C((const struct stdext::exception *)v1);
}
