/*
 * XREFs of sub_180012E8C @ 0x180012E8C
 * Callers:
 *     sub_180012E6C @ 0x180012E6C (sub_180012E6C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180013268 @ 0x180013268 (sub_180013268.c)
 *     sub_1800401E4 @ 0x1800401E4 (sub_1800401E4.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180012E8C(__int64 a1, _QWORD *a2)
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
  sub_180013268(a2, v6);
  v7[0] = &std::_Func_impl_no_alloc<_lambda_38672d4837fba783512361a26dc8aa1f_,void,std::shared_ptr<Spectre::Engine::SceneNode const> const &>::`vftable';
  v7[1] = a2;
  v8 = v7;
  sub_1800401E4(a1, v7);
  if ( v8 )
  {
    v4 = v7;
    LOBYTE(v4) = v8 != v7;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v8 + 32LL))(v8, v4);
  }
  return a2;
}
