/*
 * XREFs of sub_180016FF4 @ 0x180016FF4
 * Callers:
 *     sub_1800199F0 @ 0x1800199F0 (sub_1800199F0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_18004025C @ 0x18004025C (sub_18004025C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_180016FF4(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rdx
  _QWORD v9[5]; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v10[7]; // [rsp+60h] [rbp-9h] BYREF
  _QWORD *v11; // [rsp+98h] [rbp+2Fh]

  v9[4] = a3;
  *a2 = 0LL;
  a2[1] = 0LL;
  v6 = sub_180013440(v9, a3);
  v10[0] = &std::_Func_impl_no_alloc<_lambda_e4f8b105d577d0521f3737a824532f0c_,bool,std::shared_ptr<Spectre::Engine::SceneNode> const &>::`vftable';
  v10[1] = a2;
  v11 = v10;
  sub_18004025C(a1, v10, v6);
  if ( v11 )
  {
    v7 = v10;
    LOBYTE(v7) = v11 != v10;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v11 + 32LL))(v11, v7);
  }
  sub_180014244(a3);
  return a2;
}
