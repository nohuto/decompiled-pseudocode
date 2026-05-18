/*
 * XREFs of sub_18007640C @ 0x18007640C
 * Callers:
 *     sub_18002DB00 @ 0x18002DB00 (sub_18002DB00.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180013494 @ 0x180013494 (sub_180013494.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_1800760F0 @ 0x1800760F0 (sub_1800760F0.c)
 *     sub_1800905CC @ 0x1800905CC (sub_1800905CC.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18007640C(_QWORD *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  _QWORD v6[8]; // [rsp+30h] [rbp-58h] BYREF

  v2 = sub_1800181BC(v6, (__int64)&unk_1801CCF58);
  sub_1800905CC(a1, v2);
  *a1 = &Spectre::Engine::StandardShaderExtension::`vftable';
  v6[0] = &std::_Func_impl_no_alloc<_lambda_615f747b56e4a572d73a4444551448e6_,void,Spectre::Engine::LightConstants *>::`vftable';
  v6[7] = v6;
  v3 = o__aligned_malloc(592LL, 16LL);
  sub_1800760F0((__int64)(a1 + 19), v3, (__int64)v6);
  sub_180013494((__int64)v6, v4);
  return a1;
}
