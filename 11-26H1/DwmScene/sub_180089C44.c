/*
 * XREFs of sub_180089C44 @ 0x180089C44
 * Callers:
 *     sub_18008B500 @ 0x18008B500 (sub_18008B500.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180013494 @ 0x180013494 (sub_180013494.c)
 *     sub_180027428 @ 0x180027428 (sub_180027428.c)
 */

__int64 __fastcall sub_180089C44(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  _QWORD v6[8]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v7[56]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v8; // [rsp+98h] [rbp-20h]

  v8 = 0LL;
  v6[0] = &std::_Func_impl_no_alloc<_lambda_ea41cd23b26e0611689875f9c09e5ed7_,void,>::`vftable';
  v6[1] = *a2;
  v6[7] = v6;
  sub_180027428((__int64)v7, (__int64)v6);
  sub_180027428((__int64)v6, a1);
  sub_180027428(a1, (__int64)v7);
  sub_180013494((__int64)v7, v3);
  sub_180013494((__int64)v6, v4);
  return a1;
}
