/*
 * XREFs of sub_18005BF04 @ 0x18005BF04
 * Callers:
 *     sub_18005C0DC @ 0x18005C0DC (sub_18005C0DC.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180013074 @ 0x180013074 (sub_180013074.c)
 *     sub_18002ECC8 @ 0x18002ECC8 (sub_18002ECC8.c)
 *     sub_1800313C4 @ 0x1800313C4 (sub_1800313C4.c)
 *     sub_18005C6C0 @ 0x18005C6C0 (sub_18005C6C0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18005BF04(__int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rcx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = *a1;
  v7[0] = a1;
  v3 = sub_18002ECC8(1uLL);
  v4 = sub_180011790(v3);
  sub_18005C6C0(v5, v4 + 32, a2);
  sub_180013074((__int64 *)v4, &v8);
  sub_180013074((__int64 *)(v4 + 8), &v8);
  sub_180013074((__int64 *)(v4 + 16), &v8);
  *(_WORD *)(v4 + 24) = 0;
  v7[1] = 0LL;
  sub_1800313C4((__int64)v7);
  return v4;
}
