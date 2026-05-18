/*
 * XREFs of sub_1800905CC @ 0x1800905CC
 * Callers:
 *     sub_18002DC28 @ 0x18002DC28 (sub_18002DC28.c)
 *     sub_18007640C @ 0x18007640C (sub_18007640C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_18005C940 @ 0x18005C940 (sub_18005C940.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800905CC(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD v6[5]; // [rsp+28h] [rbp-40h] BYREF

  v6[4] = a2;
  v4 = sub_1800181BC(v6, a2);
  sub_18005C940((__int64)a1, (__int64)v4);
  *a1 = &Spectre::Engine::BaseShaderExtension::`vftable';
  a1[16] = 0LL;
  a1[17] = 0LL;
  a1[18] = 0LL;
  sub_1800129D0(a2);
  return a1;
}
