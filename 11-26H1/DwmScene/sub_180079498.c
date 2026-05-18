/*
 * XREFs of sub_180079498 @ 0x180079498
 * Callers:
 *     sub_18002D96C @ 0x18002D96C (sub_18002D96C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180013494 @ 0x180013494 (sub_180013494.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_18005C940 @ 0x18005C940 (sub_18005C940.c)
 *     sub_1800760F0 @ 0x1800760F0 (sub_1800760F0.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180079498(_QWORD *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  _QWORD v6[8]; // [rsp+30h] [rbp-58h] BYREF

  v2 = sub_1800181BC(v6, (__int64)&unk_1801CD518);
  sub_18005C940((__int64)a1, (__int64)v2);
  *a1 = &Spectre::Engine::BackgroundUnlitShaderExtension::`vftable';
  v6[0] = &std::_Func_impl_no_alloc<_lambda_bf891fdd623fe213d977bbf9c972eb66_,void,Spectre::Engine::LightConstants *>::`vftable';
  v6[7] = v6;
  v3 = o__aligned_malloc(592LL, 16LL);
  sub_1800760F0((__int64)(a1 + 14), v3, (__int64)v6);
  sub_180013494((__int64)v6, v4);
  return a1;
}
