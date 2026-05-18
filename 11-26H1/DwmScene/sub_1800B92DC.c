/*
 * XREFs of sub_1800B92DC @ 0x1800B92DC
 * Callers:
 *     sub_1800BD2E0 @ 0x1800BD2E0 (sub_1800BD2E0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180013494 @ 0x180013494 (sub_180013494.c)
 *     sub_180027428 @ 0x180027428 (sub_180027428.c)
 */

__int64 __fastcall sub_1800B92DC(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  _QWORD v5[8]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v6[56]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v7; // [rsp+98h] [rbp-20h]

  v7 = 0LL;
  v5[0] = &std::_Func_impl_no_alloc<_lambda_973e7e53f49bf9ebe6ecec01f6a7b8f1_,std::shared_ptr<Spectre::Engine::RendererResource>,>::`vftable';
  v5[7] = v5;
  sub_180027428((__int64)v6, (__int64)v5);
  sub_180027428((__int64)v5, a1);
  sub_180027428(a1, (__int64)v6);
  sub_180013494((__int64)v6, v2);
  sub_180013494((__int64)v5, v3);
  return a1;
}
