/*
 * XREFs of sub_18005F864 @ 0x18005F864
 * Callers:
 *     sub_1800645C0 @ 0x1800645C0 (sub_1800645C0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800401E4 @ 0x1800401E4 (sub_1800401E4.c)
 *     sub_18005FF1C @ 0x18005FF1C (sub_18005FF1C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18005F864(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rdx
  _QWORD v6[3]; // [rsp+28h] [rbp-11h] BYREF
  _QWORD v7[7]; // [rsp+40h] [rbp+7h] BYREF
  _QWORD *v8; // [rsp+78h] [rbp+3Fh]

  v6[1] = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v6[0] = 32LL;
  sub_18005FF1C(a2, v6);
  v7[0] = &std::_Func_impl_no_alloc<_lambda_750ab9e5186891eb31094975a637ff02_,void,std::shared_ptr<Spectre::Engine::SceneNode const> const &>::`vftable';
  v7[1] = a2;
  v8 = v7;
  sub_1800401E4(a1, (__int64)v7);
  if ( v8 )
  {
    v4 = v7;
    LOBYTE(v4) = v8 != v7;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v8 + 32LL))(v8, v4);
  }
  return a2;
}
